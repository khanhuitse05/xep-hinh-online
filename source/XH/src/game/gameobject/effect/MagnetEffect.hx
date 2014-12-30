package game.gameobject.effect;

import core.resource.Defines;
import game.tnk.Game;
import motion.Actuate;
import openfl.display.Sprite;

/**
 * ...
 * @author KhanhTN
 */
class MagnetEffect extends Sprite
{
	public static var TIME_LIVE:Float = 0.6;
	
	private var mSize:Int;
	private var listBG:Array<Sprite>;
	private var listMagnet:Array<Sprite>;
	
	public function new(_s:Int) 
	{
		super();
		mSize = _s;
		init();
	}
	public function init()
	{
		listBG = new Array<Sprite>();
		listMagnet = new Array<Sprite>();
		for (i in 0...mSize) 
		{
			listBG[i] = Game.resource.getSprite(Defines.GFX_MAGNET_SKILL_EFFECT);
			listMagnet[i] = Game.resource.getSprite(Defines.GFX_MAGNET_SKILL_OBJ);
			listBG[i].y = Game.BOARD_HEIGHT * Game.BRICK_HEIGHT - (5 * i) * Game.BRICK_HEIGHT;
			listMagnet[i].y = Game.BOARD_HEIGHT * Game.BRICK_HEIGHT - (5 * i) * Game.BRICK_HEIGHT + 2 * Game.BRICK_HEIGHT;
			this.addChild(listBG[i]);
			this.addChild(listMagnet[i]);
		}
		onBegin();
	}
	public function onBegin():Void
	{
		for (i in 0...mSize) 
		{
			Actuate.tween(listBG[i], TIME_LIVE, { scaleX:0 } );
			Actuate.tween(listMagnet[i], TIME_LIVE, { scaleX:0 } );
		}
		Actuate.timer(TIME_LIVE).onComplete(onClose);
	}
	
	public function onClose():Void
	{
		this.parent.removeChild(this);
	}
	
}