package game.network.packet.request.pvp;

import game.network.packet.RequestPacket;
import core.util.ByteArrayEx;
import openfl.utils.ByteArray;


/**
 * ...
 * @author KhanhTN
 */
class RepLose extends RequestPacket
{

	public function new(command:Int) 
	{
		super(Command.CMD_PVP_LOSE);
		
	}
	override public function encode(): ByteArray
    {
        var data : ByteArrayEx = cast(super.encode(), ByteArrayEx);
        return data;
    }
}