package game.gameobject.user;

import core.resource.Defines;
import game.tnk.Game;
import openfl.display.Sprite;

/**
 * ...
 * @author KhanhTN
 */
class BrickChoose extends Sprite
{

	private var brick:Sprite;
	private var blue:Sprite;
	private var red:Sprite;
	public var id:Int;
	public function new(_id:Int) 
	{
		super();
		id = _id;
		init();
	}
	private function init():Void
	{
		brick = Game.resource.getSprite(Defines.GFX_INFO_BRICK01 + id);
		brick.x = 0 - brick.width / 2;
		brick.y = 0 - brick.height / 2;
		this.addChild(brick);
		blue = Game.resource.getSprite(Defines.GFX_INFO_BLUE);
		blue.x = 0 - blue.width / 2;
		blue.y = 0 - blue.height / 2;
		this.addChild(blue);
		red = Game.resource.getSprite(Defines.GFX_INFO_RED);
		red.x = 0 - red.width / 2;
		red.y = 0 - red.height / 2;
		this.addChild(red);
	}
	public function setBlue():Void {
		blue.visible = true;
		red.visible = false;
	}
	public function setRed():Void {
		blue.visible = false;
		red.visible = true;
	}
	
}