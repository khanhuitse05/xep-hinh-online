#ifndef INCLUDED_tweenx909_advanced_UpdateModeX
#define INCLUDED_tweenx909_advanced_UpdateModeX

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tweenx909,advanced,UpdateModeX)
namespace tweenx909{
namespace advanced{


class UpdateModeX_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef UpdateModeX_obj OBJ_;

	public:
		UpdateModeX_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("tweenx909.advanced.UpdateModeX"); }
		::String __ToString() const { return HX_CSTRING("UpdateModeX.") + tag; }

		static ::tweenx909::advanced::UpdateModeX MANUAL;
		static inline ::tweenx909::advanced::UpdateModeX MANUAL_dyn() { return MANUAL; }
		static ::tweenx909::advanced::UpdateModeX TIME(Float frameRate);
		static Dynamic TIME_dyn();
};

} // end namespace tweenx909
} // end namespace advanced

#endif /* INCLUDED_tweenx909_advanced_UpdateModeX */ 
