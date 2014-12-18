package game.network.packet.request.pvp;

import core.util.ByteArrayEx;
import game.network.packet.RequestPacket;
import openfl.utils.ByteArray;

/**
 * ...
 * @author KhanhTN
 */
class RepGrow extends RequestPacket
{

	private var gift:Int;
	public function new(_gift:Int) 
	{
		super(Command.CMD_REQ_PVP_GROW);
		gift = _gift;
	}
	override public function encode(): ByteArray {
        
        var data : ByteArrayEx = cast(super.encode(), ByteArrayEx);
        data.writeInt(gift);
        return data;
    }	
}