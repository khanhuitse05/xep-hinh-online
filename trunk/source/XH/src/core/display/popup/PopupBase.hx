package core.display.popup;
import core.display.screen.ScreenBase;
import core.display.screen.ScreenView;
import flash.events.Event;
import game.tnk.Game;
import motion.Actuate;
import motion.easing.Elastic.ElasticEaseInOut;
import motion.easing.Quad;
import openfl.display.Sprite;
import openfl.events.MouseEvent;

/**
 * ...
 * @author anhtinh
 */
class PopupBase extends ScreenView
{
    public function new(showDarkBg : Bool = true) 
    {
        super();
        
        this.alpha = 0;
        this.visible = false;
        this.addEventListener(MouseEvent.CLICK, onHide);
        if (showDarkBg) {
            this.graphics.beginFill(0, 0.6);
            this.graphics.drawRect(0, 0, Game.GAME_WIDTH,Game.GAME_HEIGHT);
            this.graphics.endFill();
        }
    }

    private function onHide(e:Event):Void 
    {
        transitionOut();
    }

    override public function transitionIn():Void {
        this.visible = true;
        this.alpha = 0;
        mouseChildren = false;
        mouseEnabled = false;
        Actuate.tween(this, 0.4, { alpha: 1 } ).onComplete (transitionInComplete);
    }
    
    override public function transitionInComplete():Void {
        mouseChildren = true;
        mouseEnabled = true;
        
    }
    
    override public function transitionOut():Void {
        this.alpha = 1;
        mouseChildren = false;
        mouseEnabled = false;
        Actuate.tween(this, 0.3, {alpha: 0} ).onComplete (transitionOutComplete);
    }
    
    override public function transitionOutComplete():Void
    {
        this.visible = false;
    }
}