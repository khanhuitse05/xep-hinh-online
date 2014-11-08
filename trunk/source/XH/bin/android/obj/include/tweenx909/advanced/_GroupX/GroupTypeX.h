#ifndef INCLUDED_tweenx909_advanced__GroupX_GroupTypeX
#define INCLUDED_tweenx909_advanced__GroupX_GroupTypeX

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(tweenx909,advanced,_GroupX,GroupTypeX)
namespace tweenx909{
namespace advanced{
namespace _GroupX{


class GroupTypeX_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef GroupTypeX_obj OBJ_;

	public:
		GroupTypeX_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("tweenx909.advanced._GroupX.GroupTypeX"); }
		::String __ToString() const { return HX_CSTRING("GroupTypeX.") + tag; }

		static ::tweenx909::advanced::_GroupX::GroupTypeX LAG(Float lag);
		static Dynamic LAG_dyn();
		static ::tweenx909::advanced::_GroupX::GroupTypeX SERIAL;
		static inline ::tweenx909::advanced::_GroupX::GroupTypeX SERIAL_dyn() { return SERIAL; }
};

} // end namespace tweenx909
} // end namespace advanced
} // end namespace _GroupX

#endif /* INCLUDED_tweenx909_advanced__GroupX_GroupTypeX */ 
