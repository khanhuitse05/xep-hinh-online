#include <hxcpp.h>

#ifndef INCLUDED_core_display_dialog_DialogManager
#include <core/display/dialog/DialogManager.h>
#endif
#ifndef INCLUDED_core_display_screen_ScreenManager
#include <core/display/screen/ScreenManager.h>
#endif
namespace core{
namespace display{
namespace dialog{

Void DialogManager_obj::__construct()
{
HX_STACK_FRAME("core.display.dialog.DialogManager","new",0x05b42e4c,"core.display.dialog.DialogManager.new","core/display/dialog/DialogManager.hx",15,0xc29467e3)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(15)
	super::__construct();
}
;
	return null();
}

//DialogManager_obj::~DialogManager_obj() { }

Dynamic DialogManager_obj::__CreateEmpty() { return  new DialogManager_obj; }
hx::ObjectPtr< DialogManager_obj > DialogManager_obj::__new()
{  hx::ObjectPtr< DialogManager_obj > result = new DialogManager_obj();
	result->__construct();
	return result;}

Dynamic DialogManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DialogManager_obj > result = new DialogManager_obj();
	result->__construct();
	return result;}


DialogManager_obj::DialogManager_obj()
{
}

Dynamic DialogManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic DialogManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void DialogManager_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(DialogManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DialogManager_obj::__mClass,"__mClass");
};

#endif

Class DialogManager_obj::__mClass;

void DialogManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("core.display.dialog.DialogManager"), hx::TCanCast< DialogManager_obj> ,sStaticFields,sMemberFields,
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

void DialogManager_obj::__boot()
{
}

} // end namespace core
} // end namespace display
} // end namespace dialog
