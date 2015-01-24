package game.network.packet.response.pvp;

import game.data.pvp.DTPVP;
import game.tnk.Game;
import openfl.utils.ByteArray;

/**
 * ...
 * @author KhanhTN
 */
class RespPvPLasers extends ResponsePacket
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
            vList[i] = data.readByte();
        }
		
		Game.data.playerData.dataPVP.dataEnemy.addLasers(vList);
        Game.data.playerData.dataPVP.dataEnemy.addAct(DTPVP.LASERS);
    }
}