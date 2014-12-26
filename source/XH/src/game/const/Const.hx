package game.const;

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