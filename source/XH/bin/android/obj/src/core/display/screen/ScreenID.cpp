#include <hxcpp.h>

#ifndef INCLUDED_core_display_ex_ExSprite
#include <core/display/ex/ExSprite.h>
#endif
#ifndef INCLUDED_core_display_scene_SceneBase
#include <core/display/scene/SceneBase.h>
#endif
#ifndef INCLUDED_core_display_scene_SceneID
#include <core/display/scene/SceneID.h>
#endif
#ifndef INCLUDED_core_display_scene_SceneView
#include <core/display/scene/SceneView.h>
#endif
#ifndef INCLUDED_core_display_screen_Screen
#include <core/display/screen/Screen.h>
#endif
#ifndef INCLUDED_core_display_screen_ScreenBase
#include <core/display/screen/ScreenBase.h>
#endif
#ifndef INCLUDED_core_display_screen_ScreenID
#include <core/display/screen/ScreenID.h>
#endif
#ifndef INCLUDED_core_display_screen_ScreenView
#include <core/display/screen/ScreenView.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObjectContainer
#include <openfl/_v2/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_scene_battle_Battle
#include <scene/battle/Battle.h>
#endif
#ifndef INCLUDED_scene_battle_BattleView
#include <scene/battle/BattleView.h>
#endif
#ifndef INCLUDED_scene_friendplay_FriendPlay
#include <scene/friendplay/FriendPlay.h>
#endif
#ifndef INCLUDED_scene_friendplay_FriendPlayView
#include <scene/friendplay/FriendPlayView.h>
#endif
#ifndef INCLUDED_scene_home_Home
#include <scene/home/Home.h>
#endif
#ifndef INCLUDED_scene_home_HomeView
#include <scene/home/HomeView.h>
#endif
#ifndef INCLUDED_scene_loading_LoadFist
#include <scene/loading/LoadFist.h>
#endif
#ifndef INCLUDED_scene_loading_LoadFistView
#include <scene/loading/LoadFistView.h>
#endif
#ifndef INCLUDED_scene_login_Login
#include <scene/login/Login.h>
#endif
#ifndef INCLUDED_scene_login_LoginView
#include <scene/login/LoginView.h>
#endif
#ifndef INCLUDED_scene_mission_Mission
#include <scene/mission/Mission.h>
#endif
#ifndef INCLUDED_scene_mission_MissionView
#include <scene/mission/MissionView.h>
#endif
#ifndef INCLUDED_scene_singleplay_SinglePlay
#include <scene/singleplay/SinglePlay.h>
#endif
#ifndef INCLUDED_scene_singleplay_SinglePlayView
#include <scene/singleplay/SinglePlayView.h>
#endif
namespace core{
namespace display{
namespace screen{

Void ScreenID_obj::__construct()
{
HX_STACK_FRAME("core.display.screen.ScreenID","new",0x19f94960,"core.display.screen.ScreenID.new","core/display/screen/ScreenID.hx",36,0xb1c64131)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//ScreenID_obj::~ScreenID_obj() { }

Dynamic ScreenID_obj::__CreateEmpty() { return  new ScreenID_obj; }
hx::ObjectPtr< ScreenID_obj > ScreenID_obj::__new()
{  hx::ObjectPtr< ScreenID_obj > result = new ScreenID_obj();
	result->__construct();
	return result;}

Dynamic ScreenID_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ScreenID_obj > result = new ScreenID_obj();
	result->__construct();
	return result;}

::core::display::scene::SceneID ScreenID_obj::LOGIN;

::core::display::scene::SceneID ScreenID_obj::LOADFIST;

::core::display::scene::SceneID ScreenID_obj::HOME;

::core::display::scene::SceneID ScreenID_obj::BATTLE;

::core::display::scene::SceneID ScreenID_obj::SINGLEPLAY;

::core::display::scene::SceneID ScreenID_obj::FRIENDPLAY;

::core::display::scene::SceneID ScreenID_obj::MISSION;


ScreenID_obj::ScreenID_obj()
{
}

Dynamic ScreenID_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"HOME") ) { return HOME; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"LOGIN") ) { return LOGIN; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"BATTLE") ) { return BATTLE; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"MISSION") ) { return MISSION; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"LOADFIST") ) { return LOADFIST; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"SINGLEPLAY") ) { return SINGLEPLAY; }
		if (HX_FIELD_EQ(inName,"FRIENDPLAY") ) { return FRIENDPLAY; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ScreenID_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"HOME") ) { HOME=inValue.Cast< ::core::display::scene::SceneID >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"LOGIN") ) { LOGIN=inValue.Cast< ::core::display::scene::SceneID >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"BATTLE") ) { BATTLE=inValue.Cast< ::core::display::scene::SceneID >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"MISSION") ) { MISSION=inValue.Cast< ::core::display::scene::SceneID >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"LOADFIST") ) { LOADFIST=inValue.Cast< ::core::display::scene::SceneID >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"SINGLEPLAY") ) { SINGLEPLAY=inValue.Cast< ::core::display::scene::SceneID >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRIENDPLAY") ) { FRIENDPLAY=inValue.Cast< ::core::display::scene::SceneID >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ScreenID_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("LOGIN"),
	HX_CSTRING("LOADFIST"),
	HX_CSTRING("HOME"),
	HX_CSTRING("BATTLE"),
	HX_CSTRING("SINGLEPLAY"),
	HX_CSTRING("FRIENDPLAY"),
	HX_CSTRING("MISSION"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ScreenID_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ScreenID_obj::LOGIN,"LOGIN");
	HX_MARK_MEMBER_NAME(ScreenID_obj::LOADFIST,"LOADFIST");
	HX_MARK_MEMBER_NAME(ScreenID_obj::HOME,"HOME");
	HX_MARK_MEMBER_NAME(ScreenID_obj::BATTLE,"BATTLE");
	HX_MARK_MEMBER_NAME(ScreenID_obj::SINGLEPLAY,"SINGLEPLAY");
	HX_MARK_MEMBER_NAME(ScreenID_obj::FRIENDPLAY,"FRIENDPLAY");
	HX_MARK_MEMBER_NAME(ScreenID_obj::MISSION,"MISSION");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ScreenID_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ScreenID_obj::LOGIN,"LOGIN");
	HX_VISIT_MEMBER_NAME(ScreenID_obj::LOADFIST,"LOADFIST");
	HX_VISIT_MEMBER_NAME(ScreenID_obj::HOME,"HOME");
	HX_VISIT_MEMBER_NAME(ScreenID_obj::BATTLE,"BATTLE");
	HX_VISIT_MEMBER_NAME(ScreenID_obj::SINGLEPLAY,"SINGLEPLAY");
	HX_VISIT_MEMBER_NAME(ScreenID_obj::FRIENDPLAY,"FRIENDPLAY");
	HX_VISIT_MEMBER_NAME(ScreenID_obj::MISSION,"MISSION");
};

