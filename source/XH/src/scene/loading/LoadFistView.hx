package scene.loading;
import core.display.ex.Lable;
import core.display.scene.*;
import core.display.screen.ScreenID;
import core.resource.Defines;
import core.sprites.Animx;
import game.const.cache.ExploringCache;
import game.const.Const;
import game.tnk.Game;
import openfl.events.Event;
import openfl.text.TextFieldAutoSize;
import openfl.text.TextFormatAlign;

/**
 * ...
 * @author KhanhTN
 */
class LoadFistView extends SceneView
{
	private var mAnim:Animx;
	private var mNoteText:Lable;
	private var mCount:Int;
	
	public function new() 
	{
		super();
		mCount = 0;
		this.addEventListener(Event.ENTER_FRAME, gameLoop);
		// init
		init();
		loading();
	}
	
	private function init():Void 
	{
		// fill background
		this.graphics.beginFill(0xffffff);
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
		mNoteText.setFont(20, 0x2D23B6);
		mNoteText.setSysTextInfo(Game.GAME_WIDTH/ 2 - 25, 450, "loading..." + Game.data.playerData.mUserInfo.userName);
        this.addChild(mNoteText);
		
	}
	
	public function loading():Void
	{
		Const.init();
	}
	private function gameLoop(e:Event):Void 
	{
		mCount++;
		if (mCount > 30) 
		{
			this.removeEventListener(Event.ENTER_FRAME, gameLoop);			
			Game.displayManager.toScreen(ScreenID.HOME);
		}
	}
	
	
}