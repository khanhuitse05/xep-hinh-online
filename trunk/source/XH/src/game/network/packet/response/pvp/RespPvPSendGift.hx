package game.network.packet.response.pvp;

import game.data.pvp.DTEnemy;
import game.network.packet.ResponsePacket;
import game.tnk.Game;
import openfl.utils.ByteArray;

/**
 * ...
 * @author KhanhTN
 */
class RespPvPGrow extends ResponsePacket
{

	public function new() 
	{
		
	}
	override public function decode(data : ByteArray) : Void 
    {        
		Game.data.playerData.dataPVP.dataMine.mNumGift = data.readInt();
        Game.data.playerData.dataPVP.dataMine.mAction.push(DTEnemy.GROW);
    }
}