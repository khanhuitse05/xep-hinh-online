#ifndef INCLUDED_core_display_scene_SceneID
#define INCLUDED_core_display_scene_SceneID

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <core/display/screen/Screen.h>
HX_DECLARE_CLASS3(core,display,scene,SceneID)
HX_DECLARE_CLASS3(core,display,screen,Screen)
namespace core{
namespace display{
namespace scene{


class HXCPP_CLASS_ATTRIBUTES  SceneID_obj : public ::core::display::screen::Screen_obj{
	public:
		typedef ::core::display::screen::Screen_obj super;
		typedef SceneID_obj OBJ_;
		SceneID_obj();
		Void __construct(::Class className,::Class viewName);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< SceneID_obj > __new(::Class className,::Class viewName);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SceneID_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("SceneID"); }

};

} // end namespace core
} // end namespace display
} // end namespace scene

#endif /* INCLUDED_core_display_scene_SceneID */ 
