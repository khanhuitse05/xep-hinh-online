package game.network.packet.request.pvp;

import game.network.packet.RequestPacket;
import core.util.ByteArrayEx;
import openfl.utils.ByteArray;

/**
 * ...
 * @author KhanhTN
 */
class RespWithFriend extends RequestPacket
{
	private var id:String;
	
	public function new(_id:String) 
    {
        super(Command.CMD_PVP_FINDING);
		id = _id;
    }

    override public function encode(): ByteArray
    {
        var data : ByteArrayEx = cast(super.encode(), ByteArrayEx);
		data.writeShort(id.length);
		data.writeStr(id);
        return data;
    }
	
}