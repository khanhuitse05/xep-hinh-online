package game.data.user;

/**
 * ...
 * @author KhanhTN
 */
class DTUserInfo
{
	
    public var playerName : String = "NoName";
    public var level : Int;    
    public var scores : Int;    
    public var gold : Int;   	
    public var inventory : InventoryData = new InventoryData();
	public function new() 
	{
		
	}
	
}