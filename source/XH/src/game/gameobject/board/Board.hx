package game.gameobject.board;

import core.display.ex.ExSprite;
import game.const.skill.ConstSkill;
import game.data.gameplay.DTingame;
import game.data.gameplay.InfoBlock;
import game.gameobject.brick.*;
import game.gameobject.gameplay.EffectClear;
import game.gameobject.gameplay.ScoreEffect;
import game.gameobject.gameplay.TimeOut;
import game.gameobject.gameplay.Xeffect;
import game.gameobject.skill.SkillBase;
import game.gameobject.skill.SkillType;
import game.gameobject.skill.UltimateSkill;
import game.tnk.Game;
import motion.Actuate;
import motion.easing.Quad;
import openfl.display.Sprite;
import openfl.events.Event;

/**
 * ...
 * @author KhanhTN
 */
class Board extends Sprite
{
	public static var STATE_PREPARE = 0;
	public static var STATE_START = 1;
	public static var STATE_NORMAL = 2;
	public static var STATE_EFFECT = 3;
	public static var STATE_SKILL = 4;
	public static var STATE_END = 5;
	
	public static var TIME_CLEAR = 3;
	
	public static var COUNT_FALL = 500;
	
	private var mMaxCount:Int;
	private var mCount:Int;
	private var mState:Int;
	private var mListSkill:Array<ConstSkill>;
	private var mBg:BoardBG;
	private var mBoard:Sprite;
	private var mListID:Array<Array<Int>>;
	private var mListBrick:Array<Array<Brick>>;
	private var mListRow:Array<Array<InfoBlock>>;
	private var mMinRow:Int;
	private var mListClear:Array<Int>;
	
	private var mCurentBlock:CBlock;
	//private var mCaseBG:ExSprite;
	private var mClearBG:ExSprite;
	private var mMask:Sprite;
	
