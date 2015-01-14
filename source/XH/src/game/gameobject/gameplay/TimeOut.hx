package game.gameobject.gameplay;

import core.resource.Defines;
import core.sound.Sound;
import game.data.gameplay.DTingame;
import game.tnk.Game;
import openfl.display.Sprite;
import tweenx909.TweenX;

/**
 * ...
 * @author KhanhTN
 */
class TimeOut extends Sprite
{

	
	private static var POSY = 350;
	
	private var mTimeOut:Sprite;
	
	public function new() 
	{
		super();
		Sound.GetSound(Sound.GAME_TIMEOUT).Play();
		mTimeOut = Game.resource.getSprite(Defines.GFX_TIME_OUT);
		onStart();
	}
	/**
	 * 
	 */
	public function onStart()
	{
		this.addChild(mTimeOut);
		mTimeOut.x = (Game.BOARD_WIDTH * Game.BRICK_WIDTH - mTimeOut.width) / 2;
		mTimeOut.y = 0;
		TweenX.serial([
			TweenX.to(mTimeOut, { y:POSY}, 0.2),
			TweenX.wait( 1 ),
			TweenX.to(mTimeOut, { y:Game.GAME_HEIGHT}, 0.3),
		]).onFinish(onFinish);
	}
	public function onFinish()
	{
		Game.data.playerData.mDTingame.stateGame = DTingame.STATE_LASTHUMEN;
		this.parent.removeChild(this);
	}
}