#include <hxcpp.h>

#ifndef INCLUDED_core_event_EventEx
#include <core/event/EventEx.h>
#endif
#ifndef INCLUDED_game_data_InventoryData
#include <game/data/InventoryData.h>
#endif
#ifndef INCLUDED_game_data_PlayerData
#include <game/data/PlayerData.h>
#endif
#ifndef INCLUDED_game_network_Server
#include <game/network/Server.h>
#endif
#ifndef INCLUDED_game_tnk_Game
#include <game/tnk/Game.h>
#endif
#ifndef INCLUDED_openfl__v2_events_Event
#include <openfl/_v2/events/Event.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
namespace game{
namespace data{

Void PlayerData_obj::__construct()
{
HX_STACK_FRAME("game.data.PlayerData","new",0xa9a42405,"game.data.PlayerData.new","game/data/PlayerData.hx",11,0x00bd6aab)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(17)
	this->inventory = ::game::data::InventoryData_obj::__new();
	HX_STACK_LINE(13)
	this->playerName = HX_CSTRING("NoName");
	HX_STACK_LINE(21)
	super::__construct(null());
	HX_STACK_LINE(22)
	::game::tnk::Game_obj::server->addEventListener(::game::network::Server_obj::SERVER_DATA,this->onServerData_dyn(),null(),null(),null());
}
;
	return null();
}

//PlayerData_obj::~PlayerData_obj() { }

Dynamic PlayerData_obj::__CreateEmpty() { return  new PlayerData_obj; }
hx::ObjectPtr< PlayerData_obj > PlayerData_obj::__new()
{  hx::ObjectPtr< PlayerData_obj > result = new PlayerData_obj();
	result->__construct();
	return result;}

Dynamic PlayerData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayerData_obj > result = new PlayerData_obj();
	result->__construct();
	return result;}

Void PlayerData_obj::onServerData( ::core::event::EventEx e){
{
		HX_STACK_FRAME("game.data.PlayerData","onServerData",0x0ad41c47,"game.data.PlayerData.onServerData","game/data/PlayerData.hx",26,0x00bd6aab)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlayerData_obj,onServerData,(void))


PlayerData_obj::PlayerData_obj()
{
}

void PlayerData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayerData);
	HX_MARK_MEMBER_NAME(playerName,"playerName");
	HX_MARK_MEMBER_NAME(level,"level");
	HX_MARK_MEMBER_NAME(scores,"scores");
	HX_MARK_MEMBER_NAME(gold,"gold");
	HX_MARK_MEMBER_NAME(inventory,"inventory");
	::openfl::_v2::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayerData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(playerName,"playerName");
	HX_VISIT_MEMBER_NAME(level,"level");
	HX_VISIT_MEMBER_NAME(scores,"scores");
	HX_VISIT_MEMBER_NAME(gold,"gold");
	HX_VISIT_MEMBER_NAME(inventory,"inventory");
	::openfl::_v2::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PlayerData_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"gold") ) { return gold; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"level") ) { return level; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scores") ) { return scores; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"inventory") ) { return inventory; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"playerName") ) { return playerName; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onServerData") ) { return onServerData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayerData_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"gold") ) { gold=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"level") ) { level=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scores") ) { scores=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"inventory") ) { inventory=inValue.Cast< ::game::data::InventoryData >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"playerName") ) { playerName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayerData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("playerName"));
	outFields->push(HX_CSTRING("level"));
	outFields->push(HX_CSTRING("scores"));
	outFields->push(HX_CSTRING("gold"));
	outFields->push(HX_CSTRING("inventory"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(PlayerData_obj,playerName),HX_CSTRING("playerName")},
	{hx::fsInt,(int)offsetof(PlayerData_obj,level),HX_CSTRING("level")},
	{hx::fsInt,(int)offsetof(PlayerData_obj,scores),HX_CSTRING("scores")},
	{hx::fsInt,(int)offsetof(PlayerData_obj,gold),HX_CSTRING("gold")},
	{hx::fsObject /*::game::data::InventoryData*/ ,(int)offsetof(PlayerData_obj,inventory),HX_CSTRING("inventory")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("playerName"),
	HX_CSTRING("level"),
	HX_CSTRING("scores"),
	HX_CSTRING("gold"),
	HX_CSTRING("inventory"),
	HX_CSTRING("onServerData"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayerData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayerData_obj::__mClass,"__mClass");
};

#endif

Class PlayerData_obj::__mClass;

void PlayerData_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("game.data.PlayerData"), hx::TCanCast< PlayerData_obj> ,sStaticFields,sMemberFields,
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

void PlayerData_obj::__boot()
{
}

} // end namespace game
} // end namespace data
