package game.gameobject.room ;

import core.display.ex.Lable;
import core.display.ex.SimpleButton;
import core.resource.Defines;
import core.sprites.Animx;
import game.network.packet.request.pvp.RespWithFriend;
import game.tnk.Game;
import openfl.text.TextFormat;
import openfl.text.Font;
import openfl.text.TextField;
import openfl.events.MouseEvent;
import openfl.Assets;
import openfl.display.Sprite;
import openfl.text.TextFieldType;

/**
 * ...
 * @author KhanhTN
 */
class BtnPublic extends Sprite
{
	private static var TEXT_X = 45;
	private static var TEXT_Y = 93;
	private static var BTN_Y = 120;
	
	var _bg:Sprite;
	public var tfName:TextField;
	private var _onMouseClick:MouseEvent->Void;
	public function new(e:MouseEvent->Void = null) 
	{
		super();
		_onMouseClick = e;
		init();
	}
	public function init():Void
	{			
		_bg = Game.resource.getSprite(Defines.GFX_FIND_PN_PUBLIC);
		this.addChild(_bg);
		// lable pass word
		// tf
		tfName = new TextField();
		tfName.width = 245;
		tfName.height = 130;
		tfName.maxChars = 12;
		tfName.x = TEXT_X;
		tfName.y = TEXT_Y;
		tfName.border = false;
		tfName.background = false;
		tfName.multiline =  false;
		tfName.type = TextFieldType.INPUT;
		tfName.maxChars = 20;
		var pFormat:TextFormat = new TextFormat();
		var pFont:Font = Assets.getFont("img/fonts/fontgame.TTF");
		pFormat.font = pFont.fontName;
		pFormat.size = 40;
		pFormat.color = 0xffffff;
		tfName.text = "A";
		tfName.setTextFormat(pFormat);
		tfName.defaultTextFormat = pFormat;
		this.addChild(tfName); 
		//btn
		var _btn:SimpleButton = new SimpleButton();
		_btn.setDisplay(Game.resource.getSprite(Defines.GFX_FIND_BTN_PUBLIC));
		_btn.setPosition(_bg.width / 2, _bg.height - 40);
		_btn.setMouseClick(onPublic);
		this.addChild(_btn);
	}
	public function update()
	{
		tfName.text = "";
	}
	public function onPublic(e:MouseEvent)
	{
		Game.server.sendPacket(new RespWithFriend("ping:" + tfName.text));
		if (_onMouseClick != null) 
		{
			this._onMouseClick(e);
		}
	}
}