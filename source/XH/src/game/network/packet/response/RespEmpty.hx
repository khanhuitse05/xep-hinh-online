package game.network.packet.response;

import game.network.packet.ResponsePacket;
import openfl.utils.ByteArray;

/**
 * ...
 * @author KhanhTN
 */
class RespEmpty extends ResponsePacket
{

	public function new() 
	{
		
	}
	override public function decode(data : ByteArray) : Void 
    {
    }
}