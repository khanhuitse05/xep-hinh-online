package scene.hud;

import core.display.ex.Lable;
import core.display.ex.SimpleButton;
import core.resource.Defines;
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

	private static var SETTING = 0;
	private static var SHOP = 1;
	private static var RANK = 2;
	private static var WHELL = 3;
	private static var MAX_BUTTON = 4;
	
	private static var BUTTON_X = 100;
	private static var BUTTON_Y = 1165;
	private static var BUTTON_OFFSET = 120;
	
	private static var NAME_X = 100;
	private static var NAME_Y = 95;
	private static var LOGO_X = 100;
	private static var LOGO_Y = 190;
	
	private var listButton:Array<SimpleButton>;
	var _name:Lable;
	
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
		if ( Game.data.playerData.mUserInfo.userName != null) 
		{
			_name.setSysTextInfo(NAME_X, NAME_Y, Game.data.playerData.mUserInfo.userName);
		}
		this.addChild(_name);
		// logo
		var _logo = Game.resource.getSprite(Defines.GFX_UI_LOGO);
		_logo.x = Game.GAME_WIDTH / 2 - _logo.width / 2;
		_logo.y = LOGO_Y;
		this.addChild(_logo);
		
		// button
		listButton = new Array<SimpleButton>();
		for (i in 0...MAX_BUTTON) 
		{
			listButton[i] = new SimpleButton();
			listButton[i].setDisplay(Game.resource.getSprite(Defines.GFX_UI_BTN_SETTING + i));
			listButton[i].setPosition(BUTTON_X + BUTTON_OFFSET * i, BUTTON_Y);
			this.addChild(listButton[i]);
		}
		listButton[SETTING].addEventListener(MouseEvent.CLICK, onSetting);
		listButton[SHOP].addEventListener(MouseEvent.CLICK, onShop);
		listButton[RANK].addEventListener(MouseEvent.CLICK, onRank);
		listButton[WHELL].addEventListener(MouseEvent.CLICK, onWhell);
	}
	public function update():Void
	{
		if ( Game.data.playerData.mUserInfo.userName != null) 
		{
			_name.setSysTextInfo(NAME_X, NAME_Y, Game.data.playerData.mUserInfo.userName);
		}
	}
	/**
	 * 
	 * @param	e
	 */
	private function onSetting(e:Event):Void 
	{		
	}
	/**
	 * 
	 * @param	e
	 */
	private function onShop(e:Event):Void 
	{		
	}
	/**
	 * 
	 * @param	e
	 */
	private function onRank(e:Event):Void 
	{		
	}
	/**
	 * 
	 * @param	e
	 */
	private function onWhell(e:Event):Void 
	{		
	}
}