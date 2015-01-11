package game.gameobject.rank;

import core.resource.Defines;
import game.tnk.Game;
import openfl.display.BitmapData;
import openfl.display.Sprite;
import openfl.display.Tilesheet;
import openfl.events.Event;
import openfl.geom.Rectangle;

/**
 * ...
 * @author KhanhTN
 */
class RankIndex extends Sprite
{

	public static var IMAGE_WIDTH = 50;
	public static var IMAGE_HEIGHT = 71;
	
	public var id:Int;
	private var tilesheet:Tilesheet;
	
	public function new(_id:Int) 
	{
		super();
		id = _id;
		init();
		addEventListener(Event.ENTER_FRAME, gameLoop);
	}
	public function init():Void
	{
		var _bitmap:BitmapData = Game.resource.getBitmap(Defines.GFX_RANK_INDEX);
		tilesheet = new Tilesheet (_bitmap);
		for (i in 0...20) 
		{			
			tilesheet.addTileRect(new Rectangle(Std.int(i / 10) * IMAGE_WIDTH, (i%10) * IMAGE_HEIGHT, IMAGE_WIDTH, IMAGE_HEIGHT), null);
		}
	}
	private function gameLoop(e:Event):Void 
    {
		gameDraw();
    }
	private function gameDraw():Void 
    {
		this.graphics.clear();
		if (id >=0) 
		{
			this.tilesheet.drawTiles(this.graphics, [0, 0, id]);
		}
    }
	public function update(_id:Int):Void
	{
		id = _id;
	}
	
}