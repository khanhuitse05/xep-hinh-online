package game.data.pvp;
import game.tnk.Game;

/**
 * ...
 * @author KhanhTN
 */
class DTPVP
{
	
	public static var NEXT = 0;
	public static var HOLD = 1;
	public static var FALL = 2;
	public static var GROW = 3;
	public static var LASERS = 4;
	public static var MAGNET = 5;
	public static var METEOR = 6;
	
	public var dataEnemy:DTEnemy;
	public var dataMine:DTMine;
	
	public var infoEnemy:DTPlayerInfo;
	public var infoMine:DTPlayerInfo;
	public var dataRoom:DTPVPRoom;
	
	public function new() 
	{
		dataEnemy = new DTEnemy();
		dataMine = new DTMine();
		infoEnemy = new DTPlayerInfo();
		infoMine = new DTPlayerInfo();
		dataRoom =  new DTPVPRoom();
	}
	public function setRefresh():Void
	{
		dataEnemy = new DTEnemy();
		dataMine = new DTMine();
		infoEnemy = new DTPlayerInfo();
		infoMine = new DTPlayerInfo();
		dataRoom =  new DTPVPRoom();
		
		infoMine.userName = Game.data.playerData.mUserInfo.userName;
		infoMine.exp = Game.data.playerData.mUserInfo.exp;
		infoMine.skill = Game.data.playerData.dataSkill.skill;
		infoMine.elo = Game.data.playerData.mUserInfo.elo;
		infoMine.avatar = Game.data.playerData.mUserInfo.avatar;
		infoMine.gift = 0;
	}
	
}