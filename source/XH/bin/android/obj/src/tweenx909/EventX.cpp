#include <hxcpp.h>

#ifndef INCLUDED_tweenx909_EventX
#include <tweenx909/EventX.h>
#endif
namespace tweenx909{

::tweenx909::EventX EventX_obj::DELAY;

::tweenx909::EventX EventX_obj::FINISH;

::tweenx909::EventX EventX_obj::FOOT;

::tweenx909::EventX EventX_obj::HEAD;

::tweenx909::EventX EventX_obj::INTERVAL;

::tweenx909::EventX EventX_obj::PLAY;

::tweenx909::EventX EventX_obj::REPEAT;

::tweenx909::EventX EventX_obj::REST;

::tweenx909::EventX EventX_obj::STOP;

::tweenx909::EventX EventX_obj::UPDATE;

HX_DEFINE_CREATE_ENUM(EventX_obj)

int EventX_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("DELAY")) return 1;
	if (inName==HX_CSTRING("FINISH")) return 8;
	if (inName==HX_CSTRING("FOOT")) return 4;
	if (inName==HX_CSTRING("HEAD")) return 2;
	if (inName==HX_CSTRING("INTERVAL")) return 5;
	if (inName==HX_CSTRING("PLAY")) return 0;
	if (inName==HX_CSTRING("REPEAT")) return 6;
	if (inName==HX_CSTRING("REST")) return 7;
	if (inName==HX_CSTRING("STOP")) return 9;
	if (inName==HX_CSTRING("UPDATE")) return 3;
	return super::__FindIndex(inName);
}

int EventX_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("DELAY")) return 0;
	if (inName==HX_CSTRING("FINISH")) return 0;
	if (inName==HX_CSTRING("FOOT")) return 0;
	if (inName==HX_CSTRING("HEAD")) return 0;
	if (inName==HX_CSTRING("INTERVAL")) return 0;
	if (inName==HX_CSTRING("PLAY")) return 0;
	if (inName==HX_CSTRING("REPEAT")) return 0;
	if (inName==HX_CSTRING("REST")) return 0;
	if (inName==HX_CSTRING("STOP")) return 0;
	if (inName==HX_CSTRING("UPDATE")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic EventX_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("DELAY")) return DELAY;
	if (inName==HX_CSTRING("FINISH")) return FINISH;
	if (inName==HX_CSTRING("FOOT")) return FOOT;
	if (inName==HX_CSTRING("HEAD")) return HEAD;
	if (inName==HX_CSTRING("INTERVAL")) return INTERVAL;
	if (inName==HX_CSTRING("PLAY")) return PLAY;
	if (inName==HX_CSTRING("REPEAT")) return REPEAT;
	if (inName==HX_CSTRING("REST")) return REST;
	if (inName==HX_CSTRING("STOP")) return STOP;
	if (inName==HX_CSTRING("UPDATE")) return UPDATE;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("PLAY"),
	HX_CSTRING("DELAY"),
	HX_CSTRING("HEAD"),
	HX_CSTRING("UPDATE"),
	HX_CSTRING("FOOT"),
	HX_CSTRING("INTERVAL"),
	HX_CSTRING("REPEAT"),
	HX_CSTRING("REST"),
	HX_CSTRING("FINISH"),
	HX_CSTRING("STOP"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EventX_obj::DELAY,"DELAY");
	HX_MARK_MEMBER_NAME(EventX_obj::FINISH,"FINISH");
	HX_MARK_MEMBER_NAME(EventX_obj::FOOT,"FOOT");
	HX_MARK_MEMBER_NAME(EventX_obj::HEAD,"HEAD");
	HX_MARK_MEMBER_NAME(EventX_obj::INTERVAL,"INTERVAL");
	HX_MARK_MEMBER_NAME(EventX_obj::PLAY,"PLAY");
	HX_MARK_MEMBER_NAME(EventX_obj::REPEAT,"REPEAT");
	HX_MARK_MEMBER_NAME(EventX_obj::REST,"REST");
	HX_MARK_MEMBER_NAME(EventX_obj::STOP,"STOP");
	HX_MARK_MEMBER_NAME(EventX_obj::UPDATE,"UPDATE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EventX_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(EventX_obj::DELAY,"DELAY");
	HX_VISIT_MEMBER_NAME(EventX_obj::FINISH,"FINISH");
	HX_VISIT_MEMBER_NAME(EventX_obj::FOOT,"FOOT");
	HX_VISIT_MEMBER_NAME(EventX_obj::HEAD,"HEAD");
	HX_VISIT_MEMBER_NAME(EventX_obj::INTERVAL,"INTERVAL");
	HX_VISIT_MEMBER_NAME(EventX_obj::PLAY,"PLAY");
	HX_VISIT_MEMBER_NAME(EventX_obj::REPEAT,"REPEAT");
	HX_VISIT_MEMBER_NAME(EventX_obj::REST,"REST");
	HX_VISIT_MEMBER_NAME(EventX_obj::STOP,"STOP");
	HX_VISIT_MEMBER_NAME(EventX_obj::UPDATE,"UPDATE");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class EventX_obj::__mClass;

Dynamic __Create_EventX_obj() { return new EventX_obj; }

void EventX_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("tweenx909.EventX"), hx::TCanCast< EventX_obj >,sStaticFields,sMemberFields,
	&__Create_EventX_obj, &__Create,
	&super::__SGetClass(), &CreateEventX_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void EventX_obj::__boot()
{
hx::Static(DELAY) = hx::CreateEnum< EventX_obj >(HX_CSTRING("DELAY"),1);
hx::Static(FINISH) = hx::CreateEnum< EventX_obj >(HX_CSTRING("FINISH"),8);
hx::Static(FOOT) = hx::CreateEnum< EventX_obj >(HX_CSTRING("FOOT"),4);
hx::Static(HEAD) = hx::CreateEnum< EventX_obj >(HX_CSTRING("HEAD"),2);
hx::Static(INTERVAL) = hx::CreateEnum< EventX_obj >(HX_CSTRING("INTERVAL"),5);
hx::Static(PLAY) = hx::CreateEnum< EventX_obj >(HX_CSTRING("PLAY"),0);
hx::Static(REPEAT) = hx::CreateEnum< EventX_obj >(HX_CSTRING("REPEAT"),6);
hx::Static(REST) = hx::CreateEnum< EventX_obj >(HX_CSTRING("REST"),7);
hx::Static(STOP) = hx::CreateEnum< EventX_obj >(HX_CSTRING("STOP"),9);
hx::Static(UPDATE) = hx::CreateEnum< EventX_obj >(HX_CSTRING("UPDATE"),3);
}


} // end namespace tweenx909
