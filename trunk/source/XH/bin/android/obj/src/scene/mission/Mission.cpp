#include <hxcpp.h>

#ifndef INCLUDED_core_display_scene_SceneBase
#include <core/display/scene/SceneBase.h>
#endif
#ifndef INCLUDED_core_display_scene_SceneID
#include <core/display/scene/SceneID.h>
#endif
#ifndef INCLUDED_core_display_screen_Screen
#include <core/display/screen/Screen.h>
#endif
#ifndef INCLUDED_core_display_screen_ScreenBase
#include <core/display/screen/ScreenBase.h>
#endif
#ifndef INCLUDED_core_event_EventEx
#include <core/event/EventEx.h>
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
#ifndef INCLUDED_scene_mission_Mission
#include <scene/mission/Mission.h>
#endif
namespace scene{
namespace mission{

Void Mission_obj::__construct(::core::display::scene::SceneID sceneID)
{
HX_STACK_FRAME("scene.mission.Mission","new",0xdda31fda,"scene.mission.Mission.new","scene/mission/Mission.hx",16,0x6c829858)
HX_STACK_THIS(this)
HX_STACK_ARG(sceneID,"sceneID")
{
	HX_STACK_LINE(16)
	super::__construct(sceneID);
}
;
	return null();
}

//Mission_obj::~Mission_obj() { }

Dynamic Mission_obj::__CreateEmpty() { return  new Mission_obj; }
hx::ObjectPtr< Mission_obj > Mission_obj::__new(::core::display::scene::SceneID sceneID)
{  hx::ObjectPtr< Mission_obj > result = new Mission_obj();
	result->__construct(sceneID);
	return result;}

Dynamic Mission_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Mission_obj > result = new Mission_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Mission_obj::onTransitionInComplete( ){
{
		HX_STACK_FRAME("scene.mission.Mission","onTransitionInComplete",0x123f7f38,"scene.mission.Mission.onTransitionInComplete","scene/mission/Mission.hx",20,0x6c829858)
		HX_STACK_THIS(this)
		HX_STACK_LINE(21)
		this->super::onTransitionInComplete();
		HX_STACK_LINE(22)
		::game::tnk::Game_obj::server->addEventListener(::game::network::Server_obj::SERVER_DATA,this->onServerData_dyn(),null(),null(),null());
	}
return null();
}


Void Mission_obj::onServerData( ::core::event::EventEx e){
{
		HX_STACK_FRAME("scene.mission.Mission","onServerData",0x68937dd2,"scene.mission.Mission.onServerData","scene/mission/Mission.hx",26,0x6c829858)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Mission_obj,onServerData,(void))

Void Mission_obj::onTransitionOutComplete( ){
{
		HX_STACK_FRAME("scene.mission.Mission","onTransitionOutComplete",0x2a616cad,"scene.mission.Mission.onTransitionOutComplete","scene/mission/Mission.hx",30,0x6c829858)
		HX_STACK_THIS(this)
		HX_STACK_LINE(31)
		this->super::onTransitionOutComplete();
		HX_STACK_LINE(32)
		::game::tnk::Game_obj::server->removeEventListener(::game::network::Server_obj::SERVER_DATA,this->onServerData_dyn(),null());
	}
return null();
}



Mission_obj::Mission_obj()
{
}

Dynamic Mission_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"onServerData") ) { return onServerData_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"onTransitionInComplete") ) { return onTransitionInComplete_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"onTransitionOutComplete") ) { return onTransitionOutComplete_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Mission_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Mission_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("onTransitionInComplete"),
	HX_CSTRING("onServerData"),
	HX_CSTRING("onTransitionOutComplete"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Mission_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Mission_obj::__mClass,"__mClass");
};

#endif

Class Mission_obj::__mClass;

void Mission_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("scene.mission.Mission"), hx::TCanCast< Mission_obj> ,sStaticFields,sMemberFields,
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

void Mission_obj::__boot()
{
}

} // end namespace scene
} // end namespace mission
