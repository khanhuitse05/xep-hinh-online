package game.data;
import openfl.utils.ByteArray;

/**
 * ...
 * @author trihv
 */
class InventoryData
{
    public var pItems : Array<DTItem>;
    
    public function new() 
    {
        
    }
    
    public function readItem(data:ByteArray) : Void
    {
        pItems = new Array<DTItem>();
        var length = data.readShort();
        for (i in 0...length)
        {
            var pItem = new DTItem();
            pItem.read(data);

            pItems.push(pItem);
        }
    }
}