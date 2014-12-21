package core.util;

#if flash
import flash.external.ExternalInterface;
#end

/**
 * ...
 * @author KhanhTN
 */
class Log
{
	public static var INFO :  String = "=== INFO === : ";
	public static var ERROR : String = "=== ERROR === : ";
	
	public function new() 
	{
		
	}
	
	public static function info(message : String) : Void
	{
		#if flash 
			if (ExternalInterface.available) ExternalInterface.call("console.info", INFO + message);
			else trace(INFO + message);
		#else
			trace(INFO + message);
		#end
	}
	
	public static function error(message : String) : Void
	{
		#if flash 
			if (ExternalInterface.available) ExternalInterface.call("console.error", ERROR + message);
			else trace(ERROR + message);
		#else
			trace(ERROR + message);
		#end
		
	}
	
}