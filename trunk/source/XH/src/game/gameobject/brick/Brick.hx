package game.gameobject.brick;

import game.tnk.Game;
import openfl.display.Tilesheet;
import openfl.display.BitmapData;
import openfl.display.Sprite;
import openfl.geom.Rectangle;
import openfl.events.Event;
import tweenx909.TweenX;

/**
 * ...
 * @author KhanhTN
 */
class Brick extends Sprite
{
	public var mType:Int;
	private var mState:Int;
	public var column:Int;
	public var row:Int;
	
	public var special:Int;
	public var isMoving:Bool;
	private var tilesheet:Tilesheet;
	
	public function new() 
	{
		super();
		this.mType = 1;
		init();
		addEventListener(Event.ENTER_FRAME, gameLoop);
	}
	public function init():Void
	{
		var _bitmap:BitmapData = Game.resource.getBitmap(Game.data.playerData.mBrickID);
		tilesheet = new Tilesheet (_bitmap);
		for (i in 0...10) 
		{			
			tilesheet.addTileRect(new Rectangle(i * Game.BRICK_WIDTH, 0, Game.BRICK_WIDTH, Game.BRICK_HEIGHT), null);
		}
		
	}
	public function setValue(_x:Int, _y:Int, _type:Int):Void
	{
		this.x = _x;
		this.y = _y;
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
		if (this.mType > 0) 
		{
			this.graphics.clear();
			this.tilesheet.drawTiles(this.graphics, [0, 0, mType - 1]);
		}else 
		{
			this.graphics.clear();			
		}
    }
	/**
	 * effect move
	 */
	public function MoveTo (duration:Float, delay:Float, targetX:Float, targetY:Float):Void 
	{
		isMoving = true;
		TweenX.to(this, { x: targetX, y: targetY }, duration);
	}
	public function falling(onComplete : Void -> Void = null):Void 
	{
		isMoving = true;
		TweenX.to(this, { x: x, y: y + Game.BRICK_HEIGHT}, 0.3);	
	}
	
	
	function set_column(value:Int):Int 
	{
		return column = value;
	}
	
	
	function set_row(value:Int):Int 
	{
		return row = value;
	}
}