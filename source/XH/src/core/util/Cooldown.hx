package core.util;
import openfl.Lib;

/**
 * ...
 * @author Huydm2
 */
class Cooldown
{
	public function new() 
	{}
	
	public function initWith(duration: Float)
	{
		this.duration = duration;
		start = Lib.getTimer() / 1000;
	}
	
	public function isFinished() : Bool
	{
		var cur = Lib.getTimer() / 1000;
		
		return (cur >= start + duration);
	}
	
	public function getPercentage() :Float
	{
		var cur = Lib.getTimer() / 1000;
		return (duration > 0) ? Math.max((cur - start) / duration, 1) : 1;
	}
	
	public function setDuration(duration: Float)
	{
		this.duration = duration;
	}
	
	public function reset()
	{
		start = Lib.getTimer() / 1000;
	}
	
	public function getDuration() : Float 
	{
		return duration; 
	}
	
	public function getRemain() : Float
	{
		var cur = Lib.getTimer() / 1000;
		return Math.max(cur - start, 0);
	}
	
	private var start	:Float;
	private var duration:Float;
}