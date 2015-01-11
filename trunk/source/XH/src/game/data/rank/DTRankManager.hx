package game.data.rank;

/**
 * ...
 * @author KhanhTN
 */
class DTRankManager
{	
	public var indexElo:Int;
	public var indexHigh:Int;
	public var vElo:Array<DTRankElo>;
	public var vHigh:Array<DTRankHighScore>;	
	public function new() 
	{
		vElo = new Array<DTRankElo>();
		vHigh = new Array<DTRankHighScore>();
	}
	
}