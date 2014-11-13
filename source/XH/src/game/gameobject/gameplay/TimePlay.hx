package game.gameobject.gameplay;

import core.display.ex.Lable;
import game.tnk.Game;
import openfl.display.Sprite;
import openfl.events.Event;
import tweenx909.TweenX;
/**
 * ...
 * @author KhanhTN
 */
class TimePlay extends Sprite
{
	public static var START = 1;
	public static var PLAY = 2;
	public static var OTHER = 3;
	
	public static var START_TIME = 1.5;
	
	private var mState:Int;
	private var mMaxTime:Int;
	private var mValue:Int;
	private var mWidth:Int;
	private var mHeight:Int;
	
	private var mTexTime:Lable;
	
	public function new(_x:Int, _y:Int, _w:Int = 480, _h:Int = 10) 
	{
		super();
		this.x = _x;
		this.y = _y;
		this.mWidth = _w;
		this.mHeight = _h;
		init();
		this.addEventListener(Event.ENTER_FRAME, gameLoop);
	}
	private function init():Void
	{
		mState = START;
		mValue = 0;
		mMaxTime = 7200;
		mTexTime = new Lable();
		mTexTime.setFont(25, 0xffff00);
		mTexTime.setSysTextInfo(mWidth / 2 - 12, 20, "00:00");
		this.addChild(mTexTime);
	}
	private function gameLoop(e:Event):Void
	{
		DrawTime();
		if (mState == START) 
		{
			if (Game.data.playerData.mDTingame.isUpdateTime == true) 
			{
				Game.data.playerData.mDTingame.isUpdateTime = false;				
				TweenX.to(this, { mValue:mMaxTime + 300}, START_TIME).onFinish(onFinishStart);
			}
		}else  if (mState == PLAY) 
		{
			if (mValue > 0) 
			{
				mValue--;
			}
		}else if (mState == OTHER)
		{
			
		}
	}
	private function DrawTime()
	{
		if (mValue > mMaxTime) 
		{
			this.graphics.clear();
			this.graphics.beginFill(0xFFFF00, 1);
			this.graphics.drawRect(0, 0, mWidth, mHeight);
			this.graphics.endFill();
			
			mTexTime.setSysText("2:00");
		}else 
		{
			this.graphics.clear();
			this.graphics.beginFill(0xFFFF00, 1);
			this.graphics.drawRect(0, 0, mWidth * mValue / mMaxTime, mHeight);
			this.graphics.endFill();
			
			var _time = mValue / 60;
			var _min:Int = Std.int(_time / 60);
			var _second:Int = Std.int(_time % 60);
			mTexTime.setSysText(_min + ":" + _second);
		}
	}
	private function onFinishStart()
	{
		mState = PLAY;
	}
}