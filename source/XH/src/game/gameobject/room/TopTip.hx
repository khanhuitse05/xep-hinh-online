package game.gameobject.room;

import core.display.ex.Lable;
import core.resource.Defines;
import game.tnk.Game;
import openfl.display.Sprite;
import openfl.events.MouseEvent;
import openfl.events.Event;

/**
 * ...
 * @author KhanhTN
 */
class TopTip extends Sprite
{
	private static var MAX_TIP 				= 5;
	private static var POINT_TIP_Y 			= 150;
	private static var POINT_TIP_OFFSET 	= 50;
	
	private static var TIP_X				= 0;
	private static var TIP_Y				= 200;
	
	private var mBG:Sprite;
	private var vTip:Array<Tip>;
	private var vWhite:Array<Sprite>;
	private var black:Sprite;
	
	private var index:Int;
	private var count:Int;
	
	public function new() 
	{
		super();		
		init();
		this.addEventListener(MouseEvent.MOUSE_DOWN, onTap);
		this.addEventListener(Event.ENTER_FRAME, gameLoop);
		onTap(null);
	}
	public function init():Void
	{
		count = 0;
		
		mBG = Game.resource.getSprite(Defines.GFX_UI_TIP_BG);
		mBG.x = 0 - mBG.width / 2;
		this.addChild(mBG);
		
		vWhite = new Array<Sprite>();
		vTip = new Array<Tip>();
		for (i in 0...MAX_TIP) 
		{
			vWhite[i] = Game.resource.getSprite(Defines.GFX_UI_POINT_WHITE);
			vWhite[i].y = POINT_TIP_Y;
			vWhite[i].x = (i - 2) * POINT_TIP_OFFSET - (vWhite[i].width / 2);
			this.addChild(vWhite[i]);
			
			vTip[i] = new Tip(i);
			vTip[i].y = TIP_Y;
			vTip[i].x = 0;
			this.addChild(vTip[i]);
		}
		
		black = Game.resource.getSprite(Defines.GFX_UI_POINT_BLACK);
		black.x = 0;
		black.y = POINT_TIP_Y;
		this.addChild(black);
	}
	public function setIndex(_index:Int):Void
	{
		index = _index;
		if (index < 0) 
		{
			index = 0;
		}
		if (index >= MAX_TIP) 
		{
			index = MAX_TIP - 1;
		}
		black.x = (index - 2) * POINT_TIP_OFFSET - (black.width / 2);
		for (i in 0...vTip.length) 
		{
			if (i == index) 
			{
				vTip[i].visible = true;
			}else 
			{
				vTip[i].visible = false;
			}
		}
	}
	public function gameLoop(e:Event):Void
	{
		count++;
		if (count > 150) 
		{
			onTap(null);
		}		
	}
	public function onTap(e:MouseEvent):Void
	{
		count = 0;
		setIndex((index + 1) % MAX_TIP);
	}
}