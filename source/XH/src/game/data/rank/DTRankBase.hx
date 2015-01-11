package game.data.rank;

/**
 * ...
 * @author KhanhTN
 */
class DTRankBase
{
	public var name:String;
	public var id:String;
	public var value:Int;
	
	public function new() 
	{		
		setData();
	}
	public function setData():Void
	{
		this.id = "0";
		this.name = "Ping";
		this.value = 0;
	}
}