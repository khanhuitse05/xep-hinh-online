package scene.battle;
import core.display.scene.*;
import core.display.screen.ScreenID;
import game.gameobject.gameplay.GameBattle;
import game.gameobject.gameplay.GamePlay;
import game.gameobject.pvp.StaDisconnetEnemy;
import game.gameobject.pvp.StaDisconnetMine;
import game.gameobject.pvp.StaLose;
import game.gameobject.pvp.StaWIn;
import game.network.packet.request.pvp.RepCancel;
import game.tnk.Game;
import motion.Actuate;
import openfl.events.MouseEvent;
import openfl.events.Event;
import openfl.events.KeyboardEvent;

/**
 * ...
 * @author KhanhTN
 */
class BattleView extends SceneView
{
	private static var TIME_DELAY = 2;
	var _gamePlay:GameBattle;
	
	public function new() 
	{
		super();
		this.addEventListener(Event.ENTER_FRAME, gameLoop);
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
     *  Abstract function
     */
    override public function onEnter()
    {        		
		Game.data.playerData.mDTgameplay.onSetPvp();
		Game.data.playerData.mDTingame.onRefresh();
		Game.data.playerData.mDTgameplay.onRefresh();
		init();
    }

    /**
     *  Abstract function
     */
    override public function onExit()
    {
		this.removeEventListener(Event.ENTER_FRAME, gameLoop);
        this.removeChild(_gamePlay);
		_gamePlay.onExit();
		_gamePlay = null;
    }
	
	/// sever
	public function sWin()
	{
		var	_win:StaWIn = new StaWIn();
		this.addChild(_win);
		Actuate.timer(TIME_DELAY).onComplete(onBack);
	}
	public function sLose()
	{
		var	_lose:StaLose = new StaLose();
		this.addChild(_lose);
		Actuate.timer(TIME_DELAY).onComplete(onBack);
	}
	public function sDisconnet()
	{
		var	_dis:StaDisconnetEnemy = new StaDisconnetEnemy();
		this.addChild(_dis);	
		Actuate.timer(TIME_DELAY).onComplete(onBack);
	}
	public function sDraw()
	{
		var	_dis:StaLose = new StaLose();
		this.addChild(_dis);	
		Actuate.timer(TIME_DELAY).onComplete(onBack);
	}
	/**
	 * 
	 * @param	e
	 */
	private function onBack():Void 
	{		
		Game.displayManager.toScreen(ScreenID.HOME);
		Game.displayManager.toScreen(ScreenID.POPUP_STA_PVP);
	}
}