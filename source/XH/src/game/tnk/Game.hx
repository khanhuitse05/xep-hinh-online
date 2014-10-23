package game.tnk;
import core.display.DisplayManager;
import core.resource.ResourceManager;
import game.network.Server;
import openfl.display.Stage;

/**
 * ...
 * @author trihv
 */
class Game
{
    public static inline var GAME_WIDTH : Int = 480;
    public static inline var GAME_HEIGHT : Int = 800;
    
    public static var stage : Stage;
    
    public static var server : Server;
    public static var resource : ResourceManager;
    public static var displayManager : DisplayManager;
    //public static var data : DataCenter;

    public static function initialize(gStage : Stage, main : Main):Void
    {
        stage = gStage;
        server = new Server();
        resource = new ResourceManager();
        displayManager = new DisplayManager(main);
        //data = new DataCenter();

    }
}