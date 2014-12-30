package game.gameobject.highscore;

import core.display.ex.Lable;
import core.resource.Defines;
import game.const.Const;
import game.const.highscore.HighScoreInfo;
import game.gameobject.gameplay.Score;
import game.tnk.Game;
import openfl.display.BitmapData;
import openfl.display.Sprite;
import openfl.display.Tilesheet;
import openfl.events.Event;
import openfl.geom.Rectangle;

/**
 * ...
 * @author KhanhTN
 */
class InfoChallenge extends Sprite
{

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
		
		if (type == HighScoreInfo.CHALLENGE) 
		{
			textName.setSysText(Const.highScore[id].name);
			textScore.setSysText("" + Const.NumToString(Const.highScore[id].score));
		}else if (type == HighScoreInfo.ME) 
		{
			textName.setSysText(Game.data.playerData.mUserInfo.userName);
			textScore.setSysText("" + Const.NumToString(Game.data.playerData.mUserInfo.scores));
		}
	}
	public function update(_id:Int, _ty:Int) 
	{
		id = _id;
		type = _ty;
		if (type == HighScoreInfo.CHALLENGE) 
		{
			textName.setSysText(Const.highScore[id].name);
			textScore.setSysText("" + Const.NumToString(Const.highScore[id].score));
		}else if (type == HighScoreInfo.ME) 
		{
			textName.setSysText(Game.data.playerData.mUserInfo.userName);
			textScore.setSysText("" + Const.NumToString(Game.data.playerData.mUserInfo.scores));
		}
	}
	
}