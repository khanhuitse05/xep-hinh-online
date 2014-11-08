#ifndef INCLUDED_tweenx909_advanced_TweenTypeX
#define INCLUDED_tweenx909_advanced_TweenTypeX

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tweenx909,advanced,GroupX)
HX_DECLARE_CLASS2(tweenx909,advanced,TweenTypeX)
namespace tweenx909{
namespace advanced{


class TweenTypeX_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef TweenTypeX_obj OBJ_;

	public:
		TweenTypeX_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("tweenx909.advanced.TweenTypeX"); }
		::String __ToString() const { return HX_CSTRING("TweenTypeX.") + tag; }

		static ::tweenx909::advanced::TweenTypeX ARRAY(Dynamic targets,Dynamic _from,Dynamic _to);
		static Dynamic ARRAY_dyn();
		static ::tweenx909::advanced::TweenTypeX CALL(Dynamic func);
		static Dynamic CALL_dyn();
		static ::tweenx909::advanced::TweenTypeX FROM_TO(Dynamic target,Dynamic _from,Dynamic _to);
		static Dynamic FROM_TO_dyn();
		static ::tweenx909::advanced::TweenTypeX FUNC(Dynamic func,Dynamic _from,Dynamic _to);
		static Dynamic FUNC_dyn();
		static ::tweenx909::advanced::TweenTypeX GROUP(::tweenx909::advanced::GroupX group);
		static Dynamic GROUP_dyn();
};

} // end namespace tweenx909
} // end namespace advanced

#endif /* INCLUDED_tweenx909_advanced_TweenTypeX */ 
