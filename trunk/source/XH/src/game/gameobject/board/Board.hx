package game.gameobject.board;

import core.resource.Defines;
import game.gameobject.brick.Brick;
import game.tnk.Game;
import openfl.display.Sprite;

/**
 * ...
 * @author KhanhTN
 */
class Board extends Sprite
{
	private var mBg:Sprite;
	private var mListID:Array<Array<Brick>>;
	/**
	 * 
	 */
	public function new() 
	{
		super();
		initData();
		init();
	}
	/**
	 * 
	 */
	private function init():Void
	{
		mBg = Game.resource.getSprite(Defines.GFX_BATTLES_BG);
		this.addChild(mBg);
	}
	/**
	 * 
	 */
	private function initData():Void
	{
		mListID = new Array<Array<Int>>();
		for (i in 0...Game.BOARD_HEIGHT) 
		{
			mListID[i] = new Array[i];
			for (j	in 0...Game.BOARD_WIDTH) 
			{
				List[i][j] = 0;
			}
		}
	}
	/**
	 * 
	 */
	public function setBrickBeging():Void
	{
		var _col = Std.random(10);
		for (i in 0... Game.BOARD_WIDTH)
		{
			if (i != _col) 
			{
				for (j in 0...Std.random(4) + 5)
				{
					mListID[j][i] = Std.random(8) + 1;
				}
			}
		}
	}
	/**
	 * 
	 * @param	_arr
	 * @param	_x
	 */
	private function checkExist(_arr:Array<Int>, _x:Int):Void
	{
		for (i in 0..._arr.length) 
		{
			if (_x == _arr[i]) 
			{
				return true;
			}
		}
		return false;
	}
}