package core.util;
import core.display.csprite.*;
import openfl.Lib;


/**
 * ...
 * @author Huydm2
 */
class Engine
{
	function new() 
	{ }
	
	public static function init()
	{		
		lastTime = Lib.getTimer() / 1000;
	}
	
	public static function shutdown()
	{
	}
		
	public static function update()
	{
		// calculate deltatime
		var currTime = Lib.getTimer() / 1000;
		var deltaTime = (currTime - lastTime);
		lastTime = currTime;
		deltaTime = (deltaTime > 0.1) ? 0.1 : deltaTime ;
				
		// update systems		
		
		
	}
		
	private static var lastTime :Float;
}