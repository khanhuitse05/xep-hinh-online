package game.network.packet.response.pvp;

import game.data.gameplay.InfoBlock;
import game.data.pvp.DTEnemy;
import game.data.pvp.DTPVP;
import game.gameobject.brick.BlockDirect;
import game.network.packet.ResponsePacket;
import game.tnk.Game;
import openfl.utils.ByteArray;

/**
 * ...
 * @author KhanhTN
 */
class RespPvPFall extends ResponsePacket
{

	public function new() 
	{
		
	}
	override public function decode(data : ByteArray) : Void 
    {
        var _id:Int             = data.readInt();
		var _fall:InfoBlock  = new InfoBlock(_id, BlockDirect.TOP);
		_fall.mDirect = data.readInt();
		_fall.mRow = data.readInt();
		_fall.mColumn = data.readInt();
		_fall.mSkill = data.readInt();
		
        Game.data.playerData.dataPVP.dataEnemy.addFallBlock(_fall);
        Game.data.playerData.dataPVP.dataEnemy.addAct(DTPVP.FALL);
    }
}