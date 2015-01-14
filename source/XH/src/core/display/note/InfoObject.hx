package core.display.note;

import core.display.ex.Lable;
import core.display.ex.SimpleButton;
import core.resource.Defines;
import game.tnk.Game;
import openfl.display.Sprite;
import openfl.events.Event;

/**
 * ...
 * @author KhanhTN
 */
class InfoObject extends Sprite
{
	private static var TITLE_X = 40;
	private static var TITLE_Y = 28;
	
	private static var INFO_X = 40;
	private static var INFO_Y = 105;
	private static var INFO_WIDTH = 400;
	private static var INFO_HEIGHT = 160;
	
	var lbTitle:Lable;
	var textTitle:String;
	var lbInfo:Lable;
	var textInfo:String;
	
	var btnClose:SimpleButton;
	var pane:Sprite;
	
	public function new() 
	{
		super();
		
		this.graphics.beginFill(0, 0.01);
		this.graphics.drawRect(0, 0, Game.GAME_WIDTH,Game.GAME_HEIGHT);
		this.graphics.endFill();
		
		pane = Game.resource.getSprite(Defines.GFX_CONNET_BG);
		this.addChild(pane);
		pane.x = Game.GAME_WIDTH / 2 - pane.width / 2;
		pane.y = Game.GAME_HEIGHT / 2 - pane.height / 2;
		
		btnClose = new SimpleButton();
		btnClose.setDisplay(Game.resource.getSprite(Defines.GFX_POPUP_S_CLOSE));
		btnClose.setPosition(pane.width - 50, 50);
		btnClose.setMouseClick(onClose);
		
		
		lbTitle = new Lable();
		lbTitle.setFont(50, 0xFF8000);
        lbTitle.setSysTextInfo(TITLE_X, TITLE_Y, "");
        pane.addChild(lbTitle);
		
		lbInfo = new Lable();
		lbInfo.setFont(35, 0xffffff);
        lbInfo.setSysTextInfo(INFO_X, INFO_Y, "", false);
		lbInfo.width = INFO_WIDTH;
		lbInfo.height = INFO_HEIGHT;
		lbInfo.multiline = true;		
        lbInfo.wordWrap = true;
        pane.addChild(lbInfo);
				
		pane.addChild(btnClose);
		
	}
	public function update(_title:String, _info:String) 
	{		
		textTitle = _title;
		textInfo = _info;
		lbTitle.setSysText(_title);
		lbInfo.setSysText(_info, false);
	}
	public function onClose(e:Event):Void
	{
		this.visible = false;
	}
	
}