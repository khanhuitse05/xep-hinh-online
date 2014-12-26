package game.data.pvp;

/**
 * ...
 * @author KhanhTN
 */
class DTPlayerInfo
{
	public var userName:String;
	public var exp:Int;
	public var skill:Array<Int>;
	
	public function new() 
	{
		skill = new Array<Int>();
	}
	
}