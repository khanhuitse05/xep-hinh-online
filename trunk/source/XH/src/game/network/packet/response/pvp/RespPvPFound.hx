package game.network.packet.response.pvp;

import game.tnk.Game;
import openfl.utils.ByteArray;
import game.network.packet.ResponsePacket;

/**
 * ...
 * @author KhanhTN
 */
class RespPvPFound extends ResponsePacket
{

	public function new() 
	{
		
	}
	override public function decode(data : ByteArray) : Void 
    {
		var nLen:Int = data.readShort();
		var vList:Array<Int> = new Array<Int>();
		for (i in 0...nLen)
        {
            vList[i] = data.readShort() + 1;
        }
		
		Game.data.playerData.dataPVP.dataMine.setFuture(vList);
    }
}