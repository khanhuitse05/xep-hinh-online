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
	public static var STATE_NORMAL = 0;
	public static var STATE_EFFECT = 1;
	
	private static var INDEX_GROW = 8;
	
	private var mState:Int;
	private var numGrow:Int;	
	private var mListSkill:Array<Int>;	
	private var mBg:BoardBG;
	private var mBoard:Sprite;
	private var mListID:Array<Array<Int>>;
	private var mListBrick:Array<Array<Brick>>;
	private var mListRow:Array<Array<InfoBlock>>;
	private var mMinRow:Int;
	private var mListClear:Array<Int>;
	private var mMask:Sprite;
	
	private var mCurentBlock:CBlock;
	
	private var mCount:Int;
	
	/**
	 * 
	 */
	public function new() 
	{
		super();
		mCount = 0;
		mState = STATE_NORMAL;
		init();
		initData();
		this.addEventListener(Event.ENTER_FRAME, gameLoop);
	}
	/**
	 * init
	 */
	private function initData():Void
	{
		mListSkill = new Array<Int>();
		mListID = new Array<Array<Int>>();
		mListBrick = new Array<Array<Brick>>();
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
				mBoard.addChild(mListBrick[i][j]);
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
		if (mState == STATE_NORMAL) 
		{
			if (Game.data.playerData.dataPVP.dataEnemy.isFall == true)
			{
				Game.data.playerData.dataPVP.dataEnemy.isFall = false;
				sFall();
			}
			if (Game.data.playerData.dataPVP.dataEnemy.isNext == true) 
			{
				Game.data.playerData.dataPVP.dataEnemy.isNext = false;
				sNextBlock();
				mState = STATE_NORMAL;
			}
			if (Game.data.playerData.dataPVP.dataEnemy.isRevGift == true) 
			{
				Game.data.playerData.dataPVP.dataEnemy.isRevGift = false;
				sGrow();
			}
			if (Game.data.playerData.dataPVP.dataEnemy.isHold == true) 
			{
				Game.data.playerData.dataPVP.dataEnemy.isHold = false;
				
				if (Game.data.playerData.dataPVP.dataEnemy.mHoldBlock == null) 
				{
					sHoldEmpty();				
				}else 
				{
					sHoldExist();
				}
			}
		}
	}
	
	/**
	 * sever
	 */
	private function sHoldEmpty()
	{		
		// hold
		if (mBoard.contains(mCurentBlock) == true) 
		{
			mBoard.removeChild(mCurentBlock);
		}
	}
	private function sHoldExist()
	{		
		// hold
		if (mBoard.contains(mCurentBlock) == true) 
		{
			mBoard.removeChild(mCurentBlock);
		}
		mCurentBlock = new CBlock(Game.data.playerData.dataPVP.dataEnemy.mHoldBlock.mType, BlockDirect.RIGHT);
		mCurentBlock.mBlock.setSkill(Game.data.playerData.dataPVP.dataEnemy.mHoldBlock.mSkill);
		mCurentBlock.mask = mMask;
		mBoard.addChild(mCurentBlock);
		mCurentBlock.setGrid(4, 19);
	}
	private function sNextBlock():Void
	{
		if (mBoard.contains(mCurentBlock) == true) 
		{
			mBoard.removeChild(mCurentBlock);
		}
		mCurentBlock = new CBlock(Game.data.playerData.dataPVP.dataEnemy.mcurrentBlock.mType, BlockDirect.RIGHT);
		mCurentBlock.mBlock.setSkill(Game.data.playerData.dataPVP.dataEnemy.mcurrentBlock.mSkill);
		mCurentBlock.mask = mMask;
		mBoard.addChild(mCurentBlock);
		mCurentBlock.setGrid(4, 19);
	}
	private function sFall():Void
	{
		ApplyEffect();
		mState = STATE_EFFECT;
	}
	private function sIncreaseScore():Void
	{
	}
	private function sGrow():Void
	{
		var _temp = Game.data.playerData.dataPVP.dataEnemy.mNumGift;
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
	 */
	public function onExit()
	{
		
	}
	/**
	 * using skill
	 */
	private function onSkill():Void
	{
		
	}
	/**
	 * 
	 * @param	_arr
	 * @param	_x
	 */
	private function checkExist(_arr:Array<Int>, _x:Int):Bool
	{
		return true;
	}
	
	/**
	 * use fo block I
	 */
	private function getMinHeightRow()
	{
		
	}
	/**
	 * 
	 * @param	_column
	 * @return
	 */
	private function GetMinRowCurrent(_column:Int):Array<InfoBlock>
	{
		return null;
	}
	/**
	 * 
	 * @param	_column
	 * @return
	 */
	private function GetRowCurrent(_column:Int):Int
	{
		return 0;
	}
	/**
	 * column's height
	 * @param	_column
	 * @return
	 */
	private function getHeightColumn(_column:Int):Int
	{
		return 0;
	}
	
	// move block
	public function ApplyEffect():Void 
	{
		mCurentBlock.ApplyEffect(Game.data.playerData.dataPVP.dataEnemy.mFallBlock, OnApplyToCompleteFinal);
	}
	public function OnApplyToCompleteFinal():Void
	{
		var _skill = Game.data.playerData.dataPVP.dataEnemy.mFallBlock.mSkill;
		for (i in 0...mCurentBlock.mBlock.mData.length) 
		{
			for (j in 0...mCurentBlock.mBlock.mData[0].length) 
			{
				if (mCurentBlock.mBlock.mData[i][j] == 1) 
				{
					var _row:Int = i + Game.data.playerData.dataPVP.dataEnemy.mFallBlock.mRow + 1;
					var _column:Int = j + Game.data.playerData.dataPVP.dataEnemy.mFallBlock.mColumn;
					if (_row < Game.BOARD_HEIGHT) 
					{
						mListBrick[_row][_column].mType = Game.data.playerData.dataPVP.dataEnemy.mFallBlock.mType;
						mListBrick[_row][_column].mSkill = _skill;
						_skill = -1;
						mListBrick[_row][_column].x = 0 + _column * Game.BRICK_WIDTH;
						mListBrick[_row][_column].y = (Game.BOARD_HEIGHT - 1) * Game.BRICK_HEIGHT - ( _row * Game.BRICK_HEIGHT );
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
			mState = STATE_NORMAL;
		}else
		{
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
			//NextBlock();
			mState = STATE_NORMAL;
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
									(Game.BOARD_HEIGHT - 1) * Game.BRICK_HEIGHT, INDEX_GROW);
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
		}			
	}
}