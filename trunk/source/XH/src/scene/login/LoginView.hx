package scene.login;
import core.display.ex.Lable;
import core.display.ex.SimpleButton;
import core.display.scene.*;
import core.display.screen.ScreenID;
import core.resource.Defines;
import core.util.Log;
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

/**
 * ...
 * @author anhtinh
 */
class LoginView extends SceneView
{

	private var testBtn : Sprite = new Sprite();
	private var loginBtn : SimpleButton = new SimpleButton();
	
	private var mNoteText : Lable;
	private var testInfoTf : TextField = new TextField();
	private var nameInputTf : TextField = new TextField();
	
	public function new() 
	{
		super();
		
		Log.info("new loginview");
		testBtn.addChild(new Bitmap(Assets.getBitmapData("img/btn.png")));
		testBtn.buttonMode =  true;
		testBtn.x = 120;
		testBtn.y = 250;
		this.addChild(testBtn);		
		testBtn.addEventListener(MouseEvent.CLICK, onClick);
		
		// note
		mNoteText = new Lable();
		mNoteText.setFont(30, 0x000000);
		mNoteText.setSysTextInfo(10, 10, "loading...");
        this.addChild(mNoteText);
		//
		
		nameInputTf.width = 200;
		nameInputTf.height = 30;
		nameInputTf.x = 100;
		nameInputTf.y = 100;
		nameInputTf.multiline =  false;
		nameInputTf.type = TextFieldType.INPUT;
		nameInputTf.border =  true;
		nameInputTf.background =  true;
		nameInputTf.backgroundColor =  0xff9292;
		nameInputTf.maxChars = 12;
		var textFM:TextFormat;
		var pFont:Font = Assets.getFont("img/fonts/arial.ttf");
		textFM = new TextFormat();
		textFM.size = 25;
		textFM.font = pFont.fontName;		
		nameInputTf.text = "LoginName";
		nameInputTf.setTextFormat(textFM);
		this.addChild(nameInputTf);
		//
		loginBtn = new SimpleButton();
		loginBtn.setDisplay(Game.resource.getSprite(Defines.GFX_BTN_SINGLE));
		loginBtn.x = 100;
		loginBtn.y = 400;
		loginBtn.addEventListener(MouseEvent.CLICK, onLogin);
		this.addChild(loginBtn);
		
		// TEST
	}
	
	private function onLogin(e:Event):Void 
	{
		Game.displayManager.toScreen(ScreenID.HOME);
	}
	
	
	private function onClick(e:Event):Void 
	{
		Game.displayManager.toScreen(ScreenID.HOME);
	}
	
	//public function getRegisterName() : String
	//{
		//return nameInputTf.text;
	//}
}