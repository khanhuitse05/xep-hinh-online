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
class RespPvPNext extends ResponsePacket
{

	public function new() 
	{
		
	}
	override public function decode(data : ByteArray) : Void 
    {
        var _id:Int             = data.readInt();
		Game.data.playerData.dataPVP.dataEnemy.mcurrentBlock = new InfoBlock(_id, BlockDirect.TOP);
		Game.data.playerData.dataPVP.dataEnemy.mcurrentBlock.mDirect = data.readInt();
		Game.data.playerData.dataPVP.dataEnemy.mcurrentBlock.mRow = data.readInt();
		Game.data.playerData.dataPVP.dataEnemy.mcurrentBlock.mColumn = data.readInt();
		Game.data.playerData.dataPVP.dataEnemy.mcurrentBlock.mSkill = data.readInt();
        Game.data.playerData.dataPVP.dataEnemy.mAction.push(DTPVP.NEXT);
    }
}