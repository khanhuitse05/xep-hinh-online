package game.data.pvp ;
import game.data.gameplay.InfoBlock;
import game.gameobject.brick.BlockDirect;
import game.gameobject.brick.BlockType;

/**
 * ...
 * @author KhanhTN
 */
class DTEnemy
{
	// các khối gạch kế tiếp
	//public var mStackBlock:Array<InfoBlock>;
	// max stack
	//public var mMaxStack:Int;
	// maxHold
	//public var mMaxHold:Int;
	// Điểm
	//public var mScore:Int;
	// Tổng thời gian (second)
	//public var mTimeTotal:Int;	
	// refresh
	//public var mNumRefresh:Int;	
	// Thời gian còn lại
	//public var mTimeCurrent:Int;	
	// x score x2, x3 , x4
	//public var mX:Int;
	// các Skill hiện tại
	//public var mSkillCurrent:Array<Int>;
	// các skill có thể sử dụng
	//public var mListSkill:Array<Int>;
	
	
	// gift
	private var mNumGift:Array<Int>;
	private var vGift:Array<Array<Int>>;
	// Khối gạch hiện tại
	private var mcurrentBlock:Array<InfoBlock>;
	// Các khối gạch đang giữ
	public var mHoldBlock:InfoBlock;
	// fall block
	private var mFallBlock:Array<InfoBlock>;
	// skill lasers
	private var mLasers:Array<Array<Int>>;
	// skill meteor
	private var mMeteor:Array<Array<Int>>;
	
	// is
	private var mAction:Array<Int>;
	
	public function new() 
	{
		mAction = new Array<Int>();
		mFallBlock = new Array<InfoBlock>();
		mMeteor = new Array<Array<Int>>();
		mLasers = new Array<Array<Int>>();
	}
	// is
	//	private var mAction:Array<Int>;
	public function getAct():Int 
	{
		var _act:Int;
		if (mAction.length > 0) 
		{
			_act = mAction[0];
			mAction.remove(mAction[0]);
			return _act;
		}
		return -1;
	}
	public function addAct(_n:Int):Void 
	{
		if (mAction == null) 
		{
			mAction = new Array<Int>();
		}
		mAction.push(_n);
	}
	// skill meteor
	// private var mMeteor:Array<Array<Int>>;
	public function getMeteor():Array<Int> 
	{
		var _act:Array<Int> = new Array<Int>();
		if (mMeteor.length > 0) 
		{
			_act = mMeteor[0];
			mMeteor.remove(mMeteor[0]);
			return _act;
		}
		return _act;
	}
	public function addMeteor(_n:Array<Int>):Void 
	{
		if (mMeteor == null) 
		{
			mMeteor = new Array<Array<Int>>();
		}
		mMeteor.push(_n);
	}
	// skill lasers
	// private var mLasers:Array<Int>;
	public function getLasers():Array<Int> 
	{
		var _act:Array<Int> = new Array<Int>();
		if (mLasers.length > 0) 
		{
			_act = mLasers[0];
			mLasers.remove(mLasers[0]);
			return _act;
		}
		return _act;
	}
	public function addLasers(_n:Array<Int>):Void 
	{
		if (mLasers == null) 
		{
			mLasers = new Array<Array<Int>>();
		}
		mLasers.push(_n);
	}
	// fall block
	// private var mFallBlock:Array<InfoBlock>;
	public function getFallBlock():InfoBlock
	{
		var _act:InfoBlock = new InfoBlock(BlockType.I, BlockDirect.TOP);
		if (mFallBlock.length > 0) 
		{
			_act = mFallBlock[0];
			mFallBlock.remove(mFallBlock[0]);
			return _act;
		}
		return _act;
	}
	public function addFallBlock(_n:InfoBlock):Void 
	{
		if (mFallBlock == null) 
		{
			mFallBlock = new Array<InfoBlock>();
		}
		mFallBlock.push(_n);
	}
	// Khối gạch hiện tại
	// private var mcurrentBlock:Array<InfoBlock>;
	public function getCurBlock():InfoBlock
	{
		var _act:InfoBlock = new InfoBlock(BlockType.I, BlockDirect.TOP);
		if (mcurrentBlock.length > 0) 
		{
			_act = mcurrentBlock[0];
			mcurrentBlock.remove(mcurrentBlock[0]);
			return _act;
		}
		return _act;
	}
	public function addCurBlock(_n:InfoBlock):Void 
	{
		if (mcurrentBlock == null) 
		{
			mcurrentBlock = new Array<InfoBlock>();
		}
		mcurrentBlock.push(_n);
	}
	// gift
	// private var mNumGift:Int;
	// private var vGift:Array<Int>;
	public function getNumGift():Int 
	{
		var _act:Int;
		if (mNumGift.length > 0) 
		{
			_act = mNumGift[0];
			mNumGift.remove(mNumGift[0]);
			return _act;
		}
		return 0;
	}
	public function addNumGift(_n:Int):Void 
	{
		if (mNumGift == null) 
		{
			mNumGift = new Array<Int>();
		}
		mNumGift.push(_n);
	}
	//
	public function getVGift():Array<Int> 
	{
		var _act:Array<Int> = new Array<Int>();
		if (vGift.length > 0) 
		{
			_act = vGift[0];
			vGift.remove(vGift[0]);
			return _act;
		}
		return _act;
	}
	public function addVGift(_n:Array<Int>):Void 
	{
		if (vGift == null) 
		{
			vGift = new Array<Array<Int>>();
		}
		vGift.push(_n);
	}
}