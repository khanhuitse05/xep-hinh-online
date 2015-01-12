package popup.statistic;

import core.display.ex.Lable;
import core.display.ex.SimpleButton;
import core.display.popup.PopupExBase;
import core.resource.Defines;
import game.data.pvp.DTPVP;
import game.gameobject.skill.SkillDisplay;
import game.gameobject.user.Avatar;
import game.tnk.Game;
import motion.Actuate;
import openfl.display.Sprite;
import openfl.events.Event;

/**
 * ...
 * @author KhanhTN
 */
class StaPvPPopup extends PopupExBase
{
	public static var MINE 		= 0;
	public static var ENEMY		= 1;
	
	public static var NAME 		= 0;
	public static var GIFT 		= 1;
	public static var ELO		= 2;
	public static var MAX 		= 3;
	
	public static var SKILL_SCALE 		= 0.5;
	public static var AVATAR_SCALE 		= 0.5;
	
	public static var SKILL_X			= 100;
	public static var SKILL_Y			= 0;
	
	public static var BTN_X 		= 0;
	public static var BTN_Y 		= 255;
	
	public static var PLAYER_X 		= 150;
	public static var PLAYER_Y 		= -200;
	
	public static var TEXT_X 		= [-100,100];
	public static var TEXT_Y 		= [-100, 84, 156, 250,];
	
	private var btnOK:SimpleButton;
	private var text:Array<Array<Lable>>;
	private var avatar:Array<Avatar>;
	private var winner:Sprite;
	private var winnerIndex:Int;
	private var ready:Bool;
	
	public function new(showDarkBg : Bool = true) 
	{
		super(showDarkBg);
		ready = false;
	}
	
