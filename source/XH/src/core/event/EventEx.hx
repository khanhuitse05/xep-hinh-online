package core.event;
import openfl.events.Event;

/**
 * ...
 * @author anhtinh
 */
class EventEx extends Event
{
	public var data:Dynamic;
	
	public function new(type:String, data:Dynamic = null, bubbles:Bool=false, cancelable:Bool=false) 
	{
		super(type, bubbles, cancelable);
		this.data = data;
	}
	
}