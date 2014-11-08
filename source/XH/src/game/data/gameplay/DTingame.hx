package game.data.gameplay;

/**
 * ...
 * @author KhanhTN
 */
class DTingame
{
	public var isPlay:Bool;
	// click virtual
	public var isChose:Bool;
	public var infoChose:InfoBlock;
	
	public var isCycle:Bool;
	public var isUpdateStack:Bool;
	
	public var isHolding:Bool;
	public var isHolded:Bool;
	public var indexHold:Int;
	public var infoHold:InfoBlock;
	
	public function new() 
	{
		
	}
	/**
	 * 
	 * @param	_info
	 */
	public function onClickVirtual(_info:InfoBlock)
	{
		isChose = true;
		infoChose = _info;
		isCycle = false;
		isUpdateStack = false;
	}
	
	public function onClickHold(_info:InfoBlock, _i:Int)
	{
		isHolding = true;
		indexHold = _i;
		infoHold = _info;
	}
}