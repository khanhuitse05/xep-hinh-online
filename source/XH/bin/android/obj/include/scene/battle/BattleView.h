#ifndef INCLUDED_scene_battle_BattleView
#define INCLUDED_scene_battle_BattleView

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
HX_DECLARE_CLASS2(scene,battle,BattleView)
namespace scene{
namespace battle{


class HXCPP_CLASS_ATTRIBUTES  BattleView_obj : public ::core::display::scene::SceneView_obj{
	public:
		typedef ::core::display::scene::SceneView_obj super;
		typedef BattleView_obj OBJ_;
		BattleView_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< BattleView_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BattleView_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BattleView"); }

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
} // end namespace battle

#endif /* INCLUDED_scene_battle_BattleView */ 