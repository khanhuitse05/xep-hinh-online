package game.data.user;

/**
 * ...
 * @author KhanhTN
 */
class DTUserInfo
{
	
    public var userName : String;
    public var level : Int;    
    public var scores : Int;    
    public var gold : Int;   	
    public var skill : Array<Int> = new Array<Int>();
    public var inventory : InventoryData = new InventoryData();
	public function new() 
	{
		
	}
	
}