package game.network.packet.request.pvp;

import game.network.packet.RequestPacket;
import core.util.ByteArrayEx;
import game.tnk.Game;
import openfl.utils.ByteArray;

/**
 * ...
 * @author KhanhTN
 */
class RepEnter extends RequestPacket
{

	public function new() 
    {
        super(Command.CMD_PVP_ENTER);
    }

    override public function encode(): ByteArray
    {
        var data : ByteArrayEx = cast(super.encode(), ByteArrayEx);
		data.writeStr(Game.data.playerData.mUserInfo.userName);
		data.writeInt(Game.data.playerData.mUserInfo.exp);
		data.writeInt(Game.data.playerData.mUserInfo.skillAct[0]);
		data.writeInt(Game.data.playerData.mUserInfo.skillAct[1]);
		data.writeInt(Game.data.playerData.mUserInfo.skillAct[2]);
        return data;
    }
	
}