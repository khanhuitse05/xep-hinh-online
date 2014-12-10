package game.data.pvp ;
import game.data.gameplay.InfoBlock;

/**
 * ...
 * @author KhanhTN
 */
class DTEnemy
{
	// các khối gạch kế tiếp
	public var mStackBlock:Array<InfoBlock>;
	// Khối gạch hiện tại
	public var mcurrentBlock:InfoBlock;
	// Các khối gạch đang giữ
	public var mHoldBlock:Array<InfoBlock>;
	// fall block
	public var mFallBlock:InfoBlock;
	// max stack
	public var mMaxStack:Int;
	// maxHold
	public var mMaxHold:Int;
	// Điểm
	public var mScore:Int;
	// Tổng thời gian (second)
	public var mTimeTotal:Int;	
	// refresh
	public var mAmongRefresh:Int;
	// Thời gian còn lại
	public var mTimeCurrent:Int;	
	// x score x2, x3 , x4
	public var mX:Int;
	// các Skill hiện tại
	public var mSkillCurrent:Array<Int>;
	// các skill có thể sử dụng
	public var mListSkill:Array<Int>;
	
	public function new() 
	{
		
	}
	
}