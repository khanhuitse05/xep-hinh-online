package scene.highscore;
import core.display.ex.ExSprite;
import core.display.ex.SimpleButton;
import core.display.scene.*;
import core.display.screen.ScreenID;
import core.resource.Defines;
import game.gameobject.background.Background;
import game.gameobject.highscore.HighScoreScroll;
import game.gameobject.hud.BtnPlay;
import game.tnk.Game;
import openfl.events.MouseEvent;
import openfl.display.Sprite;
import openfl.events.Event;

/**
 * ...
 * @author KhanhTN
 */
class HighScoreView extends SceneView
{
	public static var TITLE_X 		= 0;
	public static var TITLE_Y 		= 100;
	
	public static var SCROLL_X 		= 0;
	public static var SCROLL_Y 		= 200;
	
	private var mScroll:HighScoreScroll;
	private var mTitle:Sprite;
	
	private var mBG:ExSprite;
	
	public function new() 
	{
		super();				
		init();
	}
	private function init():Void 
	{
		// fill background
		//var _bg:Sprite = Game.resource.getSprite(Defines.GFX_UI_SKILL_BG);
		var _bg:Background = new Background();
		this.addChild(_bg);
		// scroll
		mBG = new ExSprite();
		this.addChild(mBG);
		
		// result
		mTitle = Game.resource.getSprite(Defines.GFX_HIGHUI_TITLE);
		mTitle.x = TITLE_X;
		mTitle.y = TITLE_Y;
		this.addChild(mTitle);
	}
	private function initRefesh():Void 
	{
		mBG.removeAllAndDelChild();
		mScroll = new HighScoreScroll();
		mScroll.x = SCROLL_X;
		mScroll.y = SCROLL_Y;
		mBG.addChild(mScroll);
	}
	/**
	 * 
	 */
    override public function onEnter() : Void
    {
		this.addChild(Game.hudTop);
		Game.hudTop.setPosBack(SceneView.HOME);
		Game.hudTop.update();
		this.addChild(Game.hudBottom);		
		Game.hudBottom.setPosBack(BtnPlay.CHOOSE_PVE);
		initRefesh();
    }
	
	override public function onExit() : Void
    {  
        this.removeChild(Game.hudTop);
        this.removeChild(Game.hudBottom);
    }
	
}