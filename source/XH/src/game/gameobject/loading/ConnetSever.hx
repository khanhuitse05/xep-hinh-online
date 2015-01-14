package game.gameobject.loading;

import core.display.ex.Lable;
import core.display.scene.*;
import core.display.screen.ScreenID;
import core.resource.Defines;
import core.sprites.Animx;
import game.const.cache.ExploringCache;
import game.const.Const;
import game.tnk.Game;
import game.tnk.GameConfig;
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
	private var mBG:Sprite;
	private var mNoteText:Lable;
	private var mCount:Int;
	private var reConnet:Bool;
	
	public function new(_re:Bool = false) 
	{
		super();
		reConnet = _re;
		init();
		this.addEventListener(Event.ENTER_FRAME, gameLoop);
	}
	/**
	 * 
	 */	
	private function init():Void 
	{
		// fill background
		this.graphics.beginFill(0xffffff, 0.001);
		this.graphics.drawRect(0, 0, Game.GAME_WIDTH, Game.GAME_HEIGHT);
		this.graphics.endFill();
		// sprite
		mBG = Game.resource.getSprite(Defines.GFX_CONNET_BG);
		mBG.x = Game.GAME_WIDTH / 2 - mBG.width / 2;
		mBG.y = Game.GAME_HEIGHT / 2 - mBG.height / 2;
		this.addChild(mBG);
		// animate
		mAnim = Game.resource.getAnim(Defines.GFX_LOADING_ANIM);
		mAnim.x = ( mBG.width - mAnim.mWidth) / 2;
		mAnim.y = 50;
		mAnim.animate();
		mBG.addChild(mAnim);
		// note
		
		mNoteText = new Lable();
		mNoteText.setFont(40, 0xffffff);
		mNoteText.setSysTextInfo(40, 225, "Conneting to sever...");
        mBG.addChild(mNoteText);
		
	}
	/**
	 * 
	 * @param	e
	 */
	private function gameLoop(e:Event)
	{
		if (Game.data.playerData.dataGame.isTry) 
		{
			if (Game.data.playerData.dataGame.online) 
			{
				setOnline();
			}else 
			{
				setOffline();
			}
			this.removeEventListener(Event.ENTER_FRAME, gameLoop);
		}
	}
	/**
	 * 
	 */
	private function connet():Void 
	{
		if (reConnet) 
		{			
			Game.data.playerData.dataGame.isTry = false;
			Game.server.connect(GameConfig.SERVER, GameConfig.PORT);
		}
	}
	public function setOnline():Void 
	{
		mNoteText.setSysTextInfo(120, 225, "Conneted!");
		Actuate.timer(2).onComplete(onClose);
		
	}
	public function setOffline():Void 
	{
		mNoteText.setSysTextInfo(120, 225, "Connet fail!");
		Actuate.timer(2).onComplete(onClose);
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