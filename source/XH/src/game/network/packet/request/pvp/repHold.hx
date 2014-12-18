package game.network.packet.request.pvp;

import core.util.ByteArrayEx;
import game.data.gameplay.InfoBlock;
import game.network.packet.RequestPacket;
import openfl.utils.ByteArray;

/**
 * ...
 * @author KhanhTN
 */
class RepHold extends RequestPacket
{

	private var block:InfoBlock;
	public function new(_block:InfoBlock) 
	{
		super(Command.CMD_REQ_PVP_HOLD);
		block = _block;
	}
	override public function encode(): ByteArray {
        
        var data : ByteArrayEx = cast(super.encode(), ByteArrayEx);
        data.writeInt(block.mType);
        data.writeInt(block.mDirect);
        data.writeInt(block.mRow);
        data.writeInt(block.mColumn);
        data.writeInt(block.mSkill);
        return data;
    }
	
}