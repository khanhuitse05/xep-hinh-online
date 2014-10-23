#include <hxcpp.h>

#ifndef INCLUDED_core_display_scene_SceneID
#include <core/display/scene/SceneID.h>
#endif
#ifndef INCLUDED_core_display_screen_Screen
#include <core/display/screen/Screen.h>
#endif
namespace core{
namespace display{
namespace scene{

Void SceneID_obj::__construct(::Class className,::Class viewName)
{
HX_STACK_FRAME("core.display.scene.SceneID","new",0xe5f57f5c,"core.display.scene.SceneID.new","core/display/scene/SceneID.hx",21,0x563417d7)
HX_STACK_THIS(this)
HX_STACK_ARG(className,"className")
HX_STACK_ARG(viewName,"viewName")
{
	HX_STACK_LINE(21)
	super::__construct((int)0,className,viewName);
}
;
	return null();
}

//SceneID_obj::~SceneID_obj() { }

Dynamic SceneID_obj::__CreateEmpty() { return  new SceneID_obj; }
hx::ObjectPtr< SceneID_obj > SceneID_obj::__new(::Class className,::Class viewName)
{  hx::ObjectPtr< SceneID_obj > result = new SceneID_obj();
	result->__construct(className,viewName);
	return result;}

Dynamic SceneID_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SceneID_obj > result = new SceneID_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


SceneID_obj::SceneID_obj()
{
}

Dynamic SceneID_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic SceneID_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void SceneID_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(SceneID_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SceneID_obj::__mClass,"__mClass");
};

#endif

Class SceneID_obj::__mClass;

void SceneID_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("core.display.scene.SceneID"), hx::TCanCast< SceneID_obj> ,sStaticFields,sMemberFields,
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

void SceneID_obj::__boot()
{
}

} // end namespace core
} // end namespace display
} // end namespace scene
