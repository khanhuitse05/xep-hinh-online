
package core.display.screen;

import game.tnk.Game;
import openfl.events.EventDispatcher;
import core.display.layer.LayerManager;

/**
 * ...
 * @author trihv
 */
class ScreenManager
{
    public var m_pScreensList:Array<ScreenBase>;
    private var m_pCurrentBase:ScreenBase;

    public function new()
    {
        m_pScreensList = new Array<ScreenBase>();
        m_pCurrentBase = null;
    }
	public function getCurrentScene():ScreenBase
	{
		return m_pCurrentBase;
	}
    public function toScreen(screenID:Screen)
    {
        cleanOldScreen();

        var pNextScreen:ScreenBase = null;
        for (screen in m_pScreensList)
        {
            if (screen.m_pScreenID == screenID)
            {
                pNextScreen = screen;
                break;
            }
        }

        if (pNextScreen == null)
        {
            //preload resource
            m_pCurrentBase = Type.createInstance(screenID.m_pBaseClass, [screenID]);
            m_pScreensList.push(m_pCurrentBase);
        }
        else
        {
            m_pCurrentBase = pNextScreen;
        }

        //Game.resource.load(m_pCurrentBase.preloadResourceURLs(), onLoadResourceComplete, onLoadScreenProgess);
		// khanhtn
		onLoadResourceComplete();
		onLoadScreenProgess(0.1);
    }

    /**
     *
     */
    private function onLoadResourceComplete() : Void
    {
        //create display
        m_pCurrentBase.createView();

        Game.displayManager.layerManager.addToLayer(m_pCurrentBase.getView(), m_pCurrentBase.m_pScreenID.m_nLayer);
        m_pCurrentBase.transitionIn();
    }

    /**
     * 
     * @param    progess
     */
    private function onLoadScreenProgess(progess:Float) : Void
    {
    }

    /**
     * 
     */
    public function toTransitionOut()
    {
        if (m_pCurrentBase != null)
        {
            m_pCurrentBase.transitionOut();
        }
    }

    /**
     * 
     */
    public function cleanOldScreen()
    {
        toTransitionOut();
    }
}