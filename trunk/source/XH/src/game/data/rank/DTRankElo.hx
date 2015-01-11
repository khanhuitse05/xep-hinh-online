package game.data.rank;

/**
 * ...
 * @author KhanhTN
 */
class DTRankElo extends DTRankBase
{
	public function new() 
	{
		super();
	}
	override public function setData():Void
	{
		this.id = "0";
		this.name = "Pull";
		this.value = 800;
	}
}