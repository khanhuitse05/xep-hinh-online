package game.data.rank;

/**
 * ...
 * @author KhanhTN
 */
class DTRankHighScore extends DTRankBase
{

	public function new() 
	{
		super();		
	}
	override public function setData():Void
	{
		this.id = "0";
		this.name = "Ping";
		this.value = 0;
	}
}