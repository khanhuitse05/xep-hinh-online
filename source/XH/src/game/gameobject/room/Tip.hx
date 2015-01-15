package game.gameobject.room;

import core.display.ex.Lable;
import core.resource.Defines;
import game.const.Const;
import game.tnk.Game;
import openfl.display.Sprite;

/**
 * ...
 * @author KhanhTN
 */
class Tip extends Sprite
{
	private var mImage:Sprite;
	private var id:Int;
	private var mText:Lable;
	
	public function new(_id) 
	{
		super();
		id = _id;
		init();
	}
	private function init():Void
	{
		mImage = Game.resource.getSprite(Defines.GFX_UI_TIP_00 + id);
		mImage.x = 0 - mImage.width / 2;
		mImage.y = 0;
		this.addChild(mImage);
		
		mText = new Lable();
		mText.setFont(35, 0xffffff);
		mText.multiline = true;
		mText.wordWrap = true;
		mText.width = mImage.width - 10;
		mText.height = 100;	
		mText.setSysTextInfo(mImage.x + 10, mImage.height + 10, Const.tipInfo.tip[id]);
		this.addChild(mText);
	}
}