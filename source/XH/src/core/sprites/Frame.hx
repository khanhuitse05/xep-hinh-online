package core.sprites ;
import openfl.Assets;
import openfl.display.BitmapData;
import openfl.display.Tilesheet;
import openfl.display.Sprite;
import openfl.display.DisplayObject;
import openfl.events.Event;
import openfl.geom.Rectangle;

/**
 * ...
 * @author KhanhTN
 */
class Frame extends Sprite
{
	//private var mFrames:Array<DisplayObject>;
	public var mIndex (get, set):Int;
	public var mTotalFrame:Int;
	private var mColumnFrame:Int;
	public var mWidth:Int;
	public var mHeight:Int;

	
	private var tilesheet:Tilesheet;
	
	private var radsa:Tilesheet;
	
	/**
	 * 
	 * @param	_total
	 * @param	_width
	 * @param	_height
	 * @param	_column
	 */
	public function new(_total:Int, _width:Int, _height:Int, _column:Int) 
	{
		super();
		mTotalFrame = _total;
		mWidth = _width;
		mHeight = _height;
		mColumnFrame = _column;
		mIndex = 0;
		addEventListener(Event.ENTER_FRAME, gameLoop);
		
	}
	/**
	 * 
	 * @param	_path
	 */
	public function Init(_path:String):Void
	{
		var bitmapData:BitmapData = Assets.getBitmapData(_path);

        tilesheet = new Tilesheet (bitmapData);
		for (i in 0...mTotalFrame) 
		{			
			tilesheet.addTileRect(new Rectangle((i % 4) * mWidth, Std.int(i / 4) * mHeight, mWidth, mHeight), null);
		}

	}
	/**
	 * 
	 * @param	e
	 */
	private function gameLoop(e:Event):Void 
    {
		gameDraw();
    }
	private function gameDraw():Void 
    {
		//drawtiles
		this.graphics.clear();
		this.tilesheet.drawTiles(this.graphics, [0,0,mIndex]);
    }
	@:noCompletion private function get_mIndex():String {
		
		return mIndex;
	}
	
	
	@:noCompletion private function set_mIndex(value:Int):String {
		mIndex = value;
		if (mIndex < 0) 
		{
			mIndex = 0;
		}
		if (mIndex > mTotalFrame - 1) 
		{
			mIndex = mTotalFrame - 1;
		}
	}	
}