package game.gameobject.board;

import core.display.ex.ExSprite;
import game.const.Const;
import game.const.skill.ConstSkill;
import game.data.gameplay.DTingame;
import game.data.gameplay.InfoBlock;
import game.data.pvp.DTPVP;
import game.gameobject.brick.*;
import game.gameobject.effect.LasersEffect;
import game.gameobject.effect.MagnetEffect;
import game.gameobject.effect.MeterorEffect;
import game.gameobject.gameplay.EffectClear;
import game.gameobject.gameplay.ScoreEffect;
import game.gameobject.gameplay.Xeffect;
import game.gameobject.skill.SkillBase;
import game.gameobject.skill.SkillType;
import game.network.packet.request.pvp.*;
import game.tnk.Game;
import motion.Actuate;
import motion.easing.Quad;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.geom.Point;

/**
 * ...
 * @author KhanhTN
 */
class Mine extends Sprite
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
	private var mClearBG:ExSprite;
	private var mMask:Sprite;
	private var numClear:Int;
	
	private var numGrow:Int;
	private var listGrow:Array<Int>;
	
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
				cFall();
				ApplyEffect();
				Game.data.playerData.mDTingame.isChose = false;
				Game.data.playerData.mDTingame.chooseScore = Const.getScore(0);
			}
			if (Game.data.playerData.mDTingame.isCycle == true) 
			{
				SetCase();
				Game.data.playerData.mDTingame.isCycle = false;
			}
			
			if (Game.data.playerData.mDTingame.isHolding == true) 
			{
				Game.data.playerData.mDTingame.isHolding = false;
				Game.data.playerData.mDTingame.isHolded = true;
				
				if (Game.data.playerData.mDTingame.infoHold == null) 
				{
					cHoldEmpty();
					Game.data.playerData.mDTingame.infoHold
								= new InfoBlock(this.mCurentBlock.mBlock.mType, BlockDirect.TOP, mCurentBlock.mBlock.mSkill);
					Game.data.playerData.mDTingame.setCase();
					NextBlock();
				}else 
				{
					cHoldExist();
					var _infoHold:InfoBlock
								= new InfoBlock(this.mCurentBlock.mBlock.mType, BlockDirect.TOP, mCurentBlock.mBlock.mSkill);
					ChangeBlock(Game.data.playerData.mDTingame.infoHold);
					Game.data.playerData.mDTingame.infoHold = _infoHold;
				}
			}
			if (Game.data.playerData.dataPVP.dataMine.getAct() == DTPVP.GROW) 
			{
				sGrow();
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
			case SkillType.BOOM:
				actSkillX();
			case SkillType.MAGNET:
				actSkill_Magnet();
			case SkillType.LASERS:
				actSkill_Lasers();
			case SkillType.EASY:
				actSkill_Easy();
			case SkillType.METEOR:
				actSkill_Meteor();
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
				mListBrick[i][j] = new Brick();		
				mListBrick[i][j].setValue(0 + j * Game.BRICK_WIDTH,
								(Game.BOARD_HEIGHT - 1) * Game.BRICK_HEIGHT - ( i * Game.BRICK_HEIGHT ),
								0);
				mBoard.addChild(mListBrick[i][j]);
			}
		}
	}

	public function onStartGame()
	{		
		Actuate.timer(0.5).onComplete(onFistBlock); 
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
		Game.data.playerData.mDTgameplay.NextBlockPvP();
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
		
		cNext();
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
	 */
	private function getMaxHeightRow():Int
	{
		var _height = getHeightColumn(0);
		for (i in 1...Game.BOARD_WIDTH) 
		{
			if (getHeightColumn(i) > _height) 
			{
				_height = getHeightColumn(i);
			}
		}
		return _height;
	}
	/**
	 * 
	 */
	private function getMinHoldRow(_col:Int):Int
	{
		for (i in 0...Game.BOARD_HEIGHT) 
		{
			if (mListBrick[i][_col].mType <= 0) 
			{
				return i;
			}
		}
		return 20;
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
			var _score:Int = Const.getScore(mListClear.length) * Game.data.playerData.mDTingame.mX;
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
			//+++++++++++++++
			numClear = mListClear.length;
			cSendGift();
			//+++++++++++++++
			Actuate.tween(this, EffectClear.TIME_LIVE, { }).onComplete(onBrickDown);
		}
	}
	///
	public function CheckClearAll(_row:Int):Void
	{
		mListClear = new Array<Int>();
		for (i in 0..._row) 
		{
			if (CheckClearRow(i) == true) 
			{
				mListClear.push(i);
				createEffectClear(i);
			}
		}
		if (mListClear.length == 0) 
		{
			onFinishSkillX();
		}else
		{			
			var _score:Int = Const.getScore(mListClear.length) * Game.data.playerData.mDTingame.mX;
			var _scoreeffect:ScoreEffect = new ScoreEffect(Game.data.playerData.mDTingame.infoChose.mColumn * Game.BRICK_WIDTH,
														Game.BOARD_HEIGHT * Game.BRICK_HEIGHT - (mListClear[0]+1) * Game.BRICK_HEIGHT,
														_score);
			this.addChild(_scoreeffect);
			if (mListClear.length > 3) 
			{				
				var _Xeffect:Xeffect = new Xeffect(Game.data.playerData.mDTingame.infoChose.mColumn * Game.BRICK_WIDTH + Game.BRICK_WIDTH,
														Game.BOARD_HEIGHT * Game.BRICK_HEIGHT - (mListClear[0]+1) * Game.BRICK_HEIGHT,
														Game.data.playerData.mDTingame.mX + 1);
				this.addChild(_Xeffect);
			}
			Actuate.tween(this, EffectClear.TIME_LIVE, { }).onComplete(onBrickDown);
		}
	}
	/**
	 * 
	 * @param	_row
	 * @return
	 */
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
			else 
			{
				onFinishSkillX();
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
	//grow
	private function sGrow():Void
	{
		numGrow = Game.data.playerData.dataPVP.dataMine.mNumGift;		
		listGrow = new Array<Int>();
		if (Game.data.playerData.dataPVP.infoMine.checkSkill(SkillType.SHIELD)) 
		{
			
		}else 
		{
			Game.data.playerData.mDTingame.setCase();
			onGrow();
		}
	}
	/**
	 * 
	 * @param	_row
	 */
	public function onGrow():Void
	{
		mState = STATE_EFFECT;
		// grow
		if (numGrow > 0) 
		{
			// clear top
			visibleRow(Game.BOARD_HEIGHT - 1);
			// grow
			var _row = Game.BOARD_HEIGHT - 1;
			while(_row > 0) 
			{			
				for (j in 0...Game.BOARD_WIDTH) 
				{
					mListBrick[_row][j] = mListBrick[_row - 1][j];
					mListBrick[_row][j].growing();
				}
				_row--;
			}
			// init row bottom
			var _ran:Int = Std.random(10);
			listGrow.push(_ran);
			for (j in 0...Game.BOARD_WIDTH) 
			{		
				if (j == _ran) 
				{
					var _brick:Brick = new Brick();
					_brick.setValue(0 + j * Game.BRICK_WIDTH,
									(Game.BOARD_HEIGHT - 1) * Game.BRICK_HEIGHT, 0);
					mListBrick[0][j] = _brick;
					mBoard.addChild(_brick);
				}else 
				{
					var _brick:Brick = new Brick();
					_brick.setValue(0 + j * Game.BRICK_WIDTH,							
									(Game.BOARD_HEIGHT - 1) * Game.BRICK_HEIGHT, BlockType.INDEX_GROW);
					mListBrick[0][j] = _brick;
					mListBrick[0][j].scaleY = 0;
					mBoard.addChild(_brick);
					mListBrick[0][j].appearing();
				}
			}
			numGrow--;
			Actuate.timer(Brick.TIME_FALL).onComplete(onGrow);
		}else 
		{
			mState = STATE_NORMAL;
			SetListRowCurrent();
			SetCase();		
			if (listGrow.length > 0) 
			{
				cGrow();
			}
		}			
	}
	
	
	///////////////////////SEVER////////////////////////////
	
	private function sGameReady()
	{
	}
	private function cGameReady()
	{		
	}
	private function cNext()
	{		
		// nextblock
		var _block:InfoBlock = new InfoBlock(mCurentBlock.mBlock.mType, BlockDirect.RIGHT, mCurentBlock.mBlock.mSkill);
		Game.server.sendPacket(new RepNext(_block));
		//+++++++++++++++++++++++
		//Game.data.playerData.dataPVP.dataEnemy.mcurrentBlock = _block;
        //Game.data.playerData.dataPVP.dataEnemy.mAction.push(DTPVP.NEXT);
		//+++++++++++++++++++++++
	}
	private function cFall()
	{		
		// chosse
		var _block:InfoBlock = Game.data.playerData.mDTingame.infoChose;
		Game.server.sendPacket(new RepFall(_block));
		//+++++++++++++++++++++++
		//Game.data.playerData.dataPVP.dataEnemy.mFallBlock = _block;
        //Game.data.playerData.dataPVP.dataEnemy.mAction.push(DTPVP.FALL);
		//+++++++++++++++++++++++
		
	}
	private function cHoldEmpty()
	{		
		// hold
		var _block:InfoBlock = new InfoBlock(-1, -1);
		Game.server.sendPacket(new RepHold(_block));
		//+++++++++++++++++++++++
		//Game.data.playerData.dataPVP.dataEnemy.mHoldBlock = null;
		//Game.data.playerData.dataPVP.dataEnemy.mAction.push(DTPVP.HOLD);
		//+++++++++++++++++++++++
	}
	private function cHoldExist()
	{		
		// hold
		var _block:InfoBlock = new InfoBlock(mCurentBlock.mBlock.mType, BlockDirect.RIGHT, mCurentBlock.mBlock.mSkill);
		Game.server.sendPacket(new RepHold(_block));
		//+++++++++++++++++++++++
		//Game.data.playerData.dataPVP.dataEnemy.mHoldBlock = _block;
		//Game.data.playerData.dataPVP.dataEnemy.mAction.push(DTPVP.HOLD);
		//+++++++++++++++++++++++
	}
	private function cInScore()
	{		
		
	}
	private function cSendGift()
	{
		var _temp = 0;
		switch (numClear) 
		{
			case 2:
				_temp = 1;
			case 3:
				_temp = 2;
			case 4:			
				_temp = 4;	
			default:
				_temp = 0;
				
		}
		// send
		if (_temp > 0) 
		{
			Game.server.sendPacket(new RepSendGift(_temp));	
			//+++++++++++++++++++++++
			//Game.data.playerData.dataPVP.dataMine.mNumGift = _temp;
			//Game.data.playerData.dataPVP.dataMine.mAction.push(DTPVP.GROW);
			//+++++++++++++++++++++++
		}
	}
	private function cGrow()
	{
		// send
		Game.server.sendPacket(new RepGrow(listGrow));
		//+++++++++++++++++++++++		
		//Game.data.playerData.dataPVP.dataEnemy.mNumGift = listGrow.length;		
		//Game.data.playerData.dataPVP.dataEnemy.vGift = listGrow;
        //Game.data.playerData.dataPVP.dataEnemy.mAction.push(DTPVP.GROW);
		//+++++++++++++++++++++++
	}
	private function cMagnet()
	{
		// send
		Game.server.sendPacket(new RepMagnet());	
		//+++++++++++++++++++++++
		//Game.data.playerData.dataPVP.dataEnemy.mAction.push(DTPVP.MAGNET);
		//+++++++++++++++++++++++
	}
	private function cLasers()
	{
		// send
		Game.server.sendPacket(new RepLasers(_listRowLasers));
		//+++++++++++++++++++++++
		//Game.data.playerData.dataPVP.dataEnemy.mLasers = _listRowLasers;
        //Game.data.playerData.dataPVP.dataEnemy.mAction.push(DTPVP.LASERS);
		//+++++++++++++++++++++++
	}
	private function cMeteor()
	{
		// send
		Game.server.sendPacket(new RepMeteor(_listMeteor));
		//+++++++++++++++++++++++
		//Game.data.playerData.dataPVP.dataEnemy.mMeteor = _listMeteor;
        //Game.data.playerData.dataPVP.dataEnemy.mAction.push(DTPVP.METEOR);
		//+++++++++++++++++++++++
	}
	private function cFixBrick()
	{
		// send
	}
	
	///////////////////////SKILL////////////////////////////
	
	
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
	/**
	 * skill lasers
	 */
	private function actSkill_Lasers()
	{
		Actuate.timer(EffectClear.TIME_LIVE + 0.1).onComplete(actSkill_LasersStart);
	}
	var _listRowLasers:Array<Int>;
	private function actSkill_LasersStart()
	{
		mListClear = new Array<Int>();
		_listRowLasers = new Array<Int>();
		_listRowLasers = getRowLasers();
		cLasers();
		for (i in 0..._listRowLasers.length) 
		{
			var _lases:LasersEffect = new LasersEffect(_listRowLasers[i]);
			this.addChild(_lases);
			mListClear.push(_listRowLasers[i]);
			visibleRow(_listRowLasers[i]);
		}
		// score effect
		var _score:Int = Const.getScore(4) * Game.data.playerData.mDTingame.mX;
		var _scoreeffect:ScoreEffect = new ScoreEffect(5, Game.BOARD_HEIGHT * Game.BRICK_HEIGHT - (_listRowLasers[3]+1) * Game.BRICK_HEIGHT,
													_score);
		this.addChild(_scoreeffect);
		mState = STATE_EFFECT;
		Actuate.timer(EffectClear.TIME_LIVE + 0.1).onComplete(onBrickDown);
	}
	private function getRowLasers():Array<Int>
	{		
		var _h = getMaxHeightRow();
		var _arr:Array<Int> = new Array<Int>();
		switch (_h) 
		{
			case 0:
			case 1:
				_arr[0] = 0;
			case 2:
				_arr[0] = 0;
				_arr[1] = 1;
			case 3:
				_arr[0] = 0;
				_arr[1] = 1;
				_arr[2] = 2;
			case 4:				
				_arr[0] = 0;
				_arr[1] = 2;
				_arr[2] = 3;
			case 5:
				_arr[0] = 0;
				_arr[1] = 2;
				_arr[2] = 4;
			case 6:
				_arr[0] = 1;
				_arr[1] = 2;
				_arr[2] = 5;
			default:
				_arr[0] = _h - 5;
				_arr[1] = _h - 4;
				_arr[2] = _h - 2;
		}
		return _arr;
	}
	/**
	 * skill easy
	 * change all block to type I
	 */
	private function actSkill_Easy()
	{
		Game.data.playerData.mDTgameplay.onEasy();
		Actuate.tween(this, 1, { }).onComplete(onFinishSkillX);
	}
	
	/**
	 * skill magnet
	 */
	private function actSkill_Magnet()
	{
		goLeftAll();
		addMagnetEffect();
		cMagnet();
		Actuate.tween(this, 2, { }).onComplete(onFinishSkillX);
	}
	private function goLeftRow(_row:Int)
	{
		var _index:Int = 0;
		for (i in  0...Game.BOARD_WIDTH) 
		{
			if (this.mListBrick[_row][i].mType > 0) 
			{
				if (_index < i) 
				{
					mListBrick[_row][_index] = mListBrick[_row][i];
					Actuate.tween(mListBrick[_row][_index], (i - _index) * 0.05,
								{x:mListBrick[_row][_index].x - (i - _index)*Game.BRICK_WIDTH}).ease(Quad.easeIn);
				}
				_index++;
			}else 
			{				
				visibleBrick(_row, i);
			}
		}
		for (i in  _index...Game.BOARD_WIDTH) 
		{
			var _brick:Brick = new Brick();
			_brick.setValue(0 + i * Game.BRICK_WIDTH,
					(Game.BOARD_HEIGHT - 1) * Game.BRICK_HEIGHT - ( _row * Game.BRICK_HEIGHT ), 0);
			mListBrick[_row][i] = _brick;
			mBoard.addChild(_brick);
		}
	}
	private function goLeftAll()
	{
		var _h = getMaxHeightRow();
		for (i in 0..._h) 
		{
			Actuate.timer(0.6).onComplete(goLeftRow,[i]);
		}
	}
	private function addMagnetEffect()
	{
		var _h = getMaxHeightRow();
		var _size:Int = 1;
		if (_h < 7) 
		{
			_size = 1;
		}else  if (_h < 12)
		{
			_size = 2;
		}
		else
		{
			_size = 3;
		}
		var _magnet:MagnetEffect = new MagnetEffect(_size);
		this.addChild(_magnet);
	}
	// skill Meteor
	private var _listFinishMeteor:Array<Point>;
	private var _listMeteor:Array<Int>;
	private function actSkill_Meteor():Void
	{
		_countMeteor = 0;
		_listFinishMeteor = new Array<Point>();
		var _colRan:Int = Std.random(2);
		
		var _col1:Int = 1 + _colRan;
		var _row1:Int = getMinHoldRow(_col1);
		_listFinishMeteor[0] = new Point(_row1, _col1);
		var _meteror1:MeterorEffect = new MeterorEffect(_row1, _col1, finish_Meteor01);
		this.addChild(_meteror1);
		
		var _col2:Int = 2 + _colRan;
		var _row2:Int = getMinHoldRow(_col2);
		_listFinishMeteor[1] = new Point(_row2, _col2);
		var _meteror2:MeterorEffect = new MeterorEffect(_row2, _col2, finish_Meteor02);
		this.addChild(_meteror2);
		
		var _col3:Int = 4 + _colRan;
		var _row3:Int = getMinHoldRow(_col3);
		_listFinishMeteor[2] = new Point(_row3, _col3);
		var _meteror3:MeterorEffect = new MeterorEffect(_row3, _col3, finish_Meteor03);
		this.addChild(_meteror3);
		
		var _col4:Int = 7 + _colRan;
		var _row4:Int = getMinHoldRow(_col4);
		_listFinishMeteor[3] = new Point(_row4, _col4);
		var _meteror4:MeterorEffect = new MeterorEffect(_row4, _col4, finish_Meteor04);
		this.addChild(_meteror4);
		
		
		_listMeteor = new Array<Int>();
		_listMeteor.push(_col1);
		_listMeteor.push(_col2);
		_listMeteor.push(_col3);
		_listMeteor.push(_col4);
		cMeteor();
	}
	var _countMeteor:Int = 0;
	private function finish_Meteor01():Void
	{
		mListBrick[Std.int(_listFinishMeteor[0].x)][Std.int(_listFinishMeteor[0].y)].mType = BrickType.OTHER;
		_countMeteor++;
		if (_countMeteor == 4) 
		{
			//check
			mState = STATE_EFFECT;
			CheckClearAll(getMaxHeight_Meteor());
		}
	}
	private function finish_Meteor02():Void
	{
		mListBrick[Std.int(_listFinishMeteor[1].x)][Std.int(_listFinishMeteor[1].y)].mType = BrickType.OTHER;
		_countMeteor++;
		if (_countMeteor == 4) 
		{
			//check
			mState = STATE_EFFECT;
			CheckClearAll(getMaxHeight_Meteor());
		}
	}
	private function finish_Meteor03():Void
	{
		mListBrick[Std.int(_listFinishMeteor[2].x)][Std.int(_listFinishMeteor[2].y)].mType = BrickType.OTHER;
		_countMeteor++;
		if (_countMeteor == 4) 
		{
			//check
			mState = STATE_EFFECT;
			CheckClearAll(getMaxHeight_Meteor());
		}
	}
	private function finish_Meteor04():Void
	{
		mListBrick[Std.int(_listFinishMeteor[3].x)][Std.int(_listFinishMeteor[3].y)].mType = BrickType.OTHER;
		_countMeteor++;
		if (_countMeteor == 4) 
		{
			//check
			mState = STATE_EFFECT;
			CheckClearAll(getMaxHeight_Meteor());
		}
	}
	private function getMaxHeight_Meteor():Int
	{
		var _max:Int = Std.int(_listFinishMeteor[0].y);
		for (i in 0..._listFinishMeteor.length) 
		{
			if (_max < _listFinishMeteor[i].y) 
			{
				_max = Std.int(_listFinishMeteor[i].y);
			}
		}
		return _max;
	}
	
}