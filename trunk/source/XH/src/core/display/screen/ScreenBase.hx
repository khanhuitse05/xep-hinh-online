
package core.display.screen;

import openfl.events.Event;
import openfl.events.EventDispatcher;

/**
 * ...
 * @author trihv
 */
class ScreenBase extends EventDispatcher
{
    private var m_isInBase:Bool;
    public var m_pView:core.display.screen.ScreenView;
    public var m_pScreenID:Screen;

    public function new(screenID:Screen)
    {
        super();
        this.m_pScreenID = screenID;
    }

    /**
     * 
     * @return current view of screen
     */
    public function getView():Dynamic
    {
        return m_pView;
    }

    /**
     *  Preload all resources before entering new state
     * @return
     */
    public function preloadResourceURLs() : Array<String>
    {
        return [];
    }

    public function transitionOut():Void 
    {
        if (!m_isInBase)
        {
            return;
        }
        m_isInBase = false;
        m_pView.transitionOut();

        onExit();
    }

    
    public function transitionIn():Void 
    {
        m_isInBase = true;
        onEnter();
        m_pView.transitionIn();
    }

    /**
     * 
     */
    public function createView()
    {
        if (m_pView == null && m_pScreenID.m_pViewClass != null)
        {
            m_pView = Type.createInstance(m_pScreenID.m_pViewClass, []);
            m_pView.addEventListener(ScreenView.TRANSITION_IN_COMPLETE, viewTransitionInComplete);
            m_pView.addEventListener(ScreenView.TRANSITION_OUT_COMPLETE, viewTransitionOutComplete);
        }
    }

    /**
     *  Abstract function
     */
    private function onEnter()
    {
        m_pView.onEnter();
    }

    /**
     *  Abstract function
     */
    private function onExit()
    {
        m_pView.onExit();
    }

    /**
     * 
     * @param    e
     */
    private function viewTransitionOutComplete(e:Event):Void 
    {
        onTransitionOutComplete();
    }

    /**
     * 
     * @param    e
     */
    private function viewTransitionInComplete(e:Event):Void 
    {
        onTransitionInComplete();
    }

    /**
     * 
     */
    private function onTransitionInComplete():Void
    {
        dispatchEvent(new Event(ScreenView.TRANSITION_IN_COMPLETE));    
    }

    /**
     * 
     */
    private function onTransitionOutComplete():Void
    {
        m_pView.visible = false;
        if (m_pView.parent != null)
        {
            m_pView.parent.removeChild(m_pView);
        }

        dispatchEvent(new Event(ScreenView.TRANSITION_OUT_COMPLETE));
    }
}