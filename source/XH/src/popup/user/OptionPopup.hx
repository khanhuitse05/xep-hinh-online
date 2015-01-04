package popup.user;

import core.display.ex.Lable;
import core.display.ex.SimpleButton;
import core.display.popup.PopupExBase;
import core.resource.Defines;
import game.const.cache.ExploringCache;
import game.network.packet.request.login.RepSignup;
import game.tnk.Game;
import openfl.text.TextField;
import openfl.display.Sprite;
import openfl.events.MouseEvent;
import openfl.events.Event;
import openfl.text.TextFormat;
import openfl.text.TextFieldType;

/**
 * ...
 * @author KhanhTN
 */
class OptionPopup extends PopupExBase
{
	
	public static var BTN_X 		= 0;
	public static var BTN_Y 		= 255;
	
	public static var POS_X 		= -160;
	public static var ONE_Y 		= -102;
	public static var SWIPE_Y 		= -57;
	public static var MUSIC_Y 		= 98;
	
	private var btnOk:SimpleButton;
	
	private var pControl:Sprite;
	private var btnOneTouch:Sprite;
	private var btnSwipe:Sprite;
	private var btnMusic:Sprite;
	private var pMusic:Sprite;
	
	public function new(showDarkBg : Bool = true) 
	{
		super(showDarkBg);
	}
	
	override public function init() 
    {
		var _line:Sprite = Game.resource.getSprite(Defines.GFX_OPTION_BG);
		_line.x = 0 - _line.width / 2;
		_line.y = 0 - _line.height / 2;
		pane.addChild(_line);
		
        btnOk = new SimpleButton();
		btnOk.setDisplay(Game.resource.getSprite(Defines.GFX_BTN_OK));
		btnOk.x = BTN_X;
		btnOk.y = BTN_Y;	
		btnOk.setMouseClick(onClose);
		pane.addChild(btnOk);
		
		
		btnOneTouch = Game.resource.getSprite(Defines.GFX_UN_CHECK);
		btnOneTouch.x = POS_X;
		btnOneTouch.y = ONE_Y;
		btnOneTouch.addEventListener(MouseEvent.CLICK, onOneTouch);
		pane.addChild(btnOneTouch);
		
		btnSwipe = Game.resource.getSprite(Defines.GFX_UN_CHECK);
		btnSwipe.x = POS_X;
		btnSwipe.y = SWIPE_Y;
		btnSwipe.addEventListener(MouseEvent.CLICK, onSwipe);
		pane.addChild(btnSwipe);
		
		btnMusic = Game.resource.getSprite(Defines.GFX_UN_CHECK);
		btnMusic.x = POS_X;
		btnMusic.y = MUSIC_Y;
		btnMusic.addEventListener(MouseEvent.CLICK, onMusic);
		pane.addChild(btnMusic);
		
		pControl = Game.resource.getSprite(Defines.GFX_CHECK);
		pControl.x = POS_X;
		if (Game.data.playerData.dataOption.onetouch) 
		{			
			pControl.y = ONE_Y;
		}else 
		{
			pControl.y = SWIPE_Y;
		}
		pane.addChild(pControl);
		
		pMusic = Game.resource.getSprite(Defines.GFX_CHECK);
		btnMusic.addChild(pMusic);
		
		
    }
	/**
	 * 
	 * @param	e
	 */
	override private function onHide(e:Event):Void 
    {
    }
	/**
	 * 
	 * @param	e
	 */
	private function onClose(e:MouseEvent):Void 
	{
		transitionOut();
	}
	/**
	 * 
	 * @param	e
	 */
	private function onOneTouch(e:MouseEvent):Void 
	{
		pControl.y = ONE_Y;		
		Game.data.playerData.dataOption.onetouch = true;
	}
	/**
	 * 
	 * @param	Event
	 */
	private function onSwipe(e: MouseEvent)
	{
		pControl.y = SWIPE_Y;
		Game.data.playerData.dataOption.onetouch = false;
	}
	/**
	 * 
	 * @param	Event
	 */
	private function onMusic(e: MouseEvent)
	{
		pMusic.visible = !pMusic.visible;
		Game.data.playerData.dataOption.music = pMusic.visible;
	}
}