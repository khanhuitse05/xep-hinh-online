package scene.home;
import core.display.ex.Lable;
import core.display.ex.SimpleButton;
import core.display.scene.*;
import core.display.screen.ScreenID;
import core.display.screen.ScreenView;
import core.resource.Defines;
import game.const.cache.ExploringCache;
import game.gameobject.background.Background;
import game.gameobject.board.CBlock;
import game.gameobject.brick.BlockDirect;
import game.gameobject.brick.BlockType;
import game.gameobject.brick.Brick;
import game.gameobject.gameplay.GameMode;
import game.gameobject.loading.ConnetSever;
import game.network.packet.request.data.RepRank;
import game.network.packet.request.login.RepLogin;
import game.tnk.Game;
import game.tnk.GameConfig;
import motion.Actuate;
import openfl.display.BitmapData;
import openfl.display.Sprite;
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
	private static var RANK = 2;
	private static var SHOP = 3;
	private static var OPITION = 4;
	private static var MAX_BUTTON = 5;
	
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
			listButton[i].setDisplay(Game.resource.getSprite(Defines.GFX_BTN_SINGLE_H + i));
			listButton[i].setPosition(BTN_X, BTN_Y + BTN_OFFSET * i);
			this.addChild(listButton[i]);
		}
		listButton[SINGLE].setMouseClick(onSingle);
		listButton[BATTLE].setMouseClick(onBattle);
		listButton[RANK].setMouseClick(onRank);
		listButton[SHOP].setMouseClick(onShop);
		listButton[OPITION].setMouseClick(onOpition);
	}	
	override public function getSceneType():Int
	{
		return SceneView.HOME;
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
			this.removeEventListener(Event.ENTER_FRAME, gameCheck);   
			Actuate.timer(1.1).onComplete(checkUser);
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
		if (Game.data.playerData.dataGame.online) 
		{
			Game.data.playerData.dataGame.isConnet = true;
			Game.data.playerData.dataSkill.mode = GameMode.PVP;
			Game.displayManager.toScreen(ScreenID.SKILL);
		}else 
		{
			onReconnet();	
		}
		
	}
	/**
	 * 
	 * @param	e
	 */
	private function onRank(e:Event):Void 
	{
		if (Game.data.playerData.dataGame.online) 
		{
			Game.server.sendPacket(new RepRank());
		}else 
		{
			onReconnet();	
		}
		
	}
	/**
	 * 
	 * @param	e
	 */
	private function onShop(e:Event):Void 
	{
		Game.displayManager.toScreen(ScreenID.SHOP);
	}
	private function onOpition(e:Event):Void 
	{
		Game.displayManager.toScreen(ScreenID.POPUP_OPTIONS);
	}
	private function onReconnet():Void 
	{
		Game.server.connect(GameConfig.SERVER, GameConfig.PORT);				
		var connet:ConnetSever = new ConnetSever();
		this.addChild(connet);
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
				ExploringCache.readData();
			}else 
			{				
				ExploringCache.readData();
				Game.server.sendPacket(new RepLogin(ExploringCache.getID(), 
													Game.data.playerData.mUserInfo.userName,
													Game.data.playerData.mUserInfo.score));
			}
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
		//checkHighScore();
		Game.hudTop.update();
		
	}
	/**
	 * check username
	 */
	/*private function checkHighScore():Void
	{
		var _now:Date = Date.now();
		var len = Game.data.playerData.mUserInfo.scoreDate;
		var _last:Date = Date.fromTime(Game.data.playerData.mUserInfo.scoreDate);
		if (_now.getMonth() == _last.getMonth() && _now.getDate() == _last.getDate() && _now.getFullYear() == _last.getFullYear()) 
		{
			
		}else
		{
			ExploringCache.writeScore(0);
			Game.data.playerData.mUserInfo.score = 0;
			Game.data.playerData.mUserInfo.scoreDate = Date.now().getTime();
		}
	}*/
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