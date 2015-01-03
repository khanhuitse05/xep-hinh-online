package game.network.packet.request.pvp;

import core.util.ByteArrayEx;
import game.network.packet.RequestPacket;
import openfl.utils.ByteArray;

/**
 * ...
 * @author KhanhTN
 */
class RepMagnet extends RequestPacket
{

	public function new() 
	{
		super(Command.CMD_PVP_SKILL_MAGNET);
	}
	override public function encode(): ByteArray {
        
        var data : ByteArrayEx = cast(super.encode(), ByteArrayEx);
        return data;
    }
}