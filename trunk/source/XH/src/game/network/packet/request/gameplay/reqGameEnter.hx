package game.network.packet.request.gameplay;

import core.util.ByteArrayEx;
import game.network.packet.RequestPacket;

/**
 * ...
 * @author KhanhTN
 */
class reqGameEnter extends RequestPacket
{
	private var mGameMode : Int;            //Mode choi game cua user
    
    public function new(gameMode:Int = 0) 
    {
        super(Command.CMD_GAME_ENTER);
        this.mGameMode = gameMode;
    }

    override public function encode(): ByteArray {
        
        var data : ByteArrayEx = cast(super.encode(), ByteArrayEx);
        data.writeByte(mGameMode);
        return data;
    }
}