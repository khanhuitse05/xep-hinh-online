#ifndef INCLUDED_core_resource_ResourcePath
#define INCLUDED_core_resource_ResourcePath

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(core,resource,ResourcePath)
namespace core{
namespace resource{


class HXCPP_CLASS_ATTRIBUTES  ResourcePath_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ResourcePath_obj OBJ_;
		ResourcePath_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ResourcePath_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ResourcePath_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("ResourcePath"); }

		static ::String GFX_LOADING_ANIM;
		static ::String GFX_LOADING_BG;
		static ::String GFX_HOME_BG;
		static ::String GFX_BATTLES_BG;
		static ::String GFX_MISSION_BG;
		static ::String GFX_P_SIGLE_BG;
		static ::String GFX_P_FRIEND_BG;
		static ::String GFX_BTN_SINGLE;
		static ::String GFX_BTN_BATTLES;
		static ::String GFX_BTN_FRIEND;
		static ::String GFX_BTN_MISSION;
		static ::String GFX_BTN_BACK;
};

} // end namespace core
} // end namespace resource

#endif /* INCLUDED_core_resource_ResourcePath */ 
