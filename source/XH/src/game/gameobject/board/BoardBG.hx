package game.gameobject.board;

import core.resource.Defines;
import game.tnk.Game;
import openfl.display.Sprite;
import openfl.events.Event;
import tweenx909.EaseX;
import tweenx909.TweenX;

/**
 * ...
 * @author KhanhTN
 */
class BoardBG extends Sprite
{

	private var mColor:Int;
	private var mBack:Sprite;
	private var mMid:Sprite;
	private var mFront:Sprite;
	
	public function new() 
	{
		super();
		init();
		addEventListener(Event.ENTER_FRAME, gameLoop);

	}
	private function init():Void
	{		
		mColor = 0;
		//TweenX.to(this, { mColor: 0xffffff }, 333333).repeat( 0 ).yoyo().zigzag();
		mBack = new Sprite();
		this.addChild(mBack);
		mBack.graphics.beginFill(0, 1);
		mBack.graphics.drawRect(0, 0, Game.BOARD_WIDTH * Game.BRICK_WIDTH, Game.BOARD_HEIGHT * Game.BRICK_HEIGHT);
		mBack.graphics.endFill();
		mMid = Game.resource.getSprite(Defines.GFX_EFFECT_BG_001);
		this.addChild(mMid);
		mMid.visible = false;
		mFront = Game.resource.getSprite(Defines.GFX_BOARD_001);
		this.addChild(mFront);
		mMid.y = Game.GAME_HEIGHT;
	}
	
	/**
	 * 
	 * @param	e
	 */
	private function gameLoop(e:Event):Void 
    {
		drawBackground(mColor);
	}
	private function drawBackground(_color:Int)
	{
		//mBack.graphics.clear();
		//mBack.graphics.beginFill(_color, 1);
		//mBack.graphics.drawRect(0, 0, Game.BOARD_WIDTH * Game.BRICK_WIDTH, Game.BOARD_HEIGHT * Game.BRICK_HEIGHT);
		//mBack.graphics.endFill();
	}
	public function effectMid()
	{
		
		TweenX.to(mMid, { y: -10 }, 1.0).ease( EaseX.quartOut ).repeat( 0);
	}
	
}