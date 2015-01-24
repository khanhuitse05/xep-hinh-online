package game.data.pvp ;
import game.data.gameplay.InfoBlock;

/**
 * ...
 * @author KhanhTN
 */
class DTMine
{
	// refresh
	public var mNumRefresh:Int;	
	// gift
	private var mNumGift:Array<Int>;
	// is
	public var mAction:Array<Int>;
	public var mFuture:Array<Int>;
	
	public function new() 
	{
		mAction = new Array<Int>();
		mFuture = new Array<Int>();
		mNumGift = new Array<Int>();
	}
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
	public function addNumGift(_n:Int):Void
	{
		mNumGift.push(_n);
	}
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
	public function getFuture():Int 
	{
		if (mFuture.length > 0) 
		{
			var _num = mFuture[0];
			mFuture.remove(mFuture[0]);
			return _num;
		}
		return Std.random(7) + 1;
	}
	public function setFuture(_list:Array<Int>):Void 
	{
		mFuture = _list;
		var a = 0;
	}
	
}