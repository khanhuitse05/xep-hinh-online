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
	public var mNumGift:Int;
	// is
	public var mAction:Array<Int>;
	
	public function new() 
	{
		mAction = new Array<Int>();
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
	
}