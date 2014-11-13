package game.gameobject.gameplay;
import core.display.ex.Lable;
import game.tnk.Game;
import openfl.display.Sprite;
import tweenx909.TweenX;
import openfl.events.Event;

/**
 * ...
 * @author KhanhTN
 */
class Score extends Sprite
{
	private var mBG:Sprite;
	private var mScore:Int;
	private var mScoreMax:Int;
	private var mTextScore:Lable;
	
	public function new() 
	{
		super();
		this.x = Game.GAME_WIDTH/2;
		this.y = 40;
		mBG = new Sprite();
		this.addChild(mBG);
		mScore = 1000;
		mScoreMax = 1000;
		mTextScore = new Lable();
		mTextScore.setFont(40, 0xffff00);
		mTextScore.setSysTextInfo(-5, 0, "0");
		mBG.addChild(mTextScore);
		mBG.addEventListener(Event.ENTER_FRAME, gameLoop);
	}
	/**
	 * game loop
	 * @param	e
	 */
	public function gameLoop(e:Event):Void
	{
		if (Game.data.playerData.mDTingame.chooseScore > 0) 
		{
			mScore = mScoreMax = mScore + Game.data.playerData.mDTingame.chooseScore;
			Game.data.playerData.mDTingame.chooseScore = 0;
		}
		if (Game.data.playerData.mDTingame.inScore > 0) 
		{
			increaseScore(Game.data.playerData.mDTingame.inScore);			
			Game.data.playerData.mDTingame.inScore = 0;
		}
		if (mScore >= 1000000) 
		{
			var _mil = Std.int(mScore / 1000000);
			var _tho = Std.int(mScore / 1000);
			var _num = mScore % 1000;
			mTextScore.setSysTextInfo(-50, 0,
						_mil + "," + _tho + "," 
						+ Std.int(_num / 100) + "" + Std.int((_num % 100) / 10) + "" + _num % 10);
		}else if (mScore >= 1000) 
		{
			var _tho = Std.int(mScore / 1000);
			var _num = mScore % 1000;
			mTextScore.setSysTextInfo(-30, 0,
						_tho + "," 
						+ Std.int(_num / 100) + "" + Std.int((_num % 100) / 10) + "" + _num % 10);
		}else
		{
			mTextScore.setSysTextInfo(-10,0,"" + mScore);
		}
	}
	/**
	 * increase score
	 * @param	_score
	 */
	public function increaseScore(_score:Int):Void
	{
		mScore = mScoreMax;
		mScoreMax += _score;
		this.scaleX = 1.2;
		this.scaleY = 1.2;
		TweenX.to(this, { mScore:mScore+_score }, 2).onFinish(onFinishIn);
	}
	public function onFinishIn():Void
	{		
		this.scaleX = 1;
		this.scaleY = 1;
	}
	
}