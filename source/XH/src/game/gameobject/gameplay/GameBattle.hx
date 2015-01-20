package game.gameobject.gameplay;

import core.display.ex.ExSprite;
import core.display.screen.ScreenID;
import core.resource.Defines;
import core.sound.Sound;
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
class GameBattle extends ExSprite
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
		mScore.setPos(80, 25);
		
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
	}
	public function onEnter()
	{		
		mBoard.onEnter();
		mEnemy.onEnter();
		mHudLeft.onEnter();
		mHudRight.onEnter();
		mBackground.onEnter();
		mScore.onEnter();
		mTime.onEnter();	
		mOneTouch.onEnter();
		mControl.onEnter();
		
		Sound.GetSound(Sound.GAME_BEGIN).Play();
		var _countdown:CountDown = new CountDown();
		this.addChild(_countdown);		
		
		this.addEventListener(Event.ENTER_FRAME, gameLoop);
	}
	public function onExit()
	{
		this.removeEventListener(Event.ENTER_FRAME, gameLoop);
		mBoard.onExit();
		mEnemy.onExit();
		mHudLeft.onExit();
		mHudRight.onExit();
		mBackground.onExit();
		mScore.onExit();
		mTime.onExit();	
		mOneTouch.onExit();
		mControl.onExit();
	
	}
	
}