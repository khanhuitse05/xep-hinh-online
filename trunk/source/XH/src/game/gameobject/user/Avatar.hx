package game.gameobject.user;

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
class Avatar extends Sprite
{
	public static var IMAGE_WIDTH = 100;
	public static var IMAGE_HEIGHT = 100;
	
	private var tilesheet:Tilesheet;
	private var index:Int;
	
	public function new(_id:Int) 
	{
		super();
		index = _id;
		init();
		addEventListener(Event.ENTER_FRAME, gameLoop);
	}
	public function init():Void
	{
		var _bitmap:BitmapData = Game.resource.getBitmap(Defines.GFX_AVATAR);
		tilesheet = new Tilesheet (_bitmap);
		for (i in 0...10) 
		{			
			tilesheet.addTileRect(new Rectangle(i * IMAGE_WIDTH, 0, IMAGE_WIDTH, IMAGE_HEIGHT), null);
		}
	}
	private function gameLoop(e:Event):Void 
    {
		gameDraw();
    }
	private function gameDraw():Void 
    {
		this.graphics.clear();
		if (index >=0) 
		{
			this.tilesheet.drawTiles(this.graphics, [0, 0, index]);
		}
    }
	public function update(_id:Int):Void
	{
		index = _id;
	}
	
}