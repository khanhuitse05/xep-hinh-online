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
	public function new(_id:String, _name:String, _score:Int) 
	{
        super(Command.CMD_LOGIN);
		id = _id;
		userName = _name;
		score = _score;
		
	}
	override public function encode(): ByteArray
    {
		//var _time:Float = Date.now().getTime();
        var data : ByteArrayEx = cast(super.encode(), ByteArrayEx);
		data.writeShort(score);
		//data.writeFloat(_time);
		data.writeShort(id.length);
		data.writeStr(id);
		data.writeShort(userName.length);
		data.writeStr(userName);
        return data;
    }
}