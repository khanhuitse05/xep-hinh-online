package popup.user;

import core.display.layer.LayerManager;
import core.display.popup.PopupSmallBase;
import core.display.scene.SceneView;
import core.display.screen.ScreenID;
import core.resource.Defines;
import game.tnk.Game;
import openfl.events.Event;
import openfl.display.Sprite;

/**
 * ...
 * @author KhanhTN
 */
class DisConnetPopup extends PopupSmallBase
{

	public function new(showDarkBg:Bool=true) 
	{
		super(showDarkBg);
		init();
	}
	public function init():Void
	{
		var _bg:Sprite = Game.resource.getSprite(Defines.GFX_UI_DIS_BG);
		pane.addChild(_bg);		
	}
	override private function onClose(e:Event):Void 
    {
        transitionOut();
		var view:SceneView = cast(Game.displayManager.m_pScreensManager[LayerManager.LAYER_SCREEN].getCurrentScene().getView(), SceneView);
		if (view.getSceneType() != SceneView.HOME) 
		{
			Game.displayManager.toScreen(ScreenID.HOME);
		}
    }
}