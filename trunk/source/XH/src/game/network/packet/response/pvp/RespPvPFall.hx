package game.network.packet.response.pvp;

import game.data.gameplay.InfoBlock;
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
		Game.data.playerData.dataPVP.dataEnemy.mFallBlock = new InfoBlock(_id, BlockDirect.TOP);
		Game.data.playerData.dataPVP.dataEnemy.mFallBlock.mDirect = data.readInt();
		Game.data.playerData.dataPVP.dataEnemy.mFallBlock.mRow = data.readInt();
		Game.data.playerData.dataPVP.dataEnemy.mFallBlock.mColumn = data.readInt();
		Game.data.playerData.dataPVP.dataEnemy.mFallBlock.mSkill = data.readInt();
        Game.data.playerData.dataPVP.dataEnemy.isFall = true;
    }
}