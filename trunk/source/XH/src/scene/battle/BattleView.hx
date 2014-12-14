package scene.battle;
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
class BattleView extends SceneView
{
	var _gamePlay:GameBattle;
	
	public function new() 
	{
		super();
		//this.addEventListener(Event.ENTER_FRAME, gameLoop);
	}
	
	private function init():Void 
	{		
		_gamePlay = new GameBattle();
		_gamePlay.x = 0;
		_gamePlay.y = 0;
		this.addChildForDel(_gamePlay);
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
        this.removeChild(_gamePlay);
		_gamePlay.onExit();
    }
}