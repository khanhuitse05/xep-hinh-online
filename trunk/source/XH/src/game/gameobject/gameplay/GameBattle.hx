package game.gameobject.gameplay;

import core.display.screen.ScreenID;
import core.resource.Defines;
import game.data.gameplay.DTingame;
import game.gameobject.board.Board;
import game.gameobject.board.Enemy;
import game.gameobject.board.Mine;
import game.gameobject.brick.Border;
import game.tnk.Game;
import openfl.display.Sprite;
import openfl.events.Event;


/**
 * ...
 * @author KhanhTN
 */
class GameBattle extends Sprite
{

	public static var BOARD_X = 230;
	public static var BOARD_Y = 142;
	
	public static var ENEMY_X = 10;
	public static var ENEMY_Y = 755;
	
	public static var HUD_Y = 150;
	public static var HUDLEFT_X = 5;
	public static var HUDRIGHT_X = 111;
	
	private var mHudLeft:HudLeft;
	private var mHudRight:HudRight;
	
	private var mBackground:BGPlay;
	private var mTime:TimePlay;
	private var mScore:Score;
	private var mBoard:Mine;
	private var mEnemy:Enemy;
	// show vituar block
	private var mOneTouch:OneTouch;
	// Control
	private var mControl:GameControl;
	
	
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
				
		mScore = new Score();
		this.addChild(mScore);
		mScore.setPos(200, 30);
		
		mTime = new TimePlay(BOARD_X, BOARD_Y + 1064, false);
		this.addChild(mTime);
		
		mHudRight = new HudRight(true);
		mHudRight.x = HUDRIGHT_X;
		mHudRight.y = HUD_Y;
		this.addChild(mHudRight);
						
		mBoard = new Mine();
		mBoard.x = BOARD_X;
		mBoard.y = BOARD_Y;
		this.addChild(mBoard);
		mEnemy = new Enemy();
		mEnemy.x = ENEMY_X;
		mEnemy.y = ENEMY_Y;		
		mEnemy.scaleX = 200 / 480;
		mEnemy.scaleY = 200 / 480;
		this.addChild(mEnemy);
		
		var _countdown:CountDown = new CountDown();
		this.addChild(_countdown);
		
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
		this.mBackground.onExit();
		this.mScore.onExit();
		this.removeChild(mScore);
		this.mTime.onExit();
		this.removeChild(mTime);
	}
	
}