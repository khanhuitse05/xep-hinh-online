package game.gameobject.gameplay;

import core.resource.Defines;
import core.sprites.Animx;
import game.tnk.Game;
import openfl.display.Sprite;

/**
 * ...
 * @author KhanhTN
 */
class EffectClear extends Sprite
{
	private var mAnim:Animx;

	public function new() 
	{
		super();
		init();
	}
	public function init():Void
	{
		// animate
		mAnim = Game.resource.getAnim(Defines.GFX_LOADING_ANIM);
		mAnim.x = ( Game.GAME_WIDTH - mAnim.mWidth) / 2;
		mAnim.y = 300;
		mAnim.animate();
		this.addChild(mAnim);
	}
	
}