package game.gameobject.gameplay;

import core.display.ex.Lable;
import core.sound.Sound;
import game.data.gameplay.DTingame;
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
	public static var OUT = 3;
	public static var OTHER = 4;
	
	public static var START_TIME = 1.5;
	
	private var mState:Int;
	private var isShow:Bool;
	private var mMaxTime:Int;
	private var mValue:Int;
	private var mWidth:Int;
	private var mHeight:Int;
	
	private var mTexTime:Lable;
	
	public function new(_x:Int, _y:Int, _show:Bool = true, _w:Int = 480, _h:Int = 10) 
	{
		super();
		this.x = _x;
		this.y = _y;
		isShow = _show;
		this.mWidth = _w;
		this.mHeight = _h;
		init();
	}
	private function init():Void
	{
		mState = START;
		mValue = 0;
		mMaxTime = 1700;
		//mMaxTime = 1000;
		mTexTime = new Lable();
		mTexTime.setFont(25, 0xffff00);
		mTexTime.setSysTextInfo(mWidth / 2 - 12, 20, "00:00");
		this.addChild(mTexTime);
		mTexTime.visible = isShow;
	}
	private function gameLoop(e:Event):Void
	{
		DrawTime();
		if (mState == START) 
		{
			if (Game.data.playerData.mDTingame.isUpdateTime == true) 
			{
				Game.data.playerData.mDTingame.isUpdateTime = false;				
				TweenX.to(this, { mValue:mMaxTime + 100}, START_TIME).onFinish(onFinishStart);
			}
		}else  if (mState == PLAY) 
		{
			if (Game.data.playerData.mDTingame.isBoundTime == true) 
			{
				Game.data.playerData.mDTingame.isBoundTime = false;				
				mValue += 100;
			}
			if (mValue > 0) 
			{
				mValue--;
				if (mValue == 300) 
				{
					Game.data.playerData.mDTingame.timeIsRuningOut = true;
					Sound.GetSound(Sound.GAME_TICTAC).Play();
				}
			}else
			{
				mState = OUT;
				Game.data.playerData.mDTingame.stateGame = DTingame.STATE_TIMEOUT;
				mState = OTHER;
			}
			if (Game.data.playerData.mDTingame.stateGame == DTingame.STATE_OVER) 
			{
				Game.data.playerData.mDTingame.stateGame = DTingame.STATE_NORMAL;
				TweenX.to(this, { mValue:0}, START_TIME / 3);
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
			
			mTexTime.setSysText("1:30");
		}else 
		{
			this.graphics.clear();
			this.graphics.beginFill(0xFFFF00, 1);
			this.graphics.drawRect(0, 0, mWidth * mValue / mMaxTime, mHeight);
			this.graphics.endFill();
			
			var _time = mValue / Game.FPS;
			var _min:Int = Std.int(_time / 60);
			var _second:Int = Std.int(_time % 60);
			mTexTime.setSysText(_min + ":" + _second);
		}
	}
	private function onFinishStart()
	{
		mState = PLAY;
	}
	public function onEnter()
	{
		mState = START;
		mValue = 0;
		mMaxTime = 3600;
		//mMaxTime = 1000;
		this.addEventListener(Event.ENTER_FRAME, gameLoop);
	}
	public function onExit()
	{
		this.removeEventListener(Event.ENTER_FRAME, gameLoop);
	}
}