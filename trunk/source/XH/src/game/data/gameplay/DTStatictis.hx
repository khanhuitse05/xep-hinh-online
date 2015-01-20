package game.data.gameplay;
import game.tnk.Game;

/**
 * ...
 * @author KhanhTN
 */
class DTStatictis
{
	
	public var linesClear:Int;
	public var multiplier:Int;
	public var exp:Int;
	public var gold:Int;
	public var skill:Array<Int> = new Array<Int>();
	public var ultimate:Int;
	public var ultimateScore:Int;
	public var score:Int;
	
	public function new() 
	{
		
	}
	public function onRefresh() 
	{		
		linesClear = 0;
		multiplier = 0;
		exp = 0;
		gold = 0;
		skill = new Array<Int>();
		ultimate = 0;
		ultimateScore = 0;
		score = 0;
	}
	public function onUpdate() 
	{		
		exp = Std.int(score / 60);
		gold = Std.int(score / 3);
		skill = Game.data.playerData.dataSkill.skillAct;
		ultimate = Game.data.playerData.dataSkill.skillUtimate;
		multiplier = Game.data.playerData.mDTingame.mX;
	}
	public function onExpleroData() 
	{		
		DataController.onGold(gold);
		DataController.onExp(exp);
		DataController.onScore(score);
		Game.hudTop.update();
	}
	public function addClear(_r:Int):Void
	{
		linesClear += _r;
	}
}