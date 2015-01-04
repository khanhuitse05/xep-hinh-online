package core.display.popup;
import core.display.scene.SceneView;
import game.gameobject.popupobject.PBorder;
import game.gameobject.popupobject.PBottom;
import game.gameobject.popupobject.PLeft;
import game.gameobject.popupobject.PRight;
import game.gameobject.popupobject.PTop;
import game.tnk.Game;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.events.MouseEvent;
import tweenx909.TweenX;

/**
 * ...
 * @author KhanhTN
 */
class PopupExBase extends PopupBase
{
	public static var WIDTH = 600;
	public static var HEIGHT = 660;
	
	private static var LEFT = 0;
	private static var TOP = 1;
	private static var RIGHT = 2;
	private static var BOTTOM = 3;
	
	private var mBg:Sprite;
	private var mBack:Sprite;
	private var mBgBorder:Sprite;
	public var mWidth:Int;
	public var mHeight:Int;
	public var mListBorder:Array<PBorder>;
	
	public function new(showDarkBg : Bool = true) 
	{
		super();	
		// fix 
        this.alpha = 0;
        this.visible = false;
        this.addEventListener(MouseEvent.CLICK, onHide);
        if (showDarkBg) {
            this.graphics.beginFill(0, 0.3);
            this.graphics.drawRect(0, 0, Game.GAME_WIDTH,Game.GAME_HEIGHT);
            this.graphics.endFill();
        }
		
		mWidth = 0;
		mHeight = 0;
		// bg
		mBg = new Sprite();
		this.addChild(mBg);
		mBg.x = Game.GAME_WIDTH / 2;
		mBg.y = Game.GAME_HEIGHT / 2;
		// back
		mBack = new Sprite();
		mBg.addChild(mBack);
		//pane
		pane = new Sprite();
		mBg.addChild(pane);
		// border
		mListBorder = new Array<PBorder>();
		mListBorder[LEFT] = new PLeft();
		mListBorder[TOP] = new PTop();
		mListBorder[RIGHT] = new PRight();
		mListBorder[BOTTOM] = new PBottom();
		for (i in 0...4) 
		{
			mBg.addChild(mListBorder[i]);
		}
	}
	public function init() 
    {
        
    }

    override private function onHide(e:Event):Void 
    {
        transitionOut();
    }
	private function gameLoopBorder(e:Event):Void 
	{		
		for (i in 0...4) 
		{
			mListBorder[i].setWidth(mWidth);
			mListBorder[i].setHeight(mHeight);
		}
		mBack.graphics.clear();
		mBack.graphics.beginFill(0x313039, 0.8);
		mBack.graphics.drawRect(0 - mWidth / 2, 0 - mHeight / 2, mWidth,mHeight);
		mBack.graphics.endFill();
	}
    override public function transitionIn():Void {
        this.visible = true;
        this.alpha = 1;
        mouseChildren = false;
        mouseEnabled = false;
		TweenX.serial([
			TweenX.to(this, { mWidth: WIDTH}, 0.2),
			TweenX.to(this, { mHeight:HEIGHT }, 0.5),
		]).onFinish(transitionInComplete);
		this.addEventListener(Event.ENTER_FRAME, gameLoopBorder);
    }
    
    override public function transitionInComplete():Void {
        mouseChildren = true;
        mouseEnabled = true;
		pane.visible = true;
        init();
		this.removeEventListener(Event.ENTER_FRAME, gameLoopBorder);
    }
    
    override public function transitionOut():Void {
		pane.visible = false;
        this.alpha = 1;
        mouseChildren = false;
        mouseEnabled = false;
		this.addEventListener(Event.ENTER_FRAME, gameLoopBorder);
		TweenX.serial([
			TweenX.to(this, { mHeight:0 }, 0.3),
			TweenX.to(this, { mWidth: 0}, 0.2),
		]).onFinish(transitionOutComplete);
    }
    
    override public function transitionOutComplete():Void
    {
		this.removeEventListener(Event.ENTER_FRAME, gameLoopBorder);
        this.visible = false;
		this.parent.removeChild(this);
    }
	
}