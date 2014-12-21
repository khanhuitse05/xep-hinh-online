
package core.display.screen;

import core.display.popup.PopupID;
import core.display.scene.SceneID;
import popup.login.*;
import scene.battle.*;
import scene.friendplay.*;
import scene.home.*;
import scene.loading.*;
import scene.login.*;
import scene.mission.*;
import scene.singleplay.*;

/**
 * ...
 * @author trihv
 */
class ScreenID
{
    // Scene
    public static var LOGIN :           	SceneID = new SceneID(Login, LoginView);
    public static var LOADFIST :           	SceneID = new SceneID(LoadFist, LoadFistView);
    public static var HOME :           		SceneID = new SceneID(Home, HomeView);
    public static var BATTLE:           	SceneID = new SceneID(Battle, BattleView);
    public static var SINGLEPLAY :          SceneID = new SceneID(SinglePlay, SinglePlayView);
    public static var FRIENDPLAY :          SceneID = new SceneID(FriendPlay, FriendPlayView);
    public static var MISSION :           	SceneID = new SceneID(Mission, MissionView);
	
	// popup
    public static var POPUP_LOGIN :           	PopupID = new PopupID(LoginPopup);
    
    public function new()
    {
        
    }
}