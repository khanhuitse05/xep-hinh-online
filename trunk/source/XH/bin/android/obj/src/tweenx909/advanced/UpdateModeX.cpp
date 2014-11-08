#include <hxcpp.h>

#ifndef INCLUDED_tweenx909_advanced_UpdateModeX
#include <tweenx909/advanced/UpdateModeX.h>
#endif
namespace tweenx909{
namespace advanced{

::tweenx909::advanced::UpdateModeX UpdateModeX_obj::MANUAL;

::tweenx909::advanced::UpdateModeX  UpdateModeX_obj::TIME(Float frameRate)
	{ return hx::CreateEnum< UpdateModeX_obj >(HX_CSTRING("TIME"),1,hx::DynamicArray(0,1).Add(frameRate)); }

HX_DEFINE_CREATE_ENUM(UpdateModeX_obj)

int UpdateModeX_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("MANUAL")) return 0;
	if (inName==HX_CSTRING("TIME")) return 1;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(UpdateModeX_obj,TIME,return)

int UpdateModeX_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("MANUAL")) return 0;
	if (inName==HX_CSTRING("TIME")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic UpdateModeX_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("MANUAL")) return MANUAL;
	if (inName==HX_CSTRING("TIME")) return TIME_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("MANUAL"),
	HX_CSTRING("TIME"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UpdateModeX_obj::MANUAL,"MANUAL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UpdateModeX_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(UpdateModeX_obj::MANUAL,"MANUAL");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class UpdateModeX_obj::__mClass;

Dynamic __Create_UpdateModeX_obj() { return new UpdateModeX_obj; }

void UpdateModeX_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("tweenx909.advanced.UpdateModeX"), hx::TCanCast< UpdateModeX_obj >,sStaticFields,sMemberFields,
	&__Create_UpdateModeX_obj, &__Create,
	&super::__SGetClass(), &CreateUpdateModeX_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void UpdateModeX_obj::__boot()
{
hx::Static(MANUAL) = hx::CreateEnum< UpdateModeX_obj >(HX_CSTRING("MANUAL"),0);
}


} // end namespace tweenx909
} // end namespace advanced
