package scene.rank;

import core.display.scene.SceneView;
import game.tnk.Game;

/**
 * ...
 * @author KhanhTN
 */
class RankView extends SceneView
{

	public function new() 
	{
		super();
		
	}
	/**
	 * 
	 */
    override public function onEnter() : Void
    {
		this.addChild(Game.hudTop);
		Game.hudTop.setPosBack(SceneView.HOME);
		Game.hudTop.update();
		onRefresh();
    }
	
	override public function onExit() : Void
    {  
        this.removeChild(Game.hudTop);
        this.removeChild(Game.hudBottom);
    }
}