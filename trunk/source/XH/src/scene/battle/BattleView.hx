package scene.battle;
import core.display.ex.SimpleButton;
import core.display.scene.*;
import core.display.screen.ScreenID;
import core.resource.Defines;
import game.tnk.Game;
import openfl.events.MouseEvent;
import openfl.display.Sprite;
import openfl.events.Event;

/**
 * ...
 * @author KhanhTN
 */
class BattleView extends SceneView
{
	private var mBg:Sprite;
	
	private var btnBack:SimpleButton;
	
	public function new() 
	{
		super();
		//this.addEventListener(Event.ENTER_FRAME, gameLoop);
		// init
		init();
	}
	
	private function init():Void 
	{
		// fill background
		mBg = Game.resource.getSprite(Defines.GFX_BATTLES_BG);
		this.addChild(mBg);
		// btn
		btnBack = new SimpleButton();
		btnBack.setDisplay(Game.resource.getSprite(Defines.GFX_BTN_BACK));
		btnBack.x = 50;
		btnBack.y = 50;
		btnBack.addEventListener(MouseEvent.CLICK, onBack);		
		this.addChild(btnBack);
	}	
	
	private function gameLoop(e:Event):Void 
	{
	}
	/**
	 * 
	 * @param	e
	 */
	private function onBack(e:Event):Void 
	{		
		Game.displayManager.toScreen(ScreenID.HOME);
	}
	
	
}