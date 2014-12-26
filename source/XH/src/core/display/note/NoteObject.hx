package core.display.note;

import core.display.ex.Lable;
import game.tnk.Game;
import openfl.display.Sprite;
import tweenx909.EaseX;
import tweenx909.TweenX;

/**
 * ...
 * @author KhanhTN
 */
class NoteObject extends Sprite
{
	private static var DUR_ALPHA = 0.4;
	private static var DUR_MOVE = 0.5;
	private static var DUR_APPEAR = 0.5;
	var mPane:Lable;
	var mText:String;
	
	public function new(_text:String) 
	{
		super();	
		mText = _text;
		mPane = new Lable();
		mPane.setFont(50, 0xAC391C);
        mPane.setSysTextInfo(0, 0, mText);
        this.addChild(mPane);
		
		this.x = Game.GAME_WIDTH / 2 - mPane.width / 2;
		this.y = Game.GAME_HEIGHT / 2;	
		
		this.alpha = 0;
		TweenX.lag([
			TweenX.to(this, { alpha:1 }, DUR_ALPHA),
			TweenX.to(this, { y:y - 50 }, DUR_MOVE, EaseX.quadOut),
			TweenX.wait(DUR_APPEAR),
			TweenX.to(this, { alpha:0 }, DUR_ALPHA)
		]).onFinish(onClose);
		
	}
	public function onClose():Void
	{
		this.parent.removeChild(this);
	}
	
}