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
	private static var PVE = 0;
	private static var PVP = 1;
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
			case 0:
				Game.displayManager.toScreen(ScreenID.SINGLEPLAY);
			case 1:
				Game.displayManager.toScreen(ScreenID.ROOM);
			default:
		}
	}
	
}