package game.gameobject.popupobject;

import game.tnk.Game;
import openfl.display.Sprite;

/**
 * ...
 * @author KhanhTN
 */
class PTop extends Sprite
{

	private var mSize:Int;
	public function new() 
	{
		super();
		super();
		var _spr:Sprite = Game.resource.getSprite(0);
		_spr.x = _spr.width / 2;
		_spr.y = _spr.height / 2;
		this.addChild(_spr);
		mSize = _spr.height;
	}
	public function setWidth(_s:Int):Void
	{
		_spr.x = 0 - _s / 2;
	}
	public function setHeight(_s:Int):Void
	{
		this.scaleY = _s / mSize;
	}
	
}