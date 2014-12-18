package ;

import core.sprites.Animx;
import core.display.screen.ScreenID;
import flash.display.Sprite;
import flash.events.Event;
import flash.Lib;
import game.tnk.Game;
import game.tnk.GameConfig;
import openfl.display.StageScaleMode;
import scene.login.LoginView;

/**
 * ...
 * @author KhanhTN
 */

class Main extends Sprite 
{
	var inited:Bool;

	/* ENTRY POINT */
	
	function resize(e) 
	{
		if (!inited) init();
		// else (resize or orientation change)
	}
	
	function init() 
	{
		if (inited) return;
		inited = true;

		// (your code here)
		
		// Stage:
		// stage.stageWidth x stage.stageHeight @ stage.dpiScale
		
		// Assets:
		// nme.Assets.getBitmapData("img/assetname.jpg");
	}

	/* SETUP */

	public function new() 
	{
		super();	
		addEventListener(Event.ADDED_TO_STAGE, added);
	}

	function added(e) 
	{
		removeEventListener(Event.ADDED_TO_STAGE, added);	
		addEventListener(Event.ENTER_FRAME, gameLoop);
		stage.addEventListener(Event.RESIZE, resize);
		#if ios
		haxe.Timer.delay(init, 100); // iOS 6
		#else
		init();
		#end		
		
		Game.initialize(this.stage, this);
		
        Game.server.connect(GameConfig.SERVER, GameConfig.PORT);
        // Goto login screen
        Game.displayManager.toScreen(ScreenID.LOADFIST);
	}
	/**
	 * 
	 * @param	e
	 */
	private function gameLoop(e:Event):Void 
    {
        //Game.resource.onGameUpdate();
        //Engine.update();
    }
	public static function main() 
	{
		// static entry point
		#if mobile
		Lib.current.stage.scaleMode = flash.display.StageScaleMode.NO_SCALE;
		#else
		Lib.current.stage.scaleMode = flash.display.StageScaleMode.EXACT_FIT;
		#end	
		Lib.current.stage.align = flash.display.StageAlign.TOP_LEFT;
		Lib.current.addChild(new Main());
	}
}
