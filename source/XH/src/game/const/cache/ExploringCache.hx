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
	// userName
	// gold
	// level
	// exp
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
	
	public static function writeData()
	{
		var so:SharedObject = SharedObject.getLocal(mLocal,  false);
		so.data.userName = "me";
		so.data.gold = 1000;
		so.data.level = 0;
		so.data.scores = 0;
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
	public static function writeName(_str:String)
	{
		var so:SharedObject = SharedObject.getLocal(mLocal,  false);
		so.data.userName = _str;
		so.flush();
	}
	public static function writeGold(_str:String)
	{
		var so:SharedObject = SharedObject.getLocal(mLocal,  false);
		so.data.gold = _str;
		so.flush();
	}public static function writeLevel(_str:String)
	{
		var so:SharedObject = SharedObject.getLocal(mLocal,  false);
		so.data.level = _str;
		so.flush();
	}
	public static function writeScores(_str:String)
	{
		var so:SharedObject = SharedObject.getLocal(mLocal,  false);
		so.data.scores = _str;
		so.flush();
	}
	// read
	public static function readData():Void
	{
		var so:SharedObject = SharedObject.getLocal(mLocal,  false);
		Game.data.playerData.mUserInfo.userName =  so.data.userName;
		Game.data.playerData.mUserInfo.gold =  so.data.gold;
		Game.data.playerData.mUserInfo.level =  so.data.level;
		Game.data.playerData.mUserInfo.scores =  so.data.scores;
		// skill
		Game.data.playerData.mUserInfo.skill[0] =  so.data.skill00;
		Game.data.playerData.mUserInfo.skill[1] =  so.data.skill01;
		Game.data.playerData.mUserInfo.skill[2] =  so.data.skill02;
		Game.data.playerData.mUserInfo.skill[3] =  so.data.skill03;
		Game.data.playerData.mUserInfo.skill[4] =  so.data.skill04;
		Game.data.playerData.mUserInfo.skill[5] =  so.data.skill05;
		Game.data.playerData.mUserInfo.skill[6] =  so.data.skill06;
		Game.data.playerData.mUserInfo.skill[7] =  so.data.skill07;
		Game.data.playerData.mUserInfo.skill[8] =  so.data.skill08;
		Game.data.playerData.mUserInfo.skill[9] =  so.data.skill09;
	}
	
}