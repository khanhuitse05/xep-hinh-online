package;


import haxe.Timer;
import haxe.Unserializer;
import lime.app.Preloader;
import lime.audio.openal.AL;
import lime.audio.AudioBuffer;
import lime.graphics.Image;
import lime.utils.ByteArray;
import lime.utils.UInt8Array;
import lime.Assets;

#if sys
import sys.FileSystem;
#end

#if flash
import flash.display.Bitmap;
import flash.display.BitmapData;
import flash.display.Loader;
import flash.events.Event;
import flash.media.Sound;
import flash.net.URLLoader;
import flash.net.URLRequest;
#end


class DefaultAssetLibrary extends AssetLibrary {
	
	
	public var className (default, null) = new Map <String, Dynamic> ();
	public var path (default, null) = new Map <String, String> ();
	public var type (default, null) = new Map <String, AssetType> ();
	
	private var lastModified:Float;
	private var timer:Timer;
	
	
	public function new () {
		
		super ();
		
		#if flash
		
		className.set ("img/fonts/arial.ttf", __ASSET__img_fonts_arial_ttf);
		type.set ("img/fonts/arial.ttf", AssetType.FONT);
		className.set ("img/fonts/arialbd.ttf", __ASSET__img_fonts_arialbd_ttf);
		type.set ("img/fonts/arialbd.ttf", AssetType.FONT);
		className.set ("img/gfx/animloading.png", __ASSET__img_gfx_animloading_png);
		type.set ("img/gfx/animloading.png", AssetType.IMAGE);
		className.set ("img/gfx/Battles.png", __ASSET__img_gfx_battles_png);
		type.set ("img/gfx/Battles.png", AssetType.IMAGE);
		className.set ("img/gfx/BattlesBackground.png", __ASSET__img_gfx_battlesbackground_png);
		type.set ("img/gfx/BattlesBackground.png", AssetType.IMAGE);
		className.set ("img/gfx/bghome.png", __ASSET__img_gfx_bghome_png);
		type.set ("img/gfx/bghome.png", AssetType.IMAGE);
		className.set ("img/gfx/btn.png", __ASSET__img_gfx_btn_png);
		type.set ("img/gfx/btn.png", AssetType.IMAGE);
		className.set ("img/gfx/btnback.png", __ASSET__img_gfx_btnback_png);
		type.set ("img/gfx/btnback.png", AssetType.IMAGE);
		className.set ("img/gfx/game/board001.png", __ASSET__img_gfx_game_board001_png);
		type.set ("img/gfx/game/board001.png", AssetType.IMAGE);
		className.set ("img/gfx/game/board002.png", __ASSET__img_gfx_game_board002_png);
		type.set ("img/gfx/game/board002.png", AssetType.IMAGE);
		className.set ("img/gfx/game/board003.png", __ASSET__img_gfx_game_board003_png);
		type.set ("img/gfx/game/board003.png", AssetType.IMAGE);
		className.set ("img/gfx/Mission.png", __ASSET__img_gfx_mission_png);
		type.set ("img/gfx/Mission.png", AssetType.IMAGE);
		className.set ("img/gfx/MissionBackground.png", __ASSET__img_gfx_missionbackground_png);
		type.set ("img/gfx/MissionBackground.png", AssetType.IMAGE);
		className.set ("img/gfx/Single player.png", __ASSET__img_gfx_single_player_png);
		type.set ("img/gfx/Single player.png", AssetType.IMAGE);
		className.set ("img/gfx/SinglePlayer background.png", __ASSET__img_gfx_singleplayer_background_png);
		type.set ("img/gfx/SinglePlayer background.png", AssetType.IMAGE);
		className.set ("img/gfx/With friend.png", __ASSET__img_gfx_with_friend_png);
		type.set ("img/gfx/With friend.png", AssetType.IMAGE);
		className.set ("img/gfx/WithfriendBackground.png", __ASSET__img_gfx_withfriendbackground_png);
		type.set ("img/gfx/WithfriendBackground.png", AssetType.IMAGE);
		
		
		#elseif html5
		
		var id;
		id = "img/fonts/arial.ttf";
		className.set (id, __ASSET__img_fonts_arial_ttf);
		
		type.set (id, AssetType.FONT);
		id = "img/fonts/arialbd.ttf";
		className.set (id, __ASSET__img_fonts_arialbd_ttf);
		
		type.set (id, AssetType.FONT);
		id = "img/gfx/animloading.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/gfx/Battles.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/gfx/BattlesBackground.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/gfx/bghome.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/gfx/btn.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/gfx/btnback.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/gfx/game/board001.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/gfx/game/board002.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/gfx/game/board003.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/gfx/Mission.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/gfx/MissionBackground.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/gfx/Single player.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/gfx/SinglePlayer background.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/gfx/With friend.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		id = "img/gfx/WithfriendBackground.png";
		path.set (id, id);
		
		type.set (id, AssetType.IMAGE);
		
		
		#else
		
		#if (windows || mac || linux)
		
		/*var useManifest = false;
		
		className.set ("img/fonts/arial.ttf", __ASSET__img_fonts_arial_ttf);
		type.set ("img/fonts/arial.ttf", AssetType.FONT);
		
		className.set ("img/fonts/arialbd.ttf", __ASSET__img_fonts_arialbd_ttf);
		type.set ("img/fonts/arialbd.ttf", AssetType.FONT);
		
		className.set ("img/gfx/animloading.png", __ASSET__img_gfx_animloading_png);
		type.set ("img/gfx/animloading.png", AssetType.IMAGE);
		
		className.set ("img/gfx/Battles.png", __ASSET__img_gfx_battles_png);
		type.set ("img/gfx/Battles.png", AssetType.IMAGE);
		
		className.set ("img/gfx/BattlesBackground.png", __ASSET__img_gfx_battlesbackground_png);
		type.set ("img/gfx/BattlesBackground.png", AssetType.IMAGE);
		
		className.set ("img/gfx/bghome.png", __ASSET__img_gfx_bghome_png);
		type.set ("img/gfx/bghome.png", AssetType.IMAGE);
		
		className.set ("img/gfx/btn.png", __ASSET__img_gfx_btn_png);
		type.set ("img/gfx/btn.png", AssetType.IMAGE);
		
		className.set ("img/gfx/btnback.png", __ASSET__img_gfx_btnback_png);
		type.set ("img/gfx/btnback.png", AssetType.IMAGE);
		
		className.set ("img/gfx/game/board001.png", __ASSET__img_gfx_game_board001_png);
		type.set ("img/gfx/game/board001.png", AssetType.IMAGE);
		
		className.set ("img/gfx/game/board002.png", __ASSET__img_gfx_game_board002_png);
		type.set ("img/gfx/game/board002.png", AssetType.IMAGE);
		
		className.set ("img/gfx/game/board003.png", __ASSET__img_gfx_game_board003_png);
		type.set ("img/gfx/game/board003.png", AssetType.IMAGE);
		
		className.set ("img/gfx/Mission.png", __ASSET__img_gfx_mission_png);
		type.set ("img/gfx/Mission.png", AssetType.IMAGE);
		
		className.set ("img/gfx/MissionBackground.png", __ASSET__img_gfx_missionbackground_png);
		type.set ("img/gfx/MissionBackground.png", AssetType.IMAGE);
		
		className.set ("img/gfx/Single player.png", __ASSET__img_gfx_single_player_png);
		type.set ("img/gfx/Single player.png", AssetType.IMAGE);
		
		className.set ("img/gfx/SinglePlayer background.png", __ASSET__img_gfx_singleplayer_background_png);
		type.set ("img/gfx/SinglePlayer background.png", AssetType.IMAGE);
		
		className.set ("img/gfx/With friend.png", __ASSET__img_gfx_with_friend_png);
		type.set ("img/gfx/With friend.png", AssetType.IMAGE);
		
		className.set ("img/gfx/WithfriendBackground.png", __ASSET__img_gfx_withfriendbackground_png);
		type.set ("img/gfx/WithfriendBackground.png", AssetType.IMAGE);
		*/
		var useManifest = true;
		
		if (useManifest) {
			
			loadManifest ();
			
			if (Sys.args ().indexOf ("-livereload") > -1) {
				
				var path = FileSystem.fullPath ("manifest");
				lastModified = FileSystem.stat (path).mtime.getTime ();
				
				timer = new Timer (2000);
				timer.run = function () {
					
					var modified = FileSystem.stat (path).mtime.getTime ();
					
					if (modified > lastModified) {
						
						lastModified = modified;
						loadManifest ();
						
						if (eventCallback != null) {
							
							eventCallback (this, "change");
							
						}
						
					}
					
				}
				
			}
			
		}
		
		#else
		
		loadManifest ();
		
		#end
		#end
		
	}
	
	
	public override function exists (id:String, type:String):Bool {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		var assetType = this.type.get (id);
		
		if (assetType != null) {
			
			if (assetType == requestedType || ((requestedType == SOUND || requestedType == MUSIC) && (assetType == MUSIC || assetType == SOUND))) {
				
				return true;
				
			}
			
			#if flash
			
			if ((assetType == BINARY || assetType == TEXT) && requestedType == BINARY) {
				
				return true;
				
			} else if (path.exists (id)) {
				
				return true;
				
			}
			
			#else
			
			if (requestedType == BINARY || requestedType == null) {
				
				return true;
				
			}
			
			#end
			
		}
		
		return false;
		
	}
	
	
	public override function getAudioBuffer (id:String):AudioBuffer {
		
		#if flash
		
		var buffer = new AudioBuffer ();
		buffer.src = cast (Type.createInstance (className.get (id), []), Sound);
		return buffer;
		
		#elseif js
		
		return null;
		//return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		return AudioBuffer.fromFile (path.get (id));
		//if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Sound);
		//else return new Sound (new URLRequest (path.get (id)), null, type.get (id) == MUSIC);
		
		#end
		
	}
	
	
	public override function getBytes (id:String):ByteArray {
		
		#if flash
		
		return cast (Type.createInstance (className.get (id), []), ByteArray);
		
		#elseif js
		
		var bytes:ByteArray = null;
		var data = Preloader.loaders.get (path.get (id)).data;
		
		if (Std.is (data, String)) {
			
			bytes = new ByteArray ();
			bytes.writeUTFBytes (data);
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}
		
		if (bytes != null) {
			
			bytes.position = 0;
			return bytes;
			
		} else {
			
			return null;
		}
		
		#else
		
		//return null;
		//if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), ByteArray);
		//else 
		return ByteArray.readFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getFont (id:String):Dynamic /*Font*/ {
		
		// TODO: Complete Lime Font API
		
		#if openfl
		#if (flash || js)
		
		return cast (Type.createInstance (className.get (id), []), openfl.text.Font);
		
		#else
		
		if (className.exists (id)) {
			
			var fontClass = className.get (id);
			openfl.text.Font.registerFont (fontClass);
			return cast (Type.createInstance (fontClass, []), openfl.text.Font);
			
		} else {
			
			return new openfl.text.Font (path.get (id));
			
		}
		
		#end
		#end
		
		return null;
		
	}
	
	
	public override function getImage (id:String):Image {
		
		#if flash
		
		return Image.fromBitmapData (cast (Type.createInstance (className.get (id), []), BitmapData));
		
		#elseif js
		
		return Image.fromImageElement (Preloader.images.get (path.get (id)));
		
		#else
		
		return Image.fromFile (path.get (id));
		
		#end
		
	}
	
	
	/*public override function getMusic (id:String):Dynamic {
		
		#if flash
		
		return cast (Type.createInstance (className.get (id), []), Sound);
		
		#elseif openfl_html5
		
		//var sound = new Sound ();
		//sound.__buffer = true;
		//sound.load (new URLRequest (path.get (id)));
		//return sound;
		return null;
		
		#elseif js
		
		return null;
		//return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		return null;
		//if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Sound);
		//else return new Sound (new URLRequest (path.get (id)), null, true);
		
		#end
		
	}*/
	
	
	public override function getPath (id:String):String {
		
		//#if ios
		
		//return SystemPath.applicationDirectory + "/assets/" + path.get (id);
		
		//#else
		
		return path.get (id);
		
		//#end
		
	}
	
	
	public override function getText (id:String):String {
		
		#if js
		
		var bytes:ByteArray = null;
		var data = Preloader.loaders.get (path.get (id)).data;
		
		if (Std.is (data, String)) {
			
			return cast data;
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}
		
		if (bytes != null) {
			
			bytes.position = 0;
			return bytes.readUTFBytes (bytes.length);
			
		} else {
			
			return null;
		}
		
		#else
		
		var bytes = getBytes (id);
		
		if (bytes == null) {
			
			return null;
			
		} else {
			
			return bytes.readUTFBytes (bytes.length);
			
		}
		
		#end
		
	}
	
	
	public override function isLocal (id:String, type:String):Bool {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		
		#if flash
		
		if (requestedType != AssetType.MUSIC && requestedType != AssetType.SOUND) {
			
			return className.exists (id);
			
		}
		
		#end
		
		return true;
		
	}
	
	
	public override function list (type:String):Array<String> {
		
		var requestedType = type != null ? cast (type, AssetType) : null;
		var items = [];
		
		for (id in this.type.keys ()) {
			
			if (requestedType == null || exists (id, type)) {
				
				items.push (id);
				
			}
			
		}
		
		return items;
		
	}
	
	
	public override function loadAudioBuffer (id:String, handler:AudioBuffer -> Void):Void {
		
		#if (flash || js)
		
		//if (path.exists (id)) {
			
		//	var loader = new Loader ();
		//	loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event) {
				
		//		handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
		//	});
		//	loader.load (new URLRequest (path.get (id)));
			
		//} else {
			
			handler (getAudioBuffer (id));
			
		//}
		
		#else
		
		handler (getAudioBuffer (id));
		
		#end
		
	}
	
	
	public override function loadBytes (id:String, handler:ByteArray -> Void):Void {
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bytes = new ByteArray ();
				bytes.writeUTFBytes (event.currentTarget.data);
				bytes.position = 0;
				
				handler (bytes);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getBytes (id));
			
		}
		
