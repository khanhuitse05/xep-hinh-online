package game.data.user;

/**
 * ...
 * @author KhanhTN
 */
class DTUserInfo
{
	
    public var userID : String;
    public var userName : String;
    public var exp : Int;    
    public var elo : Int;    
    public var scores : Int;    
    public var gold : Int;   	
    public var avatar : Int;   	
    public var inventory : InventoryData = new InventoryData();
	public function new() 
	{
		avatar = Std.random(10) + 1;
	}
	
}