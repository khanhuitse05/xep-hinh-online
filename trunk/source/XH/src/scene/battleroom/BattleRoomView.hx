package scene.battleroom;
import core.display.ex.Lable;
import core.display.ex.SimpleButton;
import core.display.scene.*;
import core.display.screen.ScreenID;
import core.resource.Defines;
import core.sprites.Animx;
import game.gameobject.background.Background;
import game.gameobject.gameplay.GameMode;
import game.gameobject.room.BtnPublic;
import game.gameobject.room.BtnRank;
import game.gameobject.room.FindingMatch;
import game.gameobject.room.TopTip;
import game.network.packet.request.pvp.RepCancel;
import game.network.packet.request.pvp.RepEnter;
import game.network.packet.request.pvp.RepFinding;
import game.network.packet.request.pvp.RespWithFriend;
import game.tnk.Game;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.events.MouseEvent;
import openfl.text.TextField;
import openfl.text.TextFieldType;
import openfl.text.TextFormat;

/**
 * ...
 * @author KhanhTN
 */
class BattleRoomView extends SceneView
{
	private static var HUD_PUBLIC_X = 54;
	private static var HUD_PUBLIC_Y = 850;
	private static var HUD_RANK_X = 360;
	private static var HUD_RANK_Y = 850;	
	private static var TOPTIP_X = Game.GAME_WIDTH / 2;
	private static var TOPTIP_Y = 55;
	
	private var hudBot:Sprite;
	private var hudPublic:BtnPublic;
	private var hudRank:BtnRank;
	private var hudFinding:FindingMatch;
	private var toptip:TopTip;
	
	
	public function new() 
	{
		super();
		init();
	}
	
	private function init():Void 
	{		
		//var _bg:Sprite = Game.resource.getSprite(Defines.GFX_BATTLE_BG);
		var _bg:Background = new Background();
		this.addChild(_bg);
		// bot
		hudBot = Game.resource.getSprite(Defines.GFX_UI_HUDBOTTOM);
		hudBot.x = 0;
		hudBot.y = Game.GAME_HEIGHT - hudBot.height;
		this.addChild(hudBot);
		//totip
		toptip = new TopTip();
		toptip.x = TOPTIP_X;
		toptip.y = TOPTIP_Y;
		this.addChild(toptip);
		//public
		hudPublic = new BtnPublic(onPublic);
		hudPublic.x = HUD_PUBLIC_X;
		hudPublic.y = HUD_PUBLIC_Y;
		this.addChild(hudPublic);
		//totip
		hudRank = new BtnRank(onRank);
		hudRank.x = HUD_RANK_X;
		hudRank.y = HUD_RANK_Y;
		this.addChild(hudRank);
		//totip
		hudFinding = new FindingMatch();
		this.addChild(hudFinding);
		
	}
	
		
	/**
	 * 
	 * @param	e
	 */
	private function gameLoop(e:Event):Void 
	{
		
	}
	public function onBack(e:MouseEvent)
	{
		Game.data.playerData.dataSkill.mode = GameMode.PVP;
		Game.displayManager.toScreen(ScreenID.SKILL);
	}
	
	public function onPublic(e:MouseEvent)
	{
		Game.data.playerData.dataPVP.setRefresh();
		hudFinding.setFindPublic(hudPublic.tfName.text);
		this.hudFinding.visible = true;
	}
	public function onRank(e:MouseEvent)
	{
		Game.data.playerData.dataPVP.setRefresh();
		hudFinding.setFindRank();
		this.hudFinding.visible = true;
	}
	/**
	 * 
	 */
    override public function onEnter() : Void
    {
		this.addChildAt(Game.hudTop, 3);
		Game.hudTop.setPosBack(SceneView.CHOOSEKILL_PVP);
		Game.hudTop.update();
		hudFinding.visible = false;
		hudPublic.update();
		hudRank.update();
		this.addEventListener(Event.ENTER_FRAME, gameLoop);
    }
	override public function onExit() : Void
    {  
        this.removeChild(Game.hudTop);
		this.removeEventListener(Event.ENTER_FRAME, gameLoop);
    }
	
	public function sFound()
	{
		Game.server.sendPacket(new RepEnter());
	}
	public function sReady()
	{
		Game.displayManager.toScreen(ScreenID.BATTLE);
	}
	public function sCancel()
	{
		hudFinding.visible = false;
	}
}