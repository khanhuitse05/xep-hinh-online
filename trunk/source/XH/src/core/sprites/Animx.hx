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
class Animx extends Sprite
{
	//private var mFrames:Array<DisplayObject>;
	public var mIndex:Int;
	public var mTotalFrame:Int;
	private var mColumnFrame:Int;
	public var mWidth:Int;
	public var mHeight:Int;

	private var mRunning:Bool;
	private var mDuration:Int;
	private var mCount:Int;
	private var mfirstIndex:Int;
	private var mLastIndex:Int;
	private var mLoopTotal:Int; // -1 = endless
	private var mLoopCount:Int;
	private var mFlag:Bool;
	
	
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
		mRunning = false;
		mDuration = 100;
		mCount = 0;
		mfirstIndex = 0;
		mLastIndex = mTotalFrame - 1;
		mLoopTotal = -1;
		mLoopCount = 0;
		mFlag = true;
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
        if (mRunning == true)
		{
			mCount++;
			if (mCount >= mDuration)
			{
				mCount = 0;
				if (mFlag)
				{
					mIndex++;
					if (mIndex > mLastIndex)
					{
						mIndex = mfirstIndex;
						if (mLoopTotal != -1)
						{
							mLoopCount++;
							if (mLoopCount > mLoopTotal)
							{
								stopAnimate1(mLastIndex);
							}
						}
					}
				}
				else
				{
					mIndex--;
					if (mIndex < mfirstIndex)
					{
						mIndex = mLastIndex;
						if (mLoopTotal != -1)
						{
							mLoopCount++;
							if (mLoopCount > mLoopTotal)
							{
								stopAnimate1(mfirstIndex);
							}
						}
					}
				}				
			}
		}
		gameDraw();
    }
	private function gameDraw():Void 
    {
		//drawtiles
		this.graphics.clear();
		this.tilesheet.drawTiles(this.graphics, [0,0,mIndex]);
    }
	/**
	 * animate
	 * @param	int _duration
	 * @param	int _fist
	 * @param	int _last
	 * @param	int _loop
	 * @param	bool _flag
	 */
	public function animate5(_duration:Int, _fist:Int,  _last:Int,  _loop:Int,_flag:Bool):Void
	{
		mRunning = true;
		if (_flag)
		{
			mIndex = _fist;
		}
		else
		{
			mIndex = _last;
		}
		mDuration = _duration;
		mCount = 0;
		mfirstIndex = _fist;
		mLastIndex = _last;
		mLoopTotal = _loop;
		mLoopCount = 0;
		mFlag = _flag;
	}
	public function animate4( _duration:Int,  _fist:Int,  _last:Int,  _loop:Int):Void
	{
		this.animate5(_duration, _fist, _last, _loop, true);
	}
	public function animate3( _duration:Int,  _fist:Int,  _last:Int):Void
	{
		this.animate5(_duration, _fist, _last, -1, true);
	}
	public function animate2( _duration:Int,  _loop:Int):Void
	{
		this.animate5(_duration, 0, mTotalFrame-1, _loop, true);
	}
	public function animate():Void
	{
		this.animate5(10, 0, mTotalFrame-1, -1, true);		
	}
	/**
	 * Stop animate
	 */
	public function stopAnimate():Void
	{
		stopAnimate1(mIndex);
	}
	public function stopAnimate1(_i):Void
	{
		mIndex = _i;
		mLoopCount = 0;
		mLoopTotal = 0;
		mRunning = false;
	}
	
}