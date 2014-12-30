package game.gameobject.effect;

import core.resource.Defines;
import core.sprites.Animx;
import game.tnk.Game;
import motion.Actuate;
import openfl.display.Sprite;

/**
 * ...
 * @author KhanhTN
 */
class LasersEffect extends Sprite
{

	public static var TIME_LIVE:Float = 0.3;
	private var mAnim:Sprite;
	private var mRow:Int;

	public function new(_row:Int) 
	{
		super();
		mRow = _row;
		this.y = Game.BOARD_HEIGHT * Game.BRICK_HEIGHT - (_row + 1) * Game.BRICK_HEIGHT;
		init();
	}
	public function init():Void
	{
		// animate
		mAnim = Game.resource.getSprite(Defines.GFX_LASES_SKILL_EFFECT);
		this.addChild(mAnim);
		onBegin();
	}
	public function onBegin():Void
	{		
		Actuate.tween(mAnim, TIME_LIVE + 0.01, { scaleX:0 } ).onComplete(onClose);
	}
	
	public function onClose():Void
	{
		this.parent.removeChild(this);
	}
	
}