package game.gameobject.skill;
import core.resource.Defines;
import game.data.gameplay.DTingame;
import game.tnk.Game;
import openfl.display.Sprite;
import tweenx909.TweenX;

/**
 * ...
 * @author KhanhTN
 */
class UltimateSkill extends Sprite
{
	private static var SCALE:Int = 6;
	private static var TIME_SCALE:Float = 0.5;
	private var mType:Int;
	
	public function new(_type:Int) 
	{
		super();
		mType = _type;
		var _image:Sprite = Game.resource.getSprite(Defines.GFX_ULTIMATE_FINISH + _type);
		this.addChild(_image);
		this.scaleX = SCALE;
		this.scaleY = SCALE;
		var _parentWidth:Int = Game.BOARD_WIDTH * Game.BRICK_WIDTH;
		var _parentHeight:Int = Game.BOARD_HEIGHT * Game.BRICK_HEIGHT;
		this.x = (_parentWidth - (_image.width * SCALE)) / 2;
		this.y = (_parentHeight - (_image.height * SCALE)) / 2;
		TweenX.serial([
			TweenX.wait(0.5),
			TweenX.to(this, { x:(_parentWidth - (_image.width)) / 2,
								y:(_parentHeight - (_image.height)) / 2,
								scaleX:1, scaleY:1 }, 
							TIME_SCALE),
			TweenX.wait(1),
			TweenX.to(this, {x: Game.GAME_WIDTH }, 0.2),
		]).onFinish(onFinishAppear);
	}
	public function onFinishAppear() {
		this.parent.removeChild(this);
		Game.data.playerData.mDTingame.stateGame = DTingame.STATE_ULTIMATE_SKILL;
	}
	
}