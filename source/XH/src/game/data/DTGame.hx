package game.data;
import core.display.screen.ScreenID;
import core.sound.Sound;
import game.tnk.Game;

/**
 * ...
 * @author KhanhTN
 */
class DTGame
{
	public static var POS_BG = 0;
	public static var POS_BATTLE = 1;
	
	public var online:Bool;
	public var isTry:Bool;
	public var isConnet:Bool;
	public var isSound:Bool;
	
	public function new() 
	{
		isSound = true;
		online = false;
		isTry = false;
		isConnet = false;
	}
	public function onDisconnected():Void
	{
		if (isConnet) 
		{			
			Game.displayManager.toScreen(ScreenID.POPUP_DISCONNET);
		}else 
		{
			
		}
	}
}