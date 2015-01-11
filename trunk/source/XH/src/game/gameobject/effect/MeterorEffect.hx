package game.gameobject.effect;

import core.resource.Defines;
import core.sprites.Animx;
import game.gameobject.brick.Brick;
import game.gameobject.brick.BrickType;
import game.tnk.Game;
import motion.Actuate;
import motion.easing.Quad;
import openfl.display.Sprite;

/**
 * ...
 * @author KhanhTN
 */
class MeterorEffect extends Sprite
{
	public static var TIME_LIVE:Float = 0.1;
	
	public var mRow:Int;
	public var mCol:Int;
	public var onFinish:Void->Void;
	public function new(_row:Int, _col:Int, _finish:Void->Void = null) 
	{
		super();
		mRow = _row;
		mCol = _col;
		onFinish = _finish;
		this.x = 0 + _col * Game.BRICK_WIDTH;
		this.y = 0;
		init();
		onBegin();
	}
	private function init():Void
	{
		var _brick:Brick = new Brick();
		_brick.setValue(0, 0, BrickType.OTHER);
		this.addChild(_brick);
		// animate
		var mAnim:Animx = Game.resource.getAnim(Defines.GFX_ANIM_METEROR_SKILL);
		mAnim.x = 0 - (mAnim.mWidth / 2 - Game.BRICK_WIDTH / 2);
		mAnim.y = 0 - mAnim.mHeight + Game.BRICK_HEIGHT + 15;
		mAnim.animate();
		this.addChild(mAnim);
	}
	public function onBegin():Void
	{		
		var _y = Game.BOARD_HEIGHT * Game.BRICK_HEIGHT - (mRow + 1) * Game.BRICK_HEIGHT;
		Actuate.tween(this, TIME_LIVE * (Game.BOARD_HEIGHT - mRow), { y:_y } ).ease(Quad.easeIn).onComplete(onClose);
	}
	
	public function onClose():Void
	{
		if (onFinish != null) 
		{
			this.onFinish();
		}
		this.parent.removeChild(this);
	}
	
}