package game.gameobject.highscore;

import core.resource.Defines;
import game.const.highscore.HighScoreInfo;
import game.gameobject.user.Avatar;
import game.tnk.Game;
import openfl.display.Sprite;

/**
 * ...
 * @author KhanhTN
 */
class HighScorePane extends Sprite
{
	public static var INDEX_X = 10;
	public static var AVATAR_X = 50;
	
	public static var INFO_X = 130;
	public static var INFO_Y = 0;
	
	public static var BTN_Y = 600;
	
	public var id:Int;
	public var typeH:Int;
	
	private var pane:Sprite;
	private var index:HighScoreIndex;
	private var avatar:AvatarChallenge;
	private var info:InfoChallenge;
	
	public function new(_id:Int, _ty:Int) 
	{
		super();
		id = _id;
		typeH = _ty;
		init();
	}
	public function init():Void
	{
		// pane
		switch (typeH) 
		{
			case HighScoreInfo.CHALLENGE:
				pane = Game.resource.getSprite(Defines.GFX_HIGH_CHALL);
				this.addChild(pane);
				var _avatar = new AvatarChallenge(id);
				_avatar.x = AVATAR_X;
				_avatar.y = pane.height / 2 - 25;
				this.addChild(_avatar);
				info = new InfoChallenge(id, typeH);
				info.x = INFO_X;
				info.y = INFO_Y;
				this.addChild(info);
			case HighScoreInfo.LOCK:
				pane = Game.resource.getSprite(Defines.GFX_HIGH_LOCK);
				this.addChild(pane);
				var _avatar = new Avatar(0);
				_avatar.scaleX = 0.5;
				_avatar.scaleY = 0.5;
				_avatar.x = AVATAR_X;
				_avatar.y = pane.height / 2 - 25;
				this.addChild(_avatar);
			case HighScoreInfo.ME:
				pane = Game.resource.getSprite(Defines.GFX_HIGH_ME);
				this.addChild(pane);
				var _avatar = new Avatar(Game.data.playerData.mUserInfo.avatar);
				_avatar.scaleX = 0.5;
				_avatar.scaleY = 0.5;
				_avatar.x = AVATAR_X;
				_avatar.y = pane.height / 2 - 25;
				this.addChild(_avatar);				
				info = new InfoChallenge(id, typeH);
				info.x = INFO_X;
				info.y = INFO_Y;
				this.addChild(info);
			default:
				pane = Game.resource.getSprite(Defines.GFX_HIGH_CHALL);
		}
		// index
		
	}
	public function setIndex(_i:Int):Void
	{
		index = new HighScoreIndex(_i);
		index.x = INDEX_X;
		index.y = pane.height / 2 - 10;
		this.addChild(index);
		
	}
	public function setGoldIcon():Void
	{
		var _gold = Game.resource.getSprite(Defines.GFX_HIGH_GOLDICON);
		_gold.x = pane.width - _gold.width - 20;
		_gold.y = 0;
		this.addChild(_gold);
		
	}
}