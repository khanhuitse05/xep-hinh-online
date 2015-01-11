package scene.home;

import core.event.EventEx;
import haxe.Timer;
import openfl.display.FPS;
import openfl.events.Event;
import openfl.system.System;
import openfl.text.TextField;
import openfl.text.TextFormat;

/**
 * ...
 * @author KhanhTN
 */
class FPS_Mem extends TextField
{
	private var times:Array<Float>;
	private var memPeak:Float = 0;
	public function new(inX:Float = 10.0, inY:Float = 10.0, inCol:Int = 0xffffff) 
	{
		super();
		x = inX;
		y = inY;
		selectable = false;
		
		var pFormat:TextFormat = new TextFormat();
		pFormat.size = 30;
		pFormat.color = inCol;
        this.defaultTextFormat = pFormat;
		
		text = "FPS: ";
		
		times = [];
		addEventListener(Event.ENTER_FRAME, onEnter);
		width = 600;
		height = 70;
	}
	private function onEnter(e:Event)
	{	
		var now = Timer.stamp();
		times.push(now);
		
		while (times[0] < now - 1)
			times.shift();
			
		var mem:Float = Math.round(System.totalMemory / 1024 / 1024 * 100)/100;
		if (mem > memPeak) memPeak = mem;
		
		if (visible)
		{	
			text = "FPS: " + times.length + "  / MEM: " + mem + " MB";
		}
	}
}