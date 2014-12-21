package popup;
import core.display.popup.PopupBase;
import game.tnk.Game;
import openfl.display.Sprite;
import openfl.events.MouseEvent;

/**
 * ...
 * @author KhanhTN
 */
class BasePopup extends PopupBase
{
	private var mBg:Sprite;
	public var mWidth:Int;
	public var mHeight:Int;
	public var bTop:Sprite;
	public var bBottom:Sprite;
	public var bLeft:Sprite;
	public var bRight:Sprite;
	
	public function new(_width:Int, _height:Int) 
	{
		super(true);		
		mWidth = _width;
		mHeight = _height;
		// bg
		mBg = new Sprite();
		this.addChild(mBg);
		mBg.x = Game.GAME_WIDTH / 2;
		mBg.y = Game.GAME_HEIGHT / 2;
		
		bTop = new 
	}
	public function init() 
    {
        
    }

    override private function onHide(e:Event):Void 
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