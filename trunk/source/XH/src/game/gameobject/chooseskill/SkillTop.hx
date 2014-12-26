package game.gameobject.chooseskill;

import core.resource.Defines;
import game.const.skill.SkillInfo;
import game.gameobject.gameplay.GameMode;
import game.gameobject.skill.SkillDisplay;
import game.gameobject.skill.SkillType;
import game.tnk.Game;
import game.data.skill.DTSkill;
import openfl.events.MouseEvent;
import openfl.display.Sprite;

/**
 * ...
 * @author KhanhTN
 */
class SkillTop extends Sprite
{
	
	public static var				HEIGHT:Int = 300;
	public static var				WIDTH:Int = Game.GAME_WIDTH;
	
	public static var				SKILL_X = 70;
	public static var				SKILL_Y = 80;
	public static var				OFFSET_PVP = 205;
	public static var				OFFSET_PVE = 150;
	
	public static var 				SCALE_SKILL = 1.35;
	
	private var m_pChilds:Array<SkillDisplay>;
	private var mTitle:Sprite;
	private var mode:Int;
	private var offset:Int;
	
	public function new() 
	{
		super();
		mode = Game.data.playerData.dataSkill.mode;
		offset = OFFSET_PVP;
		if (mode == GameMode.PVE) 
		{
			offset = OFFSET_PVE;
		}
		m_pChilds = new Array<SkillDisplay>();
		init();
	}
	public function init() 
	{
		mTitle = Game.resource.getSprite(Defines.GFX_UI_SKILL_TITLE);
		this.addChild(mTitle);
		
		for (i in 0...DTSkill.MAX_CHOOSE) 
		{
			var _obj:SkillDisplay = new SkillDisplay(Game.data.playerData.dataSkill.skillAct[i]);
			_obj.scaleX = SCALE_SKILL;
			_obj.scaleY = SCALE_SKILL;
			_obj.x = SKILL_X + i * offset;
			_obj.y = SKILL_Y;
			this.addChild(_obj);
			m_pChilds.push(_obj);
			_obj.addEventListener(MouseEvent.CLICK, onTapSkill);
		}
		
		if (mode == GameMode.PVE) 
		{
			var _obj:SkillDisplay = new SkillDisplay(Game.data.playerData.dataSkill.skillUtimate);
			_obj.scaleX = SCALE_SKILL;
			_obj.scaleY = SCALE_SKILL;
			_obj.x = SKILL_X + DTSkill.MAX_CHOOSE * offset;
			_obj.y = SKILL_Y;
			this.addChild(_obj);
			m_pChilds.push(_obj);
			_obj.addEventListener(MouseEvent.CLICK, onTapUtimate);
		}
	}
	public function update()
	{
		Game.data.playerData.dataSkill.isUpdateTop = false;
		for (i in 0...DTSkill.MAX_CHOOSE)
		{
			m_pChilds[i].update(Game.data.playerData.dataSkill.skillAct[i]);
		}
		if (mode == GameMode.PVE) 
		{
			m_pChilds[DTSkill.MAX_CHOOSE].update(Game.data.playerData.dataSkill.skillUtimate);
		}
	}
	public function onTapSkill(e:MouseEvent):Void
    {
		var _display:SkillDisplay = cast(e.currentTarget, SkillDisplay);
		Game.data.playerData.dataSkill.cancelSkill(_display.info.id);
	}
	public function onTapUtimate(e:MouseEvent):Void
    {
		Game.data.playerData.dataSkill.cancelUtimate();
	}
}