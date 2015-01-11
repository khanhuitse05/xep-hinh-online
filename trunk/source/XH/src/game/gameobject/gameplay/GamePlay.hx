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
	public static var BOARD_X = 121;
	public static var BOARD_Y = 142;
	
	public static var HUD_Y = 172;
	public static var HUDLEFT_X = 7;
	public static var HUDRIGHT_X = Game.GAME_WIDTH - 101 - 7;
	
	private var mHudLeft:HudLeft;
	private var mHudRight:HudRight;
	
	private var mBackground:BGPlay;
	private var mTime:TimePlay;
	private var mScore:Score;
	private var mBoard:Board;
	private var mOneTouch:OneTouch;
	private var mControl:GameControl;
	
	
	public function new() 
	{
		super();
		init();

	}
	private function init():Void
	{
		mBackground = new BGPlay();
		this.addChild(mBackground);
				
		mScore = new Score();
		this.addChild(mScore);
		
		mTime = new TimePlay(BOARD_X, BOARD_Y + 1064);
		this.addChild(mTime);
				
		mHudRight = new HudRight();
		mHudRight.x = HUDRIGHT_X;
		mHudRight.y = HUD_Y;
		this.addChild(mHudRight);
						
		mBoard = new Board();
		mBoard.x = BOARD_X;
		mBoard.y = BOARD_Y;
		this.addChild(mBoard);
				
		mControl = new GameControl();
		this.addChild(mControl);
		
		mHudLeft = new HudLeft();
		mHudLeft.x = HUDLEFT_X;
		mHudLeft.y = HUD_Y;
		this.addChild(mHudLeft);
		
		mOneTouch = new OneTouch();
		mOneTouch.x = BOARD_X;
		mOneTouch.y = BOARD_Y;
		this.addChild(mOneTouch);
		
	}
	public function gameLoop(e:Event):Void
	{
		if (Game.data.playerData.mDTingame.stateGame == DTingame.STATE_END) 
		{			
			Game.displayManager.toScreen(ScreenID.HOME);
			Game.displayManager.toScreen(ScreenID.POPUP_STA_PVE);
			this.removeEventListener(Event.ENTER_FRAME, gameLoop);
		}
	}
	public function onEnter()
	{		
		mBoard.onEnter();
		mHudLeft.onEnter();
		mHudRight.onEnter();
		mBackground.onEnter();
		mScore.onEnter();
		mTime.onEnter();	
		mOneTouch.onEnter();
		mControl.onEnter();
		
		var _countdown:CountDown = new CountDown();
		this.addChild(_countdown);		
		
		this.addEventListener(Event.ENTER_FRAME, gameLoop);
	}
	public function onExit()
	{
		this.removeEventListener(Event.ENTER_FRAME, gameLoop);
		//this.removeChild(mBoard);
		mBoard.onExit();
		//this.removeChild(mHudLeft);
		mHudLeft.onExit();
		//this.removeChild(mHudRight);
		mHudRight.onExit();
		//this.removeChild(mBackground);
		mBackground.onExit();
		//this.removeChild(mScore);
		this.mScore.onExit();
		//this.removeChild(mTime);	
		this.mTime.onExit();	
		//this.removeChild(mOneTouch);
		this.mOneTouch.onExit();
		mControl.onExit();
	}
}