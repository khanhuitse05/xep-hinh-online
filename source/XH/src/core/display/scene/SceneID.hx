
package core.display.scene;

import core.display.layer.LayerManager;
import core.display.screen.Screen;
import core.display.screen.ScreenID;

/**
 * ...
 * @author trihv
 */
class SceneID extends Screen
{
    /**
     * 
     * @param    className
     * @param    viewName
     */
    public function new(className:Class<SceneBase>, viewName:Class<SceneView>) 
    {
        super(LayerManager.LAYER_SCREEN, className, viewName);
    }
}