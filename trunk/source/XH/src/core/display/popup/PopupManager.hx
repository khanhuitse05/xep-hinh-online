package core.display.popup;

import core.display.layer.LayerManager;
import core.display.screen.ScreenBase;
import core.display.screen.ScreenManager;
import game.tnk.Game;

/**
 * ...
 * @author anhtinh
 */
class PopupManager extends ScreenManager
{
    public function new()
    {
        super();
    }

    public function showPopup(popupID : PopupID, showDarkBg : Bool = true) : Void
    {
        var pView:PopupBase = Type.createInstance(popupID.m_pViewClass, [showDarkBg]);
        Game.displayManager.layerManager.addToLayer(pView, LayerManager.LAYER_POPUP);
        pView.transitionIn();
    }
}