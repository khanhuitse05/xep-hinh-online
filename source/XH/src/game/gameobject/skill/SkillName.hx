package game.gameobject.skill ;

import core.resource.Defines;
import game.const.skill.SkillInfo;
import game.tnk.Game;
import openfl.events.Event;
import openfl.events.MouseEvent;
import openfl.geom.Rectangle;
import openfl.display.Tilesheet;
import openfl.display.BitmapData;
import openfl.display.Sprite;

/**
 * ...
 * @author KhanhTN
 */
class SkillName extends Sprite
{
	public static var SKILL_WIDTH = 265;
	public static var SKILL_HEIGHT = 36;
	
	private var info:SkillInfo;
	private var tilesheet:Tilesheet;
	
	public function new(_id:Int) 
	{
		super();
		info = new SkillInfo(_id);
		init();
		addEventListener(Event.ENTER_FRAME, gameLoop);
	}
	public function init():Void
	{
		var _bitmap:BitmapData = Game.resource.getBitmap(Defines.GFX_SKILL_NAME);
		tilesheet = new Tilesheet (_bitmap);
		for (i in 0...11) 
		{			
			tilesheet.addTileRect(new Rectangle(0, i * SKILL_HEIGHT, SKILL_WIDTH, SKILL_HEIGHT), null);
		}
	}
	private function gameLoop(e:Event):Void 
    {
		gameDraw();
    }
	private function gameDraw():Void 
    {
		this.graphics.clear();
		this.tilesheet.drawTiles(this.graphics, [0, 0,info.id]);
    }
	
}