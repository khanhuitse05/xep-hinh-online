#include <hxcpp.h>

#ifndef INCLUDED_game_network_packet_Command
#include <game/network/packet/Command.h>
#endif
namespace game{
namespace network{
namespace packet{

Void Command_obj::__construct()
{
	return null();
}

//Command_obj::~Command_obj() { }

Dynamic Command_obj::__CreateEmpty() { return  new Command_obj; }
hx::ObjectPtr< Command_obj > Command_obj::__new()
{  hx::ObjectPtr< Command_obj > result = new Command_obj();
	result->__construct();
	return result;}

Dynamic Command_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Command_obj > result = new Command_obj();
	result->__construct();
	return result;}

int Command_obj::CMD_USER_LOGIN;

int Command_obj::CMD_RESP_USERINFO;

int Command_obj::CMD_USER_UPGRADE_POWER;

int Command_obj::CMD_RESP_UPGRADE_POWER_MAIN;

int Command_obj::CMD_RESP_UPGRADE_POWER_SUB;

int Command_obj::CMD_GAME_DUNGEON_ENTER;

int Command_obj::CMD_GAME_ENTER;

int Command_obj::CMD_GAME_PVE_ENTER;

int Command_obj::CMD_GAME_MATCH;

int Command_obj::CMD_GAME_ASK_LOSE;

int Command_obj::CMD_GAME_SYN_TIME;

int Command_obj::CMD_GAME_ACTIVE_SKILL;

int Command_obj::CMD_RESP_ANSWER_LOSE;

int Command_obj::CMD_RESP_SYN_TIME_MONSTER;

int Command_obj::CMD_RESP_ENTER;

int Command_obj::CMD_RESP_MATCH;

int Command_obj::CMD_RESP_WIN;

int Command_obj::CMD_RESP_LOSE;

int Command_obj::CMD_RESP_ENTER_DUNGEON;

int Command_obj::CMD_RESP_ENTER_PVP;

int Command_obj::CMD_RESP_ENTER_PVP_NO_COMPETITOR;

int Command_obj::CMD_RESP_MATCH_PVP;

int Command_obj::CMD_RESP_WIN_PVP;

int Command_obj::CMD_RESP_LOSE_PVP;

int Command_obj::CMD_RESP_ENTER_PVE;

int Command_obj::CMD_RESP_MATCH_PVE;

int Command_obj::CMD_RESP_WIN_PVE;

int Command_obj::CMD_RESP_LOSE_PVE;

int Command_obj::CMD_RESP_BATTLE_SKILL_SILENT;

int Command_obj::CMD_RESP_BATTLE_SKILL_FIRE;

int Command_obj::CMD_RESP_BATTLE_SKILL_HP;

int Command_obj::CMD_RESP_BATTLE_SKILL_FREEZE;

int Command_obj::CMD_RESP_BATTLE_SKILL_CLEAN_MINE;

int Command_obj::CMD_RESP_BATTLE_SKILL_CLEAN_ENEMY;

int Command_obj::CMD_RESP_BATTLE_SKILL_DEFENSE;

int Command_obj::CMD_RESP_BATTLE_SKILL_SUCK;

int Command_obj::CMD_RESP_BATTLE_SKILL_OBSTACLES_SET;

int Command_obj::CMD_RESP_BATTLE_SKILL_GEMS_SET;

int Command_obj::CMD_UPDATE_ITEMSET;

int Command_obj::CMD_ADD_AUX_ITEM;

int Command_obj::CMD_REMOVE_AUX_ITEM;

int Command_obj::CMD_UPGRADE_ITEM;

int Command_obj::CMD_RESP_ITEM;

int Command_obj::CMD_SKILL_CHOOSE;

int Command_obj::CMD_RESP_SKILL;

int Command_obj::CMD_CHAT_SEND;

int Command_obj::CMD_RESP_CHAT_MSG;

int Command_obj::CMD_RESP_CHAT_BAN;

int Command_obj::CMD_CHEAT;

int Command_obj::CMD_RESP_CHEAT_GOLD;

int Command_obj::CMD_RESP_CHEAT_COIN;


Command_obj::Command_obj()
{
}

Dynamic Command_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"CMD_CHEAT") ) { return CMD_CHEAT; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"CMD_RESP_WIN") ) { return CMD_RESP_WIN; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"CMD_RESP_LOSE") ) { return CMD_RESP_LOSE; }
		if (HX_FIELD_EQ(inName,"CMD_RESP_ITEM") ) { return CMD_RESP_ITEM; }
		if (HX_FIELD_EQ(inName,"CMD_CHAT_SEND") ) { return CMD_CHAT_SEND; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"CMD_USER_LOGIN") ) { return CMD_USER_LOGIN; }
		if (HX_FIELD_EQ(inName,"CMD_GAME_ENTER") ) { return CMD_GAME_ENTER; }
		if (HX_FIELD_EQ(inName,"CMD_GAME_MATCH") ) { return CMD_GAME_MATCH; }
		if (HX_FIELD_EQ(inName,"CMD_RESP_ENTER") ) { return CMD_RESP_ENTER; }
		if (HX_FIELD_EQ(inName,"CMD_RESP_MATCH") ) { return CMD_RESP_MATCH; }
		if (HX_FIELD_EQ(inName,"CMD_RESP_SKILL") ) { return CMD_RESP_SKILL; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"CMD_RESP_WIN_PVP") ) { return CMD_RESP_WIN_PVP; }
		if (HX_FIELD_EQ(inName,"CMD_RESP_WIN_PVE") ) { return CMD_RESP_WIN_PVE; }
		if (HX_FIELD_EQ(inName,"CMD_ADD_AUX_ITEM") ) { return CMD_ADD_AUX_ITEM; }
		if (HX_FIELD_EQ(inName,"CMD_UPGRADE_ITEM") ) { return CMD_UPGRADE_ITEM; }
		if (HX_FIELD_EQ(inName,"CMD_SKILL_CHOOSE") ) { return CMD_SKILL_CHOOSE; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"CMD_RESP_USERINFO") ) { return CMD_RESP_USERINFO; }
		if (HX_FIELD_EQ(inName,"CMD_GAME_ASK_LOSE") ) { return CMD_GAME_ASK_LOSE; }
		if (HX_FIELD_EQ(inName,"CMD_GAME_SYN_TIME") ) { return CMD_GAME_SYN_TIME; }
		if (HX_FIELD_EQ(inName,"CMD_RESP_LOSE_PVP") ) { return CMD_RESP_LOSE_PVP; }
		if (HX_FIELD_EQ(inName,"CMD_RESP_LOSE_PVE") ) { return CMD_RESP_LOSE_PVE; }
		if (HX_FIELD_EQ(inName,"CMD_RESP_CHAT_MSG") ) { return CMD_RESP_CHAT_MSG; }
		if (HX_FIELD_EQ(inName,"CMD_RESP_CHAT_BAN") ) { return CMD_RESP_CHAT_BAN; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"CMD_GAME_PVE_ENTER") ) { return CMD_GAME_PVE_ENTER; }
		if (HX_FIELD_EQ(inName,"CMD_RESP_ENTER_PVP") ) { return CMD_RESP_ENTER_PVP; }
		if (HX_FIELD_EQ(inName,"CMD_RESP_MATCH_PVP") ) { return CMD_RESP_MATCH_PVP; }
		if (HX_FIELD_EQ(inName,"CMD_RESP_ENTER_PVE") ) { return CMD_RESP_ENTER_PVE; }
		if (HX_FIELD_EQ(inName,"CMD_RESP_MATCH_PVE") ) { return CMD_RESP_MATCH_PVE; }
		if (HX_FIELD_EQ(inName,"CMD_UPDATE_ITEMSET") ) { return CMD_UPDATE_ITEMSET; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"CMD_REMOVE_AUX_ITEM") ) { return CMD_REMOVE_AUX_ITEM; }
		if (HX_FIELD_EQ(inName,"CMD_RESP_CHEAT_GOLD") ) { return CMD_RESP_CHEAT_GOLD; }
		if (HX_FIELD_EQ(inName,"CMD_RESP_CHEAT_COIN") ) { return CMD_RESP_CHEAT_COIN; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"CMD_RESP_ANSWER_LOSE") ) { return CMD_RESP_ANSWER_LOSE; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"CMD_GAME_ACTIVE_SKILL") ) { return CMD_GAME_ACTIVE_SKILL; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"CMD_USER_UPGRADE_POWER") ) { return CMD_USER_UPGRADE_POWER; }
		if (HX_FIELD_EQ(inName,"CMD_GAME_DUNGEON_ENTER") ) { return CMD_GAME_DUNGEON_ENTER; }
		if (HX_FIELD_EQ(inName,"CMD_RESP_ENTER_DUNGEON") ) { return CMD_RESP_ENTER_DUNGEON; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"CMD_RESP_BATTLE_SKILL_HP") ) { return CMD_RESP_BATTLE_SKILL_HP; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"CMD_RESP_SYN_TIME_MONSTER") ) { return CMD_RESP_SYN_TIME_MONSTER; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"CMD_RESP_UPGRADE_POWER_SUB") ) { return CMD_RESP_UPGRADE_POWER_SUB; }
		if (HX_FIELD_EQ(inName,"CMD_RESP_BATTLE_SKILL_FIRE") ) { return CMD_RESP_BATTLE_SKILL_FIRE; }
		if (HX_FIELD_EQ(inName,"CMD_RESP_BATTLE_SKILL_SUCK") ) { return CMD_RESP_BATTLE_SKILL_SUCK; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"CMD_RESP_UPGRADE_POWER_MAIN") ) { return CMD_RESP_UPGRADE_POWER_MAIN; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"CMD_RESP_BATTLE_SKILL_SILENT") ) { return CMD_RESP_BATTLE_SKILL_SILENT; }
		if (HX_FIELD_EQ(inName,"CMD_RESP_BATTLE_SKILL_FREEZE") ) { return CMD_RESP_BATTLE_SKILL_FREEZE; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"CMD_RESP_BATTLE_SKILL_DEFENSE") ) { return CMD_RESP_BATTLE_SKILL_DEFENSE; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"CMD_RESP_BATTLE_SKILL_GEMS_SET") ) { return CMD_RESP_BATTLE_SKILL_GEMS_SET; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"CMD_RESP_ENTER_PVP_NO_COMPETITOR") ) { return CMD_RESP_ENTER_PVP_NO_COMPETITOR; }
		if (HX_FIELD_EQ(inName,"CMD_RESP_BATTLE_SKILL_CLEAN_MINE") ) { return CMD_RESP_BATTLE_SKILL_CLEAN_MINE; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"CMD_RESP_BATTLE_SKILL_CLEAN_ENEMY") ) { return CMD_RESP_BATTLE_SKILL_CLEAN_ENEMY; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"CMD_RESP_BATTLE_SKILL_OBSTACLES_SET") ) { return CMD_RESP_BATTLE_SKILL_OBSTACLES_SET; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Command_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"CMD_CHEAT") ) { CMD_CHEAT=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"CMD_RESP_WIN") ) { CMD_RESP_WIN=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"CMD_RESP_LOSE") ) { CMD_RESP_LOSE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CMD_RESP_ITEM") ) { CMD_RESP_ITEM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CMD_CHAT_SEND") ) { CMD_CHAT_SEND=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"CMD_USER_LOGIN") ) { CMD_USER_LOGIN=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CMD_GAME_ENTER") ) { CMD_GAME_ENTER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CMD_GAME_MATCH") ) { CMD_GAME_MATCH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CMD_RESP_ENTER") ) { CMD_RESP_ENTER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CMD_RESP_MATCH") ) { CMD_RESP_MATCH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CMD_RESP_SKILL") ) { CMD_RESP_SKILL=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"CMD_RESP_WIN_PVP") ) { CMD_RESP_WIN_PVP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CMD_RESP_WIN_PVE") ) { CMD_RESP_WIN_PVE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CMD_ADD_AUX_ITEM") ) { CMD_ADD_AUX_ITEM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CMD_UPGRADE_ITEM") ) { CMD_UPGRADE_ITEM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CMD_SKILL_CHOOSE") ) { CMD_SKILL_CHOOSE=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"CMD_RESP_USERINFO") ) { CMD_RESP_USERINFO=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CMD_GAME_ASK_LOSE") ) { CMD_GAME_ASK_LOSE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CMD_GAME_SYN_TIME") ) { CMD_GAME_SYN_TIME=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CMD_RESP_LOSE_PVP") ) { CMD_RESP_LOSE_PVP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CMD_RESP_LOSE_PVE") ) { CMD_RESP_LOSE_PVE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CMD_RESP_CHAT_MSG") ) { CMD_RESP_CHAT_MSG=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CMD_RESP_CHAT_BAN") ) { CMD_RESP_CHAT_BAN=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"CMD_GAME_PVE_ENTER") ) { CMD_GAME_PVE_ENTER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CMD_RESP_ENTER_PVP") ) { CMD_RESP_ENTER_PVP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CMD_RESP_MATCH_PVP") ) { CMD_RESP_MATCH_PVP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CMD_RESP_ENTER_PVE") ) { CMD_RESP_ENTER_PVE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CMD_RESP_MATCH_PVE") ) { CMD_RESP_MATCH_PVE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CMD_UPDATE_ITEMSET") ) { CMD_UPDATE_ITEMSET=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"CMD_REMOVE_AUX_ITEM") ) { CMD_REMOVE_AUX_ITEM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CMD_RESP_CHEAT_GOLD") ) { CMD_RESP_CHEAT_GOLD=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CMD_RESP_CHEAT_COIN") ) { CMD_RESP_CHEAT_COIN=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"CMD_RESP_ANSWER_LOSE") ) { CMD_RESP_ANSWER_LOSE=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"CMD_GAME_ACTIVE_SKILL") ) { CMD_GAME_ACTIVE_SKILL=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"CMD_USER_UPGRADE_POWER") ) { CMD_USER_UPGRADE_POWER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CMD_GAME_DUNGEON_ENTER") ) { CMD_GAME_DUNGEON_ENTER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CMD_RESP_ENTER_DUNGEON") ) { CMD_RESP_ENTER_DUNGEON=inValue.Cast< int >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"CMD_RESP_BATTLE_SKILL_HP") ) { CMD_RESP_BATTLE_SKILL_HP=inValue.Cast< int >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"CMD_RESP_SYN_TIME_MONSTER") ) { CMD_RESP_SYN_TIME_MONSTER=inValue.Cast< int >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"CMD_RESP_UPGRADE_POWER_SUB") ) { CMD_RESP_UPGRADE_POWER_SUB=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CMD_RESP_BATTLE_SKILL_FIRE") ) { CMD_RESP_BATTLE_SKILL_FIRE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CMD_RESP_BATTLE_SKILL_SUCK") ) { CMD_RESP_BATTLE_SKILL_SUCK=inValue.Cast< int >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"CMD_RESP_UPGRADE_POWER_MAIN") ) { CMD_RESP_UPGRADE_POWER_MAIN=inValue.Cast< int >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"CMD_RESP_BATTLE_SKILL_SILENT") ) { CMD_RESP_BATTLE_SKILL_SILENT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CMD_RESP_BATTLE_SKILL_FREEZE") ) { CMD_RESP_BATTLE_SKILL_FREEZE=inValue.Cast< int >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"CMD_RESP_BATTLE_SKILL_DEFENSE") ) { CMD_RESP_BATTLE_SKILL_DEFENSE=inValue.Cast< int >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"CMD_RESP_BATTLE_SKILL_GEMS_SET") ) { CMD_RESP_BATTLE_SKILL_GEMS_SET=inValue.Cast< int >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"CMD_RESP_ENTER_PVP_NO_COMPETITOR") ) { CMD_RESP_ENTER_PVP_NO_COMPETITOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CMD_RESP_BATTLE_SKILL_CLEAN_MINE") ) { CMD_RESP_BATTLE_SKILL_CLEAN_MINE=inValue.Cast< int >(); return inValue; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"CMD_RESP_BATTLE_SKILL_CLEAN_ENEMY") ) { CMD_RESP_BATTLE_SKILL_CLEAN_ENEMY=inValue.Cast< int >(); return inValue; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"CMD_RESP_BATTLE_SKILL_OBSTACLES_SET") ) { CMD_RESP_BATTLE_SKILL_OBSTACLES_SET=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Command_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("CMD_USER_LOGIN"),
	HX_CSTRING("CMD_RESP_USERINFO"),
	HX_CSTRING("CMD_USER_UPGRADE_POWER"),
	HX_CSTRING("CMD_RESP_UPGRADE_POWER_MAIN"),
	HX_CSTRING("CMD_RESP_UPGRADE_POWER_SUB"),
	HX_CSTRING("CMD_GAME_DUNGEON_ENTER"),
	HX_CSTRING("CMD_GAME_ENTER"),
	HX_CSTRING("CMD_GAME_PVE_ENTER"),
	HX_CSTRING("CMD_GAME_MATCH"),
	HX_CSTRING("CMD_GAME_ASK_LOSE"),
	HX_CSTRING("CMD_GAME_SYN_TIME"),
	HX_CSTRING("CMD_GAME_ACTIVE_SKILL"),
	HX_CSTRING("CMD_RESP_ANSWER_LOSE"),
	HX_CSTRING("CMD_RESP_SYN_TIME_MONSTER"),
	HX_CSTRING("CMD_RESP_ENTER"),
	HX_CSTRING("CMD_RESP_MATCH"),
	HX_CSTRING("CMD_RESP_WIN"),
	HX_CSTRING("CMD_RESP_LOSE"),
	HX_CSTRING("CMD_RESP_ENTER_DUNGEON"),
	HX_CSTRING("CMD_RESP_ENTER_PVP"),
	HX_CSTRING("CMD_RESP_ENTER_PVP_NO_COMPETITOR"),
	HX_CSTRING("CMD_RESP_MATCH_PVP"),
	HX_CSTRING("CMD_RESP_WIN_PVP"),
	HX_CSTRING("CMD_RESP_LOSE_PVP"),
	HX_CSTRING("CMD_RESP_ENTER_PVE"),
	HX_CSTRING("CMD_RESP_MATCH_PVE"),
	HX_CSTRING("CMD_RESP_WIN_PVE"),
	HX_CSTRING("CMD_RESP_LOSE_PVE"),
	HX_CSTRING("CMD_RESP_BATTLE_SKILL_SILENT"),
	HX_CSTRING("CMD_RESP_BATTLE_SKILL_FIRE"),
	HX_CSTRING("CMD_RESP_BATTLE_SKILL_HP"),
	HX_CSTRING("CMD_RESP_BATTLE_SKILL_FREEZE"),
	HX_CSTRING("CMD_RESP_BATTLE_SKILL_CLEAN_MINE"),
	HX_CSTRING("CMD_RESP_BATTLE_SKILL_CLEAN_ENEMY"),
	HX_CSTRING("CMD_RESP_BATTLE_SKILL_DEFENSE"),
	HX_CSTRING("CMD_RESP_BATTLE_SKILL_SUCK"),
	HX_CSTRING("CMD_RESP_BATTLE_SKILL_OBSTACLES_SET"),
	HX_CSTRING("CMD_RESP_BATTLE_SKILL_GEMS_SET"),
	HX_CSTRING("CMD_UPDATE_ITEMSET"),
	HX_CSTRING("CMD_ADD_AUX_ITEM"),
	HX_CSTRING("CMD_REMOVE_AUX_ITEM"),
	HX_CSTRING("CMD_UPGRADE_ITEM"),
	HX_CSTRING("CMD_RESP_ITEM"),
	HX_CSTRING("CMD_SKILL_CHOOSE"),
	HX_CSTRING("CMD_RESP_SKILL"),
	HX_CSTRING("CMD_CHAT_SEND"),
	HX_CSTRING("CMD_RESP_CHAT_MSG"),
	HX_CSTRING("CMD_RESP_CHAT_BAN"),
	HX_CSTRING("CMD_CHEAT"),
	HX_CSTRING("CMD_RESP_CHEAT_GOLD"),
	HX_CSTRING("CMD_RESP_CHEAT_COIN"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Command_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Command_obj::CMD_USER_LOGIN,"CMD_USER_LOGIN");
	HX_MARK_MEMBER_NAME(Command_obj::CMD_RESP_USERINFO,"CMD_RESP_USERINFO");
	HX_MARK_MEMBER_NAME(Command_obj::CMD_USER_UPGRADE_POWER,"CMD_USER_UPGRADE_POWER");
	HX_MARK_MEMBER_NAME(Command_obj::CMD_RESP_UPGRADE_POWER_MAIN,"CMD_RESP_UPGRADE_POWER_MAIN");
	HX_MARK_MEMBER_NAME(Command_obj::CMD_RESP_UPGRADE_POWER_SUB,"CMD_RESP_UPGRADE_POWER_SUB");
	HX_MARK_MEMBER_NAME(Command_obj::CMD_GAME_DUNGEON_ENTER,"CMD_GAME_DUNGEON_ENTER");
	HX_MARK_MEMBER_NAME(Command_obj::CMD_GAME_ENTER,"CMD_GAME_ENTER");
	HX_MARK_MEMBER_NAME(Command_obj::CMD_GAME_PVE_ENTER,"CMD_GAME_PVE_ENTER");
	HX_MARK_MEMBER_NAME(Command_obj::CMD_GAME_MATCH,"CMD_GAME_MATCH");
	HX_MARK_MEMBER_NAME(Command_obj::CMD_GAME_ASK_LOSE,"CMD_GAME_ASK_LOSE");
	HX_MARK_MEMBER_NAME(Command_obj::CMD_GAME_SYN_TIME,"CMD_GAME_SYN_TIME");
	HX_MARK_MEMBER_NAME(Command_obj::CMD_GAME_ACTIVE_SKILL,"CMD_GAME_ACTIVE_SKILL");
	HX_MARK_MEMBER_NAME(Command_obj::CMD_RESP_ANSWER_LOSE,"CMD_RESP_ANSWER_LOSE");
	HX_MARK_MEMBER_NAME(Command_obj::CMD_RESP_SYN_TIME_MONSTER,"CMD_RESP_SYN_TIME_MONSTER");
	HX_MARK_MEMBER_NAME(Command_obj::CMD_RESP_ENTER,"CMD_RESP_ENTER");
	HX_MARK_MEMBER_NAME(Command_obj::CMD_RESP_MATCH,"CMD_RESP_MATCH");
	HX_MARK_MEMBER_NAME(Command_obj::CMD_RESP_WIN,"CMD_RESP_WIN");
	HX_MARK_MEMBER_NAME(Command_obj::CMD_RESP_LOSE,"CMD_RESP_LOSE");
	HX_MARK_MEMBER_NAME(Command_obj::CMD_RESP_ENTER_DUNGEON,"CMD_RESP_ENTER_DUNGEON");
	HX_MARK_MEMBER_NAME(Command_obj::CMD_RESP_ENTER_PVP,"CMD_RESP_ENTER_PVP");
	HX_MARK_MEMBER_NAME(Command_obj::CMD_RESP_ENTER_PVP_NO_COMPETITOR,"CMD_RESP_ENTER_PVP_NO_COMPETITOR");
	HX_MARK_MEMBER_NAME(Command_obj::CMD_RESP_MATCH_PVP,"CMD_RESP_MATCH_PVP");
	HX_MARK_MEMBER_NAME(Command_obj::CMD_RESP_WIN_PVP,"CMD_RESP_WIN_PVP");
	HX_MARK_MEMBER_NAME(Command_obj::CMD_RESP_LOSE_PVP,"CMD_RESP_LOSE_PVP");
	HX_MARK_MEMBER_NAME(Command_obj::CMD_RESP_ENTER_PVE,"CMD_RESP_ENTER_PVE");
	HX_MARK_MEMBER_NAME(Command_obj::CMD_RESP_MATCH_PVE,"CMD_RESP_MATCH_PVE");
	HX_MARK_MEMBER_NAME(Command_obj::CMD_RESP_WIN_PVE,"CMD_RESP_WIN_PVE");
	HX_MARK_MEMBER_NAME(Command_obj::CMD_RESP_LOSE_PVE,"CMD_RESP_LOSE_PVE");
	HX_MARK_MEMBER_NAME(Command_obj::CMD_RESP_BATTLE_SKILL_SILENT,"CMD_RESP_BATTLE_SKILL_SILENT");
	HX_MARK_MEMBER_NAME(Command_obj::CMD_RESP_BATTLE_SKILL_FIRE,"CMD_RESP_BATTLE_SKILL_FIRE");
	HX_MARK_MEMBER_NAME(Command_obj::CMD_RESP_BATTLE_SKILL_HP,"CMD_RESP_BATTLE_SKILL_HP");
	HX_MARK_MEMBER_NAME(Command_obj::CMD_RESP_BATTLE_SKILL_FREEZE,"CMD_RESP_BATTLE_SKILL_FREEZE");
	HX_MARK_MEMBER_NAME(Command_obj::CMD_RESP_BATTLE_SKILL_CLEAN_MINE,"CMD_RESP_BATTLE_SKILL_CLEAN_MINE");
	HX_MARK_MEMBER_NAME(Command_obj::CMD_RESP_BATTLE_SKILL_CLEAN_ENEMY,"CMD_RESP_BATTLE_SKILL_CLEAN_ENEMY");
	HX_MARK_MEMBER_NAME(Command_obj::CMD_RESP_BATTLE_SKILL_DEFENSE,"CMD_RESP_BATTLE_SKILL_DEFENSE");
	HX_MARK_MEMBER_NAME(Command_obj::CMD_RESP_BATTLE_SKILL_SUCK,"CMD_RESP_BATTLE_SKILL_SUCK");
	HX_MARK_MEMBER_NAME(Command_obj::CMD_RESP_BATTLE_SKILL_OBSTACLES_SET,"CMD_RESP_BATTLE_SKILL_OBSTACLES_SET");
	HX_MARK_MEMBER_NAME(Command_obj::CMD_RESP_BATTLE_SKILL_GEMS_SET,"CMD_RESP_BATTLE_SKILL_GEMS_SET");
	HX_MARK_MEMBER_NAME(Command_obj::CMD_UPDATE_ITEMSET,"CMD_UPDATE_ITEMSET");
	HX_MARK_MEMBER_NAME(Command_obj::CMD_ADD_AUX_ITEM,"CMD_ADD_AUX_ITEM");
	HX_MARK_MEMBER_NAME(Command_obj::CMD_REMOVE_AUX_ITEM,"CMD_REMOVE_AUX_ITEM");
	HX_MARK_MEMBER_NAME(Command_obj::CMD_UPGRADE_ITEM,"CMD_UPGRADE_ITEM");
	HX_MARK_MEMBER_NAME(Command_obj::CMD_RESP_ITEM,"CMD_RESP_ITEM");
	HX_MARK_MEMBER_NAME(Command_obj::CMD_SKILL_CHOOSE,"CMD_SKILL_CHOOSE");
	HX_MARK_MEMBER_NAME(Command_obj::CMD_RESP_SKILL,"CMD_RESP_SKILL");
	HX_MARK_MEMBER_NAME(Command_obj::CMD_CHAT_SEND,"CMD_CHAT_SEND");
	HX_MARK_MEMBER_NAME(Command_obj::CMD_RESP_CHAT_MSG,"CMD_RESP_CHAT_MSG");
	HX_MARK_MEMBER_NAME(Command_obj::CMD_RESP_CHAT_BAN,"CMD_RESP_CHAT_BAN");
	HX_MARK_MEMBER_NAME(Command_obj::CMD_CHEAT,"CMD_CHEAT");
	HX_MARK_MEMBER_NAME(Command_obj::CMD_RESP_CHEAT_GOLD,"CMD_RESP_CHEAT_GOLD");
	HX_MARK_MEMBER_NAME(Command_obj::CMD_RESP_CHEAT_COIN,"CMD_RESP_CHEAT_COIN");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Command_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Command_obj::CMD_USER_LOGIN,"CMD_USER_LOGIN");
	HX_VISIT_MEMBER_NAME(Command_obj::CMD_RESP_USERINFO,"CMD_RESP_USERINFO");
	HX_VISIT_MEMBER_NAME(Command_obj::CMD_USER_UPGRADE_POWER,"CMD_USER_UPGRADE_POWER");
	HX_VISIT_MEMBER_NAME(Command_obj::CMD_RESP_UPGRADE_POWER_MAIN,"CMD_RESP_UPGRADE_POWER_MAIN");
	HX_VISIT_MEMBER_NAME(Command_obj::CMD_RESP_UPGRADE_POWER_SUB,"CMD_RESP_UPGRADE_POWER_SUB");
	HX_VISIT_MEMBER_NAME(Command_obj::CMD_GAME_DUNGEON_ENTER,"CMD_GAME_DUNGEON_ENTER");
	HX_VISIT_MEMBER_NAME(Command_obj::CMD_GAME_ENTER,"CMD_GAME_ENTER");
	HX_VISIT_MEMBER_NAME(Command_obj::CMD_GAME_PVE_ENTER,"CMD_GAME_PVE_ENTER");
	HX_VISIT_MEMBER_NAME(Command_obj::CMD_GAME_MATCH,"CMD_GAME_MATCH");
	HX_VISIT_MEMBER_NAME(Command_obj::CMD_GAME_ASK_LOSE,"CMD_GAME_ASK_LOSE");
	HX_VISIT_MEMBER_NAME(Command_obj::CMD_GAME_SYN_TIME,"CMD_GAME_SYN_TIME");
	HX_VISIT_MEMBER_NAME(Command_obj::CMD_GAME_ACTIVE_SKILL,"CMD_GAME_ACTIVE_SKILL");
	HX_VISIT_MEMBER_NAME(Command_obj::CMD_RESP_ANSWER_LOSE,"CMD_RESP_ANSWER_LOSE");
	HX_VISIT_MEMBER_NAME(Command_obj::CMD_RESP_SYN_TIME_MONSTER,"CMD_RESP_SYN_TIME_MONSTER");
	HX_VISIT_MEMBER_NAME(Command_obj::CMD_RESP_ENTER,"CMD_RESP_ENTER");
	HX_VISIT_MEMBER_NAME(Command_obj::CMD_RESP_MATCH,"CMD_RESP_MATCH");
	HX_VISIT_MEMBER_NAME(Command_obj::CMD_RESP_WIN,"CMD_RESP_WIN");
	HX_VISIT_MEMBER_NAME(Command_obj::CMD_RESP_LOSE,"CMD_RESP_LOSE");
	HX_VISIT_MEMBER_NAME(Command_obj::CMD_RESP_ENTER_DUNGEON,"CMD_RESP_ENTER_DUNGEON");
	HX_VISIT_MEMBER_NAME(Command_obj::CMD_RESP_ENTER_PVP,"CMD_RESP_ENTER_PVP");
	HX_VISIT_MEMBER_NAME(Command_obj::CMD_RESP_ENTER_PVP_NO_COMPETITOR,"CMD_RESP_ENTER_PVP_NO_COMPETITOR");
	HX_VISIT_MEMBER_NAME(Command_obj::CMD_RESP_MATCH_PVP,"CMD_RESP_MATCH_PVP");
	HX_VISIT_MEMBER_NAME(Command_obj::CMD_RESP_WIN_PVP,"CMD_RESP_WIN_PVP");
	HX_VISIT_MEMBER_NAME(Command_obj::CMD_RESP_LOSE_PVP,"CMD_RESP_LOSE_PVP");
	HX_VISIT_MEMBER_NAME(Command_obj::CMD_RESP_ENTER_PVE,"CMD_RESP_ENTER_PVE");
	HX_VISIT_MEMBER_NAME(Command_obj::CMD_RESP_MATCH_PVE,"CMD_RESP_MATCH_PVE");
	HX_VISIT_MEMBER_NAME(Command_obj::CMD_RESP_WIN_PVE,"CMD_RESP_WIN_PVE");
	HX_VISIT_MEMBER_NAME(Command_obj::CMD_RESP_LOSE_PVE,"CMD_RESP_LOSE_PVE");
	HX_VISIT_MEMBER_NAME(Command_obj::CMD_RESP_BATTLE_SKILL_SILENT,"CMD_RESP_BATTLE_SKILL_SILENT");
	HX_VISIT_MEMBER_NAME(Command_obj::CMD_RESP_BATTLE_SKILL_FIRE,"CMD_RESP_BATTLE_SKILL_FIRE");
	HX_VISIT_MEMBER_NAME(Command_obj::CMD_RESP_BATTLE_SKILL_HP,"CMD_RESP_BATTLE_SKILL_HP");
	HX_VISIT_MEMBER_NAME(Command_obj::CMD_RESP_BATTLE_SKILL_FREEZE,"CMD_RESP_BATTLE_SKILL_FREEZE");
	HX_VISIT_MEMBER_NAME(Command_obj::CMD_RESP_BATTLE_SKILL_CLEAN_MINE,"CMD_RESP_BATTLE_SKILL_CLEAN_MINE");
	HX_VISIT_MEMBER_NAME(Command_obj::CMD_RESP_BATTLE_SKILL_CLEAN_ENEMY,"CMD_RESP_BATTLE_SKILL_CLEAN_ENEMY");
	HX_VISIT_MEMBER_NAME(Command_obj::CMD_RESP_BATTLE_SKILL_DEFENSE,"CMD_RESP_BATTLE_SKILL_DEFENSE");
	HX_VISIT_MEMBER_NAME(Command_obj::CMD_RESP_BATTLE_SKILL_SUCK,"CMD_RESP_BATTLE_SKILL_SUCK");
	HX_VISIT_MEMBER_NAME(Command_obj::CMD_RESP_BATTLE_SKILL_OBSTACLES_SET,"CMD_RESP_BATTLE_SKILL_OBSTACLES_SET");
	HX_VISIT_MEMBER_NAME(Command_obj::CMD_RESP_BATTLE_SKILL_GEMS_SET,"CMD_RESP_BATTLE_SKILL_GEMS_SET");
	HX_VISIT_MEMBER_NAME(Command_obj::CMD_UPDATE_ITEMSET,"CMD_UPDATE_ITEMSET");
	HX_VISIT_MEMBER_NAME(Command_obj::CMD_ADD_AUX_ITEM,"CMD_ADD_AUX_ITEM");
	HX_VISIT_MEMBER_NAME(Command_obj::CMD_REMOVE_AUX_ITEM,"CMD_REMOVE_AUX_ITEM");
	HX_VISIT_MEMBER_NAME(Command_obj::CMD_UPGRADE_ITEM,"CMD_UPGRADE_ITEM");
	HX_VISIT_MEMBER_NAME(Command_obj::CMD_RESP_ITEM,"CMD_RESP_ITEM");
	HX_VISIT_MEMBER_NAME(Command_obj::CMD_SKILL_CHOOSE,"CMD_SKILL_CHOOSE");
	HX_VISIT_MEMBER_NAME(Command_obj::CMD_RESP_SKILL,"CMD_RESP_SKILL");
	HX_VISIT_MEMBER_NAME(Command_obj::CMD_CHAT_SEND,"CMD_CHAT_SEND");
	HX_VISIT_MEMBER_NAME(Command_obj::CMD_RESP_CHAT_MSG,"CMD_RESP_CHAT_MSG");
	HX_VISIT_MEMBER_NAME(Command_obj::CMD_RESP_CHAT_BAN,"CMD_RESP_CHAT_BAN");
	HX_VISIT_MEMBER_NAME(Command_obj::CMD_CHEAT,"CMD_CHEAT");
	HX_VISIT_MEMBER_NAME(Command_obj::CMD_RESP_CHEAT_GOLD,"CMD_RESP_CHEAT_GOLD");
	HX_VISIT_MEMBER_NAME(Command_obj::CMD_RESP_CHEAT_COIN,"CMD_RESP_CHEAT_COIN");
};

