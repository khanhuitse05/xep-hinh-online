package game.gameobject.brick;

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
class Border extends Sprite
{

	public static var LEFT:Int = 0;
	public static var TOP:Int = 1;
	public static var RIGHT:Int = 2;
	public static var BOTTOM:Int = 3;
	
	public var mType:Int;
	private var column:Int;
	private var row:Int;
	
	private var tilesheet:Tilesheet;
	
	public function new() 
	{
		super();
		mType = -1;
		var _bitmap:BitmapData = Game.resource.getBitmap(Defines.GFX_BORDER_BRICK);
		tilesheet = new Tilesheet (_bitmap);
		for (i in 0...4)
		{			
			tilesheet.addTileRect(new Rectangle(i * Game.BRICK_WIDTH, 0, Game.BRICK_WIDTH, Game.BRICK_HEIGHT), null);
		}
		addEventListener(Event.ENTER_FRAME, gameLoop);
	}
	public function setInfo(_type:Int, _row:Int, _col:Int):Void
	{
		row = _row;
		column = _col;
		this.x =  column * Game.BRICK_WIDTH;
		this.y = 0 - (row + 1) * Game.BRICK_HEIGHT;		
		this.mType = _type;
	}
	/**
	 * 
	 * @param	e
	 */
	private function gameLoop(e:Event):Void 
    {
		gameDraw();
    }
	private function gameDraw():Void 
    {
		//drawtiles
		if (this.mType >= 0) 
		{
			this.graphics.clear();
			this.tilesheet.drawTiles(this.graphics, [0, 0, mType]);
		}else 
		{
			this.graphics.clear();			
		}
    }	
}