package game.gameobject.skill;

import core.resource.Defines;
import game.tnk.Game;
import openfl.display.Sprite;
import tweenx909.EaseX;
import tweenx909.TweenX;

/**
 * using to show in gamplay
 * ...
 * @author KhanhTN
 */
class SkillBase extends Sprite
{

	private static var TIME_SCALE:Float = 0.15;
	private static var TIME_HIDE:Float = 0.3;
	
	private var mSkill:Int;
	private var mRow:Int;
	private var mColumn:Int;
	
	public function new(_skill:Int, _row:Int, _col:Int) 
	{
		super();
		mSkill = _skill;
		mRow = _row;
		mColumn = _col;
		this.x = Game.BRICK_WIDTH * mColumn;
		this.y = Game.BOARD_HEIGHT * Game.BRICK_HEIGHT - Game.BRICK_HEIGHT * (mRow+2);
		var _image:SkillDisplay = new SkillDisplay(Defines.GFX_SKILL_DISPLAY);
		_image.x = 0 - SkillDisplay.SKILL_WIDTH / 2;
		_image.y = 0 - SkillDisplay.SKILL_HEIGHT / 2;
		this.addChild(_image);
		this.scaleX = 0;
		this.scaleY = 0;
		TweenX.serial([
			TweenX.wait(0.1),
			TweenX.to(this, { scaleX:1, scaleY:1 }, TIME_SCALE, EaseX.backOut),
			TweenX.wait(0.5),
			TweenX.to(this, {x: Game.GAME_WIDTH, y: this.y + 50}, 0.2),
		]).onFinish(onFinishAppear);
	}
	public function onFinishAppear() {
		this.parent.removeChild(this);
		Game.data.playerData.mDTingame.listSkill.push(mSkill);
	}
	
}