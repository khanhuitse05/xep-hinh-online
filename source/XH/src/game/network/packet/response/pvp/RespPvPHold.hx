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
class RespPvPHold extends ResponsePacket
{

	public function new() 
	{
		
	}
	override public function decode(data : ByteArray) : Void 
    {
        var _id:Int             = data.readInt();
		if (_id <= 0) 
		{
			Game.data.playerData.dataPVP.dataEnemy.mHoldBlock = null;
		}else 
		{
			Game.data.playerData.dataPVP.dataEnemy.mHoldBlock = new InfoBlock(_id, BlockDirect.TOP);
			Game.data.playerData.dataPVP.dataEnemy.mHoldBlock.mDirect = data.readInt();
			Game.data.playerData.dataPVP.dataEnemy.mHoldBlock.mRow = data.readInt();
			Game.data.playerData.dataPVP.dataEnemy.mHoldBlock.mColumn = data.readInt();
			Game.data.playerData.dataPVP.dataEnemy.mHoldBlock.mSkill = data.readInt();
		}
        Game.data.playerData.dataPVP.dataEnemy.mAction.push(DTPVP.HOLD);
    }
}