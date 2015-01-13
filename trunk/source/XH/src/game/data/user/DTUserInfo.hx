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
    public var score : Int;    
    //public var scoreDate : Float;    
    public var gold : Int;   	
    public var avatar : Int;   	
    public var avatarEnemy : Int;   	
    public var hold : Int;   	
    public var future : Int;   	
    public var inventory : InventoryData = new InventoryData();
	public function new() 
	{
		avatar = Std.random(5) + 1;
		avatarEnemy = Std.random(4) + 6;
	}

	//private var diamond : string;
	//public int GetDiamond
	//{
	//return diamond XOR "assss"; 
	//}
	//
	//public void SetDiamond(int value)\
	//{
	//diamond = value XOR "assss";
	//}
}