#ifndef INCLUDED_core_display_scene_SceneView
#define INCLUDED_core_display_scene_SceneView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <core/display/screen/ScreenView.h>
HX_DECLARE_CLASS3(core,display,ex,ExSprite)
HX_DECLARE_CLASS3(core,display,scene,SceneView)
HX_DECLARE_CLASS3(core,display,screen,ScreenView)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
namespace core{
namespace display{
namespace scene{


class HXCPP_CLASS_ATTRIBUTES  SceneView_obj : public ::core::display::screen::ScreenView_obj{
	public:
		typedef ::core::display::screen::ScreenView_obj super;
		typedef SceneView_obj OBJ_;
		SceneView_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< SceneView_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SceneView_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("SceneView"); }

};

} // end namespace core
} // end namespace display
} // end namespace scene

#endif /* INCLUDED_core_display_scene_SceneView */ 
