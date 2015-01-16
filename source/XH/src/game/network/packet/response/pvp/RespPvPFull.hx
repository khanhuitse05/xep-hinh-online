package game.network.packet.response.pvp;

import game.network.packet.ResponsePacket;
import game.data.pvp.DTEnemy;
import game.data.pvp.DTPVP;
import game.network.packet.ResponsePacket;
import game.tnk.Game;
import openfl.utils.ByteArray;

/**
 * ...
 * @author KhanhTN
 */
class RespPvPFull extends ResponsePacket
{

	public function new() 
	{
		
	}
	override public function decode(data : ByteArray) : Void 
    {		
        Game.data.playerData.dataPVP.dataEnemy.mAction.push(DTPVP.FULL);
    }
}