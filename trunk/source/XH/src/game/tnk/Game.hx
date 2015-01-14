package game.tnk;
import core.display.DisplayManager;
import core.resource.ResourceManager;
import core.sound.Sound;
import game.data.DataCenter;
import game.network.Server;
import openfl.display.Stage;
import scene.hud.HudBottom;
import scene.hud.HudTop;

/**
 * ...
 * @author trihv
 */
class Game
{
    public static inline var FPS : Int = 30;
    public static inline var GAME_WIDTH : Int = 720;
    public static inline var GAME_HEIGHT : Int = 1280;
	
    public static inline var MAX_SKILL: Int = 10;
	
    public static inline var BOARD_WIDTH : Int = 10;
    public static inline var BOARD_HEIGHT : Int = 22;
    public static inline var BRICK_WIDTH : Int = 48;
    public static inline var BRICK_HEIGHT : Int = 48;
    
    public static var stage : Stage;
    
    public static var server : Server;
    public static var resource : ResourceManager;
    public static var displayManager : DisplayManager;
    public static var data : DataCenter;
	
	// hud
	public static var hudTop:HudTop;
	public static var hudBottom:HudBottom;
	
	// musice
	
	public static var _soundHome:Sound;
	public static var _soundbattle:Sound;

    public static function initialize(gStage : Stage, main : Main):Void
    {
        stage = gStage;
        server = new Server();
        resource = new ResourceManager();
        displayManager = new DisplayManager(main);
        data = new DataCenter();
		_soundHome = Sound.GetSound(Sound.MUSIC_HOME, true);
		_soundbattle = Sound.GetSound(Sound.MUSIC_BATTLE, true);

    }
}