#ifndef INCLUDED_scene_mission_MissionView
#define INCLUDED_scene_mission_MissionView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <core/display/scene/SceneView.h>
HX_DECLARE_CLASS3(core,display,ex,ExSprite)
HX_DECLARE_CLASS3(core,display,ex,SimpleButton)
HX_DECLARE_CLASS3(core,display,scene,SceneView)
HX_DECLARE_CLASS3(core,display,screen,ScreenView)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,events,Event)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
HX_DECLARE_CLASS2(scene,mission,MissionView)
namespace scene{
namespace mission{


class HXCPP_CLASS_ATTRIBUTES  MissionView_obj : public ::core::display::scene::SceneView_obj{
	public:
		typedef ::core::display::scene::SceneView_obj super;
		typedef MissionView_obj OBJ_;
		MissionView_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< MissionView_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MissionView_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("MissionView"); }

		::openfl::_v2::display::Sprite mBg;
		::core::display::ex::SimpleButton btnBack;
		virtual Void init( );
		Dynamic init_dyn();

		virtual Void gameLoop( ::openfl::_v2::events::Event e);
		Dynamic gameLoop_dyn();

		virtual Void onBack( ::openfl::_v2::events::Event e);
		Dynamic onBack_dyn();

};

} // end namespace scene
} // end namespace mission

#endif /* INCLUDED_scene_mission_MissionView */ 
