#ifndef INCLUDED_tweenx909_advanced_CommandTypeX
#define INCLUDED_tweenx909_advanced_CommandTypeX

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(tweenx909,TweenX)
HX_DECLARE_CLASS2(tweenx909,advanced,CommandTypeX)
HX_DECLARE_CLASS2(tweenx909,advanced,CommandX)
namespace tweenx909{
namespace advanced{


class CommandTypeX_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef CommandTypeX_obj OBJ_;

	public:
		CommandTypeX_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("tweenx909.advanced.CommandTypeX"); }
		::String __ToString() const { return HX_CSTRING("CommandTypeX.") + tag; }

		static ::tweenx909::advanced::CommandTypeX TWEEN(::tweenx909::TweenX tween);
		static Dynamic TWEEN_dyn();
		static ::tweenx909::advanced::CommandTypeX WAIT(Float delay);
		static Dynamic WAIT_dyn();
};

} // end namespace tweenx909
} // end namespace advanced

#endif /* INCLUDED_tweenx909_advanced_CommandTypeX */ 
