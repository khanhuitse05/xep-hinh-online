package scene.home;

import core.display.scene.*;
import core.display.screen.ScreenID;
import core.event.EventEx;
import game.network.packet.Command;
import game.network.packet.ResponsePacket;
import game.network.Server;
import game.tnk.Game;

/**
 * ...
 * @author KhanhTN
 */
class Home extends SceneBase
{
    public function new(sceneID : SceneID) 
    {
        super(sceneID);
    }
    
    override private function onTransitionInComplete():Void 
    {
        super.onTransitionInComplete();
        Game.server.addEventListener(Server.SERVER_DATA, onServerData);
    }

    private function onServerData(e:EventEx):Void 
    {
		var rp : ResponsePacket = cast(e.data, ResponsePacket);
        switch (rp.command) 
        {
			case Command.CMD_RANK_HIGHSCORE:
				Game.displayManager.toScreen(ScreenID.RANK);
            default:
        }
    }

    override private function onTransitionOutComplete():Void 
    {
        super.onTransitionOutComplete();        
        Game.server.removeEventListener(Server.SERVER_DATA, onServerData);
    }
}