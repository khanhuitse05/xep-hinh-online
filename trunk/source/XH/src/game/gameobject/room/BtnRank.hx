package game.gameobject.room ;

import core.display.ex.Lable;
import core.display.ex.SimpleButton;
import core.resource.Defines;
import core.sprites.Animx;
import game.network.packet.request.pvp.RepFinding;
import game.tnk.Game;
import openfl.events.MouseEvent;
import openfl.display.Sprite;

/**
 * ...
 * @author KhanhTN
 */
class BtnRank extends Sprite
{
	var _bg:Sprite;
	private var lbInfo:Lable;
	private var _onMouseClick:MouseEvent->Void;
	public function new(e:MouseEvent->Void = null) 
	{
		super();
		_onMouseClick = e;
		init();
	}
	public function init():Void
	{			
		_bg = Game.resource.getSprite(Defines.GFX_FIND_PN_RANK);
		this.addChild(_bg);
		// lable pass word
		lbInfo = new Lable();
		lbInfo.setFont(40, 0xffffff);
		lbInfo.setSysTextInfo(100, 90,"" + Game.data.playerData.mUserInfo.elo);
		this.addChild(lbInfo);
		//btn
		var _btn:SimpleButton = new SimpleButton();
		_btn.setDisplay(Game.resource.getSprite(Defines.GFX_FIND_BTN_RANK));
		_btn.setPosition(_bg.width / 2, _bg.height - 40);
		_btn.setMouseClick(onRank);
		this.addChild(_btn);
	}
	public function update()
	{
		lbInfo.setSysText("" + Game.data.playerData.mUserInfo.elo);
	}
	public function onRank(e:MouseEvent)
	{
		Game.server.sendPacket(new RepFinding());
		if (_onMouseClick != null) 
		{
			this._onMouseClick(e);
		}
	}
}