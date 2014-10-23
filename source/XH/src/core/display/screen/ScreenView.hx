
package core.display.screen;

import core.display.ex.*;
import openfl.events.EventDispatcher;
import motion.Actuate;
import openfl.events.Event;

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
        
        //this.alpha = 0;
        //this.visible = false;
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
        Actuate.tween(this, 0.4, { alpha: 1} ).onComplete (transitionInComplete);
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
        Actuate.tween(this, 0.3, {alpha: 0} ).onComplete (transitionOutComplete);
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