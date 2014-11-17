package game.gameobject.gameplay;

import core.display.screen.ScreenID;
import core.resource.Defines;
import core.resource.ResourceManager;
import game.data.gameplay.DTingame;
import game.gameobject.background.Background;
import game.gameobject.board.Board;
import game.tnk.Game;
import openfl.events.MouseEvent;
import openfl.events.Event;
import openfl.display.Sprite;

/**
 * ...
 * @author KhanhTN
 */
class GamePlay extends Sprite
{
	public static var Board_X = 121;
	public static var Board_Y = 142;
	
	public static var HUD_Y = 172;
	public static var HUDLEFT_X = 7;
	public static var HUDRIGHT_X = Game.GAME_WIDTH - 101 - 7;
	
	private var mHudLeft:HudLeft;
	private var mHudRight:HudRight;
	
	private var mBackground:BGPlay;
	private var mBoard:Board;
	
	private var mTime:TimePlay;
	private var mScore:Score;
	
	public function new() 
	{
		super();
		init();

		this.addEventListener(Event.ENTER_FRAME, gameLoop);
	}
	private function init():Void
	{
		mBackground = new BGPlay();
		this.addChild(mBackground);
		
		mHudRight = new HudRight();
		mHudRight.x = HUDRIGHT_X;
		mHudRight.y = HUD_Y;
		this.addChild(mHudRight);
		
		mHudLeft = new HudLeft();
		mHudLeft.x = HUDLEFT_X;
		mHudLeft.y = HUD_Y;
		this.addChild(mHudLeft);
				
		mBoard = new Board();
		mBoard.x = Board_X;
		mBoard.y = Board_Y;
		this.addChild(mBoard);
		
		var _countdown:CountDown = new CountDown();
		this.addChild(_countdown);
		
	}
	public function gameLoop(e:Event):Void
	{
		if (Game.data.playerData.mDTingame.stateGame == DTingame.STATE_END) 
		{			
			Game.displayManager.toScreen(ScreenID.HOME);			
			this.removeEventListener(Event.ENTER_FRAME, gameLoop);
		}
	}
	public function onExit()
	{
		this.removeEventListener(Event.ENTER_FRAME, gameLoop);
		this.removeChild(mBoard);
		mBoard.onExit();
		this.removeChild(mHudLeft);
		mHudLeft.onExit();
		this.removeChild(mHudRight);
		mHudRight.onExit();
		this.removeChild(mBackground);
		mBackground.onExit();
	}
}