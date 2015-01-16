package game.network.packet.response.pvp;

import game.data.pvp.DTEnemy;
import game.data.pvp.DTPVP;
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
		var nLen:Int = data.readShort();
		Game.data.playerData.dataPVP.dataEnemy.mNumGift = nLen;
		var vList:Array<Int> = new Array<Int>();
		for (i in 0...nLen)
        {
            vList[i] = data.readByte();
        }
		
		Game.data.playerData.dataPVP.dataEnemy.vGift = vList;
        Game.data.playerData.dataPVP.dataEnemy.mAction.push(DTPVP.GROW);
    }
}