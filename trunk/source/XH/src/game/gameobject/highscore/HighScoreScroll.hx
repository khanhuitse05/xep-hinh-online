package game.gameobject.highscore;

import core.display.ex.SimpleButton;
import core.resource.Defines;
import game.const.Const;
import game.const.highscore.HighScoreInfo;
import game.data.skill.DTSkill;
import game.tnk.Game;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.events.MouseEvent;


/**
 * ...
 * @author KhanhTN
 */
class HighScoreScroll extends Sprite
{

	public static var				MAX_VALUE:Int = 9;
	public static var				HEIGHT:Int = 100;
	public static var				WIDTH:Int = 720;
	
    private var m_pChilds:Array<HighScorePane>;
	private var mIndex:Int;
	private var btnShare:SimpleButton;
		
	public function new() 
	{
		super();
		initialize();
		addItem();
		
	}
	
	private function initialize():Void
    {
	}
	
	/**
	 * 
	 * @param	_obj
	 */
	public function addItem()
	{
		m_pChilds = new Array<HighScorePane>();
		var _list:Array<HighScoreInfo> = Const.getListHighScore();
		for (i in 0..._list.length) 
		{			
			if (_list[i].id == -1) 
			{
				m_pChilds[i] = new HighScorePane(_list[i].id, HighScoreInfo.ME);
				mIndex = i;
			}else 
			{
				m_pChilds[i] = new HighScorePane(_list[i].id, HighScoreInfo.CHALLENGE);
			}
			this.addChild(m_pChilds[i]);
			
		}
		// lock
		var _temp = m_pChilds.length;
		for (i in 0...2) 
		{			
			m_pChilds[_temp + i] = new HighScorePane(_list[i].id, HighScoreInfo.LOCK);
			this.addChild(m_pChilds[_temp + i]);
		}
		// set index
		for (i in 0...m_pChilds.length) 
		{			
			m_pChilds[i].setIndex(m_pChilds.length - i - 1);
			if (m_pChilds[i].typeH == HighScoreInfo.CHALLENGE && i > mIndex) 
			{
				m_pChilds[i].setGoldIcon();
			}
		}
		//addShare();
		UpdateAll();
	}
	private function addShare()
	{
		if (m_pChilds[mIndex] != null) 
		{
			btnShare = new SimpleButton();
			btnShare.setDisplay(Game.resource.getSprite(Defines.GFX_BTN_SHARE));
			btnShare.x = m_pChilds[mIndex].width - 100;
			btnShare.y = m_pChilds[mIndex].height / 2;
			btnShare.setMouseClick(onShare);
			m_pChilds[mIndex].addChild(btnShare);
		}
	}
	public function UpdateAll()
	{
		for (i in 0...m_pChilds.length) 
		{
			m_pChilds[i].y = ((m_pChilds.length-1)*HEIGHT) - i * HEIGHT;
		}
	}
	private function onShare(e:Event)
	{
		
	}
	
}