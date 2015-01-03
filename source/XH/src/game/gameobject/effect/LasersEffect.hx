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
	private var mRight:Sprite;
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
		mAnim.y += 12;
		this.addChild(mAnim);
		
		mRight = new Sprite();
		mRight.y -= 12;
		this.addChild(mRight);
		var _temp:Sprite = Game.resource.getSprite(Defines.GFX_LASES_SKILL_EFFECT);
		_temp.x = 0 - _temp.width;
		mRight.addChild(_temp);
		mRight.x = _temp.width;
		
		onBegin();
	}
	public function onBegin():Void
	{		
		Actuate.tween(mAnim, TIME_LIVE + 0.01, { scaleX:0 } ).onComplete(onClose);
		Actuate.tween(mRight, TIME_LIVE + 0.01, { scaleX:0 } );
	}
	
	public function onClose():Void
	{
		this.parent.removeChild(this);
	}
	
}