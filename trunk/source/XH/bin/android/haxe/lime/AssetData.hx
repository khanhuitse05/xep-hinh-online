package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("img/animloading.png", "img/animloading.png");
			type.set ("img/animloading.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/Battles.png", "img/Battles.png");
			type.set ("img/Battles.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/BattlesBackground.png", "img/BattlesBackground.png");
			type.set ("img/BattlesBackground.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/bghome.png", "img/bghome.png");
			type.set ("img/bghome.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/btn.png", "img/btn.png");
			type.set ("img/btn.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/btnback.png", "img/btnback.png");
			type.set ("img/btnback.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/fonts/arial.ttf", "img/fonts/arial.ttf");
			type.set ("img/fonts/arial.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("img/fonts/arialbd.ttf", "img/fonts/arialbd.ttf");
			type.set ("img/fonts/arialbd.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("img/Mission.png", "img/Mission.png");
			type.set ("img/Mission.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/MissionBackground.png", "img/MissionBackground.png");
			type.set ("img/MissionBackground.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/Single player.png", "img/Single player.png");
			type.set ("img/Single player.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/SinglePlayer background.png", "img/SinglePlayer background.png");
			type.set ("img/SinglePlayer background.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/With friend.png", "img/With friend.png");
			type.set ("img/With friend.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/WithfriendBackground.png", "img/WithfriendBackground.png");
			type.set ("img/WithfriendBackground.png", Reflect.field (AssetType, "image".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
