package core.resource ;
import core.sprites.Animx;
import openfl.display.Bitmap;
import openfl.Assets;
import openfl.display.BitmapData;
import openfl.display.Sprite;

/**
 * ...
 * @author KhanhTN
 */
class ResourceManager
{
	var bBrick001:BitmapData;
	var bBrick002:BitmapData;
	var bBrick003:BitmapData;
	
	var aLoadingAnim:Animx;
	
	var sHomeBG:Sprite;
	var sSingleBG:Sprite;
	var sBattlesBG:Sprite;
	var sFriendBG:Sprite;
	var sMissionBG:Sprite;
	var sSingle_btn:Sprite;
	var sBattles_btn:Sprite;
	var sFriend_btn:Sprite;
	var sMission_btn:Sprite;
	var sBack_btn:Sprite;
	
	var sBoard001:Sprite;
	var sBoard002:Sprite;
	var sBoard003:Sprite;
	
	/**
	 * 
	 */
	public function new() 
	{
		initBitmapdata();
		initAnim();
		initSprite();
		initAudio();
	}
	/**
	 * 
	 */
	private function initBitmapdata():Void
	{
		bBrick001 = Assets.getBitmapData(ResourcePath.GFX_BRICK_001);
		bBrick002 = Assets.getBitmapData(ResourcePath.GFX_BRICK_002);
		bBrick003 = Assets.getBitmapData(ResourcePath.GFX_BRICK_003);
	}
	/**
	 * 
	 */
	private function initAnim():Void
	{
		aLoadingAnim = new Animx(22, 64, 32, 4);
		aLoadingAnim.Init(ResourcePath.GFX_LOADING_ANIM);
	}
	/**
	 * 
	 */
	private function initSprite():Void
	{
		sHomeBG = new Sprite();
		sHomeBG.addChild(new Bitmap(Assets.getBitmapData(ResourcePath.GFX_HOME_BG)));
		sSingleBG = new Sprite();
		sSingleBG.addChild(new Bitmap(Assets.getBitmapData(ResourcePath.GFX_P_SIGLE_BG)));
		sBattlesBG = new Sprite();
		sBattlesBG.addChild(new Bitmap(Assets.getBitmapData(ResourcePath.GFX_BATTLES_BG)));
		sFriendBG = new Sprite();
		sFriendBG.addChild(new Bitmap(Assets.getBitmapData(ResourcePath.GFX_P_FRIEND_BG)));
		sMissionBG = new Sprite();
		sMissionBG.addChild(new Bitmap(Assets.getBitmapData(ResourcePath.GFX_MISSION_BG)));
		sSingle_btn = new Sprite();
		sSingle_btn.addChild(new Bitmap(Assets.getBitmapData(ResourcePath.GFX_BTN_SINGLE)));
		sBattles_btn = new Sprite();
		sBattles_btn.addChild(new Bitmap(Assets.getBitmapData(ResourcePath.GFX_BTN_BATTLES)));
		sFriend_btn = new Sprite();
		sFriend_btn.addChild(new Bitmap(Assets.getBitmapData(ResourcePath.GFX_BTN_FRIEND)));
		sMission_btn = new Sprite();
		sMission_btn.addChild(new Bitmap(Assets.getBitmapData(ResourcePath.GFX_BTN_MISSION)));
		sBack_btn = new Sprite();
		sBack_btn.addChild(new Bitmap(Assets.getBitmapData(ResourcePath.GFX_BTN_BACK)));
	}
	private function initAudio():Void
	{
		
	}
	public function getBitmap(_id:Int):BitmapData
	{
		switch (_id) 
		{
			case Defines.GFX_BRICK_001:
				return bBrick001;
			case Defines.GFX_BRICK_002:
				return bBrick002;
			case Defines.GFX_BRICK_003:
				return bBrick003;
			default:
		}
		return null;
	}
	public function getSprite(_id:Int):Sprite
	{
		switch (_id) 
		{
			case Defines.GFX_HOME_BG:
				return sHomeBG;
			case Defines.GFX_P_SIGLE_BG:
				return sSingleBG;
			case Defines.GFX_BATTLES_BG:
				return sBattlesBG;
			case Defines.GFX_P_FRIEND_BG:
				return sFriendBG;
			case Defines.GFX_MISSION_BG:
				return sMissionBG;
			case Defines.GFX_BTN_SINGLE:
				return sSingle_btn;
			case Defines.GFX_BTN_BATTLES:
				return sBattles_btn;
			case Defines.GFX_BTN_FRIEND:
				return sFriend_btn;
			case Defines.GFX_BTN_MISSION:
				return sMission_btn;
			case Defines.GFX_BTN_BACK:
				return sBack_btn;
			default:
		}
		return null;
	}
	public function getAnim(_id:Int):Animx
	{
		switch (_id) 
		{
			case Defines.GFX_LOADING_ANIM:
				return aLoadingAnim;
			default:
		}
		return null;
	}
}