package game.gameobject.board;

import core.display.ex.ExSprite;
import core.resource.Defines;
import core.sprites.Animx;
import core.util.Log;
import game.data.DTItem;
import game.data.gameplay.DTingame;
import game.data.gameplay.InfoBlock;
import game.gameobject.brick.*;
import game.gameobject.gameplay.EffectClear;
import game.gameobject.gameplay.ScoreEffect;
import game.gameobject.gameplay.TimeOut;
import game.gameobject.gameplay.Xeffect;
import game.gameobject.skill.SkillType;
import game.gameobject.skill.UltimateSkill;
import game.tnk.Game;
import openfl.geom.ColorTransform;
import openfl.events.MouseEvent;
import openfl.events.Event;
import openfl.display.Sprite;
import tweenx909.EaseX;
import tweenx909.TweenX;

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
	public static var STATE_END = 4;
	
	public static var TIME_FALL = 0.03;
	public static var TIME_CLEAR = 3;
	
	public static var COUNT_FALL = 500;
	
	private var mMaxCount:Int;
	private var mCount:Int;
	private var mState:Int;
	
	private var mBg:BoardBG;
	private var mBoard:Sprite;
	private var mListID:Array<Array<Int>>;
	private var mListBrick:Array<Array<Brick>>;
	private var mListRow:Array<Array<InfoBlock>>;
	private var mMinRow:Int;
	private var mListClear:Array<Int>;
	
	private var mCurentBlock:CBlock;
	private var mListCase:Array<VirtualBlock>;
	private var mCaseBG:ExSprite;
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
		
		mCaseBG = new ExSprite();
		mCaseBG.x = 0;
		mCaseBG.y = 0;
		mBoard.addChild(mCaseBG);
		
		mMask = new Sprite();
		mMask.graphics.beginFill(0, 0.0001);
		mMask.graphics.drawRect(0, 0, Game.BOARD_WIDTH * Game.BRICK_WIDTH, 
							Game.BOARD_HEIGHT * Game.BRICK_HEIGHT);
		mMask.graphics.endFill();
		mMask.cacheAsBitmap = true;
		this.addChild(mMask);
		
		mCurentBlock = new CBlock(BlockType.O, BlockDirect.TOP);
		mListCase = new Array<VirtualBlock>();
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
			mCount++;
			if (mCount > COUNT_FALL) 
			{
				mCount = 0;
				var _columnfall = Std.random(mListRow.length);
				var _info:InfoBlock = new InfoBlock(mCurentBlock.mBlock.mType, mListRow[_columnfall][0].mDirect);
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
				mCaseBG.removeAllAndDelChild();				
				SetCase();
				Game.data.playerData.mDTingame.isCycle = false;
			}
			if (Game.data.playerData.mDTingame.stateGame == DTingame.STATE_TIMEOUT) 
			{
				if (mBoard.contains(mCurentBlock) == true) 
				{
					mBoard.removeChild(mCurentBlock);
				}
				mCaseBG.removeAllAndDelChild();
				mState = STATE_END;				
				var _time:TimeOut = new TimeOut();
				this.addChild(_time);
			}
			if (Game.data.playerData.mDTingame.isHolding == true) 
			{
				Game.data.playerData.mDTingame.isHolding = false;
				Game.data.playerData.mDTingame.isHolded = true;
				
				if (Game.data.playerData.mDTingame.infoHold == null) 
				{
					Game.data.playerData.mDTingame.infoHold
								= new InfoBlock(this.mCurentBlock.mBlock.mType, BlockDirect.TOP);
					mCaseBG.removeAllAndDelChild();
					NextBlock();
				}else 
				{
					var _infoHold:InfoBlock
								= new InfoBlock(this.mCurentBlock.mBlock.mType, BlockDirect.TOP);
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
		}
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
					mListBrick[j][i].MoveTo(0.4 + _V, 0.0, mListBrick[j][i].x, (Game.BOARD_HEIGHT - 1) * Game.BRICK_HEIGHT - j * Game.BRICK_HEIGHT);
					
				}
			}
		}
	}
	public function onStartGame()
	{		
		setBrickBeging();
		TweenX.to(this, { }, 2.5).onFinish(onFistBlock); 
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
		mCaseBG.removeAllAndDelChild();
		if (mBoard.contains(mCurentBlock) == true) 
		{
			mBoard.removeChild(mCurentBlock);
		}
		// nextBlock
		// 
		mCurentBlock = new CBlock(_info.mType, BlockDirect.TOP);
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
		if (mCurentBlock.mBlock.mType != BlockType.I) 
		{
			for (i in 0...3) 
			{
				if (mMinRow + i*3 < mListRow.length) 
				{
					var _index = Std.random(mListRow[mMinRow + i * 3].length);
					var _block1 = new VirtualBlock(mCurentBlock.mBlock.mType, mListRow[mMinRow + i*3][_index].mDirect);
					_block1.setGrid(mListRow[mMinRow + i * 3][_index].mColumn, mListRow[mMinRow + i * 3][_index].mRow);
					mCaseBG.addChildForDel(_block1);	
				}
			}
			mMinRow = (mMinRow + 1) % 3;
		}
		else 
		{
			for (i in 0...5) 
			{
				var _block1 = new VirtualBlock(mCurentBlock.mBlock.mType, BlockDirect.TOP);
				_block1.setGrid(mMinRow%2 + i*2, getHeightColumn(mMinRow%2 + i*2) - 1);
				_block1.mBlock.setTypeBrick(BrickType.NON);
				mCaseBG.addChildForDel(_block1);	
			}
			
			mMinRow = (mMinRow + 1) % 2;
		}
		
		
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
				}
				else if (_row == _listBlock[0].mRow && mCurentBlock.mBlock.mDirect != _listBlock[0].mDirect) 
				{
					var _block:InfoBlock = new InfoBlock(mCurentBlock.mBlock.mType, mCurentBlock.mBlock.mDirect);
					_block.mColumn = _column;
					_block.mRow = _row;
					_listBlock.push(_block);
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
	/**
	 * column's height
	 * @param	_column
	 * @return
	 */
	//private function GetHoldColumn(_column:Int, _index:Int):Array<Int>
	//{
		//var _heightTemp = getHoldColumn(_column);
		//var i:Int = _heightTemp - 1;
		//while (i > 0) {	
			//if (mListBrick[i - 1][_column].mType > 0 ) 
			//{				
				//return i;
			//}
			//i--;
		//}
		//return 0;
	//}
	
	// move block
	var _rowTemp:Int;
	var _columnTemp:Int;
	public function ApplyEffect():Void 
	{
		_rowTemp = mCurentBlock.mRow;
		_columnTemp = mCurentBlock.mColumn;
		mCurentBlock.mColumn = Game.data.playerData.mDTingame.infoChose.mColumn;
		mCurentBlock.mRow = Game.data.playerData.mDTingame.infoChose.mRow;
		TweenX.to(mCurentBlock, { x: mCurentBlock.x + (Game.data.playerData.mDTingame.infoChose.mColumn - _columnTemp) * Game.BRICK_WIDTH }
								, 0.03).onFinish(OnApplyToCompleteQuarter);
	}
	public function OnApplyToCompleteQuarter():Void
	{
		mCurentBlock.mBlock.setDirect(Game.data.playerData.mDTingame.infoChose.mDirect);
		TweenX.to(mCurentBlock, { y: mCurentBlock.y + (_rowTemp - Game.data.playerData.mDTingame.infoChose.mRow) * Game.BRICK_HEIGHT }, 
								0.1).onFinish(OnApplyToCompleteSemi);
	}
	public function OnApplyToCompleteSemi():Void
	{
		mCaseBG.removeAllAndDelChild();
		mCurentBlock.transform.colorTransform = new ColorTransform(1, 1, 1, 1, 225, 225, 225, 0);
		TweenX.to(mCurentBlock, { alpha: 1.0 }, 0.05).onFinish(OnApplyToCompleteFinal);

	}
	public function OnApplyToCompleteFinal():Void
	{
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
			TweenX.to(this, { }, EffectClear.TIME_LIVE).onFinish(onBrickDown);
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
			TweenX.to(this, { }, EffectClear.TIME_LIVE).onFinish(onBrickDown);
			TweenX.to(this, { }, EffectClear.TIME_LIVE + 2).onFinish(onActivitySkill);
		}else
		{			
			TweenX.to(this, { }, EffectClear.TIME_LIVE + 1).onFinish(onActivitySkill);
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
			TweenX.to(this, {}, TIME_FALL).onFinish(onBrickDown);
		}
		else 
		{
			if (mState != STATE_END) 
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
				TweenX.to(mListBrick[i][j], { y:mListBrick[i][j].y + Game.BRICK_HEIGHT }, TIME_FALL);
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
					TweenX.to(mListBrick[j][i], { y:(Game.BOARD_HEIGHT - 1) * Game.BRICK_HEIGHT - j * Game.BRICK_HEIGHT }, _time);
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
		TweenX.to(this, { }, maxTime + 0.1).onFinish(onFinishLastHumen);		
		
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
					//var _time = Math.abs(j - 10);
					//if (Math.abs(i - 4.5) >  Math.abs(j - 10))
					//{						
						//var _time = Math.abs(i - 4.5);
					//}
					//_time /= 20;
					//_time += _time * 3;
					var _time = i/20 + i/20*3;
					mListBrick[j][i].mType = BrickType.OTHER;
					mListBrick[j][i].alpha = 0;
					TweenX.to(mListBrick[j][i], { alpha:1 }, _time, EaseX.expoIn);
				}
			}
		}
		TweenX.to(this, {}, 2).onFinish(onFinishFill);		
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
		TweenX.to(this, {}, 0.5).onFinish(lastHuman);		
	}
}