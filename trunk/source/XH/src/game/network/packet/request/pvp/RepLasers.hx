package game.network.packet.request.pvp;

import core.util.ByteArrayEx;
import game.network.packet.RequestPacket;
import openfl.utils.ByteArray;

/**
 * ...
 * @author KhanhTN
 */
class RepLasers extends RequestPacket
{
	
	private var list:Array<Int>;

	public function new(_list:Array<Int>) 
	{
		super(Command.CMD_PVP_SKILL_LASERS);
		list = _list;
	}
	override public function encode(): ByteArray {
        
        var data : ByteArrayEx = cast(super.encode(), ByteArrayEx);
        data.wireArrBinary(list);
        return data;
    }
}