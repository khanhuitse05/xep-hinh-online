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
class Enemy extends Sprite
{
	public static var STATE_PREPARE = 0;
	public static var STATE_START = 1;
	public static var STATE_NORMAL = 2;
	public static var STATE_EFFECT = 3;
	public static var STATE_SKILL = 4;
	public static var STATE_END = 5;
	
	
	private var mState:Int;
	private var mListSkill:Array<Int>;
	private var mBg:BoardBG;
	private var mBoard:Sprite;
	private var mListID:Array<Array<Int>>;
	private var mListBrick:Array<Array<Brick>>;
	private var mListRow:Array<Array<InfoBlock>>;
	private var mMinRow:Int;
	private var mListClear:Array<Int>;
	
	private var mCurentBlock:CBlock;
	
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
	}
	/**
	 * init
	 */
	private function initData():Void
	{
		mListSkill = new Array<Int>();
		mListID = new Array<Array<Int>>();
		mListBrick = new Array<Array<Brick>();
		for (i in 0...Game.BOARD_HEIGHT) 
		{
			mListID[i] = new Array<Int>();
			mListBrick[i] = new Array<Brick>();
			for (j in 0...Game.BOARD_WIDTH ) 
			{
				mListID[i][j] = 0;
				mListBrick[i][j] = new Brick();
				mListBrick[i][j].setValue(0 + j * Game.BRICK_WIDTH,
								(Game.BOARD_HEIGHT - 1) * Game.BRICK_HEIGHT - ( i * Game.BRICK_HEIGHT ),
								0);
			}
		}
	}
	private function init():Void
	{
		mBg = new BoardBG();
		this.addChild(mBg);
		
		mBoard = new Sprite();
		mBoard.x = 0;
		mBoard.y = 0;
		this.addChild(mBoard);
	}
	private function onSkill():Void
	{
		
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
	public function onExit()
	{
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
	
}