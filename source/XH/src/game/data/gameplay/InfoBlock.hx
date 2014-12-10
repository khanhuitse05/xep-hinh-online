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
	public var mSkill:Int;
	public function new(_type:Int, _direct:Int, _skill:Int = -1) 
	{
		mType = _type;
		mDirect = _direct;
		mSkill = _skill;
	}
	
}