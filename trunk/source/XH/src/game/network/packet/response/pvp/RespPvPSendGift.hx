package game.network.packet.response.pvp;

import game.data.pvp.DTPVP;
import game.network.packet.ResponsePacket;
import game.tnk.Game;
import openfl.utils.ByteArray;

/**
 * ...
 * @author KhanhTN
 */
class RespPvPSendGift extends ResponsePacket
{

	public function new() 
	{
		
	}
	override public function decode(data : ByteArray) : Void 
    {        
		Game.data.playerData.dataPVP.dataMine.mNumGift = data.readShort();
        Game.data.playerData.dataPVP.dataMine.mAction.push(DTPVP.GROW);
    }
}