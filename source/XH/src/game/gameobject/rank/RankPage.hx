package game.gameobject.rank;

import core.resource.Defines;
import game.tnk.Game;
import openfl.events.MouseEvent;
import openfl.events.Event;
import openfl.display.Sprite;

/**
 * ...
 * @author KhanhTN
 */
class RankPage extends Sprite
{

	public static var ELO = 0;
	public static var SCORE = 1;
	
	public static var				MAX_VALUE:Int = 100;
	
	public static var				HEIGHT:Int = 800;
	public static var				WIDTH:Int = Game.GAME_WIDTH;
	
	public var						mValue:Int;
	
	
	
    public var m_pChilds:Array<RankScroll>;	

	private var mBG:Sprite;
	private var mX:Int;
	
	private var type:Int;
		
	public function new() 
	{
		super();
		initialize();
		addItem();
		
	}
	/**
	 * Game loop
	 * @param	e
	 */
	private function gameLoop(e:Event):Void {
		
	}
	/**
	 * 
	 */
	private function initialize():Void
    {		
		mBG = new Sprite();		
		mBG.graphics.beginFill(0xffffff, 0.001);
		mBG.graphics.drawRect(0, 0, WIDTH, HEIGHT);
		mBG.graphics.endFill();
		this.addChild(mBG);
		
		// Game loop
		this.addEventListener(Event.ENTER_FRAME, gameLoop);
		
		this.addEventListener(MouseEvent.MOUSE_DOWN , _mouseDownBackground);
		this.addEventListener(MouseEvent.MOUSE_UP, _mouseUpBackground);
		this.addEventListener(MouseEvent.MOUSE_OUT, _mouseOutBackground);
	}
	/**
	 * 
	 */
	public function onRefresh()
	{
		mValue = 0;
		UpdateAll();
	}
	/**
	 * 
	 * @param	_obj
	 */
	public function addItem()
	{		
		m_pChilds = new Array<RankScroll>();
		for (i in 0...2) 
		{			
			m_pChilds[i] = new RankScroll(type);
			mBG.addChild(m_pChilds[i]);
			
			var mMask:Sprite = new Sprite();
			mMask.graphics.beginFill(0xffffff, 0.01);
			mMask.graphics.drawRect(0, 0, WIDTH, HEIGHT);
			mMask.graphics.endFill();
			mBG.addChild(mMask);
			mMask.cacheAsBitmap = true;
			m_pChilds[i].mask = mMask;
		}
		UpdateAll();
	}
	/**
	 * 
	 * @param	_obj
	 */
	public function ChooseItem(_i:Int)
	{
		
	}
	/**
	 * 
	 * @param	_obj
	 */
	public function CancelItem(_i:Int)
	{
		
	}
	/**
	 * 
	 */
	public function UpdateAll()
	{
		if (mValue < 0) 
		{
			mValue = 0;
		}else if (mValue > MAX_VALUE) 
		{
			mValue = MAX_VALUE;
		}
		
		var _max:Int = RankScroll.WIDTH * m_pChilds.length;
		var _height:Int = _max - WIDTH;
		if (_height < 0) 
		{
			_height = 0;
		}
		var _distance:Int = Std.int(_height * mValue / MAX_VALUE);
		for (i in 0...m_pChilds.length) 
		{
			m_pChilds[i].x = 0 + i * RankScroll.WIDTH - _distance;
		}	
		
		
	}
	/**
	 * 
	 */
	public function incValue():Void{
		
	}
	/**
	 * 
	 */
	public function decValue():Void{
		
	}
	
	/**
	 * 
	 * @param
	 */
	public function setValue(_v:Int):Void{
		mValue = _v;
		if (mValue < 0) 
		{
			mValue = 0;
		}else if (mValue > MAX_VALUE) 
		{
			mValue = MAX_VALUE;
		}
		UpdateAll();
	}
	
	
	/**
	 * Line event
	 * @param	event
	 */
	private function _mouseDownBackground(event: MouseEvent)
	{
		this.addEventListener(MouseEvent.MOUSE_MOVE, _mouseMoveBackground);
		mX = Std.int(event.stageX);
	}
	private function _mouseUpBackground(event: MouseEvent)
	{
		this.removeEventListener(MouseEvent.MOUSE_MOVE, _mouseMoveBackground);
	}
	private function _mouseOutBackground(event: MouseEvent)
	{
		//this.removeEventListener(MouseEvent.MOUSE_MOVE, _mouseMoveBackground);
	}
	private function _mouseMoveBackground(event: MouseEvent)
	{
		var _maxHeight:Int = RankScroll.WIDTH * m_pChilds.length;
		var _height:Int = _maxHeight - HEIGHT;
		if (_height < 0) 
		{
			_height = 0;
		}
		var _change:Int = Std.int((mX - event.stageX) / _height * MAX_VALUE);
		setValue(mValue + _change);
	}
	
}