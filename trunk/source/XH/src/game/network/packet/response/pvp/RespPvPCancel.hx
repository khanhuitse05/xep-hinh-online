package game.network.packet.response.pvp;

import game.tnk.Game;
import openfl.utils.ByteArray;
import game.network.packet.ResponsePacket;

/**
 * ...
 * @author KhanhTN
 */
class RespPvPCancel extends ResponsePacket
{

	public function new() 
	{
		
	}
	override public function decode(data : ByteArray) : Void 
    {
		Game.data.playerData.dataPVP.dataRoom.isCancel = true;
    }
}