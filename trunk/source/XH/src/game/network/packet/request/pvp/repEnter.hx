package game.network.packet.request.pvp;

import game.network.packet.RequestPacket;
import core.util.ByteArrayEx;
import openfl.utils.ByteArray;

/**
 * ...
 * @author KhanhTN
 */
class RepEnter extends RequestPacket
{

	public function new() 
    {
        super(Command.CMD_REQ_ENTER_PVP);
    }

    override public function encode(): ByteArray
    {
        var data : ByteArrayEx = cast(super.encode(), ByteArrayEx);
        return data;
    }
	
}