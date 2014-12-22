package game.network.packet.response.user ;

import game.network.packet.ResponsePacket;
import game.tnk.Game;
import openfl.utils.ByteArray;

/**
 * ...
 * @author KhanhTN
 */
class LoginResponse extends ResponsePacket
{

	public function new() 
	{
		
	}
	
	override public function decode(data : ByteArray) : Void 
    {        
		trace("respon login");
		var len: Int;
		len = data.readShort();
		trace("========================= len: " + len);
		trace("========================= String: " + data.readUTFBytes(len));
    }
}