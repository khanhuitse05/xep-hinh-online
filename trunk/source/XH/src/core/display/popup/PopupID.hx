
package core.display.popup;

import core.display.screen.Screen;
import core.display.layer.LayerManager;

/**
 * ...
 * @author trihv
 */
class PopupID extends Screen
{
    public function new(className:Class<PopupBase>) 
    {
        super(LayerManager.LAYER_POPUP, null, className);
    }
}