package scene.login;
import core.display.scene.*;
import core.util.Log;
import openfl.Assets;
import openfl.display.Bitmap;
import openfl.display.DisplayObject;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.events.MouseEvent;
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
	private var loginBtn : Sprite = new Sprite();
	
	private var testTf : TextField = new TextField();
	private var testInfoTf : TextField = new TextField();
	private var nameInputTf : TextField = new TextField();
	
	public function new() 
	{
		super();
		
		Log.info("new loginview");
		testBtn.addChild(new Bitmap(Assets.getBitmapData("img/btn.png")));
		testBtn.buttonMode =  true;
		testBtn.x = 120;
		testBtn.y = 120;
		this.addChild(testBtn);		
		testBtn.addEventListener(MouseEvent.CLICK, onClick);
		
		var textFM:TextFormat;
		testInfoTf.x = 70;
		testInfoTf.y = 60;
		testInfoTf.width = 200;
		textFM = new TextFormat();
		textFM.size = 25;
		testInfoTf.text = "Info";
		
		testInfoTf.setTextFormat(textFM);
		this.addChild(testInfoTf);
		//
		
		nameInputTf.width = 200;
		nameInputTf.height = 30;
		nameInputTf.x = 100;
		nameInputTf.y = 100;
		nameInputTf.multiline =  false;
		nameInputTf.type = TextFieldType.INPUT;
		nameInputTf.border =  true;
		nameInputTf.background =  true;
		nameInputTf.backgroundColor =  0xff929292;
		nameInputTf.maxChars = 12;
		textFM = new TextFormat();
		textFM.size = 25;
		nameInputTf.text = "LoginName";
		nameInputTf.setTextFormat(textFM);
		this.addChild(nameInputTf);
		//
		loginBtn.addChild(new Bitmap(Assets.getBitmapData("img/btn.png")));
		loginBtn.buttonMode = true;
		loginBtn.x = 220;
		loginBtn.y = 220 ;
		loginBtn.addEventListener(MouseEvent.CLICK, onLogin);
		this.addChild(loginBtn);
		
		// TEST
	}
	
	private function onLogin(e:Event):Void 
	{
		
	}
	
	
	private function onClick(e:Event):Void 
	{
		//Game.displayManager.toScreen(ScreenID.HOME);
	}
	
	//public function getRegisterName() : String
	//{
		//return nameInputTf.text;
	//}
}