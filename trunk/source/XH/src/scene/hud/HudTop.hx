package scene.hud;

import core.display.scene.SceneView;
import core.resource.Defines;
import game.gameobject.hud.BtnBack;
import game.gameobject.hud.ExpHud;
import game.gameobject.hud.GoldHud;
import game.tnk.Game;
import openfl.display.Sprite;

/**
 * ...
 * @author KhanhTN
 */
class HudTop extends Sprite
{
	
	private static var GOLD_X = 80;
	private static var EXP_X = 370;
	private static var BTN_X = 40;
	private static var BTN_Y = 50;
	
	private var hudGold:GoldHud;
	private var hudExp:ExpHud;
	private var btnBack:BtnBack;
	
	public function new() 
	{
		super();
		init();
		update();
		
	}
	
	private function init():Void
	{
		
		// line
		var _line = Game.resource.getSprite(Defines.GFX_UI_HUDTOP);
		this.addChild(_line);
		hudGold = new GoldHud();
		hudGold.x = GOLD_X;
		this.addChild(hudGold);
		hudExp = new ExpHud();
		hudExp.x = EXP_X;
		this.addChild(hudExp);
		
		btnBack = new BtnBack();
		btnBack.x = BTN_X;
		btnBack.y = BTN_Y;
		this.addChild(btnBack);
	}
	public function update():Void
	{
		hudExp.update();
		hudGold.update();
	}
	public function setPosBack(_pos:Int = 1)
	{
		btnBack.setPosBack(_pos);
	}
}