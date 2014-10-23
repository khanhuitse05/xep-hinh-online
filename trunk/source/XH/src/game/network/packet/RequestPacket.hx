package game.network.packet;
import core.util.ByteArrayEx;
import openfl.utils.ByteArray;

/**
 * ...
 * @author anhtinh
 */
class RequestPacket
{
	private var _command : Int;
	
	public function new(command : Int) 
	{
		this._command = command;
	}
	
	public function encode() : ByteArray
	{
		return new ByteArrayEx();
	}
	
	public function getCommand() : Int
	{
		return _command;
	}
}