	/**
	 * 
	 */
	public function new() 
	{
		super();
		mCount = 0;
		mState = STATE_PREPARE;
		mState = STATE_START;
		mListSkill = new Array<ConstSkill>();
		init();
		initData();
		this.addEventListener(Event.ENTER_FRAME, gameLoop);
	}
	/**
	 * init
	 */
	private function init():Void
	{
		mBg = new BoardBG();
		this.addChild(mBg);
		
		mBoard = new Sprite();
		mBoard.x = 0;
		mBoard.y = 0;
		this.addChild(mBoard);
		
		mClearBG = new ExSprite();
		mClearBG.x = 0;
		mClearBG.y = 0;
		mBoard.addChild(mClearBG);
		
		//mCaseBG = new ExSprite();
		//mCaseBG.x = 0;
		//mCaseBG.y = 0;
		//mBoard.addChild(mCaseBG);
		
		mMask = new Sprite();
		mMask.graphics.beginFill(0, 0.0001);
		mMask.graphics.drawRect(0, 0, Game.BOARD_WIDTH * Game.BRICK_WIDTH, 
							Game.BOARD_HEIGHT * Game.BRICK_HEIGHT);
		mMask.graphics.endFill();
		mMask.cacheAsBitmap = true;
		this.addChild(mMask);
		
		mCurentBlock = new CBlock(BlockType.O, BlockDirect.TOP);
	}
	/**
	 * 
	 * @param	e
	 */
	private function gameLoop(e:Event):Void 
    {		
		if (mState == STATE_START) 
		{
			if (Game.data.playerData.mDTingame.isFinishCountDown == true) 
			{
				Game.data.playerData.mDTingame.isFinishCountDown = false;
				onStartGame();
			}
		}
		else if (mState == STATE_NORMAL) 
		{
			if (UsingSkill()) 
			{
				return;
			}
			mCount++;
			if (mCount > COUNT_FALL) 
			{
				mCount = 0;
				var _columnfall = Std.random(mListRow.length);
				var _info:InfoBlock = new InfoBlock(mCurentBlock.mBlock.mType, mListRow[_columnfall][0].mDirect, mCurentBlock.mBlock.mSkill);
				_info.mColumn = mListRow[_columnfall][0].mColumn;
				_info.mRow = mListRow[_columnfall][0].mRow;
				Game.data.playerData.mDTingame.onClickVirtual(_info);
			}
			if (Game.data.playerData.mDTingame.isChose == true)
			{
				mState = STATE_EFFECT;
				ApplyEffect();
				Game.data.playerData.mDTingame.isChose = false;
				Game.data.playerData.mDTingame.chooseScore = Game.data.playerData.mDTingame.mConstScore[0];
			}
			if (Game.data.playerData.mDTingame.isCycle == true) 
			{
				//mCaseBG.removeAllAndDelChild();
				//Game.data.playerData.mDTingame.setCase();
				SetCase();
				Game.data.playerData.mDTingame.isCycle = false;
			}
			if (Game.data.playerData.mDTingame.stateGame == DTingame.STATE_TIMEOUT) 
			{
				if (mBoard.contains(mCurentBlock) == true) 
				{
					mBoard.removeChild(mCurentBlock);
				}
				//mCaseBG.removeAllAndDelChild();
				Game.data.playerData.mDTingame.setCase();
				mState = STATE_END;				
				var _time:TimeOut = new TimeOut();
				this.addChild(_time);
				mBg.effectMid(1);
			}
			if (Game.data.playerData.mDTingame.isHolding == true) 
			{
				Game.data.playerData.mDTingame.isHolding = false;
				Game.data.playerData.mDTingame.isHolded = true;
				
				if (Game.data.playerData.mDTingame.infoHold == null) 
				{
					Game.data.playerData.mDTingame.infoHold
								= new InfoBlock(this.mCurentBlock.mBlock.mType, BlockDirect.TOP, mCurentBlock.mBlock.mSkill);
					Game.data.playerData.mDTingame.setCase();
					//mCaseBG.removeAllAndDelChild();
					NextBlock();
				}else 
				{
					var _infoHold:InfoBlock
								= new InfoBlock(this.mCurentBlock.mBlock.mType, BlockDirect.TOP, mCurentBlock.mBlock.mSkill);
					ChangeBlock(Game.data.playerData.mDTingame.infoHold);
					Game.data.playerData.mDTingame.infoHold = _infoHold;
				}
			}
		}else if (mState == STATE_END) 
		{			
			if (Game.data.playerData.mDTingame.stateGame == DTingame.STATE_LASTHUMEN) 
			{
				Game.data.playerData.mDTingame.stateGame = DTingame.STATE_SHOW_LASTHUMEN;
				lastHuman();
			}
			if (Game.data.playerData.mDTingame.stateGame == DTingame.STATE_ULTIMATE_SKILL) 
			{
				Game.data.playerData.mDTingame.stateGame = DTingame.STATE_ULTIMATE;				
				SkillFinish();
			}
		}else if (mState == STATE_SKILL) 
		{
			
		}
    }
	private function addSkill(_skill:ConstSkill):Void
	{
		for (item in mListSkill) 
		{
			if (item.skill == _skill.skill) 
			{
				return;
			}
		}
		mListSkill.push(_skill);
	}
	private function UsingSkill():Bool
	{
		if (mListSkill.length <= 0) 
		{
			return false;
		}
		mState = STATE_SKILL;
		var _skill =  new SkillBase(mListSkill[0].skill, mListSkill[0].row, mListSkill[0].column);
		this.addChild(_skill);
		switch (mListSkill[0].skill) 
		{
			case SkillType.X:
				actSkillX();				
			case SkillType.TIME:
				actSkillX();
			case SkillType.CLEAR:
				actSkillX();
			case SkillType.MAGNET:
				actSkillX();
			case SkillType.RAIN:
				actSkillX();
			case SkillType.NON:
				actSkillX();				
			default:
				actSkillX();
				
		}
		mListSkill.remove(mListSkill[0]);
		return true;
	}
	/**
	 * Khởi tạo mãng 2 chiều
	 */
	private function initData():Void
	{
		mListID = new Array<Array<Int>>();
		mListBrick = new Array<Array<Brick>>();
		for (i in 0...Game.BOARD_HEIGHT) 
		{
			mListID[i] = new Array<Int>();
			mListBrick[i] = new Array<Brick>();
			for (j	in 0...Game.BOARD_WIDTH) 
			{
				mListID[i][j] = 0;				
				var _brick:Brick = new Brick();
				_brick.setValue(0 + j * Game.BRICK_WIDTH,
								(Game.BOARD_HEIGHT - 1) * Game.BRICK_HEIGHT - ( i * Game.BRICK_HEIGHT ),
								0);
				mListBrick[i][j] = _brick;
				mBoard.addChild(_brick);
			}
		}
	}
	/**
	 * tao lớp gách đầu game
	 */
	public function setBrickBeging():Void
	{
		var _col = Std.random(10);
		var _tempY:Float = 0;
		var _V:Float = 0;
		for (i in 0... Game.BOARD_WIDTH)
		{
			if (i != _col) 
			{
				for (j in 0...Std.random(4) + 5)
				{
					mListID[j][i] = Std.random(8) + 1;
					mListBrick[j][i].mType = mListID[j][i];
					if (j == 0) 
					{
						mListBrick[j][i].y = 0 - Std.random(100);
						_tempY = mListBrick[j][i].y;
						_V = Std.random(10) / 20;
					}else 
					{
						mListBrick[j][i].y = _tempY - Std.random(100) - 100;
						_tempY = mListBrick[j][i].y;
						_V = _V + Std.random(10) / 40;
					}
					mListBrick[j][i].MoveTo(0.4 + _V, mListBrick[j][i].x, (Game.BOARD_HEIGHT - 1) * Game.BRICK_HEIGHT - j * Game.BRICK_HEIGHT);
					
				}
			}
		}
	}
	public function onStartGame()
	{		
		setBrickBeging();
		Actuate.tween(this,2.5, { }).onComplete(onFistBlock); 
	}
	/**
	 * 
	 */
	public function onExit()
	{
		this.removeEventListener(Event.ENTER_FRAME, gameLoop);
	}
	/**
	 * 
	 */
	public function onFistBlock()
	{
		NextBlock();
	}
	/**
	 * 
	 */
	private function ChangeBlock(_info:InfoBlock):Void
	{
		//mCaseBG.removeAllAndDelChild();
		Game.data.playerData.mDTingame.setCase();
		if (mBoard.contains(mCurentBlock) == true) 
		{
			mBoard.removeChild(mCurentBlock);
		}
		// nextBlock
		// 
		mCurentBlock = new CBlock(_info.mType, BlockDirect.TOP);
		mCurentBlock.mBlock.setSkill(_info.mSkill);
		mBoard.addChild(mCurentBlock);
		mCurentBlock.setGrid(4, 19);
		mCurentBlock.mask = mMask;
		SetListRowCurrent();
		SetCase();		
	}
	/**
	 * 
	 */
	private function NextBlock():Void
	{
		mCount = 0;
		if (mBoard.contains(mCurentBlock) == true) 
		{
			mBoard.removeChild(mCurentBlock);
		}
		// nextBlock
		Game.data.playerData.mDTgameplay.NextBlock();
		// 
		mCurentBlock = new CBlock(Game.data.playerData.mDTgameplay.mcurrentBlock.mType, BlockDirect.RIGHT);
		mCurentBlock.mBlock.setSkill(Game.data.playerData.mDTgameplay.mcurrentBlock.mSkill);
		mCurentBlock.mask = mMask;
		mBoard.addChild(mCurentBlock);
		mCurentBlock.setGrid(4, 19);
		SetListRowCurrent();
		SetCase();		
		Game.data.playerData.mDTingame.isUpdateStack = true;
		mState = STATE_NORMAL;
	}
	/**
	 * 
	 */
	private function SetCase():Void
	{
		mMinRow %= 3;
		var _listCase = new Array<InfoBlock>();
		if (mCurentBlock.mBlock.mType != BlockType.I) 
		{
			for (i in 0...3) 
			{
				if (mMinRow + i*3 < mListRow.length) 
				{
					var _index = Std.random(mListRow[mMinRow + i * 3].length);
					_listCase.push(mListRow[mMinRow + i * 3][_index]);
				}
			}
			mMinRow = (mMinRow + 1) % 3;
		}
		else 
		{
			for (i in 0...5) 
			{
				var _infoBlock = new InfoBlock(mCurentBlock.mBlock.mType, BlockDirect.TOP);
				var _colum = mMinRow % 2 + i * 2;
				_infoBlock.mColumn = _colum;
				_infoBlock.mRow = getHeightColumn(_colum) - 1;
				_listCase.push(_infoBlock);
			}			
			mMinRow = (mMinRow + 1) % 2;
		}
		Game.data.playerData.mDTingame.setCase(_listCase);
		
		
	}
	/**
	 * 
	 * @param	_arr
	 * @param	_x
	 */
	private function checkExist(_arr:Array<Int>, _x:Int):Bool
	{
		for (i in 0..._arr.length) 
		{
			if (_x == _arr[i]) 
			{
				return true;
			}
		}
		return false;
	}
	private function SetListRowCurrent()
	{
		mListRow = new Array<Array<InfoBlock>>();
		mMinRow = 0;
		for (i in 0...Game.BOARD_WIDTH) 
		{
			var _block:Array<InfoBlock> = GetMinRowCurrent(i);
			if (_block != null) 
			{
				mListRow[i] = _block;
				if (_block[0].mRow < mListRow[mMinRow][0].mRow) 
				{
					mMinRow = i;
				}
			}
		}
	}
	/**
	 * use fo block I
	 */
	private function getMinHeightRow()
	{
		var _height = getHeightColumn(0);
		var _index = 0;
		for (i in 1...Game.BOARD_WIDTH) 
		{
			if (getHeightColumn(i) < _height) 
			{
				_height = getHeightColumn(i);
				_index = i;
			}
		}
		return _index;
	}
	/**
	 * 
	 * @param	_column
	 * @return
	 */
	private function GetMinRowCurrent(_column:Int):Array<InfoBlock>
	{
		var _listBlock:Array<InfoBlock> = new Array<InfoBlock>();
		_listBlock[0] = new InfoBlock(mCurentBlock.mBlock.mType, mCurentBlock.mBlock.mDirect);
		_listBlock[0].mColumn = _column;
		_listBlock[0].mRow = GetRowCurrent(_column);
		var _hold = mCurentBlock.mBlock.getMinHold();
		for (i in 0...mCurentBlock.mBlock.mListDirect.length) 
		{
			mCurentBlock.mBlock.setDirect(mCurentBlock.mBlock.mListDirect[i]);
			var _row = GetRowCurrent(_column);
			if (_row >= -1) 
			{
				if (_row < _listBlock[0].mRow || _listBlock[0].mRow < -1) 
				{
					_listBlock = new Array<InfoBlock>();
					_listBlock[0] = new InfoBlock(mCurentBlock.mBlock.mType, mCurentBlock.mBlock.mDirect);
					_listBlock[0].mColumn = _column;
					_listBlock[0].mRow = _row;
					_hold = mCurentBlock.mBlock.getMinHold();
				}
				else if (_row == _listBlock[0].mRow && mCurentBlock.mBlock.mDirect != _listBlock[0].mDirect) 
				{
					if (_hold > mCurentBlock.mBlock.getMinHold()) 
					{
						_listBlock = new Array<InfoBlock>();
						_listBlock[0] = new InfoBlock(mCurentBlock.mBlock.mType, mCurentBlock.mBlock.mDirect);
						_listBlock[0].mColumn = _column;
						_listBlock[0].mRow = _row;
						_hold = mCurentBlock.mBlock.getMinHold();
					}
					else if (_hold == mCurentBlock.mBlock.getMinHold())
					{
						var _block:InfoBlock = new InfoBlock(mCurentBlock.mBlock.mType, mCurentBlock.mBlock.mDirect);
						_block.mColumn = _column;
						_block.mRow = _row;
						_listBlock.push(_block);					
					}
				}
			}
		}
		if (_listBlock[0].mRow <  -1) 
		{
			return null;
		}else
		{
			return _listBlock;
		}
	}
	/**
	 * 
	 * @param	_column
	 * @return
	 */
	private function GetRowCurrent(_column:Int):Int
	{
		if ((_column + mCurentBlock.mBlock.MaxWidth()) > 10) 
		{
			return -2;
		}
		var _row:Int = getHeightColumn(_column) - mCurentBlock.mBlock.getHoldColumn(0);
		for (i in 1...mCurentBlock.mBlock.MaxWidth()) 
		{
			if (_row < ( getHeightColumn(_column + i)  - mCurentBlock.mBlock.getHoldColumn(i))) 
			{
				_row = getHeightColumn(_column + i)  - mCurentBlock.mBlock.getHoldColumn(i);
			}
		}
		return _row;
	}
	/**
	 * column's height
	 * @param	_column
	 * @return
	 */
	private function getHeightColumn(_column:Int):Int
	{
		var i:Int = Game.BOARD_HEIGHT;
		while (i > 0) {	
			if (mListBrick[i - 1][_column].mType > 0 ) 
			{
				return i;
			}
			i--;
		}
		return 0;
	}
	
