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
	public var info:String;
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
				info = "skill abc xyz có khả năng abc xyz tất cả mọi thứ";
				mode = GameMode.NON;
				changeBoard = true;
				endGame = false;
				price = 3400;
				isLock = false;
			case SkillType.BOOM:
				name = "BOOM";
				info = "skill abc xyz có khả năng abc xyz tất cả mọi thứ";
				mode = GameMode.NON;
				changeBoard = true;
				endGame = false;
				price = 2500;
				isLock = true;
			case SkillType.HAMMER:
				name = "FLASH HAMMER";
				info = "skill abc xyz có khả năng abc xyz tất cả mọi thứ";
				mode = GameMode.PVE;
				changeBoard = false;
				endGame = true;
				price = 15000;
				isLock = true;
			case SkillType.TIME:
				name = "TIME MACHINE";
				info = "skill abc xyz có khả năng abc xyz tất cả mọi thứ";
				mode = GameMode.PVE;
				changeBoard = true;
				endGame = false;				
				price = 9600;
				isLock = false;
			case SkillType.MAGNET:
				name = "MAGNET";
				info = "skill abc xyz có khả năng abc xyz tất cả mọi thứ";
				mode = GameMode.NON;
				changeBoard = true;
				endGame = false;
				price = 6400;
				isLock = false;
			case SkillType.SHIELD:
				name = "SHIELD";
				info = "skill abc xyz có khả năng abc xyz tất cả mọi thứ";
				mode = GameMode.PVP;
				changeBoard = false;
				endGame = false;
				price = 5000;
				isLock = false;
			case SkillType.LASERS:
				name = "LASERS";
				info = "skill abc xyz có khả năng abc xyz tất cả mọi thứ";
				mode = GameMode.NON;
				changeBoard = true;
				endGame = false;
				price = 4500;
				isLock = false;
			case SkillType.FINISH:
				name = "FINISH";
				info = "skill abc xyz có khả năng abc xyz tất cả mọi thứ";
				mode = GameMode.PVE;
				changeBoard = false;
				endGame = true;
				price = 30000;
				isLock = false;
			case SkillType.X2:
				name = "X2";
				info = "skill abc xyz có khả năng abc xyz tất cả mọi thứ";
				mode = GameMode.PVE;
				changeBoard = true;
				endGame = false;
				price = 7100;
				isLock = false;
			case SkillType.EASY:
				name = "EASY";
				info = "skill abc xyz có khả năng abc xyz tất cả mọi thứ";
				mode = GameMode.NON;
				changeBoard = false;
				endGame = false;
				price = 3000;
				isLock = false;
			default:
				name = "NONE";
				info = "skill abc xyz có khả năng abc xyz tất cả mọi thứ";
				mode = GameMode.NON;
				changeBoard = false;
				endGame = false;
				price = 0;
				isLock = true;
		}
	}
	
}