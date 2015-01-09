package scene.home;
import core.display.ex.SimpleButton;
import core.display.scene.*;
import core.display.screen.ScreenID;
import core.resource.Defines;
import game.const.cache.ExploringCache;
import game.gameobject.background.Background;
import game.gameobject.gameplay.GameMode;
import game.gameobject.loading.ConnetSever;
import game.network.packet.request.login.RepLogin;
import game.tnk.Game;
import openfl.events.Event;
import scene.hud.HudBottom;
import scene.hud.HudInfo;
import scene.hud.HudTop;

/**
 * ...
 * @author KhanhTN
 */
class HomeView extends SceneView
{
	public static var BTN_X 		= 347;
	public static var BTN_Y 		= 465;
	public static var BTN_OFFSET 	= 140;	
	
	private static var SINGLE = 0;
	private static var BATTLE = 1;
	private static var FRIEND = 2;
	private static var MISSION = 3;
	private static var MAX_BUTTON = 4;
	
	private var mBg:Background;
		
	private var listButton:Array<SimpleButton>;
	private var hudInfo:HudInfo;
	private var isCheck:Bool;
	
	public function new() 
	{
		super();
		init();
		var connet:ConnetSever = new ConnetSever();
		this.addChild(connet);
	}
	/**
	 * 
	 */
	private function init():Void 
	{
		// fill background
		mBg = new Background();
		this.addChild(mBg);
		// hud
        if (Game.hudTop == null)
        {
            Game.hudTop = new HudTop();
        }
		if (Game.hudBottom == null)
        {
            Game.hudBottom = new HudBottom();
        }
		hudInfo = new HudInfo();
		this.addChild(hudInfo);
		// btn
		listButton = new Array<SimpleButton>();
		for (i in 0...MAX_BUTTON) 
		{
			listButton[i] = new SimpleButton();
			listButton[i].setDisplay(Game.resource.getSprite(Defines.GFX_BTN_SINGLE + i), null, null, 
									Game.resource.getSprite(Defines.GFX_BTN_SINGLE_D + i));
			listButton[i].setPosition(BTN_X, BTN_Y + BTN_OFFSET * i);
			this.addChild(listButton[i]);
		}
		listButton[SINGLE].setMouseClick(onSingle);
		listButton[BATTLE].setMouseClick(onBattle);
		listButton[FRIEND].setMouseClick(onFriend);
		listButton[MISSION].setMouseClick(onMission);
		//listButton[MISSION].visible = false;
	}	
	/**
	 * 
	 * @param	e
	 */
	private function gameCheck(e:Event):Void 
	{
		if (Game.data.playerData.dataGame.isTry && isCheck == false) 
		{
			isCheck = true;
			checkUser();			
			this.removeEventListener(Event.ENTER_FRAME, gameCheck);   
		}
	}
	/**
	 * 
	 */
    override public function onEnter() : Void
    {
		isCheck = false;	
		Game.data.playerData.dataGame.isConnet = false;
		this.addEventListener(Event.ENTER_FRAME, gameCheck);
		this.addChild(Game.hudTop);
		Game.hudTop.setPosBack(SceneView.EXIT);
		Game.hudTop.update();
		if (Game.data.playerData.mUserInfo.userName != null) 
		{
			hudInfo.update();
		}
    }
	override public function onExit() : Void
    {  
        this.removeChild(Game.hudTop);
    }
	/**
	 * 
	 * @param	e
	 */
	private function onSingle(e:Event):Void 
	{		
		Game.data.playerData.dataSkill.mode = GameMode.PVE;
		Game.displayManager.toScreen(ScreenID.HIGHSCORE);
	}
	/**
	 * 
	 * @param	e
	 */
	private function onBattle(e:Event):Void 
	{
		Game.data.playerData.dataGame.isConnet = true;
		Game.data.playerData.dataSkill.mode = GameMode.PVP;
		Game.displayManager.toScreen(ScreenID.SKILL);
	}
	/**
	 * 
	 * @param	e
	 */
	private function onFriend(e:Event):Void 
	{
		//Game.displayManager.toScreen(ScreenID.FRIENDPLAY);
		//Game.data.playerData.dataGame.isConnet = true;
	}
	/**
	 * 
	 * @param	e
	 */
	private function onMission(e:Event):Void 
	{
		Game.displayManager.toScreen(ScreenID.POPUP_STA_PVP);
	}
	/**
	 * check username
	 */
	private function checkUser():Void
	{
		if (Game.data.playerData.dataGame.online) 
		{			
			if (ExploringCache.CheckSignUp() == false) 
			{
				Game.displayManager.toScreen(ScreenID.POPUP_LOGIN);
				ExploringCache.writeData();
			}else 
			{
				Game.server.sendPacket(new RepLogin(ExploringCache.getID()));
			}
			ExploringCache.readData();
			setOnline();
		}else 
		{
			if (ExploringCache.CheckExist() == false) 
			{
				Game.displayManager.toScreen(ScreenID.POPUP_LOGIN);
				ExploringCache.writeData();
			}
			ExploringCache.readData();
			setOffline();
		}
		logData();
		hudInfo.update();
		Game.hudTop.update();
	}
	/**
	 * OFFLINE
	 */
	private function setOffline():Void
	{
		//listButton[BATTLE].SetDisable(true);
		//listButton[FRIEND].SetDisable(true);
		//listButton[MISSION].SetDisable(true);
	}
	/**
	 * ONLINE
	 */
	private function setOnline():Void
	{
		
	}
	public function logData()
	{
		trace("USER INFO");
		trace("USER NAME: " + Game.data.playerData.mUserInfo.userName);
		trace("USER ID: " + Game.data.playerData.mUserInfo.userID);
		trace("USER ELO: " + Game.data.playerData.mUserInfo.elo);
		trace("USER GOLD: " + Game.data.playerData.mUserInfo.gold);
		trace("USER EXP: " + Game.data.playerData.mUserInfo.exp);
		trace("USER SCORES: " + Game.data.playerData.mUserInfo.score);
		trace("USER SKILL: "
				 + " - "+ Game.data.playerData.dataSkill.skill[0] 
				 + " - "+ Game.data.playerData.dataSkill.skill[1] 
				 + " - "+ Game.data.playerData.dataSkill.skill[2] 
				 + " - "+ Game.data.playerData.dataSkill.skill[3] 
				 + " - "+ Game.data.playerData.dataSkill.skill[4] 
				 + " - "+ Game.data.playerData.dataSkill.skill[5] 
				 + " - "+ Game.data.playerData.dataSkill.skill[6] 
				 + " - "+ Game.data.playerData.dataSkill.skill[7] 
				 + " - "+ Game.data.playerData.dataSkill.skill[8] 
				 + " - "+ Game.data.playerData.dataSkill.skill[9]
				);
	}
	
}