package game.gameobject.brick;

import core.resource.Defines;
import game.gameobject.skill.SkillType;
import game.tnk.Game;
import motion.Actuate;
import motion.easing.Quad;
import openfl.display.BitmapData;
import openfl.display.Sprite;
import openfl.display.Tilesheet;
import openfl.events.Event;
import openfl.geom.Rectangle;

/**
 * ...
 * @author KhanhTN
 */
class Brick extends Sprite
{
	
	public static var TIME_FALL = 0.03;
	
	public var mType:Int;
	public var mSkill:Int;
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
		this.mSkill = -1;
		init();
		addEventListener(Event.ENTER_FRAME, gameLoop);
	}
	public function init():Void
	{
		var _bitmap:BitmapData = Game.resource.getBitmap(Game.data.playerData.mBrickID + Defines.GFX_BRICK_001);
		tilesheet = new Tilesheet (_bitmap);
		for (i in 0...21) 
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
			if (mSkill == SkillType.BOOM ||
				mSkill == SkillType.EASY ||
				mSkill == SkillType.LASERS ||
				mSkill == SkillType.MAGNET ||
				mSkill == SkillType.METEOR ||
				mSkill == SkillType.X2 ||
				mSkill == SkillType.TIME) 
			{
				this.tilesheet.drawTiles(this.graphics, [0, 0, mSkill + 11]);
			}else
			{
				this.tilesheet.drawTiles(this.graphics, [0, 0, mType - 1]);				
			}
		}else 
		{
			this.graphics.clear();			
		}
    }
	/**
	 * effect move
	 */
	public function MoveTo (duration:Float, targetX:Float, targetY:Float):Void 
	{
		isMoving = true;
		Actuate.tween(this, duration, { x: targetX, y: targetY }).ease(Quad.easeOut);
	}
	public function falling(onComplete : Void -> Void = null):Void 
	{
		isMoving = true;
		Actuate.tween(this,  TIME_FALL, {y: y + Game.BRICK_HEIGHT});	
	}
	public function growing(onComplete : Void -> Void = null):Void 
	{
		isMoving = true;
		Actuate.tween(this,  TIME_FALL, {y: y - Game.BRICK_HEIGHT});	
	}
	public function appearing(onComplete : Void -> Void = null):Void 
	{
		isMoving = true;
		this.scaleY = 0;
		Actuate.tween(this,  TIME_FALL, {scaleY: 1});	
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