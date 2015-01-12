package scene.hud;

import core.display.ex.Lable;
import core.display.ex.SimpleButton;
import core.display.screen.ScreenID;
import core.resource.Defines;
import game.const.Const;
import game.network.packet.request.data.RepRank;
import game.tnk.Game;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.events.MouseEvent;

/**
 * ...
 * @author KhanhTN
 */
class HudInfo extends Sprite
{	
	private static var NAME_X = 100;
	private static var NAME_Y = 95;	
	private static var LEVEL_X = 450;
	private static var LEVEL_Y = 95;
	private static var LOGO_X = 100;
	private static var LOGO_Y = 190;
	
	private var _name:Lable;
	private var _level:Lable;
	
	private var exp:Int;
	private var level:Int;
	
	public function new() 
	{
		super();
		init();
	}
	private function init():Void
	{
		// line
		var _line = Game.resource.getSprite(Defines.GFX_UI_HUDINFO);
		this.addChild(_line);
		// name
		_name = new Lable();
		_name.setFont(40, 0xffffff);
		_name.setSysTextInfo(NAME_X, NAME_Y, "");
		this.addChild(_name);
		// level
		_level = new Lable();
		_level.setFont(40, 0xffffff);
		_level.setSysTextInfo(LEVEL_X, LEVEL_Y, "");
		this.addChild(_level);
		// logo
		var _logo = Game.resource.getSprite(Defines.GFX_UI_LOGO);
		_logo.x = Game.GAME_WIDTH / 2 - _logo.width / 2;
		_logo.y = LOGO_Y;
		this.addChild(_logo);
	}
	public function update():Void
	{
		if ( Game.data.playerData.mUserInfo.userName != null) 
		{
			_name.setSysText(Game.data.playerData.mUserInfo.userName);
			
			exp = Const.getExp(Game.data.playerData.mUserInfo.exp);
			level = Const.getLevel(Game.data.playerData.mUserInfo.exp);
			_level.setSysText("Level " + level);
			 
		}
	}

}