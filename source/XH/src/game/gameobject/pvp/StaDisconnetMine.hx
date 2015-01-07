package game.gameobject.pvp;

import core.resource.Defines;
import game.tnk.Game;
import openfl.display.Sprite;

/**
 * ...
 * @author KhanhTN
 */
class StaDisconnetMine extends Sprite
{

	public function new() 
	{
		super();
		init();
	}
	private function init():Void
	{
		this.x = Game.GAME_WIDTH / 2;
		this.y = Game.GAME_HEIGHT / 2;
		var _spr:Sprite = Game.resource.getSprite(Defines.GFX_SHOW_DISCONNET_M);
		_spr.x = _spr.width / 2;
		_spr.y = _spr.height / 2;
		this.addChild(_spr);
	}
	
}