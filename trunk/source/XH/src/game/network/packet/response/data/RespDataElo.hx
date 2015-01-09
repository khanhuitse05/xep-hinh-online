package game.network.packet.response.data;

import game.data.DataController;
import game.network.packet.ResponsePacket;
import game.tnk.Game;
import openfl.utils.ByteArray;

/**
 * ...
 * @author KhanhTN
 */
class RespDataElo extends ResponsePacket
{

	public function new() 
	{
		
	}
	override public function decode(data : ByteArray) : Void 
    {        
		Game.data.playerData.mUserInfo.elo = data.readShort();
		DataController.onElo(Game.data.playerData.mUserInfo.elo);
    }
}