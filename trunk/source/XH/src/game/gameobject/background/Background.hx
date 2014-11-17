package game.gameobject.background;

import core.resource.Defines;
import game.tnk.Game;
import openfl.display.Sprite;
import tweenx909.EaseX;
import tweenx909.TweenX;

/**
 * ...
 * @author KhanhTN
 */
class Background extends Sprite
{

	private var mMid:Sprite;
	private var mFront:Sprite;
	
	public function new() 
	{
		super();
		init();
	}
	private function init():Void
	{
		this.graphics.beginFill(0, 1);
		this.graphics.drawRect(0, 0, Game.GAME_WIDTH,Game.GAME_HEIGHT);
		this.graphics.endFill();
		mMid = Game.resource.getSprite(Defines.GFX_EFFECT_BG_001);
		this.addChild(mMid);
		mFront = Game.resource.getSprite(Defines.GFX_MAIN_BG_001);
		this.addChild(mFront);
		mMid.y = Game.GAME_HEIGHT;
		TweenX.to(mMid, { y: -10 }, 1.0).ease( EaseX.quartOut ).repeat( 0);
	}
	
}