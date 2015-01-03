package game.data.pvp;

/**
 * ...
 * @author KhanhTN
 */
class DTPlayerInfo
{
	public var userName:String;
	public var exp:Int;
	public var elo:Int;
	public var gift:Int;
	public var avatar:Int;
	public var skill:Array<Int>;
	
	public function new() 
	{
		skill = new Array<Int>();
	}
	
	public function checkSkill(_type:Int):Bool
	{
		for (i in 0...skill.length) 
		{
			if (skill[i] == _type) 
			{
				return true;
			}
		}
		return false;
	}
}