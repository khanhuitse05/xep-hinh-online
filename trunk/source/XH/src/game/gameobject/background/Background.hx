package game.gameobject.background;

import core.resource.Defines;
import game.tnk.Game;
import motion.Actuate;
import motion.easing.Quad;
import openfl.display.Sprite;
import scene.home.FPS_Mem;

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
		//initFPS();
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
		Actuate.tween(mMid, 1.0, { y: -10 }).ease( Quad.easeOut).repeat();
	}
	
	private function initFPS():Void
	{
		var _fps:FPS_Mem = new FPS_Mem(Game.GAME_WIDTH - 350, Game.GAME_HEIGHT - 50);
		this.addChild(_fps);
	}
}