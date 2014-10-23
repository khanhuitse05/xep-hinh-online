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
#ifndef INCLUDED_scene_login_Login
#include <scene/login/Login.h>
#endif
#ifndef INCLUDED_scene_login_LoginView
#include <scene/login/LoginView.h>
#endif
namespace core{
namespace display{
namespace screen{

Void ScreenID_obj::__construct()
{
HX_STACK_FRAME("core.display.screen.ScreenID","new",0x19f94960,"core.display.screen.ScreenID.new","core/display/screen/ScreenID.hx",18,0xb1c64131)
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


ScreenID_obj::ScreenID_obj()
{
}

Dynamic ScreenID_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"LOGIN") ) { return LOGIN; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ScreenID_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"LOGIN") ) { LOGIN=inValue.Cast< ::core::display::scene::SceneID >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ScreenID_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("LOGIN"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ScreenID_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ScreenID_obj::LOGIN,"LOGIN");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ScreenID_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ScreenID_obj::LOGIN,"LOGIN");
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
}

} // end namespace core
} // end namespace display
} // end namespace screen
