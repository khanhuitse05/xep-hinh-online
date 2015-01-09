package game.gameobject.pvp;

import core.resource.Defines;
import game.tnk.Game;
import openfl.display.Sprite;

/**
 * ...
 * @author KhanhTN
 */
class StaDisconnetEnemy extends Sprite
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
		var _spr:Sprite = Game.resource.getSprite(Defines.GFX_SHOW_DISCONNET_E);
		_spr.x = 0 - _spr.width / 2;
		_spr.y = 0 - _spr.height / 2;
		this.addChild(_spr);
	}
	
}