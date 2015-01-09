package game.network.packet.request.login;

import core.util.ByteArrayEx;
import game.network.packet.RequestPacket;
import game.tnk.Game;
import openfl.utils.ByteArray;

/**
 * ...
 * @author KhanhTN
 */
class RepLogin extends RequestPacket
{
	private var id:String;
	private var userName:String;
	private var score:Int;
	private var scoreDate:Int;
	public function new(_id:String, _name:String, _score:Int, _date:Int) 
	{
        super(Command.CMD_LOGIN);
		id = _id;
		userName = _name;
		score = _score;
		scoreDate = _date;
		
	}
	override public function encode(): ByteArray
    {
        var data : ByteArrayEx = cast(super.encode(), ByteArrayEx);
		data.writeShort(score);
		data.writeInt(scoreDate);		
		data.writeShort(id.length);
		data.writeStr(id);
		data.writeShort(userName.length);
		data.writeStr(userName);
        return data;
    }
}