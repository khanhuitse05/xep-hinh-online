package game.gameobject.gameplay;

import core.display.ex.Lable;
import game.tnk.Game;
import openfl.display.FrameLabel;
import openfl.display.Sprite;

/**
 * ...
 * @author KhanhTN
 */
class Header extends Sprite
{
	private static var MINE = 0;
	private static var ENEMY = 1;
	
	private var mName:Array<String>;
	private var labName:Array<Lable>;
	private var mSkill:Array<Array<Int>>;
	private var paneSkill:Array<Array<Sprite>>;
	private var mAvata:Array<Int>;
	private var paneAvata:Array<Sprite>;
	
	public function new() 
	{
		super();
		setValue();
		init();
	}
	private function init():Void
	{
		labName = new Array<Lable>();
		labName[MINE] = new Lable();
		labName[MINE].setFont(40, 0xffffff);
		labName[MINE].setSysText(mName[MINE]);		
		labName[ENEMY] = new Lable();
		labName[ENEMY].setFont(40, 0xffffff);
		labName[ENEMY].setSysText(mName[ENEMY]);
		
		
	}
	private function setValue():Void
	{
		mName = new Array<String>();
		mSkill = new Array<Array<Int>>();
		mAvata = new Array<Int>();
		
		mName[MINE] = Game.data.playerData.dataPVP.infoMine.userName;
		mName[ENEMY] = Game.data.playerData.dataPVP.infoEnemy.userName;
		mSkill[MINE] = Game.data.playerData.dataPVP.infoMine.skill;
		mSkill[ENEMY] = Game.data.playerData.dataPVP.infoEnemy.skill;
		mAvata[MINE] = Game.data.playerData.dataPVP.infoMine.avatar;
		mAvata[ENEMY] = Game.data.playerData.dataPVP.infoEnemy.avatar;
	}
	
}