#include <hxcpp.h>

#ifndef INCLUDED_core_display_popup_PopupID
#include <core/display/popup/PopupID.h>
#endif
#ifndef INCLUDED_core_display_screen_Screen
#include <core/display/screen/Screen.h>
#endif
namespace core{
namespace display{
namespace popup{

Void PopupID_obj::__construct(::Class className)
{
HX_STACK_FRAME("core.display.popup.PopupID","new",0x573d991c,"core.display.popup.PopupID.new","core/display/popup/PopupID.hx",15,0xb5fe7617)
HX_STACK_THIS(this)
HX_STACK_ARG(className,"className")
{
	HX_STACK_LINE(15)
	super::__construct((int)2,null(),className);
}
;
	return null();
}

//PopupID_obj::~PopupID_obj() { }

Dynamic PopupID_obj::__CreateEmpty() { return  new PopupID_obj; }
hx::ObjectPtr< PopupID_obj > PopupID_obj::__new(::Class className)
{  hx::ObjectPtr< PopupID_obj > result = new PopupID_obj();
	result->__construct(className);
	return result;}

Dynamic PopupID_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PopupID_obj > result = new PopupID_obj();
	result->__construct(inArgs[0]);
	return result;}


PopupID_obj::PopupID_obj()
{
}

Dynamic PopupID_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic PopupID_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void PopupID_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(PopupID_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PopupID_obj::__mClass,"__mClass");
};

#endif

Class PopupID_obj::__mClass;

void PopupID_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("core.display.popup.PopupID"), hx::TCanCast< PopupID_obj> ,sStaticFields,sMemberFields,
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

void PopupID_obj::__boot()
{
}

} // end namespace core
} // end namespace display
} // end namespace popup
