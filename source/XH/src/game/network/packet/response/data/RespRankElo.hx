package game.network.packet.response.data;

import core.util.ByteArrayEx;
import game.network.packet.ResponsePacket;
import game.tnk.Game;
import openfl.utils.ByteArray;


/**
 * ...
 * @author KhanhTN
 */
class RespRankElo extends ResponsePacket
{
	public function new() 
	{		
	}
	override public function decode(data : ByteArray) : Void 
    {        
		Game.data.playerData.dataRank.indexElo = data.readShort();
		var _len:Int = data.readShort();
		for (i in 0..._len) 
		{
			var _lenght:Int = data.readShort();
			Game.data.playerData.dataRank.vElo[i].name = (cast(data, ByteArrayEx)).readStrBytes(_lenght);
			Game.data.playerData.dataRank.vElo[i].value = data.readShort();
		}
    }
	
}