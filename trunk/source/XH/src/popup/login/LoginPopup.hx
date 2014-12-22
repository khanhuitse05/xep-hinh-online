package popup.login ;
import core.display.ex.Lable;
import core.display.ex.SimpleButton;
import core.display.popup.PopupBase;
import core.resource.Defines;
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
class LoginPopup extends PopupBase
{
	
	public static var BTN_X 		= 0;
	public static var BTN_Y 		= 30;
	
	private var btnSignUp:SimpleButton;
	private var btnFacebook:SimpleButton;
	private var mTitle:Sprite;
	private var pnName:Sprite;
	private var tfName:TextField;
	
	public function new(showDarkBg : Bool = true) 
	{
		super(showDarkBg);
	}
	
	override public function init() 
    {
		mTitle = Game.resource.getSprite(Defines.GFX_UI_LG_PN_NAME);
		mTitle.x = 0 - mTitle.width / 2;
		mTitle.y = -30;
		mBg.addChild(mTitle);
		
        btnSignUp = new SimpleButton();
		btnSignUp.setDisplay(Game.resource.getSprite(Defines.GFX_UI_LG_SINGUP));
		btnSignUp.x = 0;
		btnSignUp.y = BTN_Y;
		btnSignUp.addEventListener(MouseEvent.CLICK, onSignUp);		
		mBg.addChild(btnSignUp);
		
		btnFacebook = new SimpleButton();
		btnFacebook.setDisplay(Game.resource.getSprite(Defines.GFX_UI_LG_FACEBOOK));
		btnFacebook.x = -200;
		btnFacebook.y = 250;
		btnFacebook.addEventListener(MouseEvent.CLICK, onSignUp);		
		mBg.addChild(btnFacebook);
		
		pnName = Game.resource.getSprite(Defines.GFX_UI_LG_PN_NAME);
		pnName.x = 0 - pnName.width / 2;
		pnName.y = -30;
		mBg.addChild(pnName);
		
		tfName = new TextField();
		tfName.width = pnName.width - 10;
		tfName.height = pnName.height;
		tfName.x = pnName.x + 10;
		tfName.y = pnName.y;
		tfName.border = false;
		tfName.background = false;
		tfName.multiline =  false;
		tfName.type = TextFieldType.INPUT;
		tfName.maxChars = 13;
		var textFM = new TextFormat();
		textFM.size = 25;
		textFM.color = 0x5E5E5E;
		tfName.text = "User Name";
		tfName.setTextFormat(textFM);
		tfName.defaultTextFormat = textFM;
		tfName.addEventListener(MouseEvent.MOUSE_DOWN, onDownName);
		mBg.addChild(tfName);
		
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
	private function onSignUp(e:Event):Void 
	{		
		transitionOut();
	}
	/**
	 * 
	 * @param	Event
	 */
	private function onDownName(Event: MouseEvent)
	{
		tfName.removeEventListener(MouseEvent.MOUSE_DOWN, onDownName);
		tfName.textColor = 0x0;
		tfName.text = "";
	}
}