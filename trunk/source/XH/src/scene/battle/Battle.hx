package scene.battle;

import core.display.scene.*;
import core.event.EventEx;
import game.network.packet.ResponsePacket;
import game.network.packet.Command;
import game.network.Server;
import game.tnk.Game;

/**
 * ...
 * @author KhanhTN
 */
class Battle extends SceneBase
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
        var view = cast(m_pView, BattleView);
        switch (rp.command) 
        {
            case Command.CMD_PVP_WIN:
                view.sWin();
			case Command.CMD_PVP_LOSE:
                view.sLose();
			case Command.CMD_PVP_DISCONNET:
                view.sDisconnet();
			case Command.CMD_PVP_DRAW:
                view.sDraw();
            default:
        }
    }

    override private function onTransitionOutComplete():Void 
    {
        super.onTransitionOutComplete();        
        Game.server.removeEventListener(Server.SERVER_DATA, onServerData);
    }
}