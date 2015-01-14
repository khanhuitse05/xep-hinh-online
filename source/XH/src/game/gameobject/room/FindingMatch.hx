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
			
		_bg = Game.resource.getSprite(Defines.GFX_BATTLE_FINDING);
		_bg.x = Game.GAME_WIDTH / 2 - _bg.width / 2;
		_bg.x = Game.GAME_HEIGHT / 2 - _bg.height / 2;
		this.addChild(_bg);
		//anim
		var _anim:Animx = Game.resource.getAnim(Defines.GFX_LOADING_ANIM);
		_anim.x = ( _bg.width - _anim.mWidth) / 2;
		_anim.y = 50;
		_anim.animate();
		_bg.addChild(_anim);
		//lable
		lbInfo = new Lable();
		lbInfo.setFont(40, 0xFF8000);
		lbInfo.setSysTextInfo(30, 90, "");
		_bg.addChild(lbInfo);
		lbType = new Lable();
		lbType.setFont(60, 0xffffff);
		lbType.setSysTextInfo(40, 120, "");
		_bg.addChild(lbType);
		//btn
		var _btn:SimpleButton = new SimpleButton();
		_btn.setDisplay(Game.resource.getSprite(0));
		_btn.setPosition(_bg.width / 2, _bg.height - 50);
		_btn.setMouseClick(onCancel);
		_bg.addChild(_btn);
	}
	public function setFindRank()
	{
		lbInfo.setSysText("Elo: " + Game.data.playerData.mUserInfo.elo);
		lbType.setSysText("FINDING RANK MATCH...");
	}
	public function setFindPublic(_text:String)
	{
		lbInfo.setSysText("Password: " + _text);
		lbType.setSysText("FINDING PUBLIC MATCH...");
	}
	public function onCancel(e:MouseEvent)
	{
		this.visible = false;
		Game.server.sendPacket(new RepCancel());
	}
}