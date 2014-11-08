#include <hxcpp.h>

#ifndef INCLUDED_tweenx909_advanced_GroupX
#include <tweenx909/advanced/GroupX.h>
#endif
#ifndef INCLUDED_tweenx909_advanced_TweenTypeX
#include <tweenx909/advanced/TweenTypeX.h>
#endif
namespace tweenx909{
namespace advanced{

::tweenx909::advanced::TweenTypeX  TweenTypeX_obj::ARRAY(Dynamic targets,Dynamic _from,Dynamic _to)
	{ return hx::CreateEnum< TweenTypeX_obj >(HX_CSTRING("ARRAY"),1,hx::DynamicArray(0,3).Add(targets).Add(_from).Add(_to)); }

::tweenx909::advanced::TweenTypeX  TweenTypeX_obj::CALL(Dynamic func)
	{ return hx::CreateEnum< TweenTypeX_obj >(HX_CSTRING("CALL"),4,hx::DynamicArray(0,1).Add(func)); }

::tweenx909::advanced::TweenTypeX  TweenTypeX_obj::FROM_TO(Dynamic target,Dynamic _from,Dynamic _to)
	{ return hx::CreateEnum< TweenTypeX_obj >(HX_CSTRING("FROM_TO"),2,hx::DynamicArray(0,3).Add(target).Add(_from).Add(_to)); }

::tweenx909::advanced::TweenTypeX  TweenTypeX_obj::FUNC(Dynamic func,Dynamic _from,Dynamic _to)
	{ return hx::CreateEnum< TweenTypeX_obj >(HX_CSTRING("FUNC"),3,hx::DynamicArray(0,3).Add(func).Add(_from).Add(_to)); }

::tweenx909::advanced::TweenTypeX  TweenTypeX_obj::GROUP(::tweenx909::advanced::GroupX group)
	{ return hx::CreateEnum< TweenTypeX_obj >(HX_CSTRING("GROUP"),0,hx::DynamicArray(0,1).Add(group)); }

HX_DEFINE_CREATE_ENUM(TweenTypeX_obj)

int TweenTypeX_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("ARRAY")) return 1;
	if (inName==HX_CSTRING("CALL")) return 4;
	if (inName==HX_CSTRING("FROM_TO")) return 2;
	if (inName==HX_CSTRING("FUNC")) return 3;
	if (inName==HX_CSTRING("GROUP")) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC3(TweenTypeX_obj,ARRAY,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(TweenTypeX_obj,CALL,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(TweenTypeX_obj,FROM_TO,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC3(TweenTypeX_obj,FUNC,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(TweenTypeX_obj,GROUP,return)

int TweenTypeX_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("ARRAY")) return 3;
	if (inName==HX_CSTRING("CALL")) return 1;
	if (inName==HX_CSTRING("FROM_TO")) return 3;
	if (inName==HX_CSTRING("FUNC")) return 3;
	if (inName==HX_CSTRING("GROUP")) return 1;
	return super::__FindArgCount(inName);
}

Dynamic TweenTypeX_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("ARRAY")) return ARRAY_dyn();
	if (inName==HX_CSTRING("CALL")) return CALL_dyn();
	if (inName==HX_CSTRING("FROM_TO")) return FROM_TO_dyn();
	if (inName==HX_CSTRING("FUNC")) return FUNC_dyn();
	if (inName==HX_CSTRING("GROUP")) return GROUP_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("GROUP"),
	HX_CSTRING("ARRAY"),
	HX_CSTRING("FROM_TO"),
	HX_CSTRING("FUNC"),
	HX_CSTRING("CALL"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TweenTypeX_obj::__mClass,"__mClass");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class TweenTypeX_obj::__mClass;

Dynamic __Create_TweenTypeX_obj() { return new TweenTypeX_obj; }

void TweenTypeX_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("tweenx909.advanced.TweenTypeX"), hx::TCanCast< TweenTypeX_obj >,sStaticFields,sMemberFields,
	&__Create_TweenTypeX_obj, &__Create,
	&super::__SGetClass(), &CreateTweenTypeX_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void TweenTypeX_obj::__boot()
{
}


} // end namespace tweenx909
} // end namespace advanced
