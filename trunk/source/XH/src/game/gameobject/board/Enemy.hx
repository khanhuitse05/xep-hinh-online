package game.gameobject.board;

import core.display.ex.ExSprite;
import game.const.Const;
import game.const.skill.ConstSkill;
import game.data.gameplay.DTingame;
import game.data.gameplay.InfoBlock;
import game.data.pvp.DTEnemy;
import game.data.pvp.DTPVP;
import game.gameobject.brick.*;
import game.gameobject.effect.LasersEffect;
import game.gameobject.effect.MagnetEffect;
import game.gameobject.effect.MeterorEffect;
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
import openfl.geom.Point;
import openfl.display.Sprite;
import openfl.events.Event;

/**
 * ...
 * @author KhanhTN
 */
class Enemy extends BoardBase
{
	public static var STATE_NORMAL = 0;
	public static var STATE_EFFECT = 1;
	
	private var numGrow:Int;	
	private var vGrow:Array<Int>;	
	private var vLasers:Array<Int>;	
	private var vMeteor:Array<Int>;	
	private var mListSkill:Array<Int>;		
	private var mListClear:Array<Int>;
	
	
	/**
	 * 
	 */
	public function new() 
	{
		super();
		mCount = 0;
		mState = STATE_NORMAL;
		init();
		initBrick();
		this.addEventListener(Event.ENTER_FRAME, gameLoop);
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
			switch (Game.data.playerData.dataPVP.dataEnemy.getAct()) 
			{
				case DTPVP.NEXT:
					sNextBlock();
					mState = STATE_NORMAL;
				case DTPVP.FALL:
					sFall();
				case DTPVP.HOLD:
					if (Game.data.playerData.dataPVP.dataEnemy.mHoldBlock == null) 
					{
						sHoldEmpty();				
					}else 
					{
						sHoldExist();
					}
				case DTPVP.GROW:
					sGrow();
				case DTPVP.LASERS:
					sLasers();
				case DTPVP.MAGNET:
					sMagnet();
				case DTPVP.METEOR:
					sMeteor();
				default:
					
			}
		}
	}
	private function sNextBlock():Void
	{
		removeCurrentBlock();
		mCurentBlock = new CBlock(Game.data.playerData.dataPVP.dataEnemy.mcurrentBlock.mType, BlockDirect.RIGHT);
		mCurentBlock.mBlock.setSkill(Game.data.playerData.dataPVP.dataEnemy.mcurrentBlock.mSkill);
		mCurentBlock.mask = mMask;
		mBoard.addChild(mCurentBlock);
		mCurentBlock.setGrid(4, 19);
	}
	
	private function ChangeBlock(_info:InfoBlock):Void
	{
		removeCurrentBlock();
		mCurentBlock = new CBlock(_info.mType, BlockDirect.RIGHT);
		mCurentBlock.mBlock.setSkill(_info.mSkill);
		mCurentBlock.mask = mMask;
		mBoard.addChild(mCurentBlock);
		mCurentBlock.setGrid(4, 18);
	}
	/**
	 * sever
	 */
	private function sHoldEmpty()
	{		
		// hold
		removeCurrentBlock();
	}
	private function sHoldExist()
	{		
		// hold
		removeCurrentBlock();
		mCurentBlock = new CBlock(Game.data.playerData.dataPVP.dataEnemy.mHoldBlock.mType, BlockDirect.RIGHT);
		mCurentBlock.mBlock.setSkill(Game.data.playerData.dataPVP.dataEnemy.mHoldBlock.mSkill);
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
		mState = STATE_EFFECT;
		numGrow = Game.data.playerData.dataPVP.dataEnemy.mNumGift;
		vGrow = Game.data.playerData.dataPVP.dataEnemy.vGift;
		if (Game.data.playerData.dataPVP.infoEnemy.checkSkill(SkillType.SHIELD)) 
		{
			mState = STATE_NORMAL;			
		}else 
		{
			onGrow();
		}
	}
	private function sLasers():Void
	{		
		mState = STATE_EFFECT;
		vLasers = Game.data.playerData.dataPVP.dataEnemy.mLasers;
		onLasers();
	}
	private function sMagnet():Void
	{		
		mState = STATE_EFFECT;
		onMagnet();
	}
	private function sMeteor():Void
	{		
		mState = STATE_EFFECT;
		vMeteor = Game.data.playerData.dataPVP.dataEnemy.mMeteor;
		onMeteor();
	}
	public function onEnter()
	{		
		mCount = 0;
		mState = STATE_NORMAL;
		mListSkill = new Array<Int>();
		initData();
		this.addEventListener(Event.ENTER_FRAME, gameLoop);
	}
	/**
	 * 
	 */
	public function onExit()
	{
		this.removeEventListener(Event.ENTER_FRAME, gameLoop);
	}
	/**
	 * using skill
	 */
	private function onSkill():Void
	{
		
	}
	
	
	// move block
	public function ApplyEffect():Void 
	{
		ChangeBlock(Game.data.playerData.dataPVP.dataEnemy.mFallBlock);
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
					if (_row < Game.BOARD_HEIGHT && _column < Game.BOARD_WIDTH) 
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
	/**
	 * 
	 * @param	_row
	 */
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
			var _ran:Int = vGrow[vGrow.length - numGrow];
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
		}			
	}
	/**
	 * 
	 * @param	_row
	 */
	public function onLasers():Void
	{
		actSkill_LasersStart();
	}
	private function actSkill_LasersStart()
	{
		mListClear = new Array<Int>();
		for (i in 0...vLasers.length) 
		{
			var _lases:LasersEffect = new LasersEffect(vLasers[i]);
			this.addChild(_lases);
			mListClear.push(vLasers[i]);
			visibleRow(vLasers[i]);
		}
		mState = STATE_EFFECT;
		Actuate.timer(EffectClear.TIME_LIVE + 0.1).onComplete(onBrickDown);
	}
	/**
	 * magnet
	 * @param	_row
	 */
	public function onMagnet():Void
	{		
		goLeftAll();		
		addMagnetEffect();
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
	/**
	 * 
	 * @param	_row
	 */
	public function onMeteor():Void
	{
		actSkill_Meteor();
		mState = STATE_EFFECT;
	}	
	private var _listFinishMeteor:Array<Point>;
	private function actSkill_Meteor():Void
	{
		_countMeteor = 0;
		_listFinishMeteor = new Array<Point>();
		
		var _col1:Int = vMeteor[0];
		var _row1:Int = getMinHoldRow(_col1);
		_listFinishMeteor[0] = new Point(_row1, _col1);
		var _meteror1:MeterorEffect = new MeterorEffect(_row1, _col1, finish_Meteor01);
		this.addChild(_meteror1);
		
		var _col2:Int = vMeteor[1];
		var _row2:Int = getMinHoldRow(_col2);
		_listFinishMeteor[1] = new Point(_row2, _col2);
		var _meteror2:MeterorEffect = new MeterorEffect(_row2, _col2, finish_Meteor02);
		this.addChild(_meteror2);
		
		var _col3:Int = vMeteor[2];
		var _row3:Int = getMinHoldRow(_col3);
		_listFinishMeteor[2] = new Point(_row3, _col3);
		var _meteror3:MeterorEffect = new MeterorEffect(_row3, _col3, finish_Meteor03);
		this.addChild(_meteror3);
		
		var _col4:Int = vMeteor[3];
		var _row4:Int = getMinHoldRow(_col4);
		_listFinishMeteor[3] = new Point(_row4, _col4);
		var _meteror4:MeterorEffect = new MeterorEffect(_row4, _col4, finish_Meteor04);
		this.addChild(_meteror4);
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
	private function onFinishSkillX()
	{
		mState = STATE_NORMAL;
	}
}