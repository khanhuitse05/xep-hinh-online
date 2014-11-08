package game.gameobject.brick;
import game.tnk.Game;
import openfl.display.Sprite;
import openfl.events.MouseEvent;
import openfl.events.Event;
import tweenx909.TweenX;


/**
 * ...Khối gạch
 * @author KhanhTN
 */
class Block extends Sprite
{
	// create border very easy. late
	public static var DURATION:Float = 0.4;
	
	public var mType:Int;
	private var mTypeBrick:Int;
	public var mDirect:Int;	
	private var mCount:Int;
	
	private var column:Int;
	private var row:Int;

	public var mData:Array<Array<Int>>;
	
	public var mListDirect:Array<Int>;
	
	private var mListChild:Array<Brick>;
	
	public function new(_x:Int, _y:Int) 
	{
		super();
		setColumn(_x);
		setRow(_y);
		mData = new Array<Array<Int>>();
		mListDirect = new Array<Int>();
		//this.addEventListener(MouseEvent.MOUSE_DOWN, onTap);
	}
	public function init():Void
	{
	}
	/**
	 * 
	 */
	private function UpdateDirect():Void
	{
		var _index = 0;
		for (i in 0...mData.length) 
		{
			for (j in 0...mData[0].length) 
			{
				if (mData[i][j] == 1) 
				{
					mListChild[_index].x = j * Game.BRICK_WIDTH;
					mListChild[_index].y = 0 - (i + 1) * Game.BRICK_HEIGHT;
					_index++;
				}
			}
		}
	}
	//	public var mMaxWidth:Int;
	public function MaxWidth()
	{
		return mData[0].length;
	}
	//	public var mListHeight:Array<Int>;
	public function getHoldColumn(_column:Int)
	{
		for (i in 0...mData.length) 
		{
			if (mData[i][_column] == 1) 
			{
				return i + 1;
			}
		}
		return - 1;
	}
	public function getHeightColumn(_column:Int)
	{
		var _temp = 0;
		for (i in 0...mData.length) 
		{
			if (mData[i][_column] == 1) 
			{
				_temp ++;
			}
		}
		return _temp;
	}
	public function onTap(e:Event):Void
	{
		setDirect((mDirect + 1) % 4);
	}
	public function setDirect(_direct:Int):Void
	{
		mDirect = _direct;
	}
	
	/**
	 * 
	 * @param	value
	 */
	public function setColumn(value:Int):Void 
	{
		//this.x = value * Game.BRICK_WIDTH;
		this.column = value;
	}
	public function getColumn():Int 
	{
		return column;
	}
	/**
	 * 
	 * @param	value
	 */
	public function setRow(value:Int):Void 
	{
		//this.y = Game.BOARD_HEIGHT * Game.BRICK_HEIGHT - ( value * Game.BRICK_HEIGHT );
		this.row = value;		
	}
	public function getRow():Int 
	{
		return row;
	}
	public function setTypeBrick(_type:Int):Void
	{
		mTypeBrick = _type;
		for (i in mListChild) 
		{
			i.mType = _type;
		}
	}
	
}