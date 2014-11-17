
package game.data;
import openfl.utils.ByteArray;

/**
 * ...
 * @author trihv
 */
class DTItem
{
    public var nID : Int;
    public var nStorageStatus : Int;
    public var nExpiredTime : Int;
    
    public function new() 
    {
        
    }

    /**
     * Read item from server
     * @param    data
     */
    public function read(data:ByteArray):Void
    {
        nID = data.readInt();
        nStorageStatus = data.readByte();
        nExpiredTime = data.readInt();
    }
}