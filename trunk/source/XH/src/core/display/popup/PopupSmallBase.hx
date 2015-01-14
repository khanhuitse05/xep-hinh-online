package core.display.popup;
import core.display.ex.Lable;
import core.display.ex.SimpleButton;
import core.display.scene.SceneView;
import core.resource.Defines;
import game.gameobject.popupobject.PBorder;
import game.gameobject.popupobject.PBottom;
import game.gameobject.popupobject.PLeft;
import game.gameobject.popupobject.PRight;
import game.gameobject.popupobject.PTop;
import game.tnk.Game;
import motion.Actuate;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.events.MouseEvent;
import tweenx909.TweenX;

/**
 * ...
 * @author KhanhTN
 */
class PopupSmallBase extends PopupBase
{
	private var title:Sprite;
	private var message:Lable;
	private var btnClose:SimpleButton;
    public function new(showDarkBg : Bool = true) 
    {
        super();
		
		pane = Game.resource.getSprite(Defines.GFX_POPUP_S_PANE);
		this.addChild(pane);
		pane.x = Game.GAME_WIDTH / 2 - pane.width / 2;
		pane.y = Game.GAME_HEIGHT / 2 - pane.height / 2;
		
		btnClose = new SimpleButton();
		btnClose.setDisplay(Game.resource.getSprite(Defines.GFX_POPUP_S_CLOSE));
		btnClose.setPosition(pane.width - 50 + pane.x, 50 + pane.y);
		btnClose.setMouseClick(onClose);
		this.addChild(btnClose);
    }

    override private function onHide(e:Event):Void 
    {
        //transitionOut();
    }
	private function onClose(e:Event):Void 
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
        Actuate.tween(this, 0.4, {alpha: 0} ).onComplete (transitionOutComplete);
    }
    
    override public function transitionOutComplete():Void
    {
        this.visible = false;
        if (parent != null)
        {
            if(this.parent.contains(this)) this.parent.removeChild(this);
        }
    }
	
}