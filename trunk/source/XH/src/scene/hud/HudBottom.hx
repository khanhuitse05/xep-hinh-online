package scene.hud;

import core.display.ex.Lable;
import core.display.ex.SimpleButton;
import core.resource.Defines;
import game.gameobject.hud.BtnPlay;
import game.tnk.Game;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.events.MouseEvent;

/**
 * ...
 * @author KhanhTN
 */
class HudBottom extends Sprite
{

	
	private static var NAME_X = 100;
	private static var NAME_Y = 95;
	private static var LOGO_X = 100;
	private static var LOGO_Y = 190;
	
	private static var BTN_X = 530;
	private static var BTN_Y = 50;
	
	private var btnPlay:BtnPlay;
	
	
	public function new() 
	{
		super();
		init();
	}
	private function init():Void
	{
		// line
		var _line = Game.resource.getSprite(Defines.GFX_UI_HUDBOTTOM);
		this.addChild(_line);
		this.x = 0;
		this.y = Game.GAME_HEIGHT - _line.height;
		
		btnPlay = new BtnPlay();
		btnPlay.x = BTN_X;
		btnPlay.y = BTN_Y;
		this.addChild(btnPlay);
	}
	public function setPosBack(_pos:Int = 1)
	{
		btnPlay.setPosBack(_pos);
	}
}