#endif

Class ScreenID_obj::__mClass;

void ScreenID_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("core.display.screen.ScreenID"), hx::TCanCast< ScreenID_obj> ,sStaticFields,sMemberFields,
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

void ScreenID_obj::__boot()
{
	LOGIN= ::core::display::scene::SceneID_obj::__new(hx::ClassOf< ::scene::login::Login >(),hx::ClassOf< ::scene::login::LoginView >());
	LOADFIST= ::core::display::scene::SceneID_obj::__new(hx::ClassOf< ::scene::loading::LoadFist >(),hx::ClassOf< ::scene::loading::LoadFistView >());
	HOME= ::core::display::scene::SceneID_obj::__new(hx::ClassOf< ::scene::home::Home >(),hx::ClassOf< ::scene::home::HomeView >());
	BATTLE= ::core::display::scene::SceneID_obj::__new(hx::ClassOf< ::scene::battle::Battle >(),hx::ClassOf< ::scene::battle::BattleView >());
	SINGLEPLAY= ::core::display::scene::SceneID_obj::__new(hx::ClassOf< ::scene::singleplay::SinglePlay >(),hx::ClassOf< ::scene::singleplay::SinglePlayView >());
	FRIENDPLAY= ::core::display::scene::SceneID_obj::__new(hx::ClassOf< ::scene::friendplay::FriendPlay >(),hx::ClassOf< ::scene::friendplay::FriendPlayView >());
	MISSION= ::core::display::scene::SceneID_obj::__new(hx::ClassOf< ::scene::mission::Mission >(),hx::ClassOf< ::scene::mission::MissionView >());
}

} // end namespace core
} // end namespace display
} // end namespace screen
