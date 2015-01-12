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
		_bg.x = 0 - _bg.width / 2;
		_bg.y = 0 - _bg.height;
		this.addChild(_bg);
		
		var _rule:Sprite = Game.resource.getSprite(Defines.GFX_UI_RULE);
		_rule.x = 0 - _rule.width / 2;
		_rule.y = 0 - _rule.height - _bg.height ;
		this.addChild(_rule);
	}
	
}