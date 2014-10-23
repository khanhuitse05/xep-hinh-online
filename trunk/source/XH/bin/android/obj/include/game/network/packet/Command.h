#ifndef INCLUDED_game_network_packet_Command
#define INCLUDED_game_network_packet_Command

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(game,network,packet,Command)
namespace game{
namespace network{
namespace packet{


class HXCPP_CLASS_ATTRIBUTES  Command_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Command_obj OBJ_;
		Command_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Command_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Command_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Command"); }

		static int CMD_USER_LOGIN;
		static int CMD_RESP_USERINFO;
		static int CMD_USER_UPGRADE_POWER;
		static int CMD_RESP_UPGRADE_POWER_MAIN;
		static int CMD_RESP_UPGRADE_POWER_SUB;
		static int CMD_GAME_DUNGEON_ENTER;
		static int CMD_GAME_ENTER;
		static int CMD_GAME_PVE_ENTER;
		static int CMD_GAME_MATCH;
		static int CMD_GAME_ASK_LOSE;
		static int CMD_GAME_SYN_TIME;
		static int CMD_GAME_ACTIVE_SKILL;
		static int CMD_RESP_ANSWER_LOSE;
		static int CMD_RESP_SYN_TIME_MONSTER;
		static int CMD_RESP_ENTER;
		static int CMD_RESP_MATCH;
		static int CMD_RESP_WIN;
		static int CMD_RESP_LOSE;
		static int CMD_RESP_ENTER_DUNGEON;
		static int CMD_RESP_ENTER_PVP;
		static int CMD_RESP_ENTER_PVP_NO_COMPETITOR;
		static int CMD_RESP_MATCH_PVP;
		static int CMD_RESP_WIN_PVP;
		static int CMD_RESP_LOSE_PVP;
		static int CMD_RESP_ENTER_PVE;
		static int CMD_RESP_MATCH_PVE;
		static int CMD_RESP_WIN_PVE;
		static int CMD_RESP_LOSE_PVE;
		static int CMD_RESP_BATTLE_SKILL_SILENT;
		static int CMD_RESP_BATTLE_SKILL_FIRE;
		static int CMD_RESP_BATTLE_SKILL_HP;
		static int CMD_RESP_BATTLE_SKILL_FREEZE;
		static int CMD_RESP_BATTLE_SKILL_CLEAN_MINE;
		static int CMD_RESP_BATTLE_SKILL_CLEAN_ENEMY;
		static int CMD_RESP_BATTLE_SKILL_DEFENSE;
		static int CMD_RESP_BATTLE_SKILL_SUCK;
		static int CMD_RESP_BATTLE_SKILL_OBSTACLES_SET;
		static int CMD_RESP_BATTLE_SKILL_GEMS_SET;
		static int CMD_UPDATE_ITEMSET;
		static int CMD_ADD_AUX_ITEM;
		static int CMD_REMOVE_AUX_ITEM;
		static int CMD_UPGRADE_ITEM;
		static int CMD_RESP_ITEM;
		static int CMD_SKILL_CHOOSE;
		static int CMD_RESP_SKILL;
		static int CMD_CHAT_SEND;
		static int CMD_RESP_CHAT_MSG;
		static int CMD_RESP_CHAT_BAN;
		static int CMD_CHEAT;
		static int CMD_RESP_CHEAT_GOLD;
		static int CMD_RESP_CHEAT_COIN;
};

} // end namespace game
} // end namespace network
} // end namespace packet

#endif /* INCLUDED_game_network_packet_Command */ 
