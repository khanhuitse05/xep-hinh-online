package game.network.packet.request.gameplay;

import core.util.ByteArrayEx;
import game.data.gameplay.InfoBlock;
import game.gameobject.brick.BlockDirect;
import game.gameobject.brick.BlockType;
import game.network.packet.RequestPacket;
import lime.utils.ByteArray;

/**
 * ...
 * @author KhanhTN
 */
class repTurnGame extends RequestPacket
{
	var infoBlock:InfoBlock;
	var listData:Array<Int>;
	public function new(_data:Array<Int>, _info:InfoBlock) 
	{
		super(Command.CMD_GAME);
		infoBlock = new InfoBlock(BlockType.I, BlockDirect.BOTTOM);
		infoBlock = cast(_info);
		listData = new Array<Int>();
		listData = cast(_data);
	}
	override public function encode(): ByteArray 
	{
        
        var data : ByteArrayEx = cast(super.encode(), ByteArrayEx);
        data.wireArrBinary(listData);
        data.writeObject(infoBlock);
        return data;
    }
}