	// move block
	public function ApplyEffect():Void 
	{
		Game.data.playerData.mDTingame.setCase();
		mCurentBlock.ApplyEffect(Game.data.playerData.mDTingame.infoChose, OnApplyToCompleteFinal);
	}
	public function OnApplyToCompleteFinal():Void
	{
		var _skill = mCurentBlock.mBlock.mSkill;
		for (i in 0...mCurentBlock.mBlock.mData.length) 
		{
			for (j in 0...mCurentBlock.mBlock.mData[0].length) 
			{
				if (mCurentBlock.mBlock.mData[i][j] == 1) 
				{
					var _row:Int = i + Game.data.playerData.mDTingame.infoChose.mRow + 1;
					var _column:Int = j + Game.data.playerData.mDTingame.infoChose.mColumn;
					if (_row < Game.BOARD_HEIGHT) 
					{
						mListBrick[_row][_column].mType = mCurentBlock.mBlock.mType;
						mListBrick[_row][_column].mSkill = _skill;
						_skill = -1;
						mListBrick[_row][_column].x = 0 + _column * Game.BRICK_WIDTH;
						mListBrick[_row][_column].y = (Game.BOARD_HEIGHT - 1) * Game.BRICK_HEIGHT - ( _row * Game.BRICK_HEIGHT );
					}
					if (_row > Game.BOARD_HEIGHT - 2)
					{
						Game.data.playerData.mDTingame.stateGame = DTingame.STATE_OVER;
					}
				}
			}
		}
		mCurentBlock.visible = false;
		CheckClear(mCurentBlock.mRow + 1);
	}
	///
	public function CheckClear(_row:Int):Void
	{
		mListClear = new Array<Int>();
		for (i in _row..._row + 4) 
		{
			if (CheckClearRow(i) == true) 
			{
				mListClear.push(i);
				createEffectClear(i);
			}
		}
		if (mListClear.length == 0) 
		{
			NextBlock();
		}else
		{
			var _score:Int = Game.data.playerData.mDTingame.mConstScore[mListClear.length] * Game.data.playerData.mDTingame.mX;
			var _scoreeffect:ScoreEffect = new ScoreEffect(Game.data.playerData.mDTingame.infoChose.mColumn * Game.BRICK_WIDTH,
														Game.BOARD_HEIGHT * Game.BRICK_HEIGHT - (mListClear[0]+1) * Game.BRICK_HEIGHT,
														_score);
			this.addChild(_scoreeffect);
			if (mListClear.length > 3) 
			{
				var _Xeffect:Xeffect = new Xeffect(Game.data.playerData.mDTingame.infoChose.mColumn * Game.BRICK_WIDTH + Game.BRICK_WIDTH,
														Game.BOARD_HEIGHT * Game.BRICK_HEIGHT - (mListClear[0]+1) * Game.BRICK_HEIGHT,
														Game.data.playerData.mDTingame.mX + mListClear.length - 3);
				this.addChild(_Xeffect);
			}
			Actuate.tween(this, EffectClear.TIME_LIVE, { }).onComplete(onBrickDown);
		}
	}
	public function CheckClearAll():Void
	{
		mListClear = new Array<Int>();
		for (i in 0...Game.BOARD_HEIGHT) 
		{
			if (CheckClearRow(i) == true) 
			{
				mListClear.push(i);
				createEffectClear(i);
			}
		}
		if (mListClear.length > 0)
		{
			var _score:Int = Game.data.playerData.mDTingame.mConstScore[mListClear.length] * Game.data.playerData.mDTingame.mX;
			var _scoreeffect:ScoreEffect = new ScoreEffect(Game.data.playerData.mDTingame.infoChose.mColumn * Game.BRICK_WIDTH,
														Game.BOARD_HEIGHT * Game.BRICK_HEIGHT - (mListClear[0]+1) * Game.BRICK_HEIGHT,
														_score);
			this.addChild(_scoreeffect);
			if (mListClear.length > 3) 
			{
				var _Xeffect:Xeffect = new Xeffect(Game.data.playerData.mDTingame.infoChose.mColumn * Game.BRICK_WIDTH + Game.BRICK_WIDTH,
														Game.BOARD_HEIGHT * Game.BRICK_HEIGHT - (mListClear[0]+1) * Game.BRICK_HEIGHT,
														Game.data.playerData.mDTingame.mX + mListClear.length - 3);
				this.addChild(_Xeffect);
			}
			Actuate.tween(this, EffectClear.TIME_LIVE, { }).onComplete(onBrickDown);
			Actuate.tween(this, EffectClear.TIME_LIVE + 2, { }).onComplete(onActivitySkill);
		}else
		{			
			Actuate.tween(this, EffectClear.TIME_LIVE + 1, { }).onComplete(onActivitySkill);
		}
	}
	public function CheckClearRow(_row:Int):Bool
	{
		if (_row >= Game.BOARD_HEIGHT) 
		{
			return false;
		}
		for (i in 0...Game.BOARD_WIDTH) 
		{
			if (mListBrick[_row][i].mType == 0) 
			{
				return false;
			}
		}
		return true;
	}
	public function createEffectClear(_row:Int):Void
	{
		//createEffectClear
		var _clear:EffectClear = new EffectClear(_row);
		this.addChild(_clear);
		//visible row brick
		visibleRow(_row);
	}
	public function onBrickDown():Void
	{
		if (mListClear.length > 0) 
		{
			onBrickDownAt(mListClear[0]);
			mListClear.remove(mListClear[0]);
			for (i in 0...mListClear.length) 
			{
				mListClear[i]--;
			}
			Actuate.tween(this, Brick.TIME_FALL, {}).onComplete(onBrickDown);
		}
		else 
		{
			if (mState == STATE_END )
			{
				
			}
			else if( mState == STATE_SKILL || mListSkill.length > 0) 
			{
				mState = STATE_NORMAL;
			}else 
			{
				NextBlock();
			}
		}
	}
	public function onBrickDownAt(_row:Int):Void
	{
		// down
		for (i in _row...Game.BOARD_HEIGHT - 1) 
		{
			for (j in 0...Game.BOARD_WIDTH) 
			{
				mListBrick[i][j] = mListBrick[i + 1][j];
				mListBrick[i][j].falling();
			}
		}
		// init row top
		for (k in 0...Game.BOARD_WIDTH) 
		{		
			var _brick:Brick = new Brick();
			_brick.setValue(0 + k * Game.BRICK_WIDTH, 0, 0);
			mListBrick[Game.BOARD_HEIGHT - 1][k] = _brick;
			mBoard.addChild(_brick);
		}
	}
	public function visibleRow(_row:Int):Void
	{
		for (j in 0...Game.BOARD_WIDTH) 
		{
			if (mListBrick[_row][j] != null) 
			{
				mBoard.removeChild(mListBrick[_row][j]);
				if (mState != STATE_END) 
				{					
					if (mListBrick[_row][j].mSkill > 0) 
					{
						addSkill(new ConstSkill(mListBrick[_row][j].mSkill, _row, j));
					}
				}
			}
		}
	}
	public function visibleBrick(_row:Int, _col:Int):Void
	{
		if (mListBrick[_row][_col] != null) 
		{
			mBoard.removeChild(mListBrick[_row][_col]);				
		}
	}
	
	
	///////////////////////SKILL////////////////////////////
	
