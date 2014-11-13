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
	// cycle
	public var isCycle:Bool;
	public var isUpdateStack:Bool;
	// holde
	public var isHolding:Bool;
	public var isHolded:Bool;
	public var indexHold:Int;
	public var infoHold:InfoBlock;
	// score
	public var mX:Int;
	public var inScore:Int;
	public var chooseScore:Int;
	
	public var mConstScore:Array<Int>;
	
	public var isFinishCountDown:Bool;
	public var isUpdateTime:Bool;
	
	public function new() 
	{
		mX = 1;
		isFinishCountDown = false;
		isUpdateTime = false;
		inScore = 0;
		chooseScore = 0;		
		mConstScore = new Array<Int>();
		for (i in 0...20) 
		{
			mConstScore[i] = (i + 1) * 400;
		}
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