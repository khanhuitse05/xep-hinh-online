package game.data.pvp;

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
	
}