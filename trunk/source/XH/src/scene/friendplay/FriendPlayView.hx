package scene.friendplay;
import core.display.ex.Lable;
import core.display.scene.*;
import core.display.screen.ScreenID;
import core.resource.Defines;
import flash.Vector;
import game.tnk.Game;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.geom.Point;
import tweenx909.TweenX;

/**
 * ...
 * @author KhanhTN
 */
class FriendPlayView extends SceneView
{
	private static var WIDTH = 450;
	private static var HEIGHT = 700;
	
	private static var POS_X = 0;
	private static var POS_Y = 5;
	
	private static var MAX = 4;
	
	private var listLeft:Array<Sprite>;
	private var listRight:Array<Sprite>;
	private var listMaskLeft:Array<Sprite>;
	private var listMaskRight:Array<Sprite>;
	private var page:Sprite;
	
	private var value:Int;
	private var index:Int;
	private var camera:Int;
	private var bg:Sprite;
	private var cover:Sprite;
	
	private var A:Point;
	private var B:Point;
	private var C:Point;
	private var D:Point;
	private var E:Point;
	private var F:Point;
	
	private var lA:Lable;
	private var lB:Lable;
	private var lC:Lable;
	private var lD:Lable;
	private var lE:Lable;
	private var lF:Lable;
	
	public function new() 
	{
		super();
		this.addEventListener(Event.ENTER_FRAME, gameLoop);
		init();
		onBegin();
	}
	private function onBegin():Void
	{
		TweenX.to(this, { value: WIDTH }, 3).onFinish(onNext);
	}
	private function onNext():Void
	{
		value = 0;
		index++;
		if (index == 5) 
		{
			index = 0;
		}
		TweenX.to(this, { value: WIDTH }, 3).onFinish(onNext);
	}
	private function init():Void 
	{
		index = 0;
		value = 0;
		camera = 0;
		
		A = new Point();
		B = new Point();
		C = new Point();
		D = new Point();
		E = new Point();
		F = new Point();
		// fill background
		listLeft = new Array<Sprite>();
		listRight = new Array<Sprite>();
		listMaskLeft = new Array<Sprite>();
		listMaskRight = new Array<Sprite>();
				
		listLeft[0] = Game.resource.getSprite(Defines.GFX_HOME_BG);
		listLeft[1] = Game.resource.getSprite(Defines.GFX_P_SIGLE_BG);
		listLeft[2] = Game.resource.getSprite(Defines.GFX_BATTLES_BG);
		listLeft[3] = Game.resource.getSprite(Defines.GFX_P_FRIEND_BG);
		listLeft[4] = Game.resource.getSprite(Defines.GFX_MISSION_BG);
		
		var _temp0 = Game.resource.getSprite(Defines.GFX_HOME_BG);
		_temp0.x = _temp0.width / 2;
		_temp0.y = _temp0.height / 2;
		listRight[0] = new Sprite();
		listRight[0].addChild(_temp0);
		var _temp1 = Game.resource.getSprite(Defines.GFX_P_SIGLE_BG);
		_temp1.x = _temp0.width / 2;
		_temp1.y = _temp0.height / 2;
		listRight[1] = new Sprite();
		listRight[1].addChild(_temp0);
		var _temp2 = Game.resource.getSprite(Defines.GFX_BATTLES_BG);
		_temp2.x = _temp0.width / 2;
		_temp2.y = _temp0.height / 2;
		listRight[2] = new Sprite();
		listRight[2].addChild(_temp0);
		var _temp3 = Game.resource.getSprite(Defines.GFX_P_FRIEND_BG);
		_temp3.x = _temp0.width / 2;
		_temp3.y = _temp0.height / 2;
		listRight[3] = new Sprite();
		listRight[3].addChild(_temp0);
		var _temp4 = Game.resource.getSprite(Defines.GFX_MISSION_BG);
		_temp4.x = _temp0.width / 2;
		_temp4.y = _temp0.height / 2;
		listRight[4] = new Sprite();
		listRight[4].addChild(_temp0);
		
		
		bg = new Sprite();
		bg.x = POS_X;
		bg.y = POS_Y;
		this.addChild(bg);
		for (i in 0...listLeft.length) 
		{
			bg.addChild(listLeft[MAX - i]);
			
			listMaskLeft[MAX - i] = new Sprite();
			listMaskLeft[MAX - i].graphics.beginFill(0, 0.01);
			listMaskLeft[MAX - i].graphics.drawRect(WIDTH, 0, WIDTH, HEIGHT);
			listMaskLeft[MAX - i].graphics.endFill();
			listMaskLeft[MAX - i].cacheAsBitmap = true;
			bg.addChild(listMaskLeft[MAX - i]);
			listLeft[MAX - i].mask = listMaskLeft[MAX - i];
			
			listLeft[MAX - i].x = WIDTH;
			listLeft[MAX - i].y = 0;
			
			listMaskRight[i] = new Sprite();
			listMaskRight[i].cacheAsBitmap = true;
			bg.addChild(listMaskRight[i]);
			listRight[i].mask = listMaskRight[i];
		}
		
		page = new Sprite();
		page.cacheAsBitmap = true;
		page.graphics.beginFill(0, 0.01);
		page.graphics.drawRect(WIDTH, 0, WIDTH, HEIGHT);
		page.graphics.endFill();
		cover = Game.resource.getSprite(Defines.GFX_BATTLES_BG);
		cover.x = WIDTH;
		cover.mask = page;
		bg.addChild(page);
		bg.addChild(cover);
		
		lA = new Lable();
		lA.setSysText("A");
		this.addChild(lA);
		lB = new Lable();
		lB.setSysText("B");
		this.addChild(lB);
		lC = new Lable();
		lC.setSysText("C");
		this.addChild(lC);
		lD = new Lable();
		lD.setSysText("D");
		this.addChild(lD);
		lE = new Lable();
		lE.setSysText("E");
		this.addChild(lE);
		lF = new Lable();
		lF.setSysText("F");
		this.addChild(lF);
	}	
	
