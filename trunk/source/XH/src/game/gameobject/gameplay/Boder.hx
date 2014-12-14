package game.gameobject.gameplay;

import core.resource.Defines;
import game.tnk.Game;
import openfl.display.Sprite;

/**
 * ...
 * @author KhanhTN
 */
class Boder extends Sprite
{
	
	public static var BOARD_X = -12;
	public static var BOARD_Y = -51;
	
	public function new() 
	{
		super();
		var mBoder:Sprite = Game.resource.getSprite(Defines.GFX_BOARD_BODER);
		mBoder.x = -12;
		mBoder.y = -51;
		this.addChild(mBoder);
	}
	
}