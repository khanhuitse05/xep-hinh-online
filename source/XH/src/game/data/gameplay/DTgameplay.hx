package game.data.gameplay;
import game.gameobject.brick.Block;
import game.gameobject.brick.BlockDirect;

/**
 * ...
 * Thông tin của gameplay
 * @author KhanhTN
 */
class DTgameplay
{
	// các khối gạch kế tiếp
	public var mStackBlock:Array<InfoBlock>;
	// Khối gạch hiện tại
	public var mcurrentBlock:InfoBlock;
	// Các khối gạch đang giữ
	public var mHoldBlock:Array<InfoBlock>;
	// max stack
	public var mMaxStack:Int;
	// maxHold
	public var mMaxHold:Int;
	// Điểm
	public var mScore:Int;
	// Tổng thời gian (second)
	public var mTimeTotal:Int;
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
		// max
		mMaxHold = 2;
		mMaxStack = 2;
		// stack block
		mStackBlock = new Array<InfoBlock>();
		for (i in 0...4) 
		{
			var _iblock = new InfoBlock(Std.random(7) + 1, Std.random(4));
			mStackBlock[i] = _iblock;
		}
		// current block
		mcurrentBlock = new InfoBlock(Std.random(7) + 1, Std.random(4));
		// hold block
		mHoldBlock = new Array<InfoBlock>();
		// other
		mScore = 0;
		mTimeTotal = 120;
		mTimeCurrent = 120;
		mX = 1;
		mSkillCurrent = new Array<Int>();
		mListSkill = new Array<Int>();
		
	}
	
	public function RefreshBlock()
	{
		// stack block
		mStackBlock = new Array<InfoBlock>();
		for (i in 0...4) 
		{
			var _iblock = new InfoBlock(Std.random(7) + 1, BlockDirect.TOP);
			mStackBlock[i] = _iblock;
		}
		// current block
		mcurrentBlock = new InfoBlock(Std.random(7) + 1, BlockDirect.TOP);
		// hold block
		mHoldBlock = new Array<InfoBlock>();
		// other
		mScore = 0;
		mTimeTotal = 120;
		mTimeCurrent = 120;
		mX = 1;
		mSkillCurrent = new Array<Int>();
		mListSkill = new Array<Int>();
	}
	public function NextBlock()
	{
		mcurrentBlock.mType = mStackBlock[0].mType;
		for (i in 0...3) 
		{
			mStackBlock[i].mType = mStackBlock[i + 1].mType;
		}
		mStackBlock[3].mType = Std.random(7) + 1;
	}
	public function HoldBlock(_index:Int)
	{
		if (mHoldBlock[_index] == null) 
		{
			mHoldBlock[_index] = mcurrentBlock;
			NextBlock();
		}else 
		{
			var _iblock = mHoldBlock[_index];
			mHoldBlock[_index] = mcurrentBlock;
			mcurrentBlock = _iblock;
		}
	}
}