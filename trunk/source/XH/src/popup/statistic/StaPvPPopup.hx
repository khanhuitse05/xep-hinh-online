package popup.statistic;

import core.display.ex.Lable;
import core.display.ex.SimpleButton;
import core.display.popup.PopupExBase;
import core.resource.Defines;
import game.gameobject.skill.SkillDisplay;
import game.tnk.Game;
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
	
	public static var SKILL_MINE		= 100;
	public static var SKILL_ENEMY		= 400;
	public static var SKILL_Y			= 100;
	
	public static var BTN_X 		= 0;
	public static var BTN_Y 		= 60;	
	
	public static var ENEMY_X 		= 0;
	public static var MINE_X 		= 0;
	public static var PLAYER_Y 		= 60;
	
	public static var TEXT_X 		= [-100,100];
	public static var TEXT_Y 		= [-100, 60, 120, 180,];
	
	private var btnOK:SimpleButton;
	private var text:Array<Array<Lable>>;
	private var win:Sprite;
	
	public function new(showDarkBg : Bool = true) 
	{
		super(showDarkBg);
	}
	
	override public function init() 
    {
		var _line:Sprite = Game.resource.getSprite(Defines.GFX_STA_BG_PVP);
		_line.x = 0 - _line.width / 2;
		_line.y = 0 - mWidth / 2;
		pane.addChild(_line);
		
		text = new Array<Array<Lable>>();
		for (i in 0...2) 
		{
			text[i] = new Array<Lable>();
			for (j in 0...MAX) 
			{
				text[i][j] = new Lable();
				text[i][j].setFont(30, 0xffffff);
				text[i][j].setSysTextInfo(TEXT_X[i], TEXT_Y[j], "");
				pane.addChild(text[i][j]);
			}
		}
		
		text[MINE][NAME].setSysText("" + Game.data.playerData.dataPVP.infoMine.userName);
		text[ENEMY][NAME].setSysText("" + Game.data.playerData.dataPVP.infoEnemy.userName);
		text[MINE][GIFT].setSysText("" + Game.data.playerData.dataPVP.infoMine.gift);
		text[ENEMY][GIFT].setSysText("" + Game.data.playerData.dataPVP.infoEnemy.gift);
		text[MINE][ELO].setSysText("" + Game.data.playerData.dataPVP.infoMine.elo);
		text[ENEMY][ELO].setSysText("" + Game.data.playerData.dataPVP.infoEnemy.elo);
		
    }
	public function initSkill()
	{		
		// mine
		for (i in 0...3) 
		{
			var _skill:SkillDisplay = new SkillDisplay(Game.data.playerData.dataPVP.infoMine.skill[i]);
			_skill.scaleX = SKILL_SCALE;
			_skill.scaleY = SKILL_SCALE;
			_skill.x = SKILL_MINE + i * 60;
			_skill.y = SKILL_Y;
			pane.addChild(_skill);
		}
		// enemy
		for (i in 0...3) 
		{
			var _skill:SkillDisplay = new SkillDisplay(Game.data.playerData.dataPVP.infoMine.skill[i]);
			_skill.scaleX = SKILL_SCALE;
			_skill.scaleY = SKILL_SCALE;
			_skill.x = SKILL_ENEMY + i * 60;
			_skill.y = SKILL_Y;
			pane.addChild(_skill);
		}

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
		
	}
	
	
}