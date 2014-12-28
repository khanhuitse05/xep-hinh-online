package game.gameobject.board;

import core.display.ex.ExSprite;
import game.const.skill.ConstSkill;
import game.data.gameplay.DTingame;
import game.data.gameplay.InfoBlock;
import game.data.pvp.DTPVP;
import game.gameobject.brick.*;
import game.gameobject.gameplay.EffectClear;
import game.gameobject.gameplay.ScoreEffect;
import game.gameobject.gameplay.TimeOut;
import game.gameobject.gameplay.Xeffect;
import game.gameobject.skill.SkillBase;
import game.gameobject.skill.SkillType;
import game.gameobject.skill.UltimateSkill;
import game.network.packet.request.pvp.RepFall;
import game.network.packet.request.pvp.RepGrow;
import game.network.packet.request.pvp.RepHold;
import game.network.packet.request.pvp.RepNext;
import game.network.packet.request.pvp.RepSendGift;
import game.tnk.Game;
import motion.Actuate;
import motion.easing.Quad;
import openfl.display.Sprite;
import openfl.events.Event;

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
	//private var mCaseBG:ExSprite;
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
				ApplyEffect();
				cFall();
				Game.data.playerData.mDTingame.isChose = false;
				Game.data.playerData.mDTingame.chooseScore = Game.data.playerData.mDTingame.mConstScore[0];
			}
			if (Game.data.playerData.mDTingame.isCycle == true) 
			{
				SetCase();
				Game.data.playerData.mDTingame.isCycle = false;
			}
			if (Game.data.playerData.mDTingame.stateGame == DTingame.STATE_TIMEOUT) 
			{
				if (mBoard.contains(mCurentBlock) == true) 
				{
					mBoard.removeChild(mCurentBlock);
				}
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
			case SkillType.METEOR:
				actSkillX();				
			case SkillType.BOOM:
				actSkillX();
			case SkillType.MAGNET:
				actSkillX();
			case SkillType.LASERS:
				actSkillX();
			case SkillType.EASY:
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
			//+++++++++++++++
			numClear = mListClear.length;
			cSendGift();
			//+++++++++++++++
			Actuate.tween(this, EffectClear.TIME_LIVE, { }).onComplete(onBrickDown);
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
	//grow
	private function sGrow():Void
	{
		var _temp = Game.data.playerData.dataPVP.dataMine.mNumGift;		
		listGrow = new Array<Int>();
		switch (_temp) 
		{
			case 2:
				numGrow = 1;
				onGrow();
			case 3:
				numGrow = 2;
				onGrow();
			case 4:			
				numGrow = 4;	
				onGrow();			
			default:
				numGrow = 0;
				
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
			if (listGrow.length > 0) 
			{
				cGrow();
			}
		}			
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
	}
	private function cFall()
	{		
		// chosse
		var _block:InfoBlock = Game.data.playerData.mDTingame.infoChose;
		Game.server.sendPacket(new RepFall(_block));
	}
	private function cHoldEmpty()
	{		
		// hold
		var _block:InfoBlock = new InfoBlock(-1, -1);
		Game.server.sendPacket(new RepHold(_block));
	}
	private function cHoldExist()
	{		
		// hold
		var _block:InfoBlock = new InfoBlock(mCurentBlock.mBlock.mType, BlockDirect.RIGHT, mCurentBlock.mBlock.mSkill);
		Game.server.sendPacket(new RepHold(_block));
	}
	private function cInScore()
	{		
		
	}
	private function cSendGift()
	{
		// send
		Game.server.sendPacket(new RepSendGift(numClear));		
	}
	private function cGrow()
	{
		// send
		Game.server.sendPacket(new RepGrow(numGrow, listGrow));		
	}
	private function cUseSkill()
	{
		// send
	}
	private function cFixBrick()
	{
		// send
	}
}