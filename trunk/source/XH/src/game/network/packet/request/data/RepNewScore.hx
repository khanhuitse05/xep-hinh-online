package game.network.packet.request.data;

import game.network.packet.RequestPacket;
import core.util.ByteArrayEx;
import openfl.utils.ByteArray;

/**
 * ...
 * @author KhanhTN
 */
class RepNewScore extends RequestPacket
{
	private var score:Int;
	public function new(_s:Int) 
    {
		score = _s;
        super(Command.CMD_DATE_SCORE);
    }

    override public function encode(): ByteArray
    {
        var data : ByteArrayEx = cast(super.encode(), ByteArrayEx);		
        data.writeInt(score);
        return data;
    }
	
}