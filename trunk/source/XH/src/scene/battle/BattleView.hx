package scene.battle;
import core.display.scene.*;
import core.display.screen.ScreenID;
import core.sound.Sound;
import game.gameobject.gameplay.GameBattle;
import game.gameobject.gameplay.GamePlay;
import game.gameobject.pvp.StaDisconnetEnemy;
import game.gameobject.pvp.StaDisconnetMine;
import game.gameobject.pvp.StaLose;
import game.gameobject.pvp.StaWIn;
import game.network.packet.request.pvp.RepCancel;
import game.tnk.Game;
import motion.Actuate;
import openfl.display.Sprite;
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
		init();
	}
	
	private function init():Void 
	{		
		_gamePlay = new GameBattle();
		_gamePlay.x = 0;
		_gamePlay.y = 0;
		this.addChild(_gamePlay);
	}	
	public function onRefresh():Void 
	{		
		_gamePlay.onEnter();
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
		
		this.addEventListener(Event.ENTER_FRAME, gameLoop);
		onRefresh();
		Game._soundHome.Pause();
    }

    /**
     *  Abstract function
     */
    override public function onExit()
    {
		this.removeEventListener(Event.ENTER_FRAME, gameLoop);
		_gamePlay.onExit();
		if (_result != null) 
		{
			if (this.contains(_result)) 
			{
				this.removeChild(_result);
			}
		}
		Game._soundbattle.Pause();
    }
	
	/// sever
	var _result:Sprite;
	public function sWin()
	{
		_result = new StaWIn();
		this.addChild(_result);
		Actuate.timer(TIME_DELAY).onComplete(onBack);
		Sound.GetSound(Sound.STA_WIN).Play();
	}
	public function sLose()
	{
		_result = new StaLose();
		this.addChild(_result);
		Actuate.timer(TIME_DELAY).onComplete(onBack);
		Sound.GetSound(Sound.STA_LOSE).Play();
	}
	public function sDisconnet()
	{
		_result = new StaDisconnetEnemy();
		this.addChild(_result);	
		Actuate.timer(TIME_DELAY).onComplete(onBack);
		Sound.GetSound(Sound.STA_DICONNET).Play();
	}
	public function sDraw()
	{
		_result = new StaLose();
		this.addChild(_result);
		Actuate.timer(TIME_DELAY).onComplete(onBack);
		Sound.GetSound(Sound.STA_DRAW).Play();
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