		#else
		
		handler (getBytes (id));
		
		#end
		
	}
	
	
	public override function loadImage (id:String, handler:Image -> Void):Void {
		
		#if flash
		
		if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bitmapData = cast (event.currentTarget.content, Bitmap).bitmapData;
				handler (Image.fromBitmapData (bitmapData));
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getImage (id));
			
		}
		
		#else
		
		handler (getImage (id));
		
		#end
		
	}
	
	
	#if (!flash && !html5)
	private function loadManifest ():Void {
		
		try {
			
			#if blackberry
			var bytes = ByteArray.readFile ("app/native/manifest");
			#elseif tizen
			var bytes = ByteArray.readFile ("../res/manifest");
			#elseif emscripten
			var bytes = ByteArray.readFile ("assets/manifest");
			#else
			var bytes = ByteArray.readFile ("manifest");
			#end
			
			if (bytes != null) {
				
				bytes.position = 0;
				
				if (bytes.length > 0) {
					
					var data = bytes.readUTFBytes (bytes.length);
					
					if (data != null && data.length > 0) {
						
						var manifest:Array<Dynamic> = Unserializer.run (data);
						
						for (asset in manifest) {
							
							if (!className.exists (asset.id)) {
								
								path.set (asset.id, asset.path);
								type.set (asset.id, cast (asset.type, AssetType));
								
							}
							
						}
						
					}
					
				}
				
			} else {
				
				trace ("Warning: Could not load asset manifest (bytes was null)");
				
			}
		
		} catch (e:Dynamic) {
			
			trace ('Warning: Could not load asset manifest (${e})');
			
		}
		
	}
	#end
	
	
	/*public override function loadMusic (id:String, handler:Dynamic -> Void):Void {
		
		#if (flash || js)
		
		//if (path.exists (id)) {
			
		//	var loader = new Loader ();
		//	loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event) {
				
		//		handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
		//	});
		//	loader.load (new URLRequest (path.get (id)));
			
		//} else {
			
			handler (getMusic (id));
			
		//}
		
		#else
		
		handler (getMusic (id));
		
		#end
		
	}*/
	
	
	public override function loadText (id:String, handler:String -> Void):Void {
		
		//#if js
		
		/*if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				handler (event.currentTarget.data);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getText (id));
			
		}*/
		
		//#else
		
		var callback = function (bytes:ByteArray):Void {
			
			if (bytes == null) {
				
				handler (null);
				
			} else {
				
				handler (bytes.readUTFBytes (bytes.length));
				
			}
			
		}
		
		loadBytes (id, callback);
		
		//#end
		
	}
	
	
}


