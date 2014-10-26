#include <hxcpp.h>

#ifndef INCLUDED_core_resource_ResourceID
#include <core/resource/ResourceID.h>
#endif
namespace core{
namespace resource{

::core::resource::ResourceID ResourceID_obj::BG_LOGIN;

::core::resource::ResourceID ResourceID_obj::BTN_LOGIN;

::core::resource::ResourceID ResourceID_obj::LOADING_BG;

HX_DEFINE_CREATE_ENUM(ResourceID_obj)

int ResourceID_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("BG_LOGIN")) return 1;
	if (inName==HX_CSTRING("BTN_LOGIN")) return 2;
	if (inName==HX_CSTRING("LOADING_BG")) return 0;
	return super::__FindIndex(inName);
}

int ResourceID_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("BG_LOGIN")) return 0;
	if (inName==HX_CSTRING("BTN_LOGIN")) return 0;
	if (inName==HX_CSTRING("LOADING_BG")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic ResourceID_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("BG_LOGIN")) return BG_LOGIN;
	if (inName==HX_CSTRING("BTN_LOGIN")) return BTN_LOGIN;
	if (inName==HX_CSTRING("LOADING_BG")) return LOADING_BG;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("LOADING_BG"),
	HX_CSTRING("BG_LOGIN"),
	HX_CSTRING("BTN_LOGIN"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ResourceID_obj::BG_LOGIN,"BG_LOGIN");
	HX_MARK_MEMBER_NAME(ResourceID_obj::BTN_LOGIN,"BTN_LOGIN");
	HX_MARK_MEMBER_NAME(ResourceID_obj::LOADING_BG,"LOADING_BG");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ResourceID_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ResourceID_obj::BG_LOGIN,"BG_LOGIN");
	HX_VISIT_MEMBER_NAME(ResourceID_obj::BTN_LOGIN,"BTN_LOGIN");
	HX_VISIT_MEMBER_NAME(ResourceID_obj::LOADING_BG,"LOADING_BG");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class ResourceID_obj::__mClass;

Dynamic __Create_ResourceID_obj() { return new ResourceID_obj; }

void ResourceID_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("core.resource.ResourceID"), hx::TCanCast< ResourceID_obj >,sStaticFields,sMemberFields,
	&__Create_ResourceID_obj, &__Create,
	&super::__SGetClass(), &CreateResourceID_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void ResourceID_obj::__boot()
{
hx::Static(BG_LOGIN) = hx::CreateEnum< ResourceID_obj >(HX_CSTRING("BG_LOGIN"),1);
hx::Static(BTN_LOGIN) = hx::CreateEnum< ResourceID_obj >(HX_CSTRING("BTN_LOGIN"),2);
hx::Static(LOADING_BG) = hx::CreateEnum< ResourceID_obj >(HX_CSTRING("LOADING_BG"),0);
}


} // end namespace core
} // end namespace resource
