#ifndef INCLUDED_scene_home_HomeView
#define INCLUDED_scene_home_HomeView

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
HX_DECLARE_CLASS2(scene,home,HomeView)
namespace scene{
namespace home{


class HXCPP_CLASS_ATTRIBUTES  HomeView_obj : public ::core::display::scene::SceneView_obj{
	public:
		typedef ::core::display::scene::SceneView_obj super;
		typedef HomeView_obj OBJ_;
		HomeView_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< HomeView_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HomeView_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("HomeView"); }

		::openfl::_v2::display::Sprite mBg;
		::core::display::ex::SimpleButton btnSingle;
		::core::display::ex::SimpleButton btnBattle;
		::core::display::ex::SimpleButton btnFriend;
		::core::display::ex::SimpleButton btnMission;
		virtual Void init( );
		Dynamic init_dyn();

		virtual Void gameLoop( ::openfl::_v2::events::Event e);
		Dynamic gameLoop_dyn();

		virtual Void onSingle( ::openfl::_v2::events::Event e);
		Dynamic onSingle_dyn();

		virtual Void onBattle( ::openfl::_v2::events::Event e);
		Dynamic onBattle_dyn();

		virtual Void onFriend( ::openfl::_v2::events::Event e);
		Dynamic onFriend_dyn();

		virtual Void onMission( ::openfl::_v2::events::Event e);
		Dynamic onMission_dyn();

		static int BTN_X;
		static int BTN_Y;
		static int BTN_OFFSET;
};

} // end namespace scene
} // end namespace home

#endif /* INCLUDED_scene_home_HomeView */ 
