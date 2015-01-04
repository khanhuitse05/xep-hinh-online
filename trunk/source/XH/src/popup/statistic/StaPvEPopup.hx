package popup.statistic;

import core.display.ex.Lable;
import core.display.ex.SimpleButton;
import core.display.popup.PopupExBase;
import core.resource.Defines;
import game.const.Const;
import game.gameobject.skill.SkillDisplay;
import game.tnk.Game;
import openfl.display.Sprite;
import openfl.events.Event;

/**
 * ...
 * @author KhanhTN
 */
class StaPvEPopup extends PopupExBase
{
	public static var LINE 				= 0;
	public static var MULTI 			= 1;
	public static var EXP 				= 2;
	public static var GOLD 				= 3;
	public static var SKILL 			= 4;
	public static var END_SCORE 		= 5;
	public static var FINAL_SCORE 		= 6;
	public static var MAX 		= 7;
	
	public static var SKILL_SCALE 		= 0.5;
	
	public static var BTN_X 		= 0;
	public static var BTN_Y 		= 255;
	
	public static var TEXT_X 		= 10;
	public static var TEXT_Y 		= [-265,
										-215,
										-165,
										-115,
										-45,
										20,
										150,];
	
	private var btnOK:SimpleButton;
	private var text:Array<Lable>;
	
	public function new(showDarkBg : Bool = true) 
	{
		super(showDarkBg);
	}
	
	override public function init() 
    {
		//
		Game.data.playerData.dataStatictis.onUpdate();
		Game.data.playerData.dataStatictis.onExpleroData();
		
		//
		var _line:Sprite = Game.resource.getSprite(Defines.GFX_STA_BG_PVE);
		_line.x = 0 - _line.width / 2;
		_line.y = 0 - mWidth / 2;
		pane.addChild(_line);
		
		text = new Array<Lable>();
		for (i in 0...MAX) 
		{
			text[i] = new Lable();
			text[i].setFont(35, 0xFF8000);
			text[i].setSysTextInfo(TEXT_X, TEXT_Y[i], "");
			pane.addChild(text[i]);
		}
		text[LINE].setSysText("" + Game.data.playerData.dataStatictis.linesClear);
		text[MULTI].setSysText("" + Game.data.playerData.dataStatictis.multiplier);
		text[EXP].setSysText("+" + Game.data.playerData.dataStatictis.exp + " EXP");
		text[GOLD].setSysText("+" + Const.NumToString(Game.data.playerData.dataStatictis.gold) + " GOLD");
		text[SKILL].setSysText("NONE");
		text[END_SCORE].setSysText("" + Game.data.playerData.dataStatictis.ultimateScore);
		text[FINAL_SCORE].x = -50;
		text[FINAL_SCORE].setFont(50, 0x00FF11);
		text[FINAL_SCORE].setSysText("" + Const.NumToString(Game.data.playerData.dataStatictis.score));
		
		btnOK = new SimpleButton();
		btnOK.setDisplay(Game.resource.getSprite(Defines.GFX_BTN_CONTINUE));
		btnOK.setMouseClick(onCancel);
		btnOK.setPosition(BTN_X, BTN_Y);
		pane.addChild(btnOK);
		
		initSkill();
    }
	public function initSkill()
	{		
		if (checkExist(Game.data.playerData.dataStatictis.skill)) 
		{
			for (i in 0...Game.data.playerData.dataStatictis.skill.length) 
			{
				if (Game.data.playerData.dataStatictis.skill[i] > 0) 
				{
					var _skill:SkillDisplay = new SkillDisplay(Game.data.playerData.dataStatictis.skill[i]);
					_skill.scaleX = SKILL_SCALE;
					_skill.scaleY = SKILL_SCALE;
					_skill.x = TEXT_X + i * 60;
					_skill.y = TEXT_Y[SKILL];
					pane.addChild(_skill);
				}
			}
			text[SKILL].visible = false;
		}
		if (Game.data.playerData.dataStatictis.ultimate > 0) 
		{
			var _ultimate:SkillDisplay = new SkillDisplay(Game.data.playerData.dataStatictis.ultimate);
			_ultimate.scaleX = SKILL_SCALE;
			_ultimate.scaleY = SKILL_SCALE;
			_ultimate.x = TEXT_X + 3 * 60;
			_ultimate.y = TEXT_Y[SKILL];
			pane.addChild(_ultimate);
		}
	}
	
	public function checkExist(_list:Array<Int>):Bool
	{
		for (i in 0..._list.length) 
		{
			if (_list[i] > 0) 
			{
				return true;
			}
		}
		return false;
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
		transitionOut();
	}
	
	
}