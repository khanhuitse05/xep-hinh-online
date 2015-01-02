package core.resource ;
import core.sprites.Animx;
import core.util.Log;
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
	private var mListBimapData:Array<BitmapData>;
	
	var aLoadingAnim:Animx;
	var aRowClearAnim:Animx;
	var aLasesSkillEfect:Animx;
	var aMeterorSkillEfect:Animx;
	
	private var mListSprite:Array<Sprite>;
	
	/**
	 * 
	 */
	public function new() 
	{
		initBitmapdata();
	}
	/**
	 * 
	 */
	private function initBitmapdata():Void
	{
		mListBimapData = new Array<BitmapData>();
		for (i in 0...Defines.MAX_BITMAP) 
		{
			mListBimapData[i] = Assets.getBitmapData(ResourcePath.BITMAPDATA_PATH[i]);
		}
	}
	/**
	 * 
	 */
	private function initAnim():Void
	{
		aLoadingAnim = new Animx(22, 64, 32, 4);
		aLoadingAnim.Init(ResourcePath.ANIMX_PATH[Defines.GFX_LOADING_ANIM]);
		
		aRowClearAnim = new Animx(13, 320, 32, 1);
		aRowClearAnim.Init(ResourcePath.ANIMX_PATH[Defines.GFX_ROW_CLEAER_ANIM]);
				
		aLasesSkillEfect = new Animx(1, 480, 48, 1);
		aLasesSkillEfect.Init(ResourcePath.ANIMX_PATH[Defines.GFX_ANIM_LASES_SKILL]);
		
		aMeterorSkillEfect = new Animx(3, 48, 144, 3);
		aMeterorSkillEfect.Init(ResourcePath.ANIMX_PATH[Defines.GFX_ANIM_METEROR_SKILL]);
	}
	/**
	 * 
	 */
	private function initSprite():Void
	{
		mListSprite = new Array<Sprite>();
		for (i in 0...Defines.MAX_SPRITE) 
		{
			mListSprite[i] = new Sprite();
			mListSprite[i].addChild(new Bitmap(Assets.getBitmapData(ResourcePath.SPRITE_PATH[i])));
		}
	}
	private function initAudio():Void
	{
		
	}
	public function getBitmap(_id:Int):BitmapData
	{
		return mListBimapData[_id];
	}
	public function getSprite(_id:Int):Sprite
	{
		var _spr:Sprite = new Sprite();
		_spr.addChild(new Bitmap(Assets.getBitmapData(ResourcePath.SPRITE_PATH[_id])));
		return _spr;
	}
	public function getAnim(_id:Int):Animx
	{
		var _anim:Animx;
		switch (_id) 
		{
			case Defines.GFX_LOADING_ANIM:
				_anim = new Animx(22, 64, 32, 4);
				_anim.Init(ResourcePath.ANIMX_PATH[Defines.GFX_LOADING_ANIM]);
				return _anim;
			case Defines.GFX_ROW_CLEAER_ANIM:
				_anim = new Animx(13, 320, 32, 1);
				_anim.Init(ResourcePath.ANIMX_PATH[Defines.GFX_ROW_CLEAER_ANIM]);
				return _anim;
			case Defines.GFX_ANIM_METEROR_SKILL:
				_anim = new Animx(3, 48, 144, 3);
				_anim.Init(ResourcePath.ANIMX_PATH[Defines.GFX_ANIM_METEROR_SKILL]);
				return _anim;
			default:
		}
		return null;
	}
}