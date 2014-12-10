package game.gameobject.board;

import core.resource.Defines;
import game.data.gameplay.DTingame;
import game.tnk.Game;
import openfl.display.Sprite;
import openfl.events.Event;
import tweenx909.EaseX;
import tweenx909.TweenX;

/**
 * ...
 * @author KhanhTN
 */
class BoardBG extends Sprite
{

	private var mColor:Int;
	private var mEffectTime:Sprite;
	private var mBack:Sprite;
	private var mMid:Sprite;
	private var mFront:Sprite;
	
	public function new() 
	{
		super();
		init();
		addEventListener(Event.ENTER_FRAME, gameLoop);

	}
	private function init():Void
	{		
		mColor = 0xffff00;
		//TweenX.to(this, { mColor: 0xffffff }, 333333).repeat( 0 );
		// effect time
		mEffectTime = new Sprite();
		this.addChild(mEffectTime);
		mEffectTime.graphics.beginFill(0xff8000, 1);
		mEffectTime.graphics.drawRect(-7, 0, Game.BOARD_WIDTH * Game.BRICK_WIDTH + 17, Game.BOARD_HEIGHT * Game.BRICK_HEIGHT + 15);
		mEffectTime.graphics.endFill();
		mEffectTime.alpha = 0;
		// back
		mBack = new Sprite();
		this.addChild(mBack);
		mBack.graphics.beginFill(0x1E497A, 1);
		mBack.graphics.drawRect(0, 0, Game.BOARD_WIDTH * Game.BRICK_WIDTH, Game.BOARD_HEIGHT * Game.BRICK_HEIGHT);
		mBack.graphics.endFill();
		// mid
		mMid = Game.resource.getSprite(Defines.GFX_EFFECT_BG_003);
		this.addChild(mMid);
		mMid.y = Game.BOARD_HEIGHT * Game.BRICK_HEIGHT - mMid.height;
		mMid.visible = false;
		// front
		mFront = Game.resource.getSprite(Defines.GFX_BOARD_001);
		this.addChild(mFront);
		mMid.alpha = 0;
		TweenX.to(mMid, { alpha: 1}, 0.5);
		effectMid(2);
	}
	
	/**
	 * 
	 * @param	e
	 */
	private function gameLoop(e:Event):Void 
    {
		drawBackground(mColor);
		if (Game.data.playerData.mDTingame.timeIsRuningOut == true) 
		{
			Game.data.playerData.mDTingame.timeIsRuningOut = false;
			TweenX.to(mEffectTime, { alpha:0.8 }, 0.5, EaseX.expoIn).repeat(30).yoyo();
		}
		if (Game.data.playerData.mDTingame.stateGame == DTingame.STATE_TIMEOUT) 
		{
			mEffectTime.visible = false;
		}
	}
	private function drawBackground(_color:Int)
	{
		//mBack.graphics.clear();
		//mBack.graphics.beginFill(_color, 1);
		//mBack.graphics.drawRect(0, 0, Game.BOARD_WIDTH * Game.BRICK_WIDTH, Game.BOARD_HEIGHT * Game.BRICK_HEIGHT);
		//mBack.graphics.endFill();
	}
	public function effectMid(_t:Int)
	{
		mMid.visible = true;
		TweenX.to(mMid, { y: -10 }, 1.0).ease( EaseX.quartOut ).repeat( _t*2).yoyo().onFinish(closeEffectMid);
	}
	public function closeEffectMid()
	{
		mMid.visible = false;
	}
	
}