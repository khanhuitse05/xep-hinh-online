#ifndef INCLUDED_core_event_EventEx
#define INCLUDED_core_event_EventEx

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/events/Event.h>
HX_DECLARE_CLASS2(core,event,EventEx)
HX_DECLARE_CLASS3(openfl,_v2,events,Event)
namespace core{
namespace event{


class HXCPP_CLASS_ATTRIBUTES  EventEx_obj : public ::openfl::_v2::events::Event_obj{
	public:
		typedef ::openfl::_v2::events::Event_obj super;
		typedef EventEx_obj OBJ_;
		EventEx_obj();
		Void __construct(::String type,Dynamic data,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< EventEx_obj > __new(::String type,Dynamic data,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EventEx_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("EventEx"); }

		Dynamic data;
};

} // end namespace core
} // end namespace event

#endif /* INCLUDED_core_event_EventEx */ 
