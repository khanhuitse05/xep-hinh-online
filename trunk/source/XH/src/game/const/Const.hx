package game.const;
import game.const.highscore.HighScoreInfo;
import game.tnk.Game;
import haxe.Constraints.Function;

/**
 * ...
 * @author KhanhTN
 */
class Const
{
	private static var DECIMAL = [1000000000, 100000000, 10000000, 1000000, 100000, 10000, 1000, 100, 10, 1];
	public function new() 
	{
		
		
	}
	public static  function init()
	{
		Const.initExp();
	}
	/////////////////////////////////////////////
	// user exp
	/////////////////////////////////////////////
	public static function initExp():Void 
	{
		expPerLevel = 1000;
	}
	public static var expPerLevel:Int;
	public static function getLevel(_num:Int):Int
	{
		return Std.int(_num / expPerLevel) + 1;
	}
	public static function getExp(_num:Int):Int
	{
		return _num % expPerLevel;
	}
	/////////////////////////////////////////////
	// highscore
	/////////////////////////////////////////////
	public static var highScore:Array<HighScoreInfo> = HighScoreInfo.getListHighScore();
	public static function getIndexHighScore():Int
	{
		for (i in 0...highScore.length) 
		{
			if (Game.data.playerData.mUserInfo.scores < highScore[i].score) 
			{
				return i;
			}
		}
		return 0;
	}
	public static function getListHighScore():Array<HighScoreInfo>
	{
		var _high:Array<HighScoreInfo> = new Array<HighScoreInfo>();
		var _me:HighScoreInfo = new HighScoreInfo();
		_me.id = -1;
		_me.name = Game.data.playerData.mUserInfo.userName;
		_me.score = Game.data.playerData.mUserInfo.scores;
		var i = Const.getIndexHighScore();
		if (i < 2) 
		{
			_high.push(_me);
			_high.push(highScore[i]);
			_high.push(highScore[i + 1]);
			_high.push(highScore[i + 2]);
			_high.push(highScore[i + 3]);
			_high.push(highScore[i + 4]);
			_high.push(highScore[i + 5]);
			return _high;
		}else if (i < 4) 
		{
			_high.push(highScore[i - 2]);
			_high.push(highScore[i - 1]);
			_high.push(_me);
			_high.push(highScore[i]);
			_high.push(highScore[i + 1]);
			_high.push(highScore[i + 2]);
			_high.push(highScore[i + 3]);
			return _high;
		}else 
		{					
			_high.push(highScore[i - 3]);
			_high.push(highScore[i - 2]);
			_high.push(highScore[i - 1]);
			_high.push(_me);
			_high.push(highScore[i]);
			_high.push(highScore[i + 1]);
			_high.push(highScore[i + 2]);
			return _high;
		}
		return _high;
	}
	/////////////////////////////////////////////
	// other
	/////////////////////////////////////////////
	public static function NumToString(_num:Int):String
	{
		var _str:String = "";
		if (Std.int(_num/DECIMAL[0]) > 0 ) 
		{
			_str += Std.int(_num / DECIMAL[0]) + ",";
		}
		for (i in 1...DECIMAL.length) 
		{
			if (Std.int(_num/DECIMAL[i]) > 0) 
			{
				_str += Std.int((_num % DECIMAL[i - 1]) / DECIMAL[i]);				
				if ( i%3 == 0 && i != 9) 
				{
					_str += ",";
				}
			}
		}
		if (_str == "") 
		{
			_str = "0";
		}
		return _str;
	}
	
}