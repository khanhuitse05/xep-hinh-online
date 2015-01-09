
package core.display.screen;

import core.display.popup.PopupID;
import core.display.scene.SceneID;
import haxe.ds.Option;
import popup.login.*;
import popup.statistic.*;
import popup.user.*;
import scene.battle.*;
import scene.battleroom.*;
import scene.friendplay.*;
import scene.home.*;
import scene.loading.*;
import scene.login.*;
import scene.mission.*;
import scene.choseskill.*;
import scene.highscore.*;
import scene.shop.*;
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
    public static var ROOM:           		SceneID = new SceneID(BattleRoom, BattleRoomView);
    public static var SINGLEPLAY :          SceneID = new SceneID(SinglePlay, SinglePlayView);
    public static var FRIENDPLAY :          SceneID = new SceneID(FriendPlay, FriendPlayView);
    public static var MISSION :           	SceneID = new SceneID(Mission, MissionView);
    public static var SKILL :           	SceneID = new SceneID(ChoseSkill, ChoseSkillView);
    public static var HIGHSCORE :           SceneID = new SceneID(HighScore, HighScoreView);
    public static var SHOP :          		SceneID = new SceneID(Shop, ShopView);
	
	// popup
    public static var POPUP_LOGIN:           	PopupID = new PopupID(LoginPopup);
    public static var POPUP_STA_PVE:           	PopupID = new PopupID(StaPvEPopup);
    public static var POPUP_STA_PVP:           	PopupID = new PopupID(StaPvPPopup);
    public static var POPUP_OPTIONS:           	PopupID = new PopupID(OptionPopup);
    public static var POPUP_DISCONNET:          PopupID = new PopupID(DisConnetPopup);
    
    public function new()
    {
        
    }
}