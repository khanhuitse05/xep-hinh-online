package game.data;
import core.event.EventEx;
import core.resource.Defines;
import game.data.gameplay.DTgameplay;
import game.data.gameplay.DTingame;
import game.data.pvp.DTPVP;
import game.data.user.DTUserInfo;
import game.network.Server;
import game.tnk.Game;
import openfl.events.EventDispatcher;

/**
 * ...
 * @author anhtinh
 */
class PlayerData extends EventDispatcher
{ 
    public var mBrickID : Int = Defines.GFX_BRICK_001;
    public var mBoardID : Int = Defines.GFX_BOARD_001;
    
	public var mDTgameplay:DTgameplay;
	public var mDTingame:DTingame;
	public var mUserInfo:DTUserInfo;
	public var dataGame:DTGame;
	public var dataPVP:DTPVP;
	
    public function new() 
    {
        super();
		mDTgameplay = new DTgameplay();
		mDTingame = new DTingame();
		mUserInfo = new DTUserInfo();
		dataGame = new DTGame();
		dataPVP = new DTPVP();
        Game.server.addEventListener(Server.SERVER_DATA, onServerData);
    }
    
    private function onServerData(e:EventEx):Void 
    {
    }
}