package game.gameobject.gameplay;

import core.display.ex.Lable;
import game.tnk.Game;
import openfl.display.Sprite;
import tweenx909.TweenX;

/**
 * ...
 * @author KhanhTN
 */
class Xeffect extends Sprite
{

	public static var TIME_SCALE = 0.25;
	public static var TIME_MOVE = 0.4;
	private var mX:Int;
	private var tagetX:Int;
	private var tagetY:Int;
	public function new(_tx:Int, _ty:Int, _s:Int) 
	{
		super();
		x = _tx;
		y = _ty;
		tagetX = Game.BOARD_WIDTH * Game.BRICK_WIDTH + 30;
		tagetY = 100 + Game.data.playerData.mDTgameplay.mMaxStack * 100;
		mX = _s;
		var _score:Lable = new Lable();
		_score.setFont(50, 0xffffff);
		_score.setSysTextInfo(0,0, "X" + _s);
		this.addChild(_score);
		onScale();
	}
	public function onScale()
	{
		this.scaleX = 0;
		this.scaleY = 0;
		TweenX.to(this, { scaleX:1, scaleY:1 }, TIME_SCALE);
		TweenX.to(this, { x:x + 10, y:y }, TIME_SCALE);
		TweenX.to(this, {}, TIME_MOVE).onFinish(onMove);
	}
	public function onMove()
	{
		TweenX.to(this, { x:tagetX, y:tagetY }, TIME_MOVE).onFinish(onFinish);
		TweenX.to(this, { alpha:0 }, TIME_MOVE);
	}
	public function onFinish()
	{
		
		Game.data.playerData.mDTingame.mX = mX;
		this.parent.removeChild(this);
	}
	
}