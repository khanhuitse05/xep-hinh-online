package game.gameobject.hud;

import core.display.ex.Lable;
import core.resource.Defines;
import game.const.Const;
import game.tnk.Game;
import openfl.display.Sprite;

/**
 * ...
 * @author KhanhTN
 */
class GoldHud extends Sprite
{
	private static var GOLD_X = 85;
	private static var GOLD_Y = 30;
	private static var GOLD_ICON_X = 245;
	private static var GOLD_ICON_Y = 25;
	private var gold:Int;
	private var goldText:Lable;
	private var goldPane:Sprite;
	private var goldIcon:Sprite;

	public function new() 
	{
		super();
		init();
		update();
	}
	private function init():Void
	{
		gold = Game.data.playerData.mUserInfo.gold;
		//panel
		goldPane = Game.resource.getSprite(Defines.GFX_UI_HUD_PANE);
		this.addChild(goldPane);
		// icon
		goldIcon = Game.resource.getSprite(Defines.GFX_UI_HUD_GOLD_ICON);
		goldIcon.x = GOLD_ICON_X;
		goldIcon.y = GOLD_ICON_Y;
		this.addChild(goldIcon);
		// text
		goldText = new Lable();
		goldText.setFont(35, 0xFF8000);
		goldText.setSysTextInfo(GOLD_X, GOLD_Y, Const.NumToString(gold));
		this.addChild(goldText);
	}
	public function update():Void
	{
		gold = Game.data.playerData.mUserInfo.gold;
		goldText.setSysTextInfo(GOLD_X, GOLD_Y, Const.NumToString(gold));
	}
	
	
}