package game.gameobject.skill;
import game.tnk.Game;
import openfl.events.MouseEvent;

/**
 * ...
 * @author KhanhTN
 */
class SkillTap extends SkillDisplay
{

	public function new(_id:Int) 
	{
		super(_id);
		this.addEventListener(MouseEvent.CLICK, onTap);
	}
	public function onTap(e:MouseEvent)
	{
		Game.displayManager.toInfo(info.name, info.info);
	}
	override public function dispose():Void
	{
		super.dispose();
		this.removeEventListener(MouseEvent.CLICK, onTap);
	}
}