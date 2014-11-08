#ifndef INCLUDED_tweenx909_EventX
#define INCLUDED_tweenx909_EventX

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(tweenx909,EventX)
namespace tweenx909{


class EventX_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef EventX_obj OBJ_;

	public:
		EventX_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("tweenx909.EventX"); }
		::String __ToString() const { return HX_CSTRING("EventX.") + tag; }

		static ::tweenx909::EventX DELAY;
		static inline ::tweenx909::EventX DELAY_dyn() { return DELAY; }
		static ::tweenx909::EventX FINISH;
		static inline ::tweenx909::EventX FINISH_dyn() { return FINISH; }
		static ::tweenx909::EventX FOOT;
		static inline ::tweenx909::EventX FOOT_dyn() { return FOOT; }
		static ::tweenx909::EventX HEAD;
		static inline ::tweenx909::EventX HEAD_dyn() { return HEAD; }
		static ::tweenx909::EventX INTERVAL;
		static inline ::tweenx909::EventX INTERVAL_dyn() { return INTERVAL; }
		static ::tweenx909::EventX PLAY;
		static inline ::tweenx909::EventX PLAY_dyn() { return PLAY; }
		static ::tweenx909::EventX REPEAT;
		static inline ::tweenx909::EventX REPEAT_dyn() { return REPEAT; }
		static ::tweenx909::EventX REST;
		static inline ::tweenx909::EventX REST_dyn() { return REST; }
		static ::tweenx909::EventX STOP;
		static inline ::tweenx909::EventX STOP_dyn() { return STOP; }
		static ::tweenx909::EventX UPDATE;
		static inline ::tweenx909::EventX UPDATE_dyn() { return UPDATE; }
};

} // end namespace tweenx909

#endif /* INCLUDED_tweenx909_EventX */ 
