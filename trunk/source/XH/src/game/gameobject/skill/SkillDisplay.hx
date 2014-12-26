package game.gameobject.skill ;

import core.resource.Defines;
import game.const.skill.SkillInfo;
import game.tnk.Game;
import openfl.events.MouseEvent;
import openfl.geom.Rectangle;
import openfl.events.Event;
import openfl.display.Tilesheet;
import openfl.display.BitmapData;
import openfl.display.Sprite;

/**
 * ...
 * @author KhanhTN
 */
class SkillDisplay extends Sprite
{
	public static var SKILL_WIDTH = 100;
	public static var SKILL_HEIGHT = 100;
	
	public var info:SkillInfo;
	private var tilesheet:Tilesheet;
	private var _onMouseClick:MouseEvent->Void;
	
	public function new(_id:Int) 
	{
		super();
		info = new SkillInfo(_id);
		init();
		addEventListener(Event.ENTER_FRAME, gameLoop);
	}
	public function init():Void
	{
		var _bitmap:BitmapData = Game.resource.getBitmap(Defines.GFX_SKILL_DISPLAY);
		tilesheet = new Tilesheet (_bitmap);
		for (i in 0...11) 
		{			
			tilesheet.addTileRect(new Rectangle(i * SKILL_WIDTH, 0, SKILL_WIDTH, SKILL_WIDTH), null);
		}
	}
	private function gameLoop(e:Event):Void 
    {
		gameDraw();
    }
	private function gameDraw():Void 
    {
		this.graphics.clear();
		if (info.id >=0) 
		{
			this.tilesheet.drawTiles(this.graphics, [0, 0, info.id]);
		}
    }
	public function update(_id:Int):Void
	{
		info = new SkillInfo(_id);
	}
	
}