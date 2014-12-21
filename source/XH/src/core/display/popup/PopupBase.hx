package core.display.popup;
import core.display.screen.ScreenBase;
import core.display.screen.ScreenView;
import flash.events.Event;
import game.tnk.Game;
import openfl.display.Sprite;
import openfl.events.MouseEvent;
import tweenx909.TweenX;

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
            this.graphics.beginFill(0, 0.3);
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
		TweenX.to(this, { alpha: 1 }, 0, 4).onFinish(transitionInComplete);
    }
    
    override public function transitionInComplete():Void {
        mouseChildren = true;
        mouseEnabled = true;
        
    }
    
    override public function transitionOut():Void {
        this.alpha = 1;
        mouseChildren = false;
        mouseEnabled = false;
		TweenX.to(this, {alpha: 0}, 0, 4).onFinish(transitionOutComplete);
    }
    
    override public function transitionOutComplete():Void
    {
        this.visible = false;
    }
}