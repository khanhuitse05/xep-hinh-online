package game.data.skill ;
import game.const.skill.SkillInfo;
import game.gameobject.gameplay.GameMode;
import game.tnk.Game;

/**
 * ...
 * @author KhanhTN
 */
class DTSkill
{
	public static var				MAX_SKILL:Int = 10;
	public static var				MAX_CHOOSE:Int = 3;
	
	public static var				SUCCEED:Int = 0;
	public static var				LOCK:Int = 1;
	public static var				MODE:Int = 2;
	public static var				CHOOSED:Int = 3;
	public static var				FULL:Int = 4;
	public static var				MONEY:Int = 5;

	public var mode:Int;
	public var isUpdateTop:Bool;
	public var priceAll:Int;
	
    public var skillUtimate: Int;
    public var skillAct : Array<Int> = new Array<Int>();
    public var skill : Array<Int> = new Array<Int>();
	
	public function new() 
	{
		isUpdateTop = false;
		skillAct = new Array<Int>();
		skill = new Array<Int>();
		skillUtimate = 0;
	}
	public function refreshSkill():Void
	{
		skillUtimate = 0;
		for (i in 0...MAX_CHOOSE) 
		{
			skillAct[i] = 0;
		}
	}
	public function chooseSkill(_id:Int):Int
	{
		var _skillInfo:SkillInfo = new SkillInfo(_id);
		// check loock
		if (_skillInfo.isLock) 
		{
			// skill lock
			return LOCK;
		}else if (_skillInfo.mode != mode && _skillInfo.mode != GameMode.NON ) 
		{
			// ko the chon skill
			return MODE;
		}
		// untimate
		if (mode == GameMode.PVE && _skillInfo.endGame) 
		{
			if (skillUtimate != _skillInfo.id) 
			{
				if (CheckMoney(_skillInfo.id)) 
				{
					skillUtimate = _skillInfo.id;
					isUpdateTop = true;
					return SUCCEED;
				}else 
				{
					return MONEY;
				}
			}else 
			{
				//skill da duoc chon
				return CHOOSED;
			}
		}else 
		{
			if (checkHave(_skillInfo.id)) 
			{
				//skill da duoc chon
				return CHOOSED;
			}
			if (getEmpty() == -1) 
			{
				//skill chi duoc chon 3
				return FULL;
			}
			if (Game.data.playerData.dataSkill.skill[_skillInfo.id - 1] > 0) 
			{
				skillAct[getEmpty()] = _skillInfo.id;
				isUpdateTop = true;
				return SUCCEED;
			}else
			{
				if (CheckMoney(_skillInfo.id)) 
				{
					skillAct[getEmpty()] = _skillInfo.id;
					isUpdateTop = true;
					return SUCCEED; 
				}else 
				{
					return MONEY;
				}
			}
		}
		return LOCK;
	}
	public function checkHave(_id:Int):Bool
	{
		for (i in 0...MAX_CHOOSE) 
		{
			if (skillAct[i] == _id) 
			{
				return true;
			}
		}
		return false;
	}
	public function getEmpty():Int
	{
		for (i in 0...MAX_CHOOSE) 
		{
			if (skillAct[i] <= 0) 
			{
				return i;
			}
		}
		return -1;
	}
	public function CheckMoney(_id:Int):Bool
	{
		var _skillInfo:SkillInfo = new SkillInfo(_id);
		var _num:Int = getAllMoney() + _skillInfo.price;
		if (_num <= Game.data.playerData.mUserInfo.gold) 
		{
			return true;
		}else 
		{
			return false;
		}
	}
	public function getAllMoney():Int
	{
		var _num:Int = 0;
		if (skillUtimate > 0 && mode == GameMode.PVE)
		{
			if (Game.data.playerData.dataSkill.skill[skillUtimate - 1] <= 0 ) 
			{
				var _skillInfo:SkillInfo = new SkillInfo(skillUtimate);
				_num += _skillInfo.price;
			}
		}
		for (i in 0...MAX_CHOOSE) 
		{
			if (skillAct[i] > 0) 
			{
				if (Game.data.playerData.dataSkill.skill[skillAct[i] - 1] <= 0) 
				{
					var _skillInfo:SkillInfo = new SkillInfo(skillAct[i]);
					_num += _skillInfo.price;
				}
			}
		}
		return _num;
		
	}
	public function cancelSkill(_id:Int):Void
	{
		for (i in 0...MAX_CHOOSE) 
		{
			if (this.skillAct[i] == _id) 
			{
				this.skillAct[i] = 0;
			}
		}
		isUpdateTop = true;
	}
	public function cancelUtimate():Void
	{
		skillUtimate = 0;
		isUpdateTop = true;
	}
	public function onPlay():Void
	{
		DataController.onGold(0 - getAllMoney());
		if (skillUtimate > 0 && mode == GameMode.PVE)
		{
			if (Game.data.playerData.dataSkill.skill[skillUtimate - 1] > 0 ) 
			{
				DataController.onSkill(skillUtimate, -1);
			}
		}
		for (i in 0...MAX_CHOOSE) 
		{
			if (skillAct[i] > 0) 
			{
				if (Game.data.playerData.dataSkill.skill[skillAct[i] - 1] > 0) 
				{
					DataController.onSkill(skillAct[i], -1);
				}
			}
		}
	}
}