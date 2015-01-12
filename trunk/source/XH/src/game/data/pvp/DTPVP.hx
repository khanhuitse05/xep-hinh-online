package game.data.pvp;
import game.tnk.Game;

/**
 * ...
 * @author KhanhTN
 */
class DTPVP
{
	// result
	public static var R_WIN = 0;
	public static var R_DRAW = 1;
	public static var R_LOSE = 2;
	public static var R_DISCONET = 3;
	
	// response PvP
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
	
	public var eloResult:Int;
	public var result:Int;
	
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
		infoMine.skill = Game.data.playerData.dataSkill.skillAct;
		infoMine.elo = Game.data.playerData.mUserInfo.elo;
		infoMine.avatar = Game.data.playerData.mUserInfo.avatar;
		infoMine.gift = 0;
		
		eloResult = 0;
		result = 0;
	}
	
}