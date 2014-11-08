package game.gameobject.gameplay;

import core.display.ex.ExSprite;
import core.display.ex.Lable;
import core.resource.Defines;
import core.util.Log;
import game.data.gameplay.InfoBlock;
import game.gameobject.board.CBlock;
import game.tnk.Game;
import openfl.display.Sprite;
import openfl.events.Event;

/**
 * ...
 * @author KhanhTN
 */
class HudRight extends ExSprite
{
	public static var POS_X = 0;
	public static var POS_Y = 0;
	public static var POS_OFFSET = 180;
	
	public static var BLOCK_OFFSET_X = 15;
	public static var BLOCK_OFFSET_Y = 70;
	
	// các khối gạch kế tiếp
	private var mStackBlock:Array<InfoBlock>;
	// max stack
	private var mMaxStack:Int;
	// x score x2, x3 , x4
	private var mX:Int;
		
	private var mListBlock:Array<CBlock>;
	private var mListPlan:Array<Sprite>;
	private var mXExpText:Lable;
	public function new() 
	{
		super();
		initValue();
		init();
		this.addEventListener(Event.ENTER_FRAME, gameLoop);
	}
	private function initValue():Void
	{
		mMaxStack = Game.data.playerData.mDTgameplay.mMaxStack;		
		mStackBlock = new Array<InfoBlock>();
		mStackBlock = Game.data.playerData.mDTgameplay.mStackBlock;
		mX = Game.data.playerData.mDTgameplay.mX;
	}
	private function init():Void
	{
		
		mListBlock = new Array<CBlock>();
		mListPlan = new Array<Sprite>();
		for (i in 0...mMaxStack) 
		{
			// plan
			var _plan:Sprite = new Sprite();
			_plan = Game.resource.getSprite(Defines.GFX_RIGHTBOX2);
			_plan.x = POS_X;
			_plan.y = POS_Y + i * POS_OFFSET;
			mListPlan[i] = _plan;
			this.addChild(mListPlan[i]);
			// block
			var _block:CBlock = new CBlock(mStackBlock[i].mType, mStackBlock[i].mDirect);
			_block.scaleX = 0.5;
			_block.scaleY = 0.5;
			_block.x = POS_X + BLOCK_OFFSET_X;
			_block.y = POS_Y + i * POS_OFFSET + BLOCK_OFFSET_Y;
			mListBlock[i] = _block;
			this.addChildForDel(mListBlock[i]);
		}
		// plan
		var _plan:Sprite = Game.resource.getSprite(Defines.GFX_RIGHTBOX2);
		_plan.x = POS_X;
		_plan.y = POS_Y + mMaxStack * POS_OFFSET;
		mListPlan[mMaxStack] = _plan;
		this.addChild(mListPlan[mMaxStack]);
		// text XX
		// note
		mXExpText = new Lable();
		mXExpText.setFont(30, 0xffffff);
		mXExpText.setSysTextInfo(POS_X + 25, POS_Y + mMaxStack * POS_OFFSET + 40, "X"+mX);
        this.addChild(mXExpText);
	}
	/**
	 * 
	 * @param	e
	 */
	private function gameLoop(e:Event):Void 
    {
		if (Game.data.playerData.mDTingame.isUpdateStack == true) 
		{
				Update();
				Game.data.playerData.mDTingame.isUpdateStack = false;
		}
	}
	private function Update():Void
	{
		mStackBlock = new Array<InfoBlock>();
		mListBlock = new Array<CBlock>();
		mStackBlock = Game.data.playerData.mDTgameplay.mStackBlock;
		this.removeAllAndDelChild();
		for (i in 0...mMaxStack) 
		{
			// block
			var _block:CBlock = new CBlock(mStackBlock[i].mType, mStackBlock[i].mDirect);
			_block.scaleX = 0.5;
			_block.scaleY = 0.5;
			_block.x = POS_X + BLOCK_OFFSET_X;
			_block.y = POS_Y + i * POS_OFFSET + BLOCK_OFFSET_Y;
			mListBlock[i] = _block;
			this.addChildForDel(mListBlock[i]);
		}
	}
}