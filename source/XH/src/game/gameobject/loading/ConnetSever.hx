package game.gameobject.loading;

import core.display.ex.Lable;
import core.display.scene.*;
import core.display.screen.ScreenID;
import core.resource.Defines;
import core.sprites.Animx;
import game.const.cache.ExploringCache;
import game.const.Const;
import game.tnk.Game;
import motion.Actuate;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.text.TextFieldAutoSize;
import openfl.text.TextFormatAlign;

/**
 * ...
 * @author KhanhTN
 */
class ConnetSever extends Sprite
{

	private var mAnim:Animx;
	private var mNoteText:Lable;
	private var mCount:Int;
	
	public function new() 
	{
		super();
		init();
	}
	
	private function init():Void 
	{
		// fill background
		this.graphics.beginFill(0xffffff, 0.3);
		this.graphics.drawRect(0, 0, Game.GAME_WIDTH, Game.GAME_HEIGHT);
		this.graphics.endFill();
		// animate
		mAnim = Game.resource.getAnim(Defines.GFX_LOADING_ANIM);
		mAnim.x = ( Game.GAME_WIDTH - mAnim.mWidth) / 2;
		mAnim.y = 400;
		mAnim.animate();
		this.addChild(mAnim);
		// note
		
		mNoteText = new Lable();
		mNoteText.setFont(50, 0x2D23B6);
		mNoteText.setSysTextInfo(Game.GAME_WIDTH/ 2 - 35, 450, "Connet to sever...");
        this.addChild(mNoteText);
		
	}
	public function setOnline():Void 
	{
		mNoteText.setSysText("Conneted!");
		Actuate.timer(1).onComplete(onClose);
		
	}
	public function setOffline():Void 
	{
		mNoteText.setSysText("Connet fail!");
		Actuate.timer(1).onComplete(onClose);
	}
	public function onClose()
	{
		this.visible = false;
		if (this.parent != null) 
		{
			if (this.parent.contains(this)) 
			{
				this.parent.removeChild(this);
			}
		}
	}
}