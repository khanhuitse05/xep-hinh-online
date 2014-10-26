import lime.Assets;
#if !macro


class ApplicationMain {
	
	
	public static var config:lime.app.Config;
	public static var preloader:openfl.display.Preloader;
	
	private static var app:lime.app.Application;
	
	
	public static function create ():Void {
		
		app = new openfl.display.Application ();
		app.create (config);
		
		var display = new NMEPreloader ();
		
		preloader = new openfl.display.Preloader (display);
		preloader.onComplete = start;
		preloader.create (config);
		
		#if js
		var urls = [];
		var types = [];
		
		
		urls.push ("img/fonts/arial.ttf");
		types.push (AssetType.FONT);
		
		
		urls.push ("img/fonts/arialbd.ttf");
		types.push (AssetType.FONT);
		
		
		urls.push ("img/gfx/animloading.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("img/gfx/Battles.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("img/gfx/BattlesBackground.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("img/gfx/bghome.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("img/gfx/btn.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("img/gfx/btnback.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("img/gfx/game/board001.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("img/gfx/game/board002.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("img/gfx/game/board003.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("img/gfx/Mission.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("img/gfx/MissionBackground.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("img/gfx/Single player.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("img/gfx/SinglePlayer background.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("img/gfx/With friend.png");
		types.push (AssetType.IMAGE);
		
		
		urls.push ("img/gfx/WithfriendBackground.png");
		types.push (AssetType.IMAGE);
		
		
		
		preloader.load (urls, types);
		#end
		
		var result = app.exec ();
		
		#if sys
		Sys.exit (result);
		#end
		
	}
	
	
	public static function main () {
		
		config = {
			
			antialiasing: Std.int (0),
			background: Std.int (16777200),
			borderless: true,
			depthBuffer: false,
			fps: Std.int (60),
			fullscreen: true,
			height: Std.int (960),
			orientation: "portrait",
			resizable: true,
			stencilBuffer: false,
			title: "XH",
			vsync: false,
			width: Std.int (540),
			
		}
		
		#if js
		#if munit
		flash.Lib.embed (null, 540, 960, "FFFFF0");
		#end
		#else
		create ();
		#end
		
	}
	
	
	public static function start ():Void {
		
		openfl.Lib.current.stage.align = openfl.display.StageAlign.TOP_LEFT;
		openfl.Lib.current.stage.scaleMode = openfl.display.StageScaleMode.NO_SCALE;
		
		var hasMain = false;
		
		for (methodName in Type.getClassFields (Main)) {
			
			if (methodName == "main") {
				
				hasMain = true;
				break;
				
			}
			
		}
		
		if (hasMain) {
			
			Reflect.callMethod (Main, Reflect.field (Main, "main"), []);
			
		} else {
			
			var instance:DocumentClass = Type.createInstance (DocumentClass, []);
			
			if (Std.is (instance, openfl.display.DisplayObject)) {
				
				openfl.Lib.current.addChild (cast instance);
				
			}
			
		}
		
		openfl.Lib.current.stage.dispatchEvent (new openfl.events.Event (openfl.events.Event.RESIZE, false, false));
		
	}
	
	
	#if neko
	@:noCompletion public static function __init__ () {
		
		var loader = new neko.vm.Loader (untyped $loader);
		loader.addPath (haxe.io.Path.directory (Sys.executablePath ()));
		loader.addPath ("./");
		loader.addPath ("@executable_path/");
		
	}
	#end
	
	
}


#if flash @:build(DocumentClass.buildFlash())
#else @:build(DocumentClass.build()) #end
@:keep class DocumentClass extends Main {}


#else


import haxe.macro.Context;
import haxe.macro.Expr;


class DocumentClass {
	
	
	macro public static function build ():Array<Field> {
		
		var classType = Context.getLocalClass ().get ();
		var searchTypes = classType;
		
		while (searchTypes.superClass != null) {
			
			if (searchTypes.pack.length == 2 && searchTypes.pack[1] == "display" && searchTypes.name == "DisplayObject") {
				
				var fields = Context.getBuildFields ();
				
				var method = macro {
					
					this.stage = flash.Lib.current.stage;
					super ();
					dispatchEvent (new openfl.events.Event (openfl.events.Event.ADDED_TO_STAGE, false, false));
					
				}
				
				fields.push ({ name: "new", access: [ APublic ], kind: FFun({ args: [], expr: method, params: [], ret: macro :Void }), pos: Context.currentPos () });
				
				return fields;
				
			}
			
			searchTypes = searchTypes.superClass.t.get ();
			
		}
		
		return null;
		
	}
	
	
	macro public static function buildFlash ():Array<Field> {
		
		var classType = Context.getLocalClass ().get ();
		var searchTypes = classType;
		
		while (searchTypes.superClass != null) {
			
			if (searchTypes.pack.length == 2 && searchTypes.pack[1] == "display" && searchTypes.name == "DisplayObject") {
				
				var fields = Context.getBuildFields ();
				var method = macro {
					return flash.Lib.current.stage;
				}
				
				fields.push ({ name: "get_stage", access: [ APrivate ], meta: [ { name: ":getter", params: [ macro stage ], pos: Context.currentPos() } ], kind: FFun({ args: [], expr: method, params: [], ret: macro :flash.display.Stage }), pos: Context.currentPos() });
				return fields;
				
			}
			
			searchTypes = searchTypes.superClass.t.get ();
			
		}
		
		return null;
		
	}
	
	
}


#end