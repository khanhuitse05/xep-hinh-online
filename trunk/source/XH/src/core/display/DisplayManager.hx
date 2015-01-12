package core.display;
import core.display.dialog.DialogManager;
import core.display.layer.LayerManager;
import core.display.note.NoteObject;
import core.display.popup.PopupManager;
import core.display.screen.ScreenID;
import core.display.screen.ScreenManager;
/**
 * ...
 * @author KhanhTN
 */
class DisplayManager
{

	public var m_pScreensManager:Array<Dynamic>;
    public var layerManager : LayerManager;
    public var m_pPopupManager : PopupManager;
    
    public function new(main : Main) 
    {
        layerManager = new LayerManager(main);

        m_pScreensManager = new Array<Dynamic>();
        m_pScreensManager[LayerManager.LAYER_POPUP] = new PopupManager();
        m_pScreensManager[LayerManager.LAYER_DIALOG] = new DialogManager();
        for (i in 0...LayerManager.LAYER_COUNT)
        {
            if (m_pScreensManager[i] == null)
            {
                m_pScreensManager[i] = new ScreenManager();
            }
        }
        m_pPopupManager = m_pScreensManager[LayerManager.LAYER_POPUP];
    }
	/**
     * 
     * @param    screenID
     */
    public function toMessage(_text:String)
    {
        var _note:NoteObject = new NoteObject(_text);
		layerManager.addToLayer(_note, LayerManager.LAYER_MESSAGE);
    }
    /**
     * 
     * @param    screenID
     */
    public function toScreen(screenID:Dynamic)
    {
        // Close all above layers 
        for (i in (screenID.m_nLayer + 1)...LayerManager.LAYER_COUNT)
        {
            m_pScreensManager[i].toTransitionOut();
        }

        if (screenID.m_nLayer != LayerManager.LAYER_POPUP)
        {
            m_pScreensManager[screenID.m_nLayer].toScreen(screenID);
        }
        else
        {
            m_pPopupManager.showPopup(screenID);
        }
    }
}