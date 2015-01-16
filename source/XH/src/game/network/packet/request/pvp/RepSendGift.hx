package game.network.packet.request.pvp;

import core.util.ByteArrayEx;
import game.network.packet.RequestPacket;
import game.tnk.Game;
import openfl.utils.ByteArray;

/**
 * 
 * @author KhanhTN
 */
class RepSendGift extends RequestPacket
{

	private var gift:Int;
	public function new(_gift:Int) 
	{
		super(Command.CMD_PVP_SEND);
		gift = _gift;
	}
	override public function encode(): ByteArray {
        //Game.data.playerData.dataPVP.infoMine.gift += gift;
        var data : ByteArrayEx = cast(super.encode(), ByteArrayEx);
        data.writeShort(gift);
        return data;
    }	
}