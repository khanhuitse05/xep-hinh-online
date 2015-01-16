package game.network.packet.response.pvp;

import game.data.pvp.DTPVP;
import game.network.packet.ResponsePacket;
import openfl.utils.ByteArray;
import game.tnk.Game;

/**
 * ...
 * @author KhanhTN
 */
class RespPvPLose extends ResponsePacket
{

	public function new() 
	{
		
	}
	override public function decode(data : ByteArray) : Void 
    {  
		Game.data.playerData.dataPVP.eloResult = data.readShort();
		Game.data.playerData.dataPVP.infoMine.gift = data.readShort();
		Game.data.playerData.dataPVP.infoEnemy.gift = data.readShort();
		Game.data.playerData.dataPVP.result = DTPVP.R_LOSE;
	}
	
}