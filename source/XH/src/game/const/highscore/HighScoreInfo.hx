package game.const.highscore;

/**
 * ...
 * @author KhanhTN
 */
class HighScoreInfo
{
	public static var LOCK:Int 		= -2;
	public static var ME:Int 		= -1;
	public static var CHALLENGE:Int = 0;
	
	private static var MAX:Int = 25;
	private static var NAMES:Array<String> = ["Jameadr", "BullDog", "Duck", "Aloha", "ZzZkra",
												"Teoo", "HeadShot", "Phoenix", "QQkaius", "Qmfuyfyfa",
												"Titititi", "Ciaciacia", "KKKKKKzua", "Drakula", "KingofGuarsf",
												"Bito", "Pen", "Kenzslf", "Critiano", "XAAAAAA",
												"Ping", "Ping Ping", "Ping kaka", "Ping", "Ping",
												"Ping", "Ping", "Ping", "Ping", "Ping"];
	public static var SCORES:Array<Int> = [20000, 48000, 89000, 123000, 171000,
											210000,262000,333000,389000,441000,
											500000,572000,680000,800000,1000000,
											15000000,2000000,3000000,3600000,9000000,
											11000000, 17000000, 28000000, 41000000, 99000000,
											110000000,170000000,280000000,410000000,990000000,];
	
	public var id:Int;
	public var name:String;
	public var score:Int;
	
	public function new() 
	{
		
	}
	
	public static function getListHighScore():Array<HighScoreInfo>
	{
		var _arr:Array<HighScoreInfo> = new Array<HighScoreInfo>();
		for (i in 0...MAX) 
		{
			_arr[i] = new HighScoreInfo();
			_arr[i].id = i;
			_arr[i].name = NAMES[i];
			_arr[i].score = SCORES[i];
		}
		return _arr;
	}
	
}