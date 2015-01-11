package game.gameobject.gameplay;

import core.display.ex.ExSprite;
import core.display.ex.Lable;
import core.resource.Defines;
import game.data.gameplay.InfoBlock;
import game.gameobject.board.CBlock;
import game.gameobject.brick.BlockDirect;
import game.gameobject.brick.BlockType;
import game.tnk.Game;
import openfl.events.Event;
import openfl.events.MouseEvent;
import openfl.display.Sprite;

/**
 * ...
 * @author KhanhTN
 */
class HudLeft extends Sprite
{
	public static var POS_X = 0;
	public static var POS_Y = 0;
	public static var POS_OFFSET = 180;
	
	public static var BLOCK_OFFSET_X = 15;
	public static var BLOCK_OFFSET_Y = 70;
	
	// các khối gạch kế tiếp
	private var mHoldBlock:Array<InfoBlock>;
	// max stack
	private var mMaxHold:Int;
	// x score x2, x3 , x4
	private var mX:Int;
		
	private var mListBlock:Array<CBlock>;
	private var mListPlan:Array<Sprite>;
	public function new() 
	{
		super();
		initValue();
		init();
	}
	private function initValue():Void
	{
		mMaxHold = Game.data.playerData.mUserInfo.hold;		
		mHoldBlock = new Array<InfoBlock>();
		mHoldBlock= Game.data.playerData.mDTgameplay.mHoldBlock;
	}
	private function init():Void
	{
		
		mListBlock = new Array<CBlock>();
		mListPlan = new Array<Sprite>();
		for (i in 0...2)
		{
			// plan
			mListPlan[i] = new Sprite();
			mListPlan[i].addChild(Game.resource.getSprite(Defines.GFX_BOX_1));
			mListPlan[i].x = POS_X;
			mListPlan[i].y = POS_Y + i * POS_OFFSET;
			this.addChild(mListPlan[i]);
			// lable
			var _lable:Lable = new Lable();
			_lable.setFont(25, 0xffffff);
			_lable.setSysTextInfo(0 + 25, 0 + 138,"HOLD");
			mListPlan[i].addChild(_lable);
			// brick
			mListBlock[i] = new CBlock(BlockType.I, BlockDirect.TOP);
			mListPlan[i].addChild(mListBlock[i]);
			mListBlock[i].scaleX = 0.5;
			mListBlock[i].scaleY = 0.5;
			mListBlock[i].visible = false;			
		}	
		this.mListPlan[1].addEventListener(MouseEvent.MOUSE_DOWN, onTap2);
		this.mListPlan[0].addEventListener(MouseEvent.MOUSE_DOWN, onTap);	
		if (mMaxHold == 2) 
		{
		}else 
		{
			mListPlan[1].visible = false;
		}

	}
	/**
	 * 
	 * @param	e
	 */
	private function gameLoop(e:Event):Void 
    {
		if (Game.data.playerData.mDTingame.isHolded == true) 
		{
			Game.data.playerData.mDTingame.isHolded = false;
			
			
			if (Game.data.playerData.mDTingame.indexHold == 0) 
			{
				mListBlock[0].setBlock(Game.data.playerData.mDTingame.infoHold.mType, BlockDirect.TOP);
				mListBlock[0].mBlock.setSkill(Game.data.playerData.mDTingame.infoHold.mSkill);
				mListBlock[0].x = POS_X + 20;
				mListBlock[0].y = POS_Y + 100;
				if (mListBlock[0].mBlock.mType == BlockType.I) 
				{
					mListBlock[0].x += 15;
					mListBlock[0].y += 15;
				}
				mListBlock[0].visible = true;
			}else 
			{
				mListBlock[1].setBlock(Game.data.playerData.mDTingame.infoHold.mType, BlockDirect.TOP);
				mListBlock[1].mBlock.setSkill(Game.data.playerData.mDTingame.infoHold.mSkill);
				mListBlock[1].x = POS_X + 20;
				mListBlock[1].y = POS_Y + 100;
				if (mListBlock[1].mBlock.mType == BlockType.I) 
				{
					mListBlock[1].x += 15;
					mListBlock[1].y += 15;
				}
				mListBlock[1].visible = true;
			}
		}
	}
	public function onEnter()
	{		
		initValue();
		this.addEventListener(Event.ENTER_FRAME, gameLoop);
		if (mMaxHold == 2) 
		{
			mListBlock[1].visible = false;
			mListPlan[1].visible = true;
		}
		mListBlock[0].visible = false;
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
	 * @param	e
	 */
	public function onTap(e:Event):Void
	{
		if (mListBlock.length == 0 ) 
		{
			Game.data.playerData.mDTingame.onClickHold(null, 0);
		}else
		{
			var _info:InfoBlock = new InfoBlock(mListBlock[0].mBlock.mType,
											mListBlock[0].mBlock.mDirect,
											mListBlock[0].mBlock.mSkill);
			Game.data.playerData.mDTingame.onClickHold(_info, 0);
		}
	}
	public function onTap2(e:Event):Void
	{
		if (mListBlock.length == 0 ) 
		{
			Game.data.playerData.mDTingame.onClickHold(null, 0);
		}else
		if (mListBlock.length == 1 ) 
		{
			Game.data.playerData.mDTingame.onClickHold(null, 1);
		}else
		{
			var _info:InfoBlock = new InfoBlock(mListBlock[1].mBlock.mType, 
											mListBlock[1].mBlock.mDirect,			
											mListBlock[1].mBlock.mSkill);
			Game.data.playerData.mDTingame.onClickHold(_info, 1);
		}
	}
}