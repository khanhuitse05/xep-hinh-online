package game.const.cache;
import game.tnk.Game;
import openfl.net.SharedObject;

/**
 * ...
 * @author KhanhTN
 */
class ExploringCache
{
	private static var mLocal = "abcxyz-2112-1515-1055-354";
	// userID
	// userName
	// elo
	// gold
	// exp
	// score
	// holde
	// future
	// skill01
	// skill09
	
	public static function CheckExist(): Bool
	{
		var so:SharedObject = SharedObject.getLocal(mLocal,  false);
		if (so.data.userName != null) 
		{
			if (so.data.userName != "") 
			{
				return true;
			}
		}
		return false;
	}
	public static function CheckSignUp(): Bool
	{
		var so:SharedObject = SharedObject.getLocal(mLocal,  false);
		if (so.data.userID != null) 
		{
			if (so.data.userID != "") 
			{
				return true;
			}
		}
		return false;
	}
	
	public static function writeData()
	{
		var so:SharedObject = SharedObject.getLocal(mLocal,  false);
		so.data.userName = "Ping";
		so.data.elo = 0;
		so.data.gold = 10000;
		so.data.exp = 0;
		so.data.hold = 1;
		so.data.future = 1;
		so.data.scores = 0;
		so.data.scoresDate = Std.int(Date.now().getTime());
		// skill
		so.data.skill00 = 0;
		so.data.skill01 = 0;
		so.data.skill02 = 0;
		so.data.skill03 = 0;
		so.data.skill04 = 0;
		so.data.skill05 = 0;
		so.data.skill06 = 0;
		so.data.skill07 = 0;
		so.data.skill08 = 0;
		so.data.skill09 = 0;
		so.flush();
	}
	public static function getID():String
	{
		var so:SharedObject = SharedObject.getLocal(mLocal,  false);
		return so.data.userID;
	}
	public static function writeID(_str:String)
	{
		var so:SharedObject = SharedObject.getLocal(mLocal,  false);
		so.data.userID = _str;
		so.flush();
	}
	public static function writeElo(_str:Int)
	{
		var so:SharedObject = SharedObject.getLocal(mLocal,  false);
		so.data.elo = _str;
		so.flush();
	}
	public static function writeScore(_str:Int)
	{
		var so:SharedObject = SharedObject.getLocal(mLocal,  false);
		so.data.score = _str;
		so.data.scoreDate = Date.now().getTime();
		so.flush();
	}
	public static function writeName(_str:String)
	{
		var so:SharedObject = SharedObject.getLocal(mLocal,  false);
		so.data.userName = _str;
		so.flush();
	}
	public static function writeGold(_str:Int)
	{
		var so:SharedObject = SharedObject.getLocal(mLocal,  false);
		so.data.gold = _str;
		so.flush();
	}
	public static function writeExp(_str:Int)
	{
		var so:SharedObject = SharedObject.getLocal(mLocal,  false);
		so.data.exp = _str;
		so.flush();
	}
	public static function writeHold(_str:Int)
	{
		var so:SharedObject = SharedObject.getLocal(mLocal,  false);
		so.data.hold = _str;
		so.flush();
	}
	public static function writeFuture(_str:Int)
	{
		var so:SharedObject = SharedObject.getLocal(mLocal,  false);
		so.data.future = _str;
		so.flush();
	}
	public static function writeSkill(_id:Int, _num:Int)
	{
		if (_num < 0) 
		{
			_num = 0;
		}
		var so:SharedObject = SharedObject.getLocal(mLocal,  false);
		switch (_id) 
		{
			case 1:
				so.data.skill00 = _num;
			case 2:
				so.data.skill01 = _num;
			case 3:
				so.data.skill02 = _num;
			case 4:
				so.data.skill03 = _num;
			case 5:
				so.data.skill04 = _num;
			case 6:
				so.data.skill05 = _num;
			case 7:
				so.data.skill06 = _num;
			case 8:
				so.data.skill07 = _num;
			case 9:
				so.data.skill08 = _num;
			case 10:
				so.data.skill09 = _num;
			default:
				
		}
		so.flush();
	}
	// read
	public static function readData():Void
	{
		var so:SharedObject = SharedObject.getLocal(mLocal,  false);
		Game.data.playerData.mUserInfo.userName =  so.data.userName;
		Game.data.playerData.mUserInfo.elo =  so.data.elo;
		Game.data.playerData.mUserInfo.userID =  so.data.userID;
		Game.data.playerData.mUserInfo.gold =  so.data.gold;
		Game.data.playerData.mUserInfo.hold =  so.data.hold;
		Game.data.playerData.mUserInfo.future =  so.data.future;
		Game.data.playerData.mUserInfo.exp =  so.data.exp;
		Game.data.playerData.mUserInfo.score =  so.data.score;
		//Game.data.playerData.mUserInfo.scoreDate =  so.data.scoreDate;
		// skill
		Game.data.playerData.dataSkill.skill[0] =  so.data.skill00;
		Game.data.playerData.dataSkill.skill[1] =  so.data.skill01;
		Game.data.playerData.dataSkill.skill[2] =  so.data.skill02;
		Game.data.playerData.dataSkill.skill[3] =  so.data.skill03;
		Game.data.playerData.dataSkill.skill[4] =  so.data.skill04;
		Game.data.playerData.dataSkill.skill[5] =  so.data.skill05;
		Game.data.playerData.dataSkill.skill[6] =  so.data.skill06;
		Game.data.playerData.dataSkill.skill[7] =  so.data.skill07;
		Game.data.playerData.dataSkill.skill[8] =  so.data.skill08;
		Game.data.playerData.dataSkill.skill[9] =  so.data.skill09;
	}
	
	
}