#include <hxcpp.h>

#ifndef INCLUDED_tweenx909_TweenX
#include <tweenx909/TweenX.h>
#endif
#ifndef INCLUDED_tweenx909_advanced_CommandTypeX
#include <tweenx909/advanced/CommandTypeX.h>
#endif
#ifndef INCLUDED_tweenx909_advanced_CommandX
#include <tweenx909/advanced/CommandX.h>
#endif
namespace tweenx909{
namespace advanced{

::tweenx909::advanced::CommandTypeX  CommandTypeX_obj::TWEEN(::tweenx909::TweenX tween)
	{ return hx::CreateEnum< CommandTypeX_obj >(HX_CSTRING("TWEEN"),0,hx::DynamicArray(0,1).Add(tween)); }

::tweenx909::advanced::CommandTypeX  CommandTypeX_obj::WAIT(Float delay)
	{ return hx::CreateEnum< CommandTypeX_obj >(HX_CSTRING("WAIT"),1,hx::DynamicArray(0,1).Add(delay)); }

HX_DEFINE_CREATE_ENUM(CommandTypeX_obj)

int CommandTypeX_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("TWEEN")) return 0;
	if (inName==HX_CSTRING("WAIT")) return 1;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(CommandTypeX_obj,TWEEN,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(CommandTypeX_obj,WAIT,return)

int CommandTypeX_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("TWEEN")) return 1;
	if (inName==HX_CSTRING("WAIT")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic CommandTypeX_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("TWEEN")) return TWEEN_dyn();
	if (inName==HX_CSTRING("WAIT")) return WAIT_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("TWEEN"),
	HX_CSTRING("WAIT"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CommandTypeX_obj::__mClass,"__mClass");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class CommandTypeX_obj::__mClass;

Dynamic __Create_CommandTypeX_obj() { return new CommandTypeX_obj; }

void CommandTypeX_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("tweenx909.advanced.CommandTypeX"), hx::TCanCast< CommandTypeX_obj >,sStaticFields,sMemberFields,
	&__Create_CommandTypeX_obj, &__Create,
	&super::__SGetClass(), &CreateCommandTypeX_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void CommandTypeX_obj::__boot()
{
}


} // end namespace tweenx909
} // end namespace advanced
