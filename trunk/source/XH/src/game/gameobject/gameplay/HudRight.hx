package game.gameobject.gameplay;

import core.display.ex.ExSprite;
import core.display.ex.Lable;
import core.resource.Defines;
import core.util.Log;
import game.data.gameplay.InfoBlock;
import game.gameobject.board.CBlock;
import game.gameobject.brick.BlockDirect;
import game.gameobject.brick.BlockType;
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
	public static var POS_OFFSET = 125;
	
	public static var BLOCK_OFFSET_X = 20;
	public static var BLOCK_OFFSET_Y = 90;
	
	// các khối gạch kế tiếp
	private var mStackBlock:Array<InfoBlock>;
	// max stack
	private var mMaxStack:Int;
	// x score x2, x3 , x4
	private var mX:Int;
		
	private var mListBlock:Array<CBlock>;
	private var mXExpText:Lable;
	/**
	 * 
	 */
	public function new() 
	{
		super();
		initValue();
		init();
		this.addEventListener(Event.ENTER_FRAME, gameLoop);
	}
	/**
	 * 
	 */
	private function initValue():Void
	{
		mMaxStack = Game.data.playerData.mDTgameplay.mMaxStack;		
		mStackBlock = new Array<InfoBlock>();
		mStackBlock = Game.data.playerData.mDTgameplay.mStackBlock;
		mX = Game.data.playerData.mDTgameplay.mX;
	}
	/**
	 * 
	 */
	private function init():Void
	{
		
		mListBlock = new Array<CBlock>();
		var _plan:Sprite;
		switch (mMaxStack) 
		{
			case 1:
				_plan = Game.resource.getSprite(Defines.GFX_BOX_1);
			case 2:
				_plan = Game.resource.getSprite(Defines.GFX_BOX_2);
			case 3:
				_plan = Game.resource.getSprite(Defines.GFX_BOX_3);
			default:
				_plan = Game.resource.getSprite(Defines.GFX_BOX_4);
		}
		this.addChild(_plan);
		for (i in 0...mMaxStack) 
		{
			// block
			var _block:CBlock = new CBlock(mStackBlock[i].mType, BlockDirect.RIGHT);
			_block.scaleX = 0.5;
			_block.scaleY = 0.5;
			_block.x = POS_X + BLOCK_OFFSET_X;
			_block.y = POS_Y + i * POS_OFFSET + BLOCK_OFFSET_Y;
			if (_block.mBlock.mType == BlockType.I) 
			{
				_block.x -= 18;
			}
			mListBlock[i] = _block;
			this.addChildForDel(mListBlock[i]);
		}
		// plan
		var _plan:Sprite = Game.resource.getSprite(Defines.GFX_BOX_1);
		_plan.x = POS_X;
		_plan.y = POS_Y + (mMaxStack - 1)* POS_OFFSET + 137 + 70;
		this.addChild(_plan);
		// text XX
		// note
		mXExpText = new Lable();
		mXExpText.setFont(50, 0xffffff);
		mXExpText.setSysTextInfo(POS_X + 15,
					POS_Y + (mMaxStack - 1)* POS_OFFSET + 137 + 70 + 40, "x"+mX);
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
		mXExpText.setSysText("x" + Game.data.playerData.mDTingame.mX);
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
	private function Update():Void
	{
		mStackBlock = new Array<InfoBlock>();
		mListBlock = new Array<CBlock>();
		mStackBlock = Game.data.playerData.mDTgameplay.mStackBlock;
		this.removeAllAndDelChild();
		for (i in 0...mMaxStack) 
		{
			// block
			var _block:CBlock = new CBlock(mStackBlock[i].mType, BlockDirect.RIGHT);
			_block.scaleX = 0.5;
			_block.scaleY = 0.5;
			_block.x = POS_X + BLOCK_OFFSET_X;
			_block.y = POS_Y + i * POS_OFFSET + BLOCK_OFFSET_Y;			
			if (_block.mBlock.mType == BlockType.I) 
			{
				_block.x -= 18;
			}
			mListBlock[i] = _block;
			this.addChildForDel(mListBlock[i]);
		}
	}
}