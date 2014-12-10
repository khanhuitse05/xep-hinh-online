package game.gameobject.gameplay;
import core.resource.Defines;
import game.gameobject.background.Background;
import game.tnk.Game;
import openfl.events.MouseEvent;
import openfl.events.Event;
import openfl.display.Sprite;

/**
 * ...
 * @author KhanhTN
 */
class BGPlay extends Background
{

	private var mBoder:Sprite;
	private var mTime:TimePlay;
	private var mScore:Score;
	
	public function new() 
	{
		super();
		initBG();		
	}
	public function initBG():Void
	{		
		mTime = new TimePlay(120, Game.GAME_HEIGHT - 80, 480, 10);
		this.addChild(mTime);
		
		mScore = new Score();
		this.addChild(mScore);
		
		mBoder = Game.resource.getSprite(Defines.GFX_BOARD_BODER);
		this.addChild(mBoder);
	}
	
	public function onExit()
	{
		this.mScore.onExit();
		this.removeChild(mScore);
		this.mTime.onExit();
		this.removeChild(mTime);
	}
}