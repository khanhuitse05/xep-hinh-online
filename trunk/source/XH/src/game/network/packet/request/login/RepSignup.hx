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
	private var userName:String;
	public function new(_name:String)
	{
        super(Command.CMD_SIGNUP);
		userName = _name;
		
	}
	override public function encode(): ByteArray
    {
        var data : ByteArrayEx = cast(super.encode(), ByteArrayEx);
		data.writeShort(userName.length);
		data.writeStr(userName);
        return data;
    }
}