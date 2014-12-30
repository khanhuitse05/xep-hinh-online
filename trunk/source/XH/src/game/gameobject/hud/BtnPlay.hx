package game.gameobject.hud;

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
class BtnPlay extends SimpleButton
{
	public static var PVE = 0;
	public static var PVP = 1;
	public static var CHOOSE_PVE = 2;
	private var pos:Int;
	public function new() 
	{
		super();
		this.setDisplay(Game.resource.getSprite(Defines.GFX_BTN_PLAY));
		this.setMouseClick(onPlay);
	}
	public function setPosBack(_pos)
	{
		pos = _pos;		
	}
	public function onPlay(e:MouseEvent)
	{
		Game.data.playerData.dataSkill.onPlay();
		switch (pos) 
		{
			case -1:
				this.visible = false;
			case 0:
				this.visible = true;
				Game.displayManager.toScreen(ScreenID.SINGLEPLAY);
			case 1:
				this.visible = true;
				Game.displayManager.toScreen(ScreenID.ROOM);
			case 2:
				this.visible = true;
				Game.data.playerData.dataSkill.mode = GameMode.PVE;
				Game.displayManager.toScreen(ScreenID.SKILL);
			default:
		}
	}
	
}