	private function gameLoop(e:Event):Void 
	{
		B.x = WIDTH;
		B.y = HEIGHT;
		C.x = WIDTH;
		C.y = 0;

		A.x = WIDTH - value;
		A.y = HEIGHT;
		var _alpha;
		if (value < WIDTH / 2) 
		{
			D.x = WIDTH;
			D.y = HEIGHT - HEIGHT * value / (WIDTH/2);			
			E.x = D.x;
			E.y = D.y;
						
			_alpha = Math.atan( value / (HEIGHT - D.y));
			F.x = WIDTH - (Math.cos(_alpha)*value + value);
			F.y = HEIGHT - Math.sin(_alpha) * value;
		}else 
		{
			D.x = WIDTH - (value - WIDTH / 2) * 2;
			D.y = 0;			
			var _odd = HEIGHT / (1 - (WIDTH - D.x) / value);
			_alpha = Math.atan( value / (_odd));
			F.x = WIDTH - (Math.cos(_alpha)*value + value);
			F.y = HEIGHT - Math.sin(_alpha) * value;
			
			E.x = WIDTH - (Math.cos(_alpha)*(WIDTH - D.x) + (WIDTH - D.x));
			E.y = 0 - Math.sin(_alpha) * (WIDTH - D.x);
		}
		
		// right
		listRight[index].x = F.x;
		listRight[index].y = F.y;
		listRight[index].rotation  = _alpha;
		
		// draw
		var vertices:Vector<Float> = new Vector<Float> ();
		var indicesMask:Vector<Int> = new Vector<Int> ();
		var indicesPage:Vector<Int> = new Vector<Int> ();
		// goc A0
        vertices[0] = A.x + WIDTH;
        vertices[1] = A.y;
		// goc B1
        vertices[2] = B.x + WIDTH;
		vertices[3] = B.y;
		// goc C2
		vertices[4] = C.x + WIDTH;
        vertices[5] = C.y; 
		// goc D3
		vertices[6] = D.x + WIDTH;
		vertices[7] = D.y;
		// goc E4
		vertices[8] = E.x + WIDTH;
        vertices[9] = E.y; 
		// goc F5
		vertices[10] = F.x + WIDTH;
		vertices[11] = F.y;
		// goc 6
		vertices[12] = 0 + WIDTH;
        vertices[13] = 0; 
		// goc 7
		vertices[14] = 0 + WIDTH;
		vertices[15] = HEIGHT;
		
		
		
		// tamgiac 
        indicesMask[0] = 6;
        indicesMask[1] = 3;
        indicesMask[2] = 2;
		// tamgiac 2
		indicesMask[3] = 6;
        indicesMask[4] = 7;
		indicesMask[5] = 3;
		// tamgiac3 
        indicesMask[6] = 7;
        indicesMask[7] = 3;
        indicesMask[8] = 0;
		
		// tamgiac 
        indicesPage[0] = 0;
        indicesPage[1] = 3;
        indicesPage[2] = 4;
		// tamgiac 2
		indicesPage[3] = 0;
        indicesPage[4] = 4;
		indicesPage[5] = 5;
		
		listMaskRight[index].graphics.clear();
		listMaskRight[index].graphics.beginFill(0xfffff0, 1);
		listMaskRight[index].graphics.drawTriangles(vertices, indicesPage, null);
		listMaskRight[index].graphics.endFill();		
		
		listMaskLeft[index].graphics.clear();
		listMaskLeft[index].graphics.beginFill(0, 1);
		listMaskLeft[index].graphics.drawTriangles(vertices, indicesMask, null);
		listMaskLeft[index].graphics.endFill();
		
		lA.setPosition(A.x, A.y);
		lB.setPosition(B.x, B.y);
		lC.setPosition(C.x, C.y);
		lD.setPosition(D.x, D.y);
		lE.setPosition(E.x, E.y);
		lF.setPosition(F.x, F.y);
		
	}
	/**
	 * 
	 * @param	e
	 */
	private function onBack(e:Event):Void 
	{		
		Game.displayManager.toScreen(ScreenID.HOME);
	}
	
	
}