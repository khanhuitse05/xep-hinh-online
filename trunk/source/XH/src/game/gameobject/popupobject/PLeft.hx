package game.gameobject.popupobject;

import core.resource.Defines;
import game.tnk.Game;
import openfl.display.Sprite;

/**
 * ...
 * @author KhanhTN
 */
class PLeft extends PBorder
{
	public function new() 
	{
		super();
		var _spr:Sprite = Game.resource.getSprite(Defines.GFX_UI_POPUP_LEFT);
		_spr.x = 0 - _spr.width / 2;
		_spr.y = 0 - _spr.height / 2;
		this.addChild(_spr);
		mSize = _spr.height;
	}
	override public function setWidth(_s:Int):Void
	{
		this.x = 0 - _s / 2;
	}
	override public function setHeight(_s:Int):Void
	{
		this.scaleY = _s / mSize;
	}
	
}