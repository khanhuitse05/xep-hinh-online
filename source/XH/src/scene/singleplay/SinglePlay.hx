package scene.singleplay;

import core.display.scene.*;
import core.event.EventEx;
import game.network.Server;
import game.tnk.Game;

/**
 * ...
 * @author KhanhTN
 */
class SinglePlay extends SceneBase
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
    }

    override private function onTransitionOutComplete():Void 
    {
        super.onTransitionOutComplete();        
        Game.server.removeEventListener(Server.SERVER_DATA, onServerData);
    }
}