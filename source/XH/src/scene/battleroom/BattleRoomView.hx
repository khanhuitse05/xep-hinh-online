package scene.battleroom;
import core.display.scene.*;
import core.display.screen.ScreenID;
import game.gameobject.gameplay.GameBattle;
import game.gameobject.gameplay.GamePlay;
import game.tnk.Game;
import openfl.events.Event;

/**
 * ...
 * @author KhanhTN
 */
class BattleRoomView extends SceneView
{
	
	public function new() 
	{
		super();
		init();
	}
	
	private function init():Void 
	{		
		
	}	
	
	private function gameLoop(e:Event):Void 
	{
		
	}
	
	/**
	 * 
	 * @param	e
	 */
	private function onBack():Void 
	{		
		Game.displayManager.toScreen(ScreenID.HOME);
	}
	/**
     *  Abstract function
     */
    override public function onEnter()
    {        		
		Game.data.playerData.mDTingame.onRefresh();
		Game.data.playerData.mDTgameplay.onRefresh();
		init();
    }

    /**
     *  Abstract function
     */
    override public function onExit()
    {
    }
}