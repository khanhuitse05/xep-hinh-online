#include <hxcpp.h>

#ifndef INCLUDED_core_event_EventEx
#include <core/event/EventEx.h>
#endif
#ifndef INCLUDED_openfl__v2_events_Event
#include <openfl/_v2/events/Event.h>
#endif
namespace core{
namespace event{

Void EventEx_obj::__construct(::String type,Dynamic data,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable)
{
HX_STACK_FRAME("core.event.EventEx","new",0xfca7395c,"core.event.EventEx.new","core/event/EventEx.hx",13,0x8d9062d6)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(data,"data")
HX_STACK_ARG(__o_bubbles,"bubbles")
HX_STACK_ARG(__o_cancelable,"cancelable")
bool bubbles = __o_bubbles.Default(false);
bool cancelable = __o_cancelable.Default(false);
{
	HX_STACK_LINE(14)
	super::__construct(type,bubbles,cancelable);
	HX_STACK_LINE(15)
	this->data = data;
}
;
	return null();
}

//EventEx_obj::~EventEx_obj() { }

Dynamic EventEx_obj::__CreateEmpty() { return  new EventEx_obj; }
hx::ObjectPtr< EventEx_obj > EventEx_obj::__new(::String type,Dynamic data,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable)
{  hx::ObjectPtr< EventEx_obj > result = new EventEx_obj();
	result->__construct(type,data,__o_bubbles,__o_cancelable);
	return result;}

Dynamic EventEx_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EventEx_obj > result = new EventEx_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}


EventEx_obj::EventEx_obj()
{
}

void EventEx_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EventEx);
	HX_MARK_MEMBER_NAME(data,"data");
	::openfl::_v2::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void EventEx_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(data,"data");
	::openfl::_v2::events::Event_obj::__Visit(HX_VISIT_ARG);
}

Dynamic EventEx_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EventEx_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EventEx_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("data"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(EventEx_obj,data),HX_CSTRING("data")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("data"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EventEx_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EventEx_obj::__mClass,"__mClass");
};

#endif

Class EventEx_obj::__mClass;

void EventEx_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("core.event.EventEx"), hx::TCanCast< EventEx_obj> ,sStaticFields,sMemberFields,
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

void EventEx_obj::__boot()
{
}

} // end namespace core
} // end namespace event
