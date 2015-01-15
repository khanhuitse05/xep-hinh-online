package game.gameobject.pvp;

import core.resource.Defines;
import game.tnk.Game;
import openfl.display.Sprite;
import openfl.display.Graphics;

/**
 * ...
 * @author KhanhTN
 */
class StaDisconnet extends Sprite
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
		// fix
		this.graphics.beginFill(0, 0.6);
        this.graphics.drawRect(0 - Game.GAME_WIDTH / 2, 
								0 - Game.GAME_HEIGHT / 2, Game.GAME_WIDTH,Game.GAME_HEIGHT);
        this.graphics.endFill();
		// sprite
		var _spr:Sprite = Game.resource.getSprite(Defines.GFX_SHOW_DISCONNET);
		_spr.x = 0 - _spr.width / 2;
		_spr.y = 0 - _spr.height / 2;
		this.addChild(_spr);
	}
	
}