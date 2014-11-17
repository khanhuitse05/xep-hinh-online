package scene.home;
import core.display.ex.SimpleButton;
import core.display.scene.*;
import core.display.screen.ScreenID;
import core.resource.Defines;
import core.resource.ResourceID;
import core.sprites.Animx;
import game.gameobject.background.Background;
import game.tnk.Game;
import openfl.events.MouseEvent;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.text.TextFieldAutoSize;
import openfl.text.TextFormatAlign;

/**
 * ...
 * @author KhanhTN
 */
class HomeView extends SceneView
{
	public static var BTN_X 		= 360;
	public static var BTN_Y 		= 400;
	public static var BTN_OFFSET 	= 160;
	
	private var mBg:Background;
	private var mTitle:Sprite;
	
	private var btnSingle:SimpleButton;
	private var btnBattle:SimpleButton;
	private var btnFriend:SimpleButton;
	private var btnMission:SimpleButton;
	
	public function new() 
	{
		super();
		//this.addEventListener(Event.ENTER_FRAME, gameLoop);
		// init
		init();
	}
	/**
	 * 
	 */
	private function init():Void 
	{
		// fill background
		mBg = new Background();
		this.addChild(mBg);
		mTitle = Game.resource.getSprite(Defines.GFX_MENU_TITLE);
		mTitle.x = (Game.GAME_WIDTH - mTitle.width) / 2;
		mTitle.y = BTN_Y + BTN_OFFSET * - 1.5;
		this.addChild(mTitle);
		// btn
		// btn single
		btnSingle = new SimpleButton();
		btnSingle.setDisplay(Game.resource.getSprite(Defines.GFX_BTN_SINGLE));
		btnSingle.x = BTN_X;
		btnSingle.y = BTN_Y + BTN_OFFSET * 0;
		btnSingle.addEventListener(MouseEvent.CLICK, onSingle);		
		this.addChild(btnSingle);
		// btn battle
		btnBattle = new SimpleButton();
		btnBattle.setDisplay(Game.resource.getSprite(Defines.GFX_BTN_BATTLES));
		btnBattle.x = BTN_X;
		btnBattle.y = BTN_Y + BTN_OFFSET * 1;
		btnBattle.addEventListener(MouseEvent.CLICK, onBattle);	
		this.addChild(btnBattle);
		// btn friend
		btnFriend = new SimpleButton();
		btnFriend.setDisplay(Game.resource.getSprite(Defines.GFX_BTN_FRIEND));
		btnFriend.x = BTN_X;
		btnFriend.y = BTN_Y + BTN_OFFSET * 2;
		btnFriend.addEventListener(MouseEvent.CLICK, onFriend);	
		this.addChild(btnFriend);
		// btn mission
		btnMission = new SimpleButton();
		btnMission.setDisplay(Game.resource.getSprite(Defines.GFX_BTN_MISSION));
		btnMission.x = BTN_X;
		btnMission.y = BTN_Y + BTN_OFFSET * 3;
		btnMission.addEventListener(MouseEvent.CLICK, onMission);	
		this.addChild(btnMission);
	}	
	/**
	 * 
	 * @param	e
	 */
	private function gameLoop(e:Event):Void 
	{
	}
	/**
	 * 
	 * @param	e
	 */
	private function onSingle(e:Event):Void 
	{		
		Game.displayManager.toScreen(ScreenID.SINGLEPLAY);
	}
	/**
	 * 
	 * @param	e
	 */
	private function onBattle(e:Event):Void 
	{
		Game.displayManager.toScreen(ScreenID.BATTLE);
	}
	/**
	 * 
	 * @param	e
	 */
	private function onFriend(e:Event):Void 
	{
		Game.displayManager.toScreen(ScreenID.FRIENDPLAY);
	}
	/**
	 * 
	 * @param	e
	 */
	private function onMission(e:Event):Void 
	{
		Game.displayManager.toScreen(ScreenID.MISSION);
	}
	
}