#if !display
#if flash

@:keep @:bind class __ASSET__img_fonts_arial_ttf extends flash.text.Font { }
@:keep @:bind class __ASSET__img_fonts_arialbd_ttf extends flash.text.Font { }
@:keep @:bind class __ASSET__img_gfx_animloading_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind class __ASSET__img_gfx_battles_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind class __ASSET__img_gfx_battlesbackground_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind class __ASSET__img_gfx_bghome_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind class __ASSET__img_gfx_btn_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind class __ASSET__img_gfx_btnback_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind class __ASSET__img_gfx_game_board001_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind class __ASSET__img_gfx_game_board002_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind class __ASSET__img_gfx_game_board003_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind class __ASSET__img_gfx_mission_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind class __ASSET__img_gfx_missionbackground_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind class __ASSET__img_gfx_single_player_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind class __ASSET__img_gfx_singleplayer_background_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind class __ASSET__img_gfx_with_friend_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind class __ASSET__img_gfx_withfriendbackground_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }


#elseif html5

#if openfl
@:keep class __ASSET__img_fonts_arial_ttf extends openfl.text.Font { public function new () { super (); fontName = "img/fonts/arial.ttf"; } } 
@:keep class __ASSET__img_fonts_arialbd_ttf extends openfl.text.Font { public function new () { super (); fontName = "img/fonts/arialbd.ttf"; } } 
















