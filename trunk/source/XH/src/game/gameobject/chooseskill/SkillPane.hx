package game.gameobject.chooseskill;

import core.display.ex.Lable;
import core.display.ex.SimpleButton;
import core.resource.Defines;
import game.const.skill.SkillInfo;
import game.gameobject.skill.SkillDisplay;
import game.gameobject.skill.SkillName;
import game.tnk.Game;
import openfl.display.Sprite;

/**
 * ...
 * @author KhanhTN
 */
class SkillPane extends Sprite
{
	
	public static var				DISPLAY_X:Int = 20;
	public static var				DISPLAY_Y:Int = 20;
	public static var				NAME_X:Int = 110;
	public static var				NAME_Y:Int = 35;
	public static var				CHOOSE_X:Int = 430;
	public static var				CHOOSE_Y:Int = 15;
	
	public static var				SCALE_SKILL = 0.6;
	
	public static var				HEIGHT:Int = 100;
	public static var				WIDTH:Int = Game.GAME_WIDTH;

	private var info:SkillInfo;

	private var mBg:Sprite;
	private var mSkill:SkillDisplay;
	private var mName:SkillName;
	private var mChoose:SkillChoose;

	public function new(_id:Int) 
	{
		super();
		info = new SkillInfo(_id);
		initialize();
	}
	/**
	 * 
	 */
	private function initialize():Void
    {		
		mBg = Game.resource.getSprite(Defines.GFX_UI_SKILL_PANE);
		this.addChild(mBg);
		//display
		mSkill = new SkillDisplay(info.id);
		mSkill.x = DISPLAY_X;
		mSkill.y = DISPLAY_Y;		
		mSkill.scaleX = SCALE_SKILL;
		mSkill.scaleY = SCALE_SKILL;
		this.addChild(mSkill);
		//name
		mName = new SkillName(info.id);
		mName.x = NAME_X;
		mName.y = NAME_Y;
		this.addChild(mName);
		//choose
		mChoose = new SkillChoose(info.id);
		mChoose.x = CHOOSE_X;
		mChoose.y = CHOOSE_Y;
		this.addChild(mChoose);
	}
	/**
	 * 
	 */
	public function onRefresh()
	{		
		mChoose.onRefresh();
	}
}