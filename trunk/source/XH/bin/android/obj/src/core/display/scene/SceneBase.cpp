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
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
namespace core{
namespace display{
namespace scene{

Void SceneBase_obj::__construct(::core::display::scene::SceneID sceneID)
{
HX_STACK_FRAME("core.display.scene.SceneBase","new",0xd709d872,"core.display.scene.SceneBase.new","core/display/scene/SceneBase.hx",15,0x8b00ca41)
HX_STACK_THIS(this)
HX_STACK_ARG(sceneID,"sceneID")
{
	HX_STACK_LINE(15)
	super::__construct(sceneID);
}
;
	return null();
}

//SceneBase_obj::~SceneBase_obj() { }

Dynamic SceneBase_obj::__CreateEmpty() { return  new SceneBase_obj; }
hx::ObjectPtr< SceneBase_obj > SceneBase_obj::__new(::core::display::scene::SceneID sceneID)
{  hx::ObjectPtr< SceneBase_obj > result = new SceneBase_obj();
	result->__construct(sceneID);
	return result;}

Dynamic SceneBase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SceneBase_obj > result = new SceneBase_obj();
	result->__construct(inArgs[0]);
	return result;}


SceneBase_obj::SceneBase_obj()
{
}

Dynamic SceneBase_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic SceneBase_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void SceneBase_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SceneBase_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SceneBase_obj::__mClass,"__mClass");
};

#endif

Class SceneBase_obj::__mClass;

void SceneBase_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("core.display.scene.SceneBase"), hx::TCanCast< SceneBase_obj> ,sStaticFields,sMemberFields,
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

void SceneBase_obj::__boot()
{
}

} // end namespace core
} // end namespace display
} // end namespace scene
