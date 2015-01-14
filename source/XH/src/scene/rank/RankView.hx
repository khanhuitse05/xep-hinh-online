package scene.rank;

import core.display.ex.SimpleButton;
import core.display.scene.SceneView;
import game.gameobject.background.Background;
import game.gameobject.rank.RankScroll;
import motion.Actuate;
import openfl.events.MouseEvent;
import openfl.display.Sprite;
import openfl.events.Event;
import core.resource.Defines;
import game.tnk.Game;

/**
 * ...
 * @author KhanhTN
 */
class RankView extends SceneView
{	
	public static var NORMAL = 0;	
	public static var EFFECT = 1;
	
	public static var ELO = 0;
	public static var SCORE = 1;
	
	public static var TITLE_X 		= 0;
	public static var TITLE_Y 		= 100;
	
	public static var PAGE_X 		= 0;
	public static var PAGE_Y 		= 280;
	
	private var state:Int;
	private var pos:Int;
	
	private var mPage:Sprite;
	
	private var mButton:Sprite;
	
	private var left:Array<Sprite>;
	private var right:Array<Sprite>;
	
	private var mScroll:Array<RankScroll>;
	
	public function new() 
	{
		super();
		init();
		initPage();
		initButton();
	}
	private function init():Void 
	{
		// fill background
		//var _bg:Sprite = Game.resource.getSprite(Defines.GFX_BG_RANK_CUBE_MATRI);
		var _bg:Background = new Background();
		this.addChild(_bg);
		
		// result
		var _title:Sprite = Game.resource.getSprite(Defines.GFX_UI_TITLE_RANK);
		_title.x = TITLE_X;
		_title.y = TITLE_Y;
		this.addChild(_title);
	}
	private function initButton():Void 
	{
		mButton = new Sprite();
		mButton.x = Game.GAME_WIDTH / 2;
		mButton.y = 100 + TITLE_Y;
		this.addChild(mButton);		
		
		
		left = new Array<Sprite>();
		right = new Array<Sprite>();
		//
		left[0] = Game.resource.getSprite(Defines.GFX_RANK_ELO_W);
		left[0].x = -300;
		mButton.addChild(left[0]);
		left[1] = Game.resource.getSprite(Defines.GFX_RANK_ELO_Y);
		left[0].addChild(left[1]);		
		left[0].addEventListener(MouseEvent.CLICK, onLeft);
		//
		right[0] = Game.resource.getSprite(Defines.GFX_RANK_SCORE_W);
		right[0].x = -27;
		mButton.addChild(right[0]);
		right[1] = Game.resource.getSprite(Defines.GFX_RANK_SCORE_Y);
		right[0].addChild(right[1]);		
		right[0].addEventListener(MouseEvent.CLICK, onRight);
	}
	private function initPage():Void
	{
		mPage = new Sprite();
		mPage.x = PAGE_X;
		mPage.y = PAGE_Y;
		this.addChild(mPage);
		
		mScroll = new Array<RankScroll>();
		for (i in 0...2) 
		{			
			mScroll[i] = new RankScroll(i);
			mPage.addChild(mScroll[i]);
		}		
		
	}
	/**
	 * 
	 * @param	e
	 */
	private function gameLoop(e:Event):Void 
	{
		
	}
	private function onLeft(e:MouseEvent):Void 
	{
		goLeft();
	}
	private function onRight(e:MouseEvent):Void 
	{
		goRight();
	}
	private function goLeft():Void 
	{
		left[1].visible = true;
		right[1].visible = false;	
		
		mScroll[0].visible = true;
		mScroll[1].visible = false;
		pos = ELO;
	}
	private function goRight():Void 
	{
		left[1].visible = false;
		right[1].visible = true;
		
		mScroll[0].visible = false;
		mScroll[1].visible = true;
		pos = SCORE;
	}
	
	/**
	 * 
	 */
    public function onRefresh() : Void
    {
		for (i in 0...2) 
		{
			
			mScroll[i].onRefresh();
		}
		goLeft();
	}
	/**
	 * 
	 */
    override public function onEnter() : Void
    {
        this.addEventListener(Event.ENTER_FRAME, gameLoop);
		this.addChild(Game.hudTop);
		Game.hudTop.setPosBack(SceneView.HOME);
		Game.hudTop.update();
		
		onRefresh();
    }
	
	override public function onExit() : Void
    {  
        this.addEventListener(Event.ENTER_FRAME, gameLoop);
        this.removeChild(Game.hudTop);
    }
}