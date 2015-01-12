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
	var _image:SkillDisplay;
	
	public function new() 
	{
		super();
		mType = Game.data.playerData.dataSkill.skillUtimate;
		_image = new SkillDisplay(mType);		
		_image.x = 0 - SkillDisplay.SKILL_WIDTH / 2;
		_image.y = 0 - SkillDisplay.SKILL_HEIGHT / 2;
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
		this.removeChild(_image);
		_image.dispose();
		Game.data.playerData.mDTingame.stateGame = DTingame.STATE_ULTIMATE_SKILL;
	}
	public function dispose():Void
	{
		_image.dispose();
	}
}