#include <hxcpp.h>

#ifndef INCLUDED_core_display_ex_ExSprite
#include <core/display/ex/ExSprite.h>
#endif
#ifndef INCLUDED_core_display_scene_SceneView
#include <core/display/scene/SceneView.h>
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
namespace core{
namespace display{
namespace scene{

Void SceneView_obj::__construct()
{
HX_STACK_FRAME("core.display.scene.SceneView","new",0x5fdddcc6,"core.display.scene.SceneView.new","core/display/scene/SceneView.hx",14,0xf9d2ac6d)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(14)
	super::__construct();
}
;
	return null();
}

//SceneView_obj::~SceneView_obj() { }

Dynamic SceneView_obj::__CreateEmpty() { return  new SceneView_obj; }
hx::ObjectPtr< SceneView_obj > SceneView_obj::__new()
{  hx::ObjectPtr< SceneView_obj > result = new SceneView_obj();
	result->__construct();
	return result;}

Dynamic SceneView_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SceneView_obj > result = new SceneView_obj();
	result->__construct();
	return result;}


SceneView_obj::SceneView_obj()
{
}

Dynamic SceneView_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic SceneView_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void SceneView_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(SceneView_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SceneView_obj::__mClass,"__mClass");
};

#endif

Class SceneView_obj::__mClass;

void SceneView_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("core.display.scene.SceneView"), hx::TCanCast< SceneView_obj> ,sStaticFields,sMemberFields,
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

void SceneView_obj::__boot()
{
}

} // end namespace core
} // end namespace display
} // end namespace scene
