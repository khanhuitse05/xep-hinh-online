package game.gameobject.rank ;

import core.display.ex.Lable;
import game.tnk.Game;
import openfl.display.Sprite;

/**
 * ...
 * @author KhanhTN
 */
class RankInfo extends Sprite
{	
	public static var ELO = 0;
	public static var SCORE = 1;
	
	public static var NAME_Y = 10;
	public static var SCORE_Y = 50;
	
	public var id:Int;
	public var type:Int;
	
	public var textName:Lable;
	public var textScore:Lable;
	
	public function new(_id:Int, _ty:Int) 
	{
		super();
		id = _id;
		type = _ty;
		init();
		updateValue();
	}
	public function init():Void
	{
		textName = new Lable();
		textName.setFont(40, 0xffffff);
		textName.setPosition(0, NAME_Y);
		this.addChild(textName);
		
		textScore = new Lable();
		textScore.setFont(30, 0xFF8000);
		textScore.setPosition(0, SCORE_Y);
		this.addChild(textScore);
	}
	public function updateValue()
	{
		if (type == ELO) 
		{
			textName.setSysText(Game.data.playerData.dataRank.vElo[id].name);
			textScore.setSysText("" + Game.data.playerData.dataRank.vElo[id].value);
		}else if (type == SCORE) 
		{
			textName.setSysText(Game.data.playerData.dataRank.vHigh[id].name);
			textScore.setSysText("" + Game.data.playerData.dataRank.vHigh[id].value);
		}
	}
	
}