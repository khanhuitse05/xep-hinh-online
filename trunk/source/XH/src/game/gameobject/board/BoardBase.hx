package game.gameobject.board;

import game.gameobject.brick.Brick;
import game.tnk.Game;
import openfl.display.Sprite;

/**
 * ...
 * @author KhanhTN
 */
class BoardBase extends Sprite
{
	
	public var mState:Int;
	
	public var mBg:BoardBG;
	public var mBoard:Sprite;
	public var mListID:Array<Array<Int>>;
	public var mListBrick:Array<Array<Brick>>;	
	public var mMask:Sprite;	
	public var mCurentBlock:CBlock;
	
	public var mCount:Int;
	
	public function new() 
	{
		super();
	}
	/**
	 * init
	 */
	private function initBrick():Void
	{
		mListID = new Array<Array<Int>>();
		mListBrick = new Array<Array<Brick>>();
		for (i in 0...Game.BOARD_HEIGHT) 
		{
			mListID[i] = new Array<Int>();
			mListBrick[i] = new Array<Brick>();
			for (j in 0...Game.BOARD_WIDTH ) 
			{
				mListID[i][j] = 0;
				mListBrick[i][j] = new Brick();
				mListBrick[i][j].setValue(0 + j * Game.BRICK_WIDTH,
								(Game.BOARD_HEIGHT - 1) * Game.BRICK_HEIGHT - ( i * Game.BRICK_HEIGHT ),
								0);				
				mBoard.addChild(mListBrick[i][j]);
			}
		}
	}
	/**
	 * Khởi tạo mãng 2 chiều
	 */
	private function initData():Void
	{
		mListID = new Array<Array<Int>>();
		for (i in 0...Game.BOARD_HEIGHT) 
		{
			mListID[i] = new Array<Int>();
			for (j	in 0...Game.BOARD_WIDTH) 
			{
				mListID[i][j] = 0;
				mListBrick[i][j].setValue(0 + j * Game.BRICK_WIDTH,
								(Game.BOARD_HEIGHT - 1) * Game.BRICK_HEIGHT - ( i * Game.BRICK_HEIGHT ),
								0);
				mListBrick[i][j].mSkill = -1;
			}
		}
	}
	
	/**
	 * 
	 */
	private function getMaxHeightRow():Int
	{
		var _height = getHeightColumn(0);
		for (i in 1...Game.BOARD_WIDTH) 
		{
			if (getHeightColumn(i) > _height) 
			{
				_height = getHeightColumn(i);
			}
		}
		return _height;
	}
	/**
	 * 
	 */
	private function getMinHoldRow(_col:Int):Int
	{
		for (i in 0...Game.BOARD_HEIGHT) 
		{
			if (mListBrick[i][_col].mType <= 0) 
			{
				return i;
			}
		}
		return 20;
	}
	
	/**
	 * column's height
	 * @param	_column
	 * @return
	 */
	private function getHeightColumn(_column:Int):Int
	{
		var i:Int = Game.BOARD_HEIGHT;
		while (i > 0) {	
			if (mListBrick[i - 1][_column].mType > 0 ) 
			{
				return i;
			}
			i--;
		}
		return 0;
	}
	/**
	 * use fo block I
	 */
	private function getMinHeightRow()
	{
		var _height = getHeightColumn(0);
		var _index = 0;
		for (i in 1...Game.BOARD_WIDTH) 
		{
			if (getHeightColumn(i) < _height) 
			{
				_height = getHeightColumn(i);
				_index = i;
			}
		}
		return _index;
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
	
	public function visibleBrick(_row:Int, _col:Int):Void
	{
		if (mListBrick[_row][_col] != null) 
		{
			mBoard.removeChild(mListBrick[_row][_col]);
			mListBrick[_row][_col].dispose();
			mListBrick[_row][_col] = null;
		}
	}
	public function removeCurrentBlock():Void
	{
		if (mCurentBlock != null) 
		{
			if (mBoard.contains(mCurentBlock) == true) 
			{
				mBoard.removeChild(mCurentBlock);
			}
			mCurentBlock.dispose();
			mCurentBlock = null;
		}
	}
}