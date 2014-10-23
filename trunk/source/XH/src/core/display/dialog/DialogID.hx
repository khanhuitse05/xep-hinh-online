package core.display.dialog;

import core.display.screen.Screen;
import core.display.screen.ScreenID;
import core.display.layer.LayerManager;

/**
 * ...
 * @author trihv
 */
class DialogID extends Screen
{
    /**
     * 
     * @param    baseName
     * @param    viewName
     */
    public function new(baseName:Class<DialogBase>, viewName:Class<DialogView>)
    {
        super(LayerManager.LAYER_DIALOG, baseName, viewName);
    }
}