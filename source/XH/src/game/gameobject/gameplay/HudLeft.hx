package game.gameobject.gameplay;

import core.display.ex.ExSprite;
import core.display.ex.Lable;
import core.resource.Defines;
import game.data.gameplay.InfoBlock;
import game.gameobject.board.CBlock;
import game.gameobject.brick.BlockDirect;
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
	private var mListPlan:Array<ExSprite>;
	public function new() 
	{
		super();
		initValue();
		init();
		this.addEventListener(Event.ENTER_FRAME, gameLoop);
	}
	private function initValue():Void
	{
		mMaxHold = Game.data.playerData.mDTgameplay.mMaxHold;		
		mHoldBlock = new Array<InfoBlock>();
		mHoldBlock= Game.data.playerData.mDTgameplay.mHoldBlock;
	}
	private function init():Void
	{
		
		mListBlock = new Array<CBlock>();
		mListPlan = new Array<ExSprite>();
		for (i in 0...mMaxHold)
		{
			// plan
			var _plan:ExSprite = new ExSprite();
			_plan.addChild(Game.resource.getSprite(Defines.GFX_LEFTBOX2));
			_plan.x = POS_X;
			_plan.y = POS_Y + i * POS_OFFSET;
			mListPlan[i] = _plan;
			this.addChild(mListPlan[i]);
			// lable
			var _lable:Lable = new Lable();
			_lable.setFont(30, 0xffffff);
			_lable.setSysTextInfo(POS_X, POS_Y + 150,"HOLD");
			this.addChild(_lable);
		}		
		if (mMaxHold == 2) 
		{
			this.mListPlan[1].addEventListener(MouseEvent.MOUSE_DOWN, onTap2);
		}
		this.mListPlan[0].addEventListener(MouseEvent.MOUSE_DOWN, onTap);

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
			var _block:CBlock = new CBlock(Game.data.playerData.mDTingame.infoHold.mType, BlockDirect.TOP);
			_block.x = POS_X + 30;
			_block.y = POS_Y + 80;
			_block.scaleX = 0.5;
			_block.scaleY = 0.5;
			if (Game.data.playerData.mDTingame.indexHold == 0) 
			{
				mListBlock[0] = _block;
				mListPlan[0].removeAllAndDelChild();
				mListPlan[0].addChildForDel(_block);
			}else 
			{
				mListBlock[1] = _block;
				mListPlan[1].removeAllAndDelChild();
				mListPlan[1].addChildForDel(_block);
			}
		}
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
			var _info:InfoBlock = new InfoBlock(mListBlock[0].mBlock.mType, mListBlock[0].mBlock.mDirect);
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
			var _info:InfoBlock = new InfoBlock(mListBlock[1].mBlock.mType, mListBlock[1].mBlock.mDirect);
			Game.data.playerData.mDTingame.onClickHold(_info, 1);
		}
	}
}