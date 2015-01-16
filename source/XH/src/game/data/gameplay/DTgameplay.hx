package game.data.gameplay;
import game.const.skill.SkillInfo;
import game.gameobject.brick.Block;
import game.gameobject.brick.BlockDirect;
import game.gameobject.brick.BlockType;
import game.gameobject.skill.SkillType;
import game.tnk.Game;

/**
 * ...
 * Thông tin của gameplay
 * @author KhanhTN
 */
class DTgameplay
{
	
	// max stack
	public static var MAXFUTURE = 4;
	// maxHold
	public static var MAXHOLD = 2;
	
	// các khối gạch kế tiếp
	public var mStackBlock:Array<InfoBlock>;
	// Khối gạch hiện tại
	public var mcurrentBlock:InfoBlock;
	// Các khối gạch đang giữ
	public var mHoldBlock:Array<InfoBlock>;
	// Điểm
	public var mScore:Int;
	// Tổng thời gian (second)
	public var mTimeTotal:Int;
	// Thời gian còn lại
	public var mTimeCurrent:Int;	
	// x score x2, x3 , x4
	public var mX:Int;
	
	public function new() 
	{
		// stack block
		mStackBlock = new Array<InfoBlock>();
		for (i in 0...4) 
		{
			mStackBlock[i] = new InfoBlock(Std.random(7) + 1, Std.random(4));
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
	}
	public function onRefresh():Void
	{
		
	}
	public function onSetPvp() 
	{		
		// current block
		mcurrentBlock = new InfoBlock(Game.data.playerData.dataPVP.dataMine.getFuture(), BlockDirect.TOP);
		// stack block
		mStackBlock = new Array<InfoBlock>();
		for (i in 0...4) 
		{
			mStackBlock[i] = new InfoBlock(Game.data.playerData.dataPVP.dataMine.getFuture(), BlockDirect.TOP);
		}
		// hold block
		mHoldBlock = new Array<InfoBlock>();
		// other
		mScore = 0;
		mTimeTotal = 120;
		mTimeCurrent = 120;
		mX = 1;
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
	}
	public function NextBlockPvP()
	{
		mcurrentBlock.mType = mStackBlock[0].mType;
		mcurrentBlock.mSkill = mStackBlock[0].mSkill;
		for (i in 0...3) 
		{
			mStackBlock[i].mType = mStackBlock[i + 1].mType;
			mStackBlock[i].mSkill = mStackBlock[i + 1].mSkill;
		}
		mStackBlock[3].mType = Game.data.playerData.dataPVP.dataMine.getFuture();
		mStackBlock[3].mSkill = -1;
		var _skill:Int = Std.random(10);
		if (_skill < Game.data.playerData.dataSkill.skillAct.length &&
			Game.data.playerData.dataSkill.skillAct[_skill] > 0) 
		{
			var _skillInfo:SkillInfo = new SkillInfo(Game.data.playerData.dataSkill.skillAct[_skill]);
			if (_skillInfo.id == SkillType.SHIELD ||
				_skillInfo.id <= 0 ||
				_skillInfo.id == SkillType.HAMMER||
				_skillInfo.id == SkillType.FINISH) 
			{}
			else
			{
				mStackBlock[3].mSkill = Game.data.playerData.dataSkill.skillAct[_skill];
			}
		}
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
		var _skill:Int = Std.random(5);
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
	/**
	 * 
	 * @param
	 */
	public function onEasy()
	{
		mcurrentBlock.mType = BlockType.I;
		for (i in 0...Game.data.playerData.mUserInfo.future) 
		{
			mStackBlock[i].mType = BlockType.I;
		}
		Game.data.playerData.mDTingame.isUpdateStack == true;
	}
}