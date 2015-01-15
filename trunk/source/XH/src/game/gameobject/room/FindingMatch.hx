package game.gameobject.room ;

import core.display.ex.Lable;
import core.display.ex.SimpleButton;
import core.resource.Defines;
import core.sprites.Animx;
import game.network.packet.request.pvp.RepCancel;
import game.tnk.Game;
import openfl.events.MouseEvent;
import openfl.display.Sprite;

/**
 * ...
 * @author KhanhTN
 */
class FindingMatch extends Sprite
{
	private static var TYPE_X = 20;
	private static var TYPE_Y = 200;
	private static var INFO_X = 175;
	private static var INFO_Y = 275;
	
	var _bg:Sprite;
	private var lbInfo:Lable;
	private var lbType:Lable;
	public function new() 
	{
		super();
		init();
	}
	public function init():Void
	{
		this.graphics.beginFill(0, 0.06);
		this.graphics.drawRect(0, 0, Game.GAME_WIDTH,Game.GAME_HEIGHT);
		this.graphics.endFill();
			
		_bg = Game.resource.getSprite(Defines.GFX_UI_POPUP_BLUES);
		_bg.x = Game.GAME_WIDTH / 2 - _bg.width / 2;
		_bg.y = Game.GAME_HEIGHT / 2 - _bg.height / 2;
		this.addChild(_bg);
		//anim
		var _anim:Animx = Game.resource.getAnim(Defines.GFX_ANIM_CUBE);
		_anim.x = ( _bg.width - _anim.mWidth) / 2;
		_anim.y = 50;
		_anim.animate2(5, -1);
		_bg.addChild(_anim);
		//lable
		lbInfo = new Lable();
		lbInfo.setFont(40, 0xFF8000);
		lbInfo.setSysTextInfo(INFO_X, INFO_Y, "");
		_bg.addChild(lbInfo);
		lbType = new Lable();
		lbType.setFont(34, 0xffffff);
		lbType.setSysTextInfo(TYPE_X, TYPE_Y, "");
		_bg.addChild(lbType);
		//btn
		var _btn:SimpleButton = new SimpleButton();
		_btn.setDisplay(Game.resource.getSprite(Defines.GFX_UI_BTN_CANCEL));
		_btn.setPosition(_bg.width / 2, _bg.height - 100);
		_btn.setMouseClick(onCancel);
		_bg.addChild(_btn);
	}
	public function setFindRank()
	{
		lbInfo.setSysTextInfo(INFO_X, INFO_Y,"Elo: " + Game.data.playerData.mUserInfo.elo);
		lbType.setSysText("FINDING RANK MATCH...");
	}
	public function setFindPublic(_text:String)
	{
		lbInfo.setSysTextInfo(TYPE_X + 10, INFO_Y,"Password: " + _text);
		lbType.setSysText("FINDING PUBLIC MATCH...");
	}
	public function onCancel(e:MouseEvent)
	{
		this.visible = false;
		Game.server.sendPacket(new RepCancel());
	}
}