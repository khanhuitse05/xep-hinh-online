package game.data;
import game.const.cache.ExploringCache;
import game.tnk.Game;

/**
 * ...
 * @author KhanhTN
 */
class DataController
{

	public function new() 
	{
		
	}
	public static function onGold(_num:Int):Void
	{
		Game.data.playerData.mUserInfo.gold += _num;
		ExploringCache.writeGold(Game.data.playerData.mUserInfo.gold);
	}
	public static function onElo(_num:Int):Void
	{
		Game.data.playerData.mUserInfo.elo = _num;
		ExploringCache.writeElo(Game.data.playerData.mUserInfo.elo);
	}
	public static function onExp(_num:Int):Void
	{
		Game.data.playerData.mUserInfo.exp += _num;
		ExploringCache.writeExp(Game.data.playerData.mUserInfo.exp);
	}
	public static function onSkill(_id:Int, _num:Int):Void
	{
		Game.data.playerData.dataSkill.skill[_id - 1] += _num;
		ExploringCache.writeSkill(_id, Game.data.playerData.dataSkill.skill[_id - 1]);
	}
	
	
}