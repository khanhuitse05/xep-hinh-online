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
	private var listGrown:Array<Int>;
	public function new(_gift:Int, _list:Array<Int>) 
	{
		super(Command.CMD_PVP_GROW);
		gift = _gift;
		listGrown = _list;
	}
	override public function encode(): ByteArray {
        
        var data : ByteArrayEx = cast(super.encode(), ByteArrayEx);
        data.writeInt(gift);
		data.wireArrInteger(listGrown);
        return data;
    }	
}