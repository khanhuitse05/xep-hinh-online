package scene.choseskill;
import core.display.ex.Lable;
import core.display.ex.SimpleButton;
import core.display.scene.*;
import core.display.screen.ScreenID;
import core.resource.Defines;
import core.util.Log;
import game.gameobject.background.Background;
import game.gameobject.chooseskill.SkillScroll;
import game.gameobject.chooseskill.SkillTop;
import game.tnk.Game;
import openfl.Assets;
import openfl.display.Bitmap;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.events.MouseEvent;
import openfl.text.Font;
import openfl.text.TextField;
import openfl.text.TextFieldType;
import openfl.text.TextFormat;
import scene.hud.HudTop;

/**
 * ...
 * @author KhanhTN
 */
class ChoseSkillView extends SceneView
{

	
	public static var RESULT_X 		= 0;
	public static var RESULT_Y 		= 100;
	
	public static var SCROLL_X 		= 0;
	public static var SCROLL_Y 		= 380;
	private var mScroll:SkillScroll;
	private var mResult:SkillTop;
	
	private var mode:Int;
	
	public function new() 
	{
		super();				
		Game.hudBottom.setPosBack(Game.data.playerData.dataSkill.mode);
		init();
        this.addEventListener(Event.ENTER_FRAME, gameLoop);
	}
	private function init():Void 
	{
		// fill background
		//var _bg:Sprite = Game.resource.getSprite(Defines.GFX_UI_SKILL_BG);
		var _bg:Background = new Background();
		this.addChild(_bg);
		// scroll
		mScroll = new SkillScroll();
		mScroll.x = SCROLL_X;
		mScroll.y = SCROLL_Y;
		this.addChild(mScroll);
		// result
		mResult = new SkillTop();
		mResult.x = RESULT_X;
		mResult.y = RESULT_Y;
		this.addChild(mResult);
	}
	/**
	 * 
	 * @param	e
	 */
	private function gameLoop(e:Event):Void 
	{
		if (Game.data.playerData.dataSkill.isUpdateTop == true) 
		{			
			mResult.update();
		}
	}
	/**
	 * 
	 */
    override public function onEnter() : Void
    {
		mode = Game.data.playerData.dataSkill.mode;
		this.addChild(Game.hudTop);
		Game.hudTop.setPosBack(SceneView.HOME);
		Game.hudTop.update();
		this.addChild(Game.hudBottom);
		Game.data.playerData.dataSkill.refreshSkill();
		mResult.update();
    }
	override public function onExit() : Void
    {  
        this.removeChild(Game.hudTop);
        this.removeChild(Game.hudBottom);
    }
}