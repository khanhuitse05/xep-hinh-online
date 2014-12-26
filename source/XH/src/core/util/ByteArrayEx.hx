package core.util;
import haxe.Utf8;
import openfl.utils.ByteArray;
import openfl.utils.Endian;

/**
 * ...
 * @author anhtinh
 */
class ByteArrayEx extends ByteArray
{
    private var _twoPower32 : Float = 4294967296;        // 2^32

//    var nIndex:Int;
    public function new() 
    {
        super();
        this.endian = Endian.BIG_ENDIAN; 
//        nIndex = 0;
    }
    
    public function readStr() : String
    {
        return this.readUTF();
    }
    public function readStrBytes(length:Int) : String
    {
        return this.readUTFBytes(length);
    }
    public function readLong() : Float
    {
        var uintH : UInt = this.readUnsignedInt();
        var uintL : UInt = this.readUnsignedInt();

//        nIndex += 8;
        return (uintH * _twoPower32 + uintL);
    }
    
    public function writeStr(string : String) : Void
    {
        if (string == null) return;

        this.writeUTF(string);
    }
    
    public function wireArrBinary(arrByte:Array<Int>):Void
    {
        if (arrByte == null)
        {
            return;
        }
        this.writeShort(arrByte.length);
        for (byte in arrByte)
        {
            this.writeByte(byte);
        }
    }
    
    public function wireArrInteger(arrByte:Array<Int>):Void
    {
        if (arrByte == null)
        {
            return;
        }
        this.writeShort(arrByte.length);
        for (val in arrByte)
        {
            this.writeInt(val);
        }
    }
}