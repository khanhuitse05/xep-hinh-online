
package core.display.screen;

import core.display.ex.*;
import openfl.events.EventDispatcher;
import openfl.events.Event;
import tweenx909.TweenX;

/**
 * ...
 * @author trihv
 */
class ScreenView extends ExSprite
{
    public static inline var TRANSITION_IN_COMPLETE:String = "viewTransitionInComplete";
    public static inline var TRANSITION_OUT_COMPLETE:String = "viewTransitionOutComplete";
    public static inline var PRE_TRANSITION_OUT:String = "preTransitionOut";
    public static inline var PRE_TRANSITION_IN:String = "preTransitionIn";
    
    public function new() 
    {
        super();
        
        this.alpha = 0;
        this.visible = false;
    }

    /**
     * 
     */
    public function transitionIn():Void
    {
        this.visible = true;
        this.alpha = 0;
        mouseChildren = false;
        mouseEnabled = false;
		TweenX.to(this, { alpha: 1 }, 0.4).onFinish(transitionInComplete);
    }

    /**
     * 
     */
    public function transitionInComplete():Void
    {
        mouseChildren = true;
        mouseEnabled = true;
        dispatchEvent(new Event(TRANSITION_IN_COMPLETE));
    }

    /**
     * 
     */
    public function transitionOut():Void
    {
        this.alpha = 1;
        mouseChildren = false;
        mouseEnabled = false;
		TweenX.to(this, {alpha: 0}, 0.4).onFinish(transitionOutComplete);
    }

    /**
     * 
     */
    public function transitionOutComplete():Void
    {
        this.visible = false;
        dispatchEvent(new Event(TRANSITION_OUT_COMPLETE));
    }

    /**
     *  Abstract function
     */
    public function onEnter()
    {
        
    }

    /**
     *  Abstract function
     */
    public function onExit()
    {
        
    }

    /*public function hideWithoutTween():Void
    {
        this.visible = false;
        transitionOutComplete();
    }

    public function showWithoutTween():Void
    {
        this.visible = true;
        this.alpha = 1;
        transitionInComplete();
    }*/
    
    private function dispose():Void
    {
        
    }
}