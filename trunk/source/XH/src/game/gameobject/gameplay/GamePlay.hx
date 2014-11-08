package game.gameobject.gameplay;

import core.resource.Defines;
import core.resource.ResourceManager;
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
	public static var Board_X = 110;
	public static var Board_Y = 160;
	
	public static var HUD_Y = 210;
	public static var HUDLEFT_X = 0;
	public static var HUDRIGHT_X = 443;
	
	private var mHudLeft:HudLeft;
	private var mHudRight:HudRight;
	private var mBoder:Sprite;
	
	private var mBackground:Background;
	private var mBoard:Board;
	
	public function new() 
	{
		super();
		init();

		
	}
	private function init():Void
	{
		mBackground = new Background();
		mBackground.addEventListener(MouseEvent.MOUSE_DOWN, onCycle);
		this.addChild(mBackground);
		
		mHudRight = new HudRight();
		mHudRight.x = HUDRIGHT_X;
		mHudRight.y = HUD_Y;
		this.addChild(mHudRight);
		
		mHudLeft = new HudLeft();
		mHudLeft.x = HUDLEFT_X;
		mHudLeft.y = HUD_Y;
		this.addChild(mHudLeft);
		
		mBoder = Game.resource.getSprite(Defines.GFX_BOARD_BODER);
		mBackground.addChild(mBoder);
		
		mBoard = new Board();
		mBoard.x = Board_X;
		mBoard.y = Board_Y;
		this.addChild(mBoard);
		
	}
	public function onCycle(e:Event):Void
	{
		Game.data.playerData.mDTingame.isCycle = true;
	}
}