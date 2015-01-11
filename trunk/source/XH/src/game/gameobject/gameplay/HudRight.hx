package game.gameobject.gameplay;

import core.display.ex.ExSprite;
import core.display.ex.Lable;
import core.resource.Defines;
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
	private var mPlanX:Sprite;
	private var isBattle:Bool;
		
	private var mListPane:Array<Sprite>;
	private var mListBlock:Array<CBlock>;
	private var mXExpText:Lable;
	/**
	 * 
	 */
	public function new(_is:Bool = false) 
	{
		super();
		isBattle = _is;
		initValue();
		init();
	}
	/**
	 * 
	 */
	private function initValue():Void
	{
		mMaxStack = Game.data.playerData.mUserInfo.future;
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
		mListPane = new Array<Sprite>();
		for (i in 0...4) 
		{
			mListPane[i] = Game.resource.getSprite(Defines.GFX_BOX_1 + i);
			this.addChild(mListPane[i]);
			mListPane[i].visible = false;
			
			// block
			mListBlock[i] = new CBlock(BlockType.I, BlockDirect.RIGHT);			
			mListBlock[i].scaleX = 0.5;
			mListBlock[i].scaleY = 0.5;
			mListBlock[i].x = POS_X + BLOCK_OFFSET_X;
			mListBlock[i].y = POS_Y + i * POS_OFFSET + BLOCK_OFFSET_Y;			
			this.addChild(mListBlock[i]);
		}
		
		// plan X
		mPlanX = Game.resource.getSprite(Defines.GFX_BOX_1);
		this.addChild(mPlanX);
		// text XX
		// note
		mXExpText = new Lable();
		mXExpText.setFont(50, 0xffffff);
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
	public function onEnter()
	{
		this.addEventListener(Event.ENTER_FRAME, gameLoop);
		initValue();
		Update();
		Game.data.playerData.mDTingame.isUpdateStack = false;
		
		for (i in 0...4) 
		{
			mListPane[i].visible = false;
			if (i < mMaxStack) 
			{
				mListBlock[i].visible = true;
			}else 
			{
				mListBlock[i].visible = false;
			}
			
		}
		mListPane[mMaxStack - 1].visible = true;	
		
			
		//plan X
		mPlanX.x = POS_X;
		mPlanX.y = POS_Y + (mMaxStack - 1)* POS_OFFSET + 137 + 40;		
		if (isBattle && mMaxStack > 3) 
		{			
			mPlanX.x = POS_X - 106;
			mPlanX.y = POS_Y + mListPane[mMaxStack - 1].height - mPlanX.height;
		}		
		mXExpText.setSysTextInfo(mPlanX.x + 15, mPlanX.y + 40, "x1");
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
		mStackBlock = Game.data.playerData.mDTgameplay.mStackBlock;
		for (i in 0...mMaxStack) 
		{
			// block
			mListBlock[i].setBlock(mStackBlock[i].mType, BlockDirect.RIGHT);
			mListBlock[i].mBlock.setSkill(mStackBlock[i].mSkill);
			mListBlock[i].x = POS_X + BLOCK_OFFSET_X;
			mListBlock[i].y = POS_Y + i * POS_OFFSET + BLOCK_OFFSET_Y;			
			if (mListBlock[i].mBlock.mType == BlockType.I) 
			{
				mListBlock[i].x -= 18;
			}
		}
	}
}