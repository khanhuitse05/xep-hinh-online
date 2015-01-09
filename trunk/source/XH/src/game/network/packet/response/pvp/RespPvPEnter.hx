package game.network.packet.response.pvp;

import core.util.ByteArrayEx;
import game.network.packet.ResponsePacket;
import game.tnk.Game;
import openfl.utils.ByteArray;
/**
 * ...
 * @author KhanhTN
 */
class RespPvPEnter extends ResponsePacket
{

	public function new() 
	{
		
	}
	override public function decode(data : ByteArray) : Void 
    {
		Game.data.playerData.dataPVP.infoEnemy.userName = (cast(data, ByteArrayEx)).readStr();
		Game.data.playerData.dataPVP.infoEnemy.exp = data.readInt();
		Game.data.playerData.dataPVP.infoEnemy.skill[0] = data.readInt();
		Game.data.playerData.dataPVP.infoEnemy.skill[1] = data.readInt();
		Game.data.playerData.dataPVP.infoEnemy.skill[2] = data.readInt();
		
		Game.data.playerData.dataPVP.setInfoMine();
    }
}