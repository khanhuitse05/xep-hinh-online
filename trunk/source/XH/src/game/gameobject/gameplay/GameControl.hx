package game.gameobject.gameplay;
import game.tnk.Game;
import openfl.events.MouseEvent;
import openfl.events.Event;
import openfl.display.Sprite;

/**
 * ...
 * @author KhanhTN
 */
class GameControl extends Sprite
{

	public function new() 
	{
		super();
		this.graphics.beginFill(0, 0.0001);
		this.graphics.drawRect(0, 0, Game.GAME_WIDTH, Game.GAME_HEIGHT);
		this.graphics.endFill();
	}
	private function onCycle(e:Event):Void
	{
		Game.data.playerData.mDTingame.isCycle = true;
	}
	public function onEnter()
	{		
		this.addEventListener(MouseEvent.MOUSE_DOWN, onCycle);
	}
	public function onExit()
	{
		this.removeEventListener(MouseEvent.MOUSE_DOWN, onCycle);
	}
}