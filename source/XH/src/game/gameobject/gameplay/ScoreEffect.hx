package game.gameobject.gameplay;

import core.display.ex.Lable;
import game.tnk.Game;
import motion.Actuate;
import openfl.display.Sprite;

/**
 * ...
 * @author KhanhTN
 */
class ScoreEffect extends Sprite
{

	public static var TIME_SCALE = 0.3;
	public static var TIME_MOVE = 0.4;
	private var mScore:Int;
	public function new(_x:Int, _y:Int, _s:Int) 
	{
		super();
		x = _x;
		y = _y;
		mScore = _s;
		var _score:Lable = new Lable();
		_score.setFont(40, 0xffffff);
		_score.setSysTextInfo(0,0, "" + _s);
		this.addChild(_score);
		onScale();
	}
	public function onScale()
	{
		this.scaleX = 0;
		this.scaleY = 0;
		Actuate.tween(this, TIME_SCALE, { scaleX:1, scaleY:1, x:x - 10, y:y - 10});
		Actuate.tween(this, TIME_MOVE, {}).onComplete(onMove);
	}
	public function onMove()
	{
		Actuate.tween(this, TIME_MOVE, { x:Game.BRICK_WIDTH * Game.BOARD_WIDTH / 2, y: -20 }).onComplete(onFinish);
	}
	public function onFinish()
	{
		
		Game.data.playerData.mDTingame.inScore = mScore;
		this.parent.removeChild(this);
	}
	
}