package game.gameobject.board;

import game.gameobject.brick.*;
import game.tnk.Game;
import openfl.display.Sprite;

/**
 * ...
 * @author KhanhTN
 */
class CBlock extends Sprite
{	
	private var mType:Int;
	private var mDirect:Int;	
	public var mBlock:Block;
	
	
	private var mParentX:Int;
	private var mParentY:Int;
	
	public var mColumn:Int;
	public var mRow:Int;
	
	public function new(_type:Int, _direct:Int)
	{
		super();
		mParentX = 0;
		mParentY = 0;
		mType = _type;
		mDirect = _direct;
		switch (_type)
		{
			case BlockType.I:
				mBlock = new Iblock(0, 0);
			case BlockType.O:
				mBlock = new Oblock(0, 0);
			case BlockType.T:
				mBlock = new Tblock(0, 0);
			case BlockType.LL:
				mBlock = new LLblock(0, 0);
			case BlockType.LR:
				mBlock = new LRblock(0, 0);
			case BlockType.ZL:
				mBlock = new ZLblock(0, 0);
			case BlockType.ZR:				
				mBlock = new ZRblock(0, 0);
			default:				
		}
		mBlock.setDirect(mDirect);
		this.addChild(mBlock);
	}
	/**
	 * 
	 * @param	_x
	 * @param	_y
	 * @param	_type
	 */
	public function setParentPos(_pX:Int, _pY:Int):Void
	{
		mParentX = _pX;
		mParentY = _pY;
	}
	/**
	 * 
	 * @param	_column
	 * @param	_row
	 */
	public function setGrid(_column:Int, _row:Int):Void
	{
		mColumn = _column;
		mRow = _row;
		this.x = mColumn * Game.BRICK_WIDTH + mParentX;
		this.y = Game.BOARD_HEIGHT * Game.BRICK_HEIGHT - ( mRow * Game.BRICK_HEIGHT ) + mParentY - Game.BRICK_HEIGHT;		
	}
}