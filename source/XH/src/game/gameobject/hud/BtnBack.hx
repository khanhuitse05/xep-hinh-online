package game.gameobject.hud ;

import core.display.ex.SimpleButton;
import core.display.scene.SceneView;
import core.display.screen.ScreenID;
import core.resource.Defines;
import game.gameobject.gameplay.GameMode;
import game.tnk.Game;
import flash.system.System;
import motion.Actuate;
import openfl.events.MouseEvent;

/**
 * ...
 * @author KhanhTN
 */
class BtnBack extends SimpleButton
{
	
	private var pos:Int;
	public function new() 
	{
		super();
		this.setDisplay(Game.resource.getSprite(Defines.GFX_BTN_BACK));
		this.setMouseClick(onBack);
	}
	public function setPosBack(_pos:Int = 1)
	{
		pos = _pos;		
		Actuate.timer(1.5).onComplete(waitDisable);
	}
	public function waitDisable():Void
	{
		this.SetDisable(false);
	}
	public function onBack(e:MouseEvent)
	{
		switch (pos) 
		{
			case SceneView.EXIT:
				System.exit(0);
			case SceneView.HOME:
				Game.displayManager.toScreen(ScreenID.HOME);
			case SceneView.CHOOSEKILL_PVE:
				Game.data.playerData.dataSkill.mode = GameMode.PVE;
				Game.displayManager.toScreen(ScreenID.SKILL);
			case SceneView.CHOOSEKILL_PVP:
				Game.data.playerData.dataSkill.mode = GameMode.PVP;
				Game.displayManager.toScreen(ScreenID.SKILL);
			default:		
				Game.displayManager.toScreen(ScreenID.HOME);
		}
		this.SetDisable(true);
	}
}