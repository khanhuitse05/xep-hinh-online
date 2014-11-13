package game.gameobject.gameplay;

import core.resource.Defines;
import core.sprites.Animx;
import game.tnk.Game;
import openfl.display.Sprite;
import tweenx909.EaseX;
import tweenx909.TweenX;

/**
 * ...
 * @author KhanhTN
 */
class EffectClear extends Sprite
{
	public static var TIME_LIVE:Float = 0.3;
	private var mAnim:Array<Sprite>;
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
		mAnim = new Array<Sprite>();
		for (i in 0...Game.BOARD_WIDTH) 
		{
			var _anim = new Sprite();
			_anim = Game.resource.getSprite(Defines.GFX_ROW_CLEAR);
			_anim.x = i * Game.BRICK_WIDTH;
			_anim.y = 0;
			this.addChild(_anim);
			mAnim.push(_anim);
		}
		onBegin();
	}
	public function onBegin():Void
	{
		for (i in 0...Game.BOARD_WIDTH) 
		{
			TweenX.to(mAnim[i], { x:mAnim[i].x + Game.BRICK_WIDTH / 2,
									y:mAnim[i].y + Game.BRICK_HEIGHT / 2,
									scaleX:0,
									scaleY:0 }, TIME_LIVE);
		}
		TweenX.to(this, { }, TIME_LIVE + 0.01).onFinish(onClose);
	}
	public function onClose():Void
	{
		this.parent.removeChild(this);
	}
	
}