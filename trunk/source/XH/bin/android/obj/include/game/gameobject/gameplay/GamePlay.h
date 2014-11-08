#ifndef INCLUDED_game_gameobject_gameplay_GamePlay
#define INCLUDED_game_gameobject_gameplay_GamePlay

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/display/Sprite.h>
HX_DECLARE_CLASS3(core,display,ex,ExSprite)
HX_DECLARE_CLASS3(game,gameobject,background,Background)
HX_DECLARE_CLASS3(game,gameobject,board,Board)
HX_DECLARE_CLASS3(game,gameobject,gameplay,GamePlay)
HX_DECLARE_CLASS3(game,gameobject,gameplay,HudLeft)
HX_DECLARE_CLASS3(game,gameobject,gameplay,HudRight)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,events,Event)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
namespace game{
namespace gameobject{
namespace gameplay{


class HXCPP_CLASS_ATTRIBUTES  GamePlay_obj : public ::openfl::_v2::display::Sprite_obj{
	public:
		typedef ::openfl::_v2::display::Sprite_obj super;
		typedef GamePlay_obj OBJ_;
		GamePlay_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< GamePlay_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GamePlay_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("GamePlay"); }

		::game::gameobject::gameplay::HudLeft mHudLeft;
		::game::gameobject::gameplay::HudRight mHudRight;
		::openfl::_v2::display::Sprite mBoder;
		::game::gameobject::background::Background mBackground;
		::game::gameobject::board::Board mBoard;
		virtual Void init( );
		Dynamic init_dyn();

		virtual Void onCycle( ::openfl::_v2::events::Event e);
		Dynamic onCycle_dyn();

		static int Board_X;
		static int Board_Y;
		static int HUD_Y;
		static int HUDLEFT_X;
		static int HUDRIGHT_X;
};

} // end namespace game
} // end namespace gameobject
} // end namespace gameplay

#endif /* INCLUDED_game_gameobject_gameplay_GamePlay */ 
