package game.network.packet.response.user ;

import core.util.ByteArrayEx;
import game.const.cache.ExploringCache;
import game.network.packet.ResponsePacket;
import game.tnk.Game;
import openfl.utils.ByteArray;

/**
 * ...
 * @author KhanhTN
 */
class LoginResponse extends ResponsePacket
{

	public function new() 
	{
		
	}
	
	override public function decode(data : ByteArray) : Void 
    {        
		Game.data.playerData.mUserInfo.userID = (cast(data, ByteArrayEx)).readStr();
		Game.data.playerData.mUserInfo.elo = data.readInt();
		ExploringCache.writeID(Game.data.playerData.mUserInfo.userID);
		ExploringCache.writeElo(Game.data.playerData.mUserInfo.elo);
    }
}