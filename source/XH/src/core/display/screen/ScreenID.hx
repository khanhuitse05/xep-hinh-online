
package core.display.screen;

import core.display.scene.SceneID;
import scene.battle.Battle;
import scene.battle.BattleView;
import scene.friendplay.FriendPlay;
import scene.friendplay.FriendPlayView;
import scene.home.Home;
import scene.home.HomeView;
import scene.loading.LoadFist;
import scene.loading.LoadFistView;
import scene.login.Login;
import scene.login.LoginView;
import scene.mission.Mission;
import scene.mission.MissionView;
import scene.singleplay.SinglePlay;
import scene.singleplay.SinglePlayView;

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
    
    public function new()
    {
        
    }
}