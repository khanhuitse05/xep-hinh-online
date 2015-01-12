package scene.battleroom;
import core.display.ex.SimpleButton;
import core.display.scene.*;
import core.display.screen.ScreenID;
import core.resource.Defines;
import game.gameobject.gameplay.GameBattle;
import game.gameobject.gameplay.GameMode;
import game.gameobject.gameplay.GamePlay;
import game.gameobject.pvp.FindingMatch;
import game.network.packet.request.pvp.RepCancel;
import game.network.packet.request.pvp.RepEnter;
import game.network.packet.request.pvp.RepFinding;
import game.network.packet.request.pvp.RespWithFriend;
import game.tnk.Game;
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
class BattleRoomView extends SceneView
{
	private static var POS_LEFT = 200;
	private static var POS_RIGHT = 530;
	private static var POS_Y = 50;
	
	private static var FINDING_X = 50;
	private static var FINDING_Y = 50;
	
	private var hudBot:Sprite;
	//private var btnBack:SimpleButton;
	private var tfName:TextField;
	private var btnFinding:SimpleButton;
	private var btnCancel:SimpleButton;
	
	
	private var disFinding:FindingMatch;
	
	
	public function new() 
	{
		super();
		init();
	}
	
	private function init():Void 
	{		
		var _bg:Sprite = Game.resource.getSprite(Defines.GFX_BATTLE_BG);
		//var _bg:Background = new Background();
		this.addChild(_bg);
		
		tfName = new TextField();
		tfName.width = 350;
		tfName.height = 55;
		tfName.x = 200;
		tfName.y = 185;
		tfName.border = false;
		tfName.background = false;
		tfName.multiline =  false;
		tfName.type = TextFieldType.INPUT;
		tfName.maxChars = 30;
		var textFM = new TextFormat();
		textFM.size = 40;
		textFM.color = 0x0;
		tfName.text = "";
		tfName.setTextFormat(textFM);
		tfName.defaultTextFormat = textFM;
		this.addChild(tfName);
				
		hudBot = Game.resource.getSprite(Defines.GFX_UI_HUDBOTTOM);
		hudBot.x = 0;
		hudBot.y = Game.GAME_HEIGHT - hudBot.height;
		this.addChild(hudBot);
		//
		//btnBack =  new SimpleButton();
		//btnBack.setDisplay(Game.resource.getSprite(Defines.GFX_BATTLE_BTN_BACK));
		//btnBack.setPosition(POS_LEFT, POS_Y);
		//btnBack.setMouseClick(onBack);
		//hudBot.addChild(btnBack);
		
		btnFinding =  new SimpleButton();
		btnFinding.setDisplay(Game.resource.getSprite(Defines.GFX_BATTLE_BTN_FIND));
		btnFinding.setPosition(POS_RIGHT, POS_Y);
		btnFinding.setMouseClick(onFinding);
		hudBot.addChild(btnFinding);
		
		btnCancel =  new SimpleButton();
		btnCancel.setDisplay(Game.resource.getSprite(Defines.GFX_BATTLE_BTN_CANCEL));
		btnCancel.setPosition(POS_LEFT, POS_Y);
		btnCancel.setMouseClick(onCancel);
		hudBot.addChild(btnCancel);
		
		disFinding = new FindingMatch();
		disFinding.x = Game.GAME_WIDTH / 2;
		disFinding.y = hudBot.y - 20;
		this.addChild(disFinding);
	}	
	/**
	 * 
	 * @param	e
	 */
	private function gameLoop(e:Event):Void 
	{
		//if (Game.data.playerData.dataPVP.dataRoom.isEnter) 
		//{
			//Game.data.playerData.dataPVP.dataRoom.isEnter = false;
			//sReady();
		//}
	}
	public function onBack(e:MouseEvent)
	{
		Game.data.playerData.dataSkill.mode = GameMode.PVP;
		Game.displayManager.toScreen(ScreenID.SKILL);
	}
	public function onCancel(e:MouseEvent)
	{
		setWaiting();
		Game.server.sendPacket(new RepCancel());
	}
	public function onFinding(e:MouseEvent)
	{
		Game.data.playerData.dataPVP.setRefresh();
		setFinding();
		if (tfName.text == "") 
		{
			Game.server.sendPacket(new RepFinding());
		}else 
		{
			Game.server.sendPacket(new RespWithFriend(tfName.text));
		}
		
	}
	
	public function setFinding()
	{
		disFinding.visible = true;
		Game.hudTop.setPosBack(SceneView.NON);		
		//btnBack.visible = false;
		btnFinding.visible = false;
		btnCancel.visible = true;
	}
	public function setWaiting()
	{
		disFinding.visible = false;
		Game.hudTop.setPosBack(SceneView.CHOOSEKILL_PVP);		
		//btnBack.visible = true;
		btnFinding.visible = true;
		btnCancel.visible = false;
	}
	/**
	 * 
	 */
    override public function onEnter() : Void
    {
		this.addChild(Game.hudTop);
		Game.hudTop.setPosBack(SceneView.CHOOSEKILL_PVP);
		Game.hudTop.update();
		setWaiting();
		tfName.text = "";
		this.addEventListener(Event.ENTER_FRAME, gameLoop);
    }
	override public function onExit() : Void
    {  
        this.removeChild(Game.hudTop);
		this.removeEventListener(Event.ENTER_FRAME, gameLoop);
    }
	/// sever
	public function sCancel()
	{
		setWaiting();
	}
	public function sFound()
	{
		Game.server.sendPacket(new RepEnter());
	}
	public function sReady()
	{
		Game.displayManager.toScreen(ScreenID.BATTLE);
	}
}