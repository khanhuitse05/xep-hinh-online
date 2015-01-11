package scene.singleplay;
import core.display.ex.SimpleButton;
import core.display.scene.*;
import core.display.screen.ScreenID;
import core.resource.Defines;
import game.data.gameplay.DTingame;
import game.gameobject.board.Board;
import game.gameobject.brick.Brick;
import game.gameobject.gameplay.GamePlay;
import game.tnk.Game;
import openfl.events.MouseEvent;
import openfl.display.Sprite;
import openfl.events.Event;
import tweenx909.TweenX;

/**
 * ...
 * @author KhanhTN
 */
class SinglePlayView extends SceneView
{
	public static var BOARD_X:Int = 100;
	public static var BOARD_Y:Int = 100;
	private var mBg:Sprite;
	var _gamePlay:GamePlay;
	
	public function new() 
	{
		super();
		init();
	}
	
	private function init():Void 
	{		
		_gamePlay = new GamePlay();
		_gamePlay.x = 0;
		_gamePlay.y = 0;
		this.addChildForDel(_gamePlay);
	}	
	public function onRefresh():Void 
	{		
		_gamePlay.onEnter();
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
		Game.data.playerData.dataStatictis.onRefresh();
		onRefresh();
		
		this.addEventListener(Event.ENTER_FRAME, gameLoop);
    }

    /**
     *  Abstract function
     */
    override public function onExit()
    {
		this.removeEventListener(Event.ENTER_FRAME, gameLoop);
        //this.removeAndDelChild(_gamePlay);
		_gamePlay.onExit();
		//_gamePlay = null;
    }
	
}