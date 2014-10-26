package game.data;
import core.event.EventEx;
import core.resource.Defines;
import game.network.Server;
import game.tnk.Game;
import openfl.events.EventDispatcher;

/**
 * ...
 * @author anhtinh
 */
class PlayerData extends EventDispatcher
{
    public var playerName : String = "NoName";
    public var level : Int;    
    public var scores : Int;    
    public var gold : Int;    
    public var brickID : Int = Defines.GFX_BRICK_001;
    public var inventory : InventoryData = new InventoryData();
    
    public function new() 
    {
        super();
        Game.server.addEventListener(Server.SERVER_DATA, onServerData);
    }
    
    private function onServerData(e:EventEx):Void 
    {
    }
}