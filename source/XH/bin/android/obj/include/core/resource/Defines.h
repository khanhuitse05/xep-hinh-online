#ifndef INCLUDED_core_resource_Defines
#define INCLUDED_core_resource_Defines

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(core,resource,Defines)
namespace core{
namespace resource{


class HXCPP_CLASS_ATTRIBUTES  Defines_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Defines_obj OBJ_;
		Defines_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Defines_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Defines_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Defines"); }

		static int GFX_LOADING_ANIM;
		static int GFX_LOADING_BG;
		static int GFX_HOME_BG;
		static int GFX_P_SIGLE_BG;
		static int GFX_BATTLES_BG;
		static int GFX_P_FRIEND_BG;
		static int GFX_MISSION_BG;
		static int GFX_BTN_SINGLE;
		static int GFX_BTN_BATTLES;
		static int GFX_BTN_FRIEND;
		static int GFX_BTN_MISSION;
		static int GFX_BTN_BACK;
};

} // end namespace core
} // end namespace resource

#endif /* INCLUDED_core_resource_Defines */ 
