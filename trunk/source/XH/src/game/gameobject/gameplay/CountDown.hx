package game.gameobject.gameplay;

import core.resource.Defines;
import core.sound.Sound;
import game.tnk.Game;
import openfl.display.Sprite;
import tweenx909.TweenX;

/**
 * ...
 * @author KhanhTN
 */
class CountDown extends Sprite
{

	private static var POSY2 = 400;
	private static var POSY1 = 350;
	
	private var mTime200:Sprite;
	private var mTime1:Sprite;
	private var mTime2:Sprite;
	private var mTime3:Sprite;
	
	public function new() 
	{
		super();
		mTime200 = Game.resource.getSprite(Defines.GFX_TIME200);
		mTime1 = Game.resource.getSprite(Defines.GFX_TIME1);
		mTime2 = Game.resource.getSprite(Defines.GFX_TIME2);
		mTime3 = Game.resource.getSprite(Defines.GFX_TIME3);
		on200();
	}
	public function on200()
	{
		this.addChild(mTime200);
		mTime200.x = (Game.GAME_WIDTH - mTime200.width) / 2;
		mTime200.y = POSY2;
		mTime200.alpha = 0;
		TweenX.serial([
			TweenX.to(mTime200, { alpha:1 }, 0.2),
			TweenX.wait( 0.3 ),
			TweenX.to(mTime200, { y:Game.GAME_HEIGHT - 100}, 0.3),
		]).onFinish(on3);

	}
	public function on3()
	{
		//time in
		Game.data.playerData.mDTingame.isUpdateTime = true;
		// 3
		this.removeChild(mTime200);
		this.addChild(mTime3);
		mTime3.x = (Game.GAME_WIDTH - mTime3.width) / 2 + 300;
		mTime3.y = POSY1;
		mTime3.alpha = 0;
		TweenX.serial([		
			TweenX.wait( 1 ),
			TweenX.to(mTime3, { alpha:1 }, 0.2).skip(),
			TweenX.to(mTime3, { x:mTime3.x-300}, 0.3),
			TweenX.wait( 0.3 ),
			TweenX.to(mTime3, { x:mTime3.x-300}, 0.3).skip(),
			TweenX.to(mTime3, { alpha:0 }, 0.3),
		]).onFinish(on2);
	}
	public function on2()
	{
		this.removeChild(mTime3);
		this.addChild(mTime2);
		mTime2.x = (Game.GAME_WIDTH - mTime2.width) / 2 + 300;
		mTime2.y = POSY1;
		mTime2.alpha = 0;
		TweenX.serial([		
			TweenX.to(mTime2, { alpha:1 }, 0.2).skip(),
			TweenX.to(mTime2, { x:mTime2.x-300}, 0.3),
			TweenX.wait( 0.3 ),
			TweenX.to(mTime2, { x:mTime2.x-300}, 0.3).skip(),
			TweenX.to(mTime2, { alpha:0 }, 0.3),
		]).onFinish(on1);
	}
	public function on1()
	{
		this.removeChild(mTime2);
		this.addChild(mTime1);
		mTime1.x = (Game.GAME_WIDTH - mTime1.width) / 2 + 300;
		mTime1.y = POSY1;
		mTime1.alpha = 0;
		TweenX.serial([		
			TweenX.to(mTime1, { alpha:1 }, 0.2).skip(),
			TweenX.to(mTime1, { x:mTime1.x-300}, 0.3),
			TweenX.wait( 0.3 ),
			TweenX.to(mTime1, { alpha:0 }, 0.3).skip(),
			TweenX.to(mTime1, { x:mTime1.x-300}, 0.3),
		]).onFinish(on0);
	}
	public function on0()
	{
		this.removeChild(mTime1);
		TweenX.to(this, { }, 0.3).onFinish(onStartGame);
	}
	public function onStartGame()
	{
		Game.data.playerData.dataGame.posSound = false; 
		Sound.GetSound(Sound.MUSIC_BATTLE, false).Play();
		
		Game.data.playerData.mDTingame.isFinishCountDown = true;
		this.parent.removeChild(this);
	}
	
}