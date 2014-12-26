package game.network.packet.request.login;

import core.util.ByteArrayEx;
import game.network.packet.RequestPacket;
import openfl.utils.ByteArray;

/**
 * ...
 * @author KhanhTN
 */
class RepSignup extends RequestPacket
{
	public function new() 
	{
        super(Command.CMD_SIGNUP);
		
	}
	override public function encode(): ByteArray
    {
        var data : ByteArrayEx = cast(super.encode(), ByteArrayEx);
        return data;
    }
}