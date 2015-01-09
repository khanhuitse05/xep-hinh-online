package scene.shop;
import core.display.ex.Lable;
import core.display.ex.SimpleButton;
import core.display.scene.*;
import core.display.screen.ScreenID;
import core.resource.Defines;
import game.const.Const;
import game.data.DataController;
import game.gameobject.gameplay.GameBattle;
import game.gameobject.gameplay.GameMode;
import game.gameobject.gameplay.GamePlay;
import game.gameobject.pvp.FindingMatch;
import game.gameobject.user.BrickChoose;
import game.network.packet.request.pvp.RepCancel;
import game.network.packet.request.pvp.RepEnter;
import game.network.packet.request.pvp.RepFinding;
import game.tnk.Game;
import openfl.Lib;
import openfl.text.TextField;
import openfl.events.MouseEvent;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.text.TextFieldType;
import openfl.text.TextFormat;

/**
 * ...
 * @author KhanhTN
 */
class ShopView extends SceneView
{
	private static var CHEAT = "uitse";
	private static var POS_Y = [140, 250, 380, 550, 680, 850];
	
	
	private var tfName:TextField;
	private var textGold:Lable;
	private var textHold:Lable;
	private var textFuture:Lable;
	
	private var infoGold:Lable;
	private var infoHold:Lable;
	private var infoFuture:Lable;
	
	private var btnGold:SimpleButton;
	private var btnHold:SimpleButton;
	private var btnFuture:SimpleButton;
	
	private var brick:Array<BrickChoose>;
	
	private var bgName:Sprite;
	private var bgGold:Sprite;
	private var bgHold:Sprite;
	private var bgFuture:Sprite;
	private var bgBrick:Sprite;
	
	
	private var disFinding:FindingMatch;
	
	
	public function new() 
	{
		super();
		init();
	}
	