#end

#elseif (windows || mac || linux)


//@:font("assets/img/fonts/arial.ttf") class __ASSET__img_fonts_arial_ttf extends openfl.text.Font {}
//@:font("assets/img/fonts/arialbd.ttf") class __ASSET__img_fonts_arialbd_ttf extends openfl.text.Font {}
//@:bitmap("assets/img/gfx/animloading.png") class __ASSET__img_gfx_animloading_png extends openfl.display.BitmapData {}
//@:bitmap("assets/img/gfx/Battles.png") class __ASSET__img_gfx_battles_png extends openfl.display.BitmapData {}
//@:bitmap("assets/img/gfx/BattlesBackground.png") class __ASSET__img_gfx_battlesbackground_png extends openfl.display.BitmapData {}
//@:bitmap("assets/img/gfx/bghome.png") class __ASSET__img_gfx_bghome_png extends openfl.display.BitmapData {}
//@:bitmap("assets/img/gfx/btn.png") class __ASSET__img_gfx_btn_png extends openfl.display.BitmapData {}
//@:bitmap("assets/img/gfx/btnback.png") class __ASSET__img_gfx_btnback_png extends openfl.display.BitmapData {}
//@:bitmap("assets/img/gfx/game/board001.png") class __ASSET__img_gfx_game_board001_png extends openfl.display.BitmapData {}
//@:bitmap("assets/img/gfx/game/board002.png") class __ASSET__img_gfx_game_board002_png extends openfl.display.BitmapData {}
//@:bitmap("assets/img/gfx/game/board003.png") class __ASSET__img_gfx_game_board003_png extends openfl.display.BitmapData {}
//@:bitmap("assets/img/gfx/Mission.png") class __ASSET__img_gfx_mission_png extends openfl.display.BitmapData {}
//@:bitmap("assets/img/gfx/MissionBackground.png") class __ASSET__img_gfx_missionbackground_png extends openfl.display.BitmapData {}
//@:bitmap("assets/img/gfx/Single player.png") class __ASSET__img_gfx_single_player_png extends openfl.display.BitmapData {}
//@:bitmap("assets/img/gfx/SinglePlayer background.png") class __ASSET__img_gfx_singleplayer_background_png extends openfl.display.BitmapData {}
//@:bitmap("assets/img/gfx/With friend.png") class __ASSET__img_gfx_with_friend_png extends openfl.display.BitmapData {}
//@:bitmap("assets/img/gfx/WithfriendBackground.png") class __ASSET__img_gfx_withfriendbackground_png extends openfl.display.BitmapData {}
//


#end
#end
