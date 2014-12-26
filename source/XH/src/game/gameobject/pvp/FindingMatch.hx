package game.gameobject.pvp;

import core.resource.Defines;
import game.tnk.Game;
import openfl.display.Sprite;

/**
 * ...
 * @author KhanhTN
 */
class FindingMatch extends Sprite
{

	public function new() 
	{
		super();
		init();
	}
	public function init():Void
	{
		var _bg:Sprite = Game.resource.getSprite(Defines.GFX_BATTLE_FINDING);
		this.addChild(_bg);
	}
	
}