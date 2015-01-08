package game.network.packet.request.pvp;

import core.util.ByteArrayEx;
import game.network.packet.RequestPacket;
import openfl.utils.ByteArray;

/**
 * khi user grown thì gửi cho đối thủ để cập nhật
 * @author KhanhTN
 */
class RepGrow extends RequestPacket
{

	private var listGrown:Array<Int>;
	public function new(_list:Array<Int>) 
	{
		super(Command.CMD_PVP_GROW);
		listGrown = _list;
	}
	override public function encode(): ByteArray {
        
        var data : ByteArrayEx = cast(super.encode(), ByteArrayEx);
		data.wireArrBinary(listGrown);
        return data;
    }
}