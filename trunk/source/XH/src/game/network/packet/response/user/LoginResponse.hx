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
		var _lenght:Int = data.readShort();
		Game.data.playerData.mUserInfo.userID = (cast(data, ByteArrayEx)).readStrBytes(_lenght);
		Game.data.playerData.mUserInfo.elo = data.readShort();
		ExploringCache.writeID(Game.data.playerData.mUserInfo.userID);
		ExploringCache.writeElo(Game.data.playerData.mUserInfo.elo);
		Game.hudTop.update();
    }
}