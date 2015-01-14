package game.gameobject.room ;

import core.display.ex.Lable;
import core.display.ex.SimpleButton;
import core.resource.Defines;
import core.sprites.Animx;
import game.network.packet.request.pvp.RespWithFriend;
import game.tnk.Game;
import openfl.text.TextFormat;
import openfl.text.TextField;
import openfl.events.MouseEvent;
import openfl.display.Sprite;
import openfl.text.TextFieldType;

/**
 * ...
 * @author KhanhTN
 */
class BtnPublic extends Sprite
{
	private static var TEXT_X = 10;
	private static var TEXT_Y = 700;
	
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
		_bg = Game.resource.getSprite(Defines.GFX_BATTLE_FINDING);
		this.addChild(_bg);
		// lable pass word
		// tf
		tfName = new TextField();
		tfName.width = TEXT_X;
		tfName.height = TEXT_Y;
		tfName.x = 10;
		tfName.y = 3;
		tfName.border = false;
		tfName.background = false;
		tfName.multiline =  false;
		tfName.type = TextFieldType.INPUT;
		tfName.maxChars = 20;
		var textFM = new TextFormat();
		textFM.size = 40;
		textFM.color = 0x0;
		tfName.text = "A";
		tfName.setTextFormat(textFM);
		tfName.defaultTextFormat = textFM;
		this.addChild(tfName); 
		//btn
		var _btn:SimpleButton = new SimpleButton();
		_btn.setDisplay(Game.resource.getSprite(0));
		_btn.setPosition(_bg.width / 2, _bg.height - 35);
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