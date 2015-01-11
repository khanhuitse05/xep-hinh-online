package game.network.packet.response.data;

import core.util.ByteArrayEx;
import game.network.packet.ResponsePacket;
import openfl.utils.ByteArray;
import game.tnk.Game;

/**
 * ...
 * @author KhanhTN
 */
class RespRankHighScore extends ResponsePacket
{
	public function new() 
	{		
	}
	override public function decode(data : ByteArray) : Void 
    {        
		Game.data.playerData.dataRank.indexHigh = data.readShort();
		var _len:Int = data.readShort();
		for (i in 0..._len) 
		{
			Game.data.playerData.dataRank.vHigh[i].name = (cast(data, ByteArrayEx)).readStr();
			Game.data.playerData.dataRank.vHigh[i].value = data.readShort();
		}
    }
}