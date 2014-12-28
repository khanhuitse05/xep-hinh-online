package game.gameobject.highscore;

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
			}else 
			{
				m_pChilds[i] = new HighScorePane(_list[i].id, HighScoreInfo.CHALLENGE);
			}
			m_pChilds[i].setIndex(i);
			this.addChild(m_pChilds[i]);
			
		}
		// lock
		var _temp = m_pChilds.length;
		for (i in 0...2) 
		{			
			m_pChilds[_temp + i] = new HighScorePane(_list[i].id, HighScoreInfo.LOCK);
			m_pChilds[_temp + i].setIndex(_temp + i);
			this.addChild(m_pChilds[_temp + i]);
		}
		
		UpdateAll();
	}
	
	public function UpdateAll()
	{
		for (i in 0...m_pChilds.length) 
		{
			m_pChilds[i].y = ((m_pChilds.length-1)*HEIGHT) - i * HEIGHT;
		}
	}
	
	
}