package game.gameobject.rank;

import core.resource.Defines;
import game.tnk.Game;
import openfl.display.Sprite;

/**
 * ...
 * @author KhanhTN
 */
class RankPane extends Sprite
{

	public static var				HEIGHT:Int = 100;
	public static var				WIDTH:Int = Game.GAME_WIDTH;
	
	public static var INDEX_X = 25;	
	public static var INFO_X = 180;
	public static var INFO_Y = 0;	
	public static var BTN_Y = 600;
	
	public var id:Int;
	public var type:Int;
	
	private var pane:Sprite;
	private var index:RankIndex;
	private var info:RankInfo;
	
	public function new(_id:Int, _ty:Int) 
	{
		super();
		id = _id;
		type = _ty;
		init();
	}
	public function init():Void
	{
		pane = Game.resource.getSprite(Defines.GFX_UI_RANK_BOX);
		this.addChild(pane);
		
		info = new RankInfo(id, type);
		info.x = INFO_X;
		info.y = INFO_Y;
		this.addChild(info);
		
		index = new RankIndex(id);
		index.x = INDEX_X;
		index.y = pane.height / 2 - 32;
		this.addChild(index);
	}
	public function updateValue()
	{
		info.updateValue();
	}
	
}