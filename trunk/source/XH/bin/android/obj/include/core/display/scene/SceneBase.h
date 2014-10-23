#ifndef INCLUDED_core_display_scene_SceneBase
#define INCLUDED_core_display_scene_SceneBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <core/display/screen/ScreenBase.h>
HX_DECLARE_CLASS3(core,display,scene,SceneBase)
HX_DECLARE_CLASS3(core,display,scene,SceneID)
HX_DECLARE_CLASS3(core,display,screen,Screen)
HX_DECLARE_CLASS3(core,display,screen,ScreenBase)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
namespace core{
namespace display{
namespace scene{


class HXCPP_CLASS_ATTRIBUTES  SceneBase_obj : public ::core::display::screen::ScreenBase_obj{
	public:
		typedef ::core::display::screen::ScreenBase_obj super;
		typedef SceneBase_obj OBJ_;
		SceneBase_obj();
		Void __construct(::core::display::scene::SceneID sceneID);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< SceneBase_obj > __new(::core::display::scene::SceneID sceneID);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SceneBase_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("SceneBase"); }

};

} // end namespace core
} // end namespace display
} // end namespace scene

#endif /* INCLUDED_core_display_scene_SceneBase */ 
