package game.gameobject.gameplay;
import core.display.ex.Lable;
import game.const.Const;
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
		mScore = 0;
		mScoreMax = 0;
		mTextScore = new Lable();
		mTextScore.setFont(40, 0xffff00);
		mTextScore.setSysTextInfo(-5, 0, "0");
		mBG.addChild(mTextScore);
		
		this.addEventListener(Event.ENTER_FRAME, gameLoop);
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
			Game.data.playerData.dataStatictis.score = mScore;
		}
		if (Game.data.playerData.mDTingame.inScore > 0) 
		{
			increaseScore(Game.data.playerData.mDTingame.inScore);			
			Game.data.playerData.mDTingame.inScore = 0;
		}
		if (mScore >= 1000000) 
		{			
			mTextScore.setSysTextInfo(-60, 0,Const.NumToString(mScore));
		}else if (mScore >= 1000) 
		{
			mTextScore.setSysTextInfo(-35, 0,Const.NumToString(mScore));
		}else
		{
			mTextScore.setSysTextInfo(-10,0,Const.NumToString(mScore));
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
		TweenX.to(this, { mScore:mScore+_score }, 1.3).onFinish(onFinishIn);
		
		Game.data.playerData.dataStatictis.score = mScoreMax;		
	}
	public function onFinishIn():Void
	{		
		this.scaleX = 1;
		this.scaleY = 1;
	}
	/**
	 * 
	 */
	public function setPos(_x:Int, _y:Int)
	{
		mBG.x = _x;
		mBG.y = _y;
	}
	public function onEnter()
	{		
		this.addEventListener(Event.ENTER_FRAME, gameLoop);		
		mScore = 0;
		mScoreMax = 0;
	}
	/**
	 * 
	 */
	public function onExit()
	{
		this.removeEventListener(Event.ENTER_FRAME, gameLoop);	
		mScore = 0;
		mScoreMax = 0;
	}
}