	override public function init() 
    {
		var _line:Sprite = Game.resource.getSprite(Defines.GFX_STA_BG_PVP);
		_line.x = 0 - _line.width / 2;
		_line.y = 0 - mWidth / 2;
		pane.addChild(_line);
		
		avatar = new Array<Avatar>();
		for (i in 0...2) 
		{
			if (i == MINE) 
			{
				avatar[i] = new Avatar(Game.data.playerData.mUserInfo.avatar);				
				avatar[i].x = 0 - PLAYER_X - Avatar.IMAGE_WIDTH;
			}else 
			{
				avatar[i] = new Avatar(Game.data.playerData.mUserInfo.avatarEnemy);							
				avatar[i].x = 0 + PLAYER_X;
			}			
			avatar[i].y = PLAYER_Y;
			pane.addChild(avatar[i]);	
		}
					
		
		text = new Array<Array<Lable>>();
		for (i in 0...2) 
		{
			text[i] = new Array<Lable>();
			for (j in 0...MAX) 
			{
				text[i][j] = new Lable();
				text[i][j].setFont(40, 0xffffff);
				text[i][j].setSysTextInfo(TEXT_X[i], TEXT_Y[j], "");
				pane.addChild(text[i][j]);
			}
		}
		text[MINE][NAME].setFont(45, 0xB56B17);
		text[ENEMY][NAME].setFont(45, 0xB56B17);
		text[MINE][NAME].setSysText("" + Game.data.playerData.dataPVP.infoMine.userName);
		text[MINE][NAME].x = TEXT_X[MINE] - text[MINE][NAME].width - 25;
		text[ENEMY][NAME].setSysText("" + Game.data.playerData.dataPVP.infoEnemy.userName);		
		text[ENEMY][NAME].x += 25;
		text[MINE][GIFT].setSysText("" + Game.data.playerData.dataPVP.infoMine.gift);
		text[MINE][GIFT].x = TEXT_X[MINE] - text[MINE][GIFT].width;
		text[ENEMY][GIFT].setSysText("" + Game.data.playerData.dataPVP.infoEnemy.gift);
		text[MINE][ELO].setSysText("" + Game.data.playerData.dataPVP.infoMine.elo);
		text[MINE][ELO].x = TEXT_X[MINE] - text[MINE][ELO].width;
		text[ENEMY][ELO].setSysText("" + Game.data.playerData.dataPVP.infoEnemy.elo);		
		
		
		btnOK = new SimpleButton();
		btnOK.setDisplay(Game.resource.getSprite(Defines.GFX_BTN_CONTINUE));
		btnOK.setMouseClick(onCancel);
		btnOK.setPosition(BTN_X, BTN_Y);
		pane.addChild(btnOK);
		
		initChangeElo();
		initSkill();
		initWinner();
    }
	public function initChangeElo()
	{
		text[MINE][ELO + 1] = new Lable();
		text[MINE][ELO + 1].setFont(40, 0x00FF3C);
		text[MINE][ELO + 1].setSysTextInfo(TEXT_X[MINE] - 150, TEXT_Y[ELO], "+");
		pane.addChild(text[MINE][ELO + 1]);
		
		text[ENEMY][ELO + 1] = new Lable();
		text[ENEMY][ELO + 1].setFont(40, 0x00FF3C);
		text[ENEMY][ELO + 1].setSysTextInfo(TEXT_X[ENEMY] + 120, TEXT_Y[ELO], "-");
		pane.addChild(text[ENEMY][ELO + 1]);
		
		if (Game.data.playerData.dataPVP.result == DTPVP.R_DRAW) 
		{
			text[MINE][ELO + 1].setSysText("+" + Game.data.playerData.dataPVP.eloResult);
			text[ENEMY][ELO + 1].setSysText("+" + Game.data.playerData.dataPVP.eloResult);
		}else if (Game.data.playerData.dataPVP.result == DTPVP.R_LOSE) 
		{
			text[MINE][ELO + 1].setSysText("-" + Game.data.playerData.dataPVP.eloResult);
			text[ENEMY][ELO + 1].setSysText("+" + Game.data.playerData.dataPVP.eloResult);
		}else 
		{
			text[MINE][ELO + 1].setSysText("+" + Game.data.playerData.dataPVP.eloResult);
			text[ENEMY][ELO + 1].setSysText("-" + Game.data.playerData.dataPVP.eloResult);
		}
	}
	public function initSkill()
	{		
		// mine
		for (i in 0...3) 
		{
			var _skill:SkillDisplay = new SkillDisplay(Game.data.playerData.dataPVP.infoMine.skill[i]);
			_skill.scaleX = SKILL_SCALE;
			_skill.scaleY = SKILL_SCALE;
			_skill.x = 0 - (SKILL_X + i * 60) - 50;
			_skill.y = SKILL_Y;
			pane.addChild(_skill);
		}
		// enemy
		for (i in 0...3) 
		{
			var _skill:SkillDisplay = new SkillDisplay(Game.data.playerData.dataPVP.infoEnemy.skill[i]);
			_skill.scaleX = SKILL_SCALE;
			_skill.scaleY = SKILL_SCALE;
			_skill.x = 0 + (SKILL_X + i * 60);
			_skill.y = SKILL_Y;
			pane.addChild(_skill);
		}

	}
	public function initWinner()
	{		
		if (Game.data.playerData.dataPVP.result != DTPVP.R_DRAW)
		{
			winner = new Sprite();		
			pane.addChild(winner);
			winner.alpha = 0;
			
			var _line:Sprite = Game.resource.getSprite(Defines.GFX_LOGO_WINNER);
			_line.x = 0 - _line.width / 2;
			_line.y = 0 - mWidth / 2;
			winner.addChild(_line);
			
			Actuate.timer(0.7).onComplete(onWinner);
		}else 
		{
			ready = true;
		}
	}
	public function onWinner()
	{		
		
		winner.y = 100;
		if (Game.data.playerData.dataPVP.result == DTPVP.R_WIN ||
			Game.data.playerData.dataPVP.result == DTPVP.R_DISCONET) 
		{
			winnerIndex = MINE;
			winner.x -= 150;
		}else if (Game.data.playerData.dataPVP.result == DTPVP.R_LOSE)
		{
			winnerIndex = ENEMY;
			winner.x += 150;
		}
		winner.alpha = 1;
		Actuate.tween(winner, 0.3, { scaleX:1.1, scaleY:1.1 } ).reverse();
		Actuate.timer(1.5).onComplete(finishWinner);
	}
	public function finishWinner()
	{
		ready = true;
		if (winnerIndex == MINE) 
		{
			Actuate.tween(winner, 0.2, { x:-200} );
		}else 
		{
			Actuate.tween(winner, 0.2, { x:200} );
		}		
		Actuate.tween(winner, 0.3, { scaleX:0.3, scaleY:0.3} );
		Actuate.tween(winner, 0.7, { y:-200} );
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
	private function onCancel(e:Event):Void 
	{		
		if (ready == true) 
		{
			transitionOut();
		}
	}
	
	
}