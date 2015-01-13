package game.gameobject.board;

import core.sound.Sound;
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
		
	public var mColumn:Int;
	public var mRow:Int;
	
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
		mBlock.setBorder();
		this.addEventListener(MouseEvent.MOUSE_DOWN, onTap);

		
	}
	/**
	 * 
	 * @param	e
	 */
	public function onTap(e:Event):Void
	{		
		var _info:InfoBlock = new InfoBlock(mType, mDirect);
		//_info.mSkill = mBlock.mSkill;
		_info.mColumn = mColumn;
		_info.mRow = mRow;
		Game.data.playerData.mDTingame.onClickVirtual(_info);
		Sound.GetSound(Sound.VIRTUAL_BRICK).Play();
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
	public function dispose():Void
	{		
		this.removeEventListener(MouseEvent.MOUSE_DOWN, onTap);
		this.removeChild(mBlock);
		mBlock.dispose();
		mBlock = null;
	}
}