package game.gameobject.hud;

import core.display.ex.Lable;
import core.resource.Defines;
import game.const.Const;
import game.tnk.Game;
import openfl.display.Sprite;

/**
 * ...
 * @author KhanhTN
 */
class ExpHud extends Sprite
{
	
	private static var LEVEL_X = 250;
	private static var LEVEL_Y = 15;
	private static var LINE_X = 68;
	private static var LINE_Y = 58;
	
	private var exp:Int;
	private var level:Int;
	private var widthExp:Int;
	
	private var expPane:Sprite;	
	private var levelText:Lable;	
	private var expLevel:Sprite;
	private var expLine:Sprite;
	private var expPoint:Sprite;

	public function new() 
	{
		super();
		init();
		update();
		
	}
	private function init():Void
	{
		exp = Const.getExp(Game.data.playerData.mUserInfo.exp);
		level = Const.getExp(Game.data.playerData.mUserInfo.exp);
		
		//panel
		expPane = Game.resource.getSprite(Defines.GFX_UI_HUD_PANE);
		this.addChild(expPane);
		// line
		var _line = Game.resource.getSprite(Defines.GFX_UI_HUD_EXP_LINE_W);
		_line.x = LINE_X;
		_line.y = LINE_Y;
		this.addChild(_line);
		expLine = Game.resource.getSprite(Defines.GFX_UI_HUD_EXP_LINE_Y);		
		expLine.x = LINE_X;
		expLine.y = LINE_Y;
		this.addChild(expLine);
		widthExp = Std.int(expLine.width);
		// point
		expPoint = Game.resource.getSprite(Defines.GFX_UI_HUD_EXP_POINT);
		expPoint.x = LINE_X;
		expPoint.y = LINE_Y - 3;
		this.addChild(expPoint);
		//level		
		expLevel = Game.resource.getSprite(Defines.GFX_UI_HUD_EXP_LEVEL);	
		expLevel.x = LEVEL_X;
		expLevel.y = LEVEL_Y;
		this.addChild(expLevel);
		// text
		levelText = new Lable();
		levelText.setFont(35, 0x00FF89);
		levelText.setSysTextInfo(LEVEL_X + 10, LEVEL_Y + 5, "" + level);
		this.addChild(levelText);
		
	}
	public function update():Void
	{
		exp = Const.getExp(Game.data.playerData.mUserInfo.exp);
		level = Const.getLevel(Game.data.playerData.mUserInfo.exp);
		var _ratio:Float = exp / Const.expPerLevel;
		
		if (level < 10) 
		{			
			levelText.setSysTextInfo(LEVEL_X + 20, LEVEL_Y + 8, "" + level);		
		}else 
		{
			levelText.setSysTextInfo(LEVEL_X + 10, LEVEL_Y + 8, "" + level);		
		}
		expPoint.x = LINE_X + _ratio * widthExp;
		expLine.scaleX = _ratio;
	}
	
}