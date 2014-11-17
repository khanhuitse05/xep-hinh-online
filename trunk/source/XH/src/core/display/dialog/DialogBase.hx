
package core.display.dialog;

import core.display.scene.*;
import core.display.screen.*;
import flash.events.Event;
import game.tnk.Game;
import motion.Actuate;
import motion.easing.Elastic.ElasticEaseInOut;
import motion.easing.Quad;
import openfl.display.Sprite;
import openfl.events.MouseEvent;

/**
 * ...
 * @author trihv
 */
class DialogBase extends ScreenBase
{
    public function new(dialogID:DialogID)
    {
        super(dialogID);
    }
}