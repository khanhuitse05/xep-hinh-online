package core.display.ex;
import core.display.ex.ExSprite;
import flash.events.Event;
import openfl.display.Bitmap;
import openfl.display.DisplayObject;
import openfl.display.Sprite;
import openfl.events.MouseEvent;
import openfl.Lib;

import core.display.csprite.*;

/**
 * ...
 * @author anhtinh
 */
class SimpleButton extends ExSprite
{
    private static inline var NORMAL_STATUS : Int = 0;
    private static inline var OVER_STATUS : Int = 1;
    private static inline var PRESS_STATUS : Int = 2;
    private static inline var DISABLE_STATUS : Int = 3;
    
    private var _normalDisplay : DisplayObject;
    private var _overDisplay : DisplayObject;
    private var _pressDisplay : DisplayObject;
    private var _disableDisplay : DisplayObject;
    
    private var _noOverDisplay : Bool = false;
    
    private var _isDisable : Bool = false;
		
	private var _isDown:Bool;
	private var _onMouseClick:MouseEvent->Void;
	private var _onMouseDown:MouseEvent->Void;
    
    public function new() 
    {
        super();
        this.buttonMode = true;
    }
    
    public function setDisplay(normalDisplay : DisplayObject, overDisplay : DisplayObject = null, pressDisplay : DisplayObject = null, disableDisplay : DisplayObject = null) : Void 
    {
        _normalDisplay = normalDisplay;
        if (_normalDisplay != null) {
            _normalDisplay.x = - _normalDisplay.width / 2;
            _normalDisplay.y = - _normalDisplay.height / 2;
            this.addChild(_normalDisplay);
        }
        
        if (Std.is(normalDisplay, Bitmap)) cast(_normalDisplay, Bitmap).smoothing = true;
        
        if (overDisplay == null) {
            _overDisplay = normalDisplay ;
            _noOverDisplay = true;
        }
        else {
            _overDisplay = overDisplay ;
            _overDisplay.x = - _overDisplay.width / 2;
            _overDisplay.y = - _overDisplay.height / 2;
            _overDisplay.visible = false;
            this.addChild(_overDisplay);
        }
        
        if (pressDisplay == null) {
            _pressDisplay = normalDisplay ;
        }else {
            _pressDisplay = pressDisplay ;
            _pressDisplay.x = - _pressDisplay.width / 2;
            _pressDisplay.y = - _pressDisplay.height / 2;
            _pressDisplay.visible = false;
            this.addChild(_pressDisplay);
        }
        
        if (disableDisplay == null) {
            _disableDisplay = normalDisplay ;
        }else {
            _disableDisplay = disableDisplay ;
            _disableDisplay.x = - _disableDisplay.width / 2;
            _disableDisplay.y = - _disableDisplay.height / 2;
            _disableDisplay.visible = false;
            this.addChild(_disableDisplay);
        }
        
        this.addEventListener(MouseEvent.ROLL_OVER, onMouseOver);
        this.addEventListener(MouseEvent.ROLL_OUT, onMouseOut);
        this.addEventListener(MouseEvent.MOUSE_DOWN, onMouseDown);
        this.addEventListener(MouseEvent.MOUSE_UP, onMouseUp);
    }
    
    private function setStatus(status : Int) : Void
    {
        switch (status) 
        {
            case NORMAL_STATUS:
            {
                this.scaleX = this.scaleY = 1;
                
                _overDisplay.visible = false;
                _pressDisplay.visible = false;
                _disableDisplay.visible = false;
                _normalDisplay.visible = true;
            }
            
            case OVER_STATUS:
            {
                if (_noOverDisplay)
                {
                    this.scaleX = this.scaleY = 1.05;
                }
                
                _pressDisplay.visible = false;
                _normalDisplay.visible = false;
                _disableDisplay.visible = false;
                _overDisplay.visible = true;
            }
            
            case PRESS_STATUS:
            {
                this.scaleX = this.scaleY = 1;
                
                _normalDisplay.visible = false;
                _overDisplay.visible = false;
                _disableDisplay.visible = false;
                _pressDisplay.visible = true;
            }
            
            case DISABLE_STATUS:
            {
                this.scaleX = this.scaleY = 1;
                
                _normalDisplay.visible = false;
                _overDisplay.visible = false;
                _pressDisplay.visible = false;
                _disableDisplay.visible = true;
            }
        }
    }

    /**
     *  Check if the button was pressed
     * @return false if no pressing, otherwise true
     */
    public function isDisabled():Bool
    {
        return _isDisable;
    }

    /**
     *  Check if the button was pressed
     * @return false if no pressing, otherwise true
     */
    public function isPressed():Bool
    {
        return _pressDisplay.visible;
    }

    public function onMouseDown(e:MouseEvent):Bool
    {
		_isDown = true;
		if (_onMouseDown != null && _isDisable == false) 
		{
			this._onMouseDown(e);
		}
        if(!_isDisable)
        {
            setStatus(PRESS_STATUS);
            return true;
        }
        return false;
    }
    
    public function onMouseOver(e:MouseEvent):Bool
    {
        if(!_isDisable)
        {
            setStatus(OVER_STATUS);
            return true;
        }
        return false;
    }
    
    public function onMouseOut(e:MouseEvent):Bool
    {
		_isDown = false;
        if(!_isDisable)
        {
            setStatus(NORMAL_STATUS);
            return true;
        }
        return false;
    }
	
    public function onMouseUp(e:MouseEvent):Void
    {
		if (_isDown == true && _isDisable == false) 
		{
			if (_onMouseClick != null) 
			{
				this._onMouseClick(e);
			}
		}
		_isDown = false;
    }
	
    public function GetDisable() : Bool
    {
        return _isDisable;
    }
    
    public function SetDisable(disable:Bool) : Void
    {
        if(disable)
        {
            _isDisable = true;
            setStatus(DISABLE_STATUS);
            this.buttonMode = false;
        }
        else
        {
            _isDisable = false;
            setStatus(NORMAL_STATUS);
            this.buttonMode = true;
        }
    }

    /**
     * 
     * @param    x
     * @param    y
     */
    public function setPosition(x:Float, y:Float):Void
    {
        this.x = x;
        this.y = y;
    }

    public function setMouseDown(f:MouseEvent->Void):Void
	{
		_onMouseDown = f;
	}
	public function setMouseClick(f:MouseEvent->Void):Void
	{
		_onMouseClick = f;
	}
}