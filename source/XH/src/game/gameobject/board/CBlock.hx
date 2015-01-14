package game.gameobject.board;

import core.sound.Sound;
import game.data.gameplay.InfoBlock;
import game.gameobject.brick.*;
import game.tnk.Game;
import motion.Actuate;
import openfl.display.Sprite;
import openfl.geom.ColorTransform;

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
	public function setBlock(_type:Int, _direct:Int)
	{
		if (_type != mType) 
		{			
			mType = _type;
			this.removeChild(mBlock);
			mBlock.dispose();
			mBlock = null;
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
			this.addChild(mBlock);
		}
		mDirect = _direct;
		mBlock.setDirect(mDirect);
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
	/**
	 * 
	 * @param	_taget
	 * @param	onComplete
	 */
	private var _onCompleteEffect:Void->Void;
	private var _info:InfoBlock;
	public function ApplyEffect(_taget:InfoBlock, onComplete:Void->Void = null)
	{
		_onCompleteEffect = onComplete;
		_info = _taget;
		Actuate.tween(this, 0.03, { x: x + (_info.mColumn - this.mColumn) * Game.BRICK_WIDTH }).onComplete(OnApplyToCompleteQuarter);
	}
	/**
	 * 
	 */
	public function OnApplyToCompleteQuarter():Void
	{
		this.mBlock.setDirect(_info.mDirect);
		Actuate.tween(this, 0.1, { y: y + (mRow - _info.mRow) * Game.BRICK_HEIGHT } ).onComplete(OnApplyToCompleteSemi);
		
		this.mColumn = _info.mColumn;
		this.mRow = _info.mRow;
	}
	public function OnApplyToCompleteSemi():Void
	{
		this.transform.colorTransform = new ColorTransform(1, 1, 1, 1, 225, 225, 225, 0);
		Actuate.tween(this, 0.05, {}).onComplete(OnApplyToCompleteFinal);

	}
	public function OnApplyToCompleteFinal():Void
	{
		if (_onCompleteEffect != null) 
		{
			this._onCompleteEffect();
			Sound.GetSound(Sound.GAME_FALL).Play();
		}
	}
	public function dispose():Void
	{
		this.removeChild(mBlock);
		mBlock.dispose();
		mBlock = null;
	}
}