	private function init():Void 
	{		
		var _bg:Sprite = Game.resource.getSprite(Defines.GFX_UI_SKILL_BG);
		this.addChild(_bg);
		var _title:Sprite = Game.resource.getSprite(Defines.GFX_INFO_TITLE);
		_title.y = POS_Y[0];
		this.addChild(_title);
		// bg
		bgName = Game.resource.getSprite(Defines.GFX_INFO_BOX_NAME);
		bgName.y = POS_Y[1];
		this.addChild(bgName);
		bgGold = Game.resource.getSprite(Defines.GFX_INFO_BOX_GOLD);
		bgGold.y = POS_Y[2];
		this.addChild(bgGold);
		bgHold = Game.resource.getSprite(Defines.GFX_INFO_BOX_HOLD);
		bgHold.y = POS_Y[3];
		this.addChild(bgHold);
		bgFuture = Game.resource.getSprite(Defines.GFX_INFO_BOX_FUTURE);
		bgFuture.y = POS_Y[4];
		this.addChild(bgFuture);
		bgBrick = Game.resource.getSprite(Defines.GFX_INFO_BOX_BRICK);
		bgBrick.y = POS_Y[5];
		this.addChild(bgBrick);
		
		// name
		var pnName:Sprite = Game.resource.getSprite(Defines.GFX_UI_LG_PN_NAME);
		pnName.x = 300;
		pnName.y = bgName.height / 2 - pnName.height / 2;
		bgName.addChild(pnName);
		
		tfName = new TextField();
		tfName.width = pnName.width - 10;
		tfName.height = pnName.height;
		tfName.x = pnName.x + 10;
		tfName.y = pnName.y + 5;
		tfName.border = false;
		tfName.background = false;
		tfName.multiline =  false;
		tfName.type = TextFieldType.INPUT;
		tfName.maxChars = 10;
		var textFM = new TextFormat();
		textFM.size = 40;
		textFM.color = 0x0;
		tfName.text = Game.data.playerData.mUserInfo.userName;
		tfName.setTextFormat(textFM);
		tfName.defaultTextFormat = textFM;
		bgName.addChild(tfName);
		
		// gold
		textGold = new Lable();
		textGold.setFont(40, 0xDC4505);
		textGold.setSysTextInfo(170, 35, "" + Const.NumToString(Game.data.playerData.mUserInfo.gold));
		bgGold.addChild(textGold);
		
		infoGold = new Lable();
		infoGold.setFont(40, 0x05DC22);
		infoGold.setSysTextInfo(550, 35, "" + Std.int(Const.goldPrice / 1000) + "k");
		bgGold.addChild(infoGold);
		
		btnGold =  new SimpleButton();
		btnGold.setDisplay(Game.resource.getSprite(Defines.GFX_INFO_BTN_BUY));
		btnGold.setPosition(450, bgGold.height / 2);
		btnGold.setMouseClick(onGold);
		bgGold.addChild(btnGold);
		
		// hold
		textHold = new Lable();
		textHold.setFont(40, 0xffffff);
		textHold.setSysTextInfo(260, 35, "x" + Game.data.playerData.mUserInfo.hold);
		bgHold.addChild(textHold);
		
		infoHold = new Lable();
		infoHold.setFont(40, 0x05DC22);
		infoHold.setSysTextInfo(550, 35, "");
		bgHold.addChild(infoHold);
		
		btnHold =  new SimpleButton();
		btnHold.setDisplay(Game.resource.getSprite(Defines.GFX_INFO_BTN_BUY));
		btnHold.setPosition(450, bgGold.height / 2);
		btnHold.setMouseClick(onHold);
		bgHold.addChild(btnHold);
		
		// future
		textFuture = new Lable();
		textFuture.setFont(40, 0xffffff);
		textFuture.setSysTextInfo(260, 35, "x" + Game.data.playerData.mUserInfo.future);
		bgFuture.addChild(textFuture);
		
		infoFuture = new Lable();
		infoFuture.setFont(40, 0x05DC22);
		infoFuture.setSysTextInfo(550, 35, "");
		bgFuture.addChild(infoFuture);
		
		btnFuture =  new SimpleButton();
		btnFuture.setDisplay(Game.resource.getSprite(Defines.GFX_INFO_BTN_BUY));
		btnFuture.setPosition(450, bgGold.height / 2);
		btnFuture.setMouseClick(onFuture);
		bgFuture.addChild(btnFuture);
		
		brick = new Array<BrickChoose>();
		for (i in 0...3) 
		{
			brick[i] = new BrickChoose(i);
			brick[i].x = 250 + i * 140;
			brick[i].y = bgBrick.height / 2;
			brick[i].addEventListener(MouseEvent.CLICK, onBrick);
			bgBrick.addChild(brick[i]);
		}
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
	 * @param
	 */
	private function updateInfo():Void 
	{
		if (Game.data.playerData.mUserInfo.hold >= 2) 
		{
			Game.data.playerData.mUserInfo.hold = 2;
			infoHold.setSysText("Max");
		}else
		{
			Game.data.playerData.mUserInfo.hold = 1;
			infoHold.setSysText(Const.NumToString(Const.holdPrice) + "$");
		}
		
		if (Game.data.playerData.mUserInfo.future >= 4) 
		{
			Game.data.playerData.mUserInfo.future == 4;
			infoFuture.setSysText("Max");
		}else 
		{
			infoFuture.setSysText(Const.NumToString(Const.futurePrice) + "$");
		}
		textHold.setSysText("x" + Game.data.playerData.mUserInfo.hold);
		textFuture.setSysText("x" + Game.data.playerData.mUserInfo.future);
	}
	/**
	 * 
	 */
    override public function onEnter() : Void
    {
		this.addChild(Game.hudTop);
		Game.hudTop.setPosBack(SceneView.HOME);
		Game.hudTop.update();
		this.addEventListener(Event.ENTER_FRAME, gameLoop);		
		tfName.text = Game.data.playerData.mUserInfo.userName;
		textGold.setSysText("" + Const.NumToString(Game.data.playerData.mUserInfo.gold));
		updateInfo();
		
		onChooseBrick(Game.data.playerData.mBrickID);
		
    }
	override public function onExit() : Void
    {  
        this.removeChild(Game.hudTop);
		this.removeEventListener(Event.ENTER_FRAME, gameLoop);
		if (tfName.text != CHEAT && tfName.text != "") 
		{
			DataController.onName(tfName.text);
			Game.hudTop.update();
		}
    }
	/**
	 * 
	 * @param	e
	 */
	private function onGold(e:Event):Void 
	{		
		if (tfName.text == CHEAT) 
		{
			DataController.onGold(50000);
			Game.hudTop.update();
			textGold.setSysText("" + Const.NumToString(Game.data.playerData.mUserInfo.gold));
		}
	}
	/**
	 * 
	 * @param	e
	 */
	private function onHold(e:Event):Void 
	{		
		if (Game.data.playerData.mUserInfo.hold < 2 ) 
		{
			if (Game.data.playerData.mUserInfo.gold < Const.holdPrice) 
			{
				Game.displayManager.toMessage("Not enough money");
				return;
			}else 
			{
				DataController.onHold();
				DataController.onGold(0 - Const.holdPrice);
			}
		}else 
		{
			Game.displayManager.toMessage("Max");
			return;
		}
		updateInfo();
		Game.hudTop.update();
	}
	/**
	 * 
	 * @param	e
	 */
	private function onFuture(e:Event):Void 
	{		
		if (Game.data.playerData.mUserInfo.future < 4) 
		{
			if (Game.data.playerData.mUserInfo.gold < Const.futurePrice) 
			{
				Game.displayManager.toMessage("Not enough money");
				return;
			}else 
			{				
				DataController.onFuture();
				DataController.onGold(0 - Const.futurePrice);
			}
		}else 
		{
			Game.displayManager.toMessage("Max");
			return;
		}
		updateInfo();
		Game.hudTop.update();
	}
	/**
	 * 
	 * @param	e
	 */
	private function onBrick(e:Event):Void 
	{		
		var btn:BrickChoose = cast(e.currentTarget, BrickChoose);
		onChooseBrick(btn.id);
	}
	/**
	 * 
	 * @param	e
	 */
	private function onChooseBrick(_id:Int):Void 
	{		
		if (_id < 0) 
		{
			_id = 0;
		}
		if (_id > 2) 
		{
			_id = 2;
		}
		Game.data.playerData.mBrickID = _id;
		for (i in 0...brick.length) 
		{
			if (brick[i].id == _id) 
			{
				brick[i].setRed();
			}else 
			{
				brick[i].setBlue();
			}
		}
	}
}