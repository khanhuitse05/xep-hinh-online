package game.data.gameplay;

/**
 * ...
 * @author KhanhTN
 */
class InfoBlock
{
	
	public var mType:Int;
	public var mDirect:Int;
	public var mColumn:Int;
	public var mRow:Int;
	public function new(_type:Int, _direct:Int) 
	{
		mType = _type;
		mDirect = _direct;
	}
	
}