	private function lastHuman():Void
	{			
		var maxTime:Float = 0;
		for (i in 0...Game.BOARD_WIDTH) 
		{
			var _listExist:Array<Int> = new Array<Int>();
			for (j in 0...Game.BOARD_HEIGHT) 
			{
				if (mListBrick[j][i].mType > 0)
				{
					_listExist.push(j);
				}
			}
			for (j in 0...Game.BOARD_HEIGHT) 
			{
				if (j != _listExist[j] && j < _listExist.length) 
				{
					if (mListBrick[j][i].mType <= 0) 
					{
						this.visibleBrick(j,i);
					}
					mListBrick[j][i] = mListBrick[_listExist[j]][i];
					var _time:Float = (_listExist[j] - j) * 0.05;
					if (maxTime < _time) 
					{
						maxTime = _time;
					}
					Actuate.tween(mListBrick[j][i], _time, { y:(Game.BOARD_HEIGHT - 1) * Game.BRICK_HEIGHT - j * Game.BRICK_HEIGHT });
				}else if (j >= _listExist.length)
				{
					if (j <= _listExist[_listExist.length-1])
					{
						if (mListBrick[j][i].mType > 0) 
						{
							var _brick:Brick = new Brick();
							_brick.setValue(0 + i * Game.BRICK_WIDTH, (Game.BOARD_HEIGHT - 1) * Game.BRICK_HEIGHT - j * Game.BRICK_HEIGHT, 0);
							mListBrick[j][i] = _brick;
							mBoard.addChild(_brick);
						}
					}
				}
			}
		}
		Actuate.tween(this, maxTime + 0.1, { }).onComplete(onFinishLastHumen);		
		
	}
	private var mListEndGame:Array<Array<Int>>;
	private function SkillFinish():Void
	{			
		if (Game.data.playerData.mDTgameplay.mSkillEndGame == SkillType.FINISH) 
		{
			Game.data.playerData.mDTgameplay.mSkillEndGame = -1;
			mListEndGame = new Array<Array<Int>>();
			for (i in 0...Game.BOARD_HEIGHT) 
			{
				mListEndGame[i] = new Array<Int>();
				for (j in 0...Game.BOARD_WIDTH) 
				{
					if (mListBrick[i][j].mType > 0) 
					{
						mListEndGame[i][j] = 0;
					}else 
					{
						mListEndGame[i][j] = BrickType.OTHER;
					}
				}
			}			
			onFillEnd();
		}
		else
		{
			// other
		}
	}
	/**
	 * 
	 */
	private function onFinishLastHumen():Void
	{
		CheckClearAll();
	}
	private function onActivitySkill():Void
	{
		if (Game.data.playerData.mDTgameplay.mSkillEndGame < 0) 
		{
			// end game
			Game.data.playerData.mDTingame.stateGame = DTingame.STATE_END;
		}
		else if (Game.data.playerData.mDTgameplay.mSkillEndGame >= SkillType.FINISH) 
		{
			var _skill:UltimateSkill = new UltimateSkill(Game.data.playerData.mDTgameplay.mSkillEndGame);
			this.addChild(_skill);
		}
	}
	private function onFillEnd():Void
	{
		for (i in 0...Game.BOARD_WIDTH) 
		{
			for (j in 0...Game.BOARD_HEIGHT) 
			{
				if (mListEndGame[j][i] > 0) 
				{
					var _time = i/20 + i/20*3;
					mListBrick[j][i].mType = BrickType.OTHER;
					mListBrick[j][i].alpha = 0;
					Actuate.tween(mListBrick[j][i],_time, { alpha:1 }).ease(Quad.easeIn);
				}
			}
		}
		Actuate.tween(this, 2, {}).onComplete(onFinishFill);		
	}
	private function onFinishFill():Void
	{
		for (i in 0...Game.BOARD_WIDTH) 
		{
			for (j in 0...Game.BOARD_HEIGHT) 
			{
				if (mListEndGame[j][i] <= 0) 
				{
					mListBrick[j][i].mType = 0;
				}
			}
		}
		Actuate.tween(this, 0.5, {}).onComplete(lastHuman);		
	}
	
	/////////////////////////////////
	/// skill base
	private function actSkillX()
	{
		Actuate.tween(this, 1, { }).onComplete(onFinishSkillX);
	}
	private function onFinishSkillX()
	{
		if (mListSkill.length == 0) 
		{			
			NextBlock();
		}else
		{
			UsingSkill();
		}
	}
}