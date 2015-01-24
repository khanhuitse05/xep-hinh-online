package game.network.packet.response.pvp;

import game.data.pvp.DTPVP;
import game.tnk.Game;
import openfl.utils.ByteArray;

/**
 * ...
 * @author KhanhTN
 */
class RespPvPMagnet extends ResponsePacket
{

	public function new() 
	{
		
	}
	override public function decode(data : ByteArray) : Void 
    {
        Game.data.playerData.dataPVP.dataEnemy.addAct(DTPVP.MAGNET);
    }
}