#endif

Class Command_obj::__mClass;

void Command_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("game.network.packet.Command"), hx::TCanCast< Command_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void Command_obj::__boot()
{
	CMD_USER_LOGIN= (int)100;
	CMD_RESP_USERINFO= (int)101;
	CMD_USER_UPGRADE_POWER= (int)102;
	CMD_RESP_UPGRADE_POWER_MAIN= (int)103;
	CMD_RESP_UPGRADE_POWER_SUB= (int)104;
	CMD_GAME_DUNGEON_ENTER= (int)200;
	CMD_GAME_ENTER= (int)201;
	CMD_GAME_PVE_ENTER= (int)202;
	CMD_GAME_MATCH= (int)203;
	CMD_GAME_ASK_LOSE= (int)204;
	CMD_GAME_SYN_TIME= (int)205;
	CMD_GAME_ACTIVE_SKILL= (int)206;
	CMD_RESP_ANSWER_LOSE= (int)207;
	CMD_RESP_SYN_TIME_MONSTER= (int)208;
	CMD_RESP_ENTER= (int)209;
	CMD_RESP_MATCH= (int)210;
	CMD_RESP_WIN= (int)211;
	CMD_RESP_LOSE= (int)212;
	CMD_RESP_ENTER_DUNGEON= (int)213;
	CMD_RESP_ENTER_PVP= (int)214;
	CMD_RESP_ENTER_PVP_NO_COMPETITOR= (int)215;
	CMD_RESP_MATCH_PVP= (int)216;
	CMD_RESP_WIN_PVP= (int)217;
	CMD_RESP_LOSE_PVP= (int)218;
	CMD_RESP_ENTER_PVE= (int)219;
	CMD_RESP_MATCH_PVE= (int)220;
	CMD_RESP_WIN_PVE= (int)221;
	CMD_RESP_LOSE_PVE= (int)222;
	CMD_RESP_BATTLE_SKILL_SILENT= (int)223;
	CMD_RESP_BATTLE_SKILL_FIRE= (int)224;
	CMD_RESP_BATTLE_SKILL_HP= (int)225;
	CMD_RESP_BATTLE_SKILL_FREEZE= (int)226;
	CMD_RESP_BATTLE_SKILL_CLEAN_MINE= (int)227;
	CMD_RESP_BATTLE_SKILL_CLEAN_ENEMY= (int)228;
	CMD_RESP_BATTLE_SKILL_DEFENSE= (int)229;
	CMD_RESP_BATTLE_SKILL_SUCK= (int)230;
	CMD_RESP_BATTLE_SKILL_OBSTACLES_SET= (int)231;
	CMD_RESP_BATTLE_SKILL_GEMS_SET= (int)232;
	CMD_UPDATE_ITEMSET= (int)250;
	CMD_ADD_AUX_ITEM= (int)251;
	CMD_REMOVE_AUX_ITEM= (int)252;
	CMD_UPGRADE_ITEM= (int)253;
	CMD_RESP_ITEM= (int)254;
	CMD_SKILL_CHOOSE= (int)270;
	CMD_RESP_SKILL= (int)271;
	CMD_CHAT_SEND= (int)280;
	CMD_RESP_CHAT_MSG= (int)281;
	CMD_RESP_CHAT_BAN= (int)282;
	CMD_CHEAT= (int)290;
	CMD_RESP_CHEAT_GOLD= (int)291;
	CMD_RESP_CHEAT_COIN= (int)292;
}

} // end namespace game
} // end namespace network
} // end namespace packet
