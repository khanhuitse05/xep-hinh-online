package game.gameobject.chooseskill;

import core.display.ex.Lable;
import core.resource.Defines;
import core.sound.Sound;
import game.const.Const;
import game.const.skill.SkillInfo;
import game.data.skill.DTSkill;
import game.gameobject.gameplay.GameMode;
import game.tnk.Game;
import openfl.events.MouseEvent;
import openfl.display.Sprite;

/**
 * ...
 * @author KhanhTN
 */
class SkillChoose extends Sprite
{
	private static var CHOOSE = 0;	
	private static var BUY = 1;
	private static var LOCK = 2;
	
	private static var TEXT_X = 90;
	private static var TEXT_Y = 10;

	
	private var info:SkillInfo;
	private var type:Int;
	private var mBg:Sprite;
	private var text:Lable;
	private var isDisable:Bool;
	private var mode:Int;
	

	public function new(_id:Int) 
	{
		super();
		mode = Game.data.playerData.dataSkill.mode;
		isDisable = false;
		info = new SkillInfo(_id);
		initialize();
		this.addEventListener(MouseEvent.CLICK, onClick);
	}
	/**
	 * 
	 */
	public function onRefresh()
	{
		mode = Game.data.playerData.dataSkill.mode;
		this.removeChild(mBg);		
		isDisable = false;
		if ((info.mode != mode && info.mode != GameMode.NON) || info.isLock == true)
		{
			mBg = Game.resource.getSprite(Defines.GFX_UI_SKILL_CHO_LOCK);
			isDisable = true;
			text.setFont(40, 0xffffff);
			text.setSysTextInfo(TEXT_X, TEXT_Y, "LOCK");
			type = LOCK;
		}else 
		{
			if (Game.data.playerData.dataSkill.skill[info.id - 1] > 0) 
			{
				mBg = Game.resource.getSprite(Defines.GFX_UI_SKILL_CHO_X);
				text.setFont(40, 0xffffff);
				text.setSysTextInfo(TEXT_X - 15, TEXT_Y - 5, "" + Game.data.playerData.dataSkill.skill[info.id - 1]);
				type = CHOOSE;
			}else
			{
				mBg = Game.resource.getSprite(Defines.GFX_UI_SKILL_CHO_BUY);
				text.setFont(35, 0x15E267);
				text.setSysTextInfo(TEXT_X, TEXT_Y, "" + Const.NumToString(info.price) + "$");
				type = BUY;
			}
		}
		this.addChildAt(mBg, 0);
	}
	/**
	 * 
	 */
	private function initialize():Void
    {		
		if ((info.mode != Game.data.playerData.dataSkill.mode && info.mode != GameMode.NON) || info.isLock == true)
		{
			mBg = Game.resource.getSprite(Defines.GFX_UI_SKILL_CHO_LOCK);
			type = LOCK;
		}else 
		{
			if (Game.data.playerData.dataSkill.skill[info.id - 1] > 0) 
			{
				mBg = Game.resource.getSprite(Defines.GFX_UI_SKILL_CHO_X);
				type = CHOOSE;
			}else
			{
				mBg = Game.resource.getSprite(Defines.GFX_UI_SKILL_CHO_BUY);
				type = BUY;
			}
		}
		this.addChildAt(mBg, 0);
		
		text = new Lable();
		switch (type) 
		{
			case 0:
				text.setFont(40, 0xffffff);
				text.setSysTextInfo(TEXT_X - 15, TEXT_Y - 5, "" + Game.data.playerData.dataSkill.skill[info.id - 1]);
			case 1:
				text.setFont(35, 0x15E267);
				text.setSysTextInfo(TEXT_X, TEXT_Y, "" + Const.NumToString(info.price) + "$");
			case 2:				
				isDisable = true;
				text.setFont(35, 0xE36715);
				text.setSysTextInfo(TEXT_X, TEXT_Y, "LOCK");
			default:
				
		}
		this.addChild(text);
	}
	public function onClick(e:MouseEvent):Void
    {
		if (type == LOCK) 
		{
			Game.displayManager.toMessage("Power_ups is lock");
			Sound.GetSound(Sound.BUTTON).Play();
		}else 
		{
			switch (Game.data.playerData.dataSkill.chooseSkill(info.id)) 
			{
				case DTSkill.LOCK:
					Game.displayManager.toMessage("Power_ups is lock");
					Sound.GetSound(Sound.BUTTON).Play();
				case DTSkill.CHOOSED:
					Game.displayManager.toMessage("Power_ups ready");
					Sound.GetSound(Sound.BUTTON).Play();
				case DTSkill.FULL:
					Game.displayManager.toMessage("Power_ups full");
					Sound.GetSound(Sound.BUTTON).Play();
				case DTSkill.MODE:
					Game.displayManager.toMessage("Power_ups is lock");
					Sound.GetSound(Sound.BUTTON).Play();
				case DTSkill.MONEY:
					Game.displayManager.toMessage("Not enough money");
					Sound.GetSound(Sound.BUTTON).Play();
				case DTSkill.SUCCEED:
					Sound.GetSound(Sound.CHOOSE_SKILL).Play();
				default:
					
			}
		}
		
	}
}