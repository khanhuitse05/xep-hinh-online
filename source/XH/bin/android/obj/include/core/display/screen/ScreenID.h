#ifndef INCLUDED_core_display_screen_ScreenID
#define INCLUDED_core_display_screen_ScreenID

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(core,display,scene,SceneID)
HX_DECLARE_CLASS3(core,display,screen,Screen)
HX_DECLARE_CLASS3(core,display,screen,ScreenID)
namespace core{
namespace display{
namespace screen{


class HXCPP_CLASS_ATTRIBUTES  ScreenID_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ScreenID_obj OBJ_;
		ScreenID_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ScreenID_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ScreenID_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("ScreenID"); }

		static ::core::display::scene::SceneID LOGIN;
};

} // end namespace core
} // end namespace display
} // end namespace screen

#endif /* INCLUDED_core_display_screen_ScreenID */ 
