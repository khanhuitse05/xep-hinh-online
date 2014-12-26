package game.gameobject.gameplay;

import core.display.ex.Lable;
import openfl.display.Sprite;

/**
 * ...
 * @author KhanhTN
 */
class Header extends Sprite
{
	private static var MINE = 0;
	private static var ENYME = 1;
	
	private var mName:Array<String>;
	private var labName:Array<Lable>;
	private var mSkill:Array<Array<Int>>;
	private var paneSkill:Array<Array<Sprite>>;
	private var mAvata:Array<Int>;
	private var paneAvata:Array<Sprite>;
	
	public function new() 
	{
		super();
		
	}
	
}