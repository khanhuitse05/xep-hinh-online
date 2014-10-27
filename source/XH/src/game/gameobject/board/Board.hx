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
	private var mListID:Array<Array<Int>>;
	private var mListBrick:Array<Array<Brick>>;
	/**
	 * 
	 */
	public function new() 
	{
		super();
		init();
		initData();
		setBrickBeging();
	}
	/**
	 * 
	 */
	private function init():Void
	{
		mBg = Game.resource.getSprite(Defines.GFX_BOARD_001);
		this.addChild(mBg);
	}
	/**
	 * Khởi tạo mãng 2 chiều
	 */
	private function initData():Void
	{
		mListID = new Array<Array<Int>>();
		mListBrick = new Array<Array<Brick>>();
		for (i in 0...Game.BOARD_HEIGHT) 
		{
			mListID[i] = new Array<Int>();
			mListBrick[i] = new Array<Brick>();
			for (j	in 0...Game.BOARD_WIDTH) 
			{
				mListID[i][j] = 0;				
				var _brick:Brick = new Brick();
				_brick.setValue(0 + j * Game.BRICK_WIDTH,
								(Game.BOARD_HEIGHT - 1) * Game.BRICK_HEIGHT - ( i * Game.BRICK_HEIGHT ),
								0);
				mListBrick[i][j] = _brick;
				this.addChild(_brick);
			}
		}
	}
	/**
	 * tao lớp gách đầu game
	 */
	public function setBrickBeging():Void
	{
		var _col = Std.random(10);
		var _tempY:Float = 0;
		var _V:Float = 0;
		for (i in 0... Game.BOARD_WIDTH)
		{
			if (i != _col) 
			{
				for (j in 0...Std.random(4) + 5)
				{
					mListID[j][i] = Std.random(8) + 1;
					mListBrick[j][i].type = mListID[j][i];
					if (j == 0) 
					{
						mListBrick[j][i].y = 0 - Std.random(100);
						_tempY = mListBrick[j][i].y;
						_V = Std.random(10) / 20;
					}else 
					{
						mListBrick[j][i].y = _tempY - Std.random(100) - 100;
						_tempY = mListBrick[j][i].y;
						_V = _V + Std.random(10) / 40;
					}
					mListBrick[j][i].MoveTo(0.4 + _V, 0.0, mListBrick[j][i].x, (Game.BOARD_HEIGHT - 1) * Game.BRICK_HEIGHT - j * Game.BRICK_HEIGHT);
					
				}
			}
		}
	}
	/**
	 * 
	 * @param	_arr
	 * @param	_x
	 */
	private function checkExist(_arr:Array<Int>, _x:Int):Bool
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