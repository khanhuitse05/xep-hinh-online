package game.gameobject.brick;

import game.tnk.Game;
import motion.Actuate;
import openfl.display.Tilesheet;
import openfl.display.BitmapData;
import openfl.display.Sprite;
import openfl.geom.Rectangle;
import motion.easing.Quad;
import openfl.events.Event;

/**
 * ...
 * @author KhanhTN
 */
class Brick extends Sprite
{
	public var type:Int;
	private var state:Int;
	public var column:Int;
	public var row:Int;
	public var special:Int;
	public var isMoving:Bool;	
	public var X:Float;
	public var Y:Float;
	private var tilesheet:Tilesheet;
	
	public function new() 
	{
		super();
		type = 1;
		init();
		addEventListener(Event.ENTER_FRAME, gameLoop);
	}
	public function init():Void
	{
		var _bitmap:BitmapData = Game.resource.getBitmap(Game.data.playerData.brickID);
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
		this.type = _type;
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
		if (type > 0) 
		{
			this.graphics.clear();
			this.tilesheet.drawTiles(this.graphics, [0, 0, type-1]);
		}
    }
	/**
	 * effect move
	 */
	private var _onMoveComplete : Void->Void;
	public function MoveTo (duration:Float, delay:Float, targetX:Float, targetY:Float, onComplete : Void -> Void = null):Void 
	{
		this._onMoveComplete = onComplete;
		isMoving = true;
		Actuate.tween (this, duration, { x: targetX, y: targetY } ).delay(delay).ease (Quad.easeOut).onComplete (OnMoveToComplete);		
	}
	public function falling(onComplete : Void -> Void = null):Void 
	{
		this._onMoveComplete = onComplete;
		isMoving = true;
		Actuate.tween (this, 0.5, { x: x, y: y + Game.BRICK_HEIGHT} ).delay(0).ease (Quad.easeOut).onComplete (OnMoveToComplete);		
	}
	public function OnMoveToComplete():Void
	{
		isMoving = false;
		this.Y = this.y;
		if (this._onMoveComplete != null)
			this._onMoveComplete();
	}
}