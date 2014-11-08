package game.gameobject.board;

import game.data.gameplay.InfoBlock;
import game.gameobject.brick.*;
import game.tnk.Game;
import openfl.events.MouseEvent;
import openfl.display.Sprite;
import openfl.events.Event;

/**
 * ...
 * @author KhanhTN
 */
class VirtualBlock extends Sprite
{	
	private var mType:Int;
	private var mDirect:Int;	
	public var mBlock:Block;
		
	private var mColumn:Int;
	private var mRow:Int;
	
	public function new(_type:Int, _direct:Int)
	{
		super();
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
		mBlock.setTypeBrick(BrickType.NON);
		this.addEventListener(Event.ENTER_FRAME, gameLoop);
		this.addEventListener(MouseEvent.MOUSE_DOWN, onTap);

		
	}
	/**
	 * 
	 * @param	e
	 */
	private function gameLoop(e:Event):Void 
    {
		
	}
	public function onTap(e:Event):Void
	{
		var _info:InfoBlock = new InfoBlock(mType, mDirect);
		_info.mColumn = mColumn;
		_info.mRow = mRow;
		Game.data.playerData.mDTingame.onClickVirtual(_info);
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
		this.x = mColumn * Game.BRICK_WIDTH;
		this.y = Game.BOARD_HEIGHT * Game.BRICK_HEIGHT - ( mRow * Game.BRICK_HEIGHT ) - Game.BRICK_HEIGHT;		
	}
}