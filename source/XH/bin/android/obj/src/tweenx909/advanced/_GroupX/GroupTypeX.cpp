#include <hxcpp.h>

#ifndef INCLUDED_tweenx909_advanced__GroupX_GroupTypeX
#include <tweenx909/advanced/_GroupX/GroupTypeX.h>
#endif
namespace tweenx909{
namespace advanced{
namespace _GroupX{

::tweenx909::advanced::_GroupX::GroupTypeX  GroupTypeX_obj::LAG(Float lag)
	{ return hx::CreateEnum< GroupTypeX_obj >(HX_CSTRING("LAG"),1,hx::DynamicArray(0,1).Add(lag)); }

::tweenx909::advanced::_GroupX::GroupTypeX GroupTypeX_obj::SERIAL;

HX_DEFINE_CREATE_ENUM(GroupTypeX_obj)

int GroupTypeX_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("LAG")) return 1;
	if (inName==HX_CSTRING("SERIAL")) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(GroupTypeX_obj,LAG,return)

int GroupTypeX_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("LAG")) return 1;
	if (inName==HX_CSTRING("SERIAL")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic GroupTypeX_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("LAG")) return LAG_dyn();
	if (inName==HX_CSTRING("SERIAL")) return SERIAL;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("SERIAL"),
	HX_CSTRING("LAG"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GroupTypeX_obj::SERIAL,"SERIAL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GroupTypeX_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GroupTypeX_obj::SERIAL,"SERIAL");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class GroupTypeX_obj::__mClass;

Dynamic __Create_GroupTypeX_obj() { return new GroupTypeX_obj; }

void GroupTypeX_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("tweenx909.advanced._GroupX.GroupTypeX"), hx::TCanCast< GroupTypeX_obj >,sStaticFields,sMemberFields,
	&__Create_GroupTypeX_obj, &__Create,
	&super::__SGetClass(), &CreateGroupTypeX_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void GroupTypeX_obj::__boot()
{
hx::Static(SERIAL) = hx::CreateEnum< GroupTypeX_obj >(HX_CSTRING("SERIAL"),0);
}


} // end namespace tweenx909
} // end namespace advanced
} // end namespace _GroupX
