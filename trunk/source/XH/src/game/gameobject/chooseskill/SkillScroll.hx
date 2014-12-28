package game.gameobject.chooseskill;

import core.resource.Defines;
import game.data.skill.DTSkill;
import game.tnk.Game;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.events.MouseEvent;


/**
 * ...
 * @author KhanhTN
 */
class SkillScroll extends Sprite
{

	public static var				MAX_VALUE:Int = 50;
	public static var				HEIGHT:Int = Game.GAME_HEIGHT - 500;
	public static var				WIDTH:Int = Game.GAME_WIDTH;
	
	public var						mValue:Int;
	
	
	
    private var m_pChilds:Array<SkillPane>;
	

	private var mBG:Sprite;
	private var mBar:Sprite;
	
	private var mY:Int;
		
	public function new() 
	{
		super();
		m_pChilds = new Array<SkillPane>();
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
		
		mBar = Game.resource.getSprite(Defines.GFX_UI_SKILL_BAR);
		mBar.x = WIDTH - mBar.width;
		mBar.y = 0;
		this.addChild(mBar);
		// Game loop
		this.addEventListener(Event.ENTER_FRAME, gameLoop);
		
		mBG.addEventListener(MouseEvent.CLICK, onTapBG);
		mBG.addEventListener(MouseEvent.MOUSE_OUT, onOutBG);
		
		this.addEventListener(MouseEvent.MOUSE_DOWN , _mouseDownBackground);
		this.addEventListener(MouseEvent.MOUSE_UP, _mouseUpBackground);
		this.addEventListener(MouseEvent.MOUSE_OUT, _mouseOutBackground);
		//this.addEventListener(MouseEvent.MOUSE_MOVE, _mouseMoveBackground);
	}
	/**
	 * 
	 */
	public function onRefresh()
	{		
		for (i in 0...DTSkill.MAX_SKILL) 
		{
			m_pChilds[i].onRefresh();
		}
	}
	/**
	 * 
	 * @param	_obj
	 */
	public function addItem()
	{
		for (i in 0...DTSkill.MAX_SKILL) 
		{			
			var _obj:SkillPane = new SkillPane(i + 1);
			mBG.addChild(_obj);
			m_pChilds.push(_obj);
			
			var mMask:Sprite = new Sprite();
			mMask.graphics.beginFill(0xffffff, 0.01);
			mMask.graphics.drawRect(0, 0, WIDTH, HEIGHT);
			mMask.graphics.endFill();
			mBG.addChild(mMask);
			mMask.cacheAsBitmap = true;
			_obj.mask = mMask;
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
		
		var _maxHeight:Int = SkillPane.HEIGHT * m_pChilds.length;
		var _height:Int = _maxHeight - HEIGHT;
		if (_height < 0) 
		{
			_height = 0;
		}
		var _distance:Int = Std.int(_height * mValue / MAX_VALUE);
		for (i in 0...m_pChilds.length) 
		{
			m_pChilds[i].y = 0 + i * SkillPane.HEIGHT - _distance;
		}	
		// bar
		if (_distance > 0) 
		{
			mBar.y = 0  + (HEIGHT -  mBar.height) * mValue / MAX_VALUE;
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
	 * Wheel event
	 * @param	event
	 */
	private function onTapBG(event:MouseEvent)
	{
		this.stage.addEventListener(MouseEvent.MOUSE_WHEEL, onWheel);
	}
	private function onOutBG(event:MouseEvent)
	{
		this.stage.removeEventListener(MouseEvent.MOUSE_WHEEL, onWheel);
	}
	private function onWheel(event: MouseEvent)
	{
		if ((SkillPane.HEIGHT* m_pChilds.length) > HEIGHT) 
		{
			mValue -= event.delta;
			if (mValue < 0) 
			{
				mValue = 0;
			}else if (mValue > MAX_VALUE) 
			{
				mValue = MAX_VALUE;
			}
			UpdateAll();
		}
	}
	
	/**
	 * Line event
	 * @param	event
	 */
	private function _mouseDownBackground(event: MouseEvent)
	{
		this.addEventListener(MouseEvent.MOUSE_MOVE, _mouseMoveBackground);
		mY = Std.int(event.stageY);
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
		var _maxHeight:Int = SkillPane.HEIGHT * m_pChilds.length;
		var _height:Int = _maxHeight - HEIGHT;
		if (_height < 0) 
		{
			_height = 0;
		}
		var _change:Int = Std.int((mY - event.stageY) / _height * MAX_VALUE);
		setValue(mValue + _change);
	}
	
}