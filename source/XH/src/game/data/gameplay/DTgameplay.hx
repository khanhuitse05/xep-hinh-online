package game.data.gameplay;
import game.const.skill.SkillInfo;
import game.gameobject.brick.Block;
import game.gameobject.brick.BlockDirect;
import game.gameobject.skill.SkillType;
import game.tnk.Game;

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
	
	public function new() 
	{
		// max
		mMaxHold = 2;
		mMaxStack = 4;
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
	}
	public function onRefresh() 
	{		
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
	}
	public function NextBlock()
	{
		mcurrentBlock.mType = mStackBlock[0].mType;
		mcurrentBlock.mSkill = mStackBlock[0].mSkill;
		for (i in 0...3) 
		{
			mStackBlock[i].mType = mStackBlock[i + 1].mType;
			mStackBlock[i].mSkill = mStackBlock[i + 1].mSkill;
		}
		mStackBlock[3].mType = Std.random(7) + 1;
		mStackBlock[3].mSkill = -1;
		var _skill:Int = Std.random(15);
		if (_skill < Game.data.playerData.dataSkill.skillAct.length &&
			Game.data.playerData.dataSkill.skillAct[_skill] > 0) 
		{
			var _skillInfo:SkillInfo = new SkillInfo(Game.data.playerData.dataSkill.skillAct[_skill]);
			if (_skillInfo.id != SkillType.SHIELD ||
				_skillInfo.id <= 0 ||
				_skillInfo.id != SkillType.HAMMER||
				_skillInfo.id != SkillType.FINISH) 
			{
				mStackBlock[3].mSkill = Game.data.playerData.dataSkill.skillAct[_skill];
			}
		}
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