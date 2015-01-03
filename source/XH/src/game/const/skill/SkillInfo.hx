package game.const.skill;
import game.gameobject.gameplay.GameMode;
import game.gameobject.skill.SkillType;

/**
 * ...
 * @author KhanhTN
 */
class SkillInfo
{
	public var id:Int;
	public var name:String;
	public var mode:Int;
	public var changeBoard:Bool;
	public var endGame:Bool;
	public var price:Int;
	public var isLock:Bool;
	
	public function new(_id:Int) 
	{
		id = _id;
		switch (_id) 
		{
			case SkillType.METEOR:
				name = "METEOR STORM";
				mode = GameMode.NON;
				changeBoard = true;
				endGame = false;
				price = 3400;
				isLock = false;
			case SkillType.BOOM:
				name = "BOOM";
				mode = GameMode.NON;
				changeBoard = true;
				endGame = false;
				price = 2500;
				isLock = true;
			case SkillType.HAMMER:
				name = "FLASH HAMMER";
				mode = GameMode.PVE;
				changeBoard = false;
				endGame = true;
				price = 15000;
				isLock = true;
			case SkillType.TIME:
				name = "TIME MACHINE";
				mode = GameMode.PVE;
				changeBoard = true;
				endGame = false;				
				price = 9600;
				isLock = false;
			case SkillType.MAGNET:
				name = "MAGNET";
				mode = GameMode.NON;
				changeBoard = true;
				endGame = false;
				price = 6400;
				isLock = false;
			case SkillType.SHIELD:
				name = "SHIELD";
				mode = GameMode.PVP;
				changeBoard = false;
				endGame = false;
				price = 5000;
				isLock = false;
			case SkillType.LASERS:
				name = "LASERS";
				mode = GameMode.NON;
				changeBoard = true;
				endGame = false;
				price = 4500;
				isLock = false;
			case SkillType.FINISH:
				name = "FINISH";
				mode = GameMode.PVE;
				changeBoard = false;
				endGame = true;
				price = 30000;
				isLock = false;
			case SkillType.X2:
				name = "X2";
				mode = GameMode.PVE;
				changeBoard = true;
				endGame = false;
				price = 7100;
				isLock = false;
			case SkillType.EASY:
				name = "EASY";
				mode = GameMode.NON;
				changeBoard = false;
				endGame = false;
				price = 3000;
				isLock = false;
			default:
				name = "NONE";
				mode = GameMode.NON;
				changeBoard = false;
				endGame = false;
				price = 0;
				isLock = true;
		}
	}
	
}