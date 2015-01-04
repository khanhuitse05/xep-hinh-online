package game.gameobject.gameplay;

import core.display.ex.Lable;
import game.tnk.Game;
import motion.Actuate;
import openfl.display.Sprite;

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
		tagetY = 100 + Game.data.playerData.mUserInfo.future * 100;
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
		Actuate.tween(this, TIME_SCALE, { scaleX:1, scaleY:1 });
		Actuate.tween(this, TIME_SCALE, { x:x + 10, y:y });
		Actuate.timer(TIME_MOVE).onComplete(onMove);
	}
	public function onMove()
	{
		Actuate.tween(this, TIME_MOVE, { x:tagetX, y:tagetY }).onComplete(onFinish);
		Actuate.tween(this, TIME_MOVE, { alpha:0 });
	}
	public function onFinish()
	{
		
		Game.data.playerData.mDTingame.mX = mX;
		this.parent.removeChild(this);
	}
	
}