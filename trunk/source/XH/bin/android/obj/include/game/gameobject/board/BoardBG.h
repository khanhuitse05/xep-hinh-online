#ifndef INCLUDED_game_gameobject_board_BoardBG
#define INCLUDED_game_gameobject_board_BoardBG

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/display/Sprite.h>
HX_DECLARE_CLASS3(game,gameobject,board,BoardBG)
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
namespace board{


class HXCPP_CLASS_ATTRIBUTES  BoardBG_obj : public ::openfl::_v2::display::Sprite_obj{
	public:
		typedef ::openfl::_v2::display::Sprite_obj super;
		typedef BoardBG_obj OBJ_;
		BoardBG_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< BoardBG_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BoardBG_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BoardBG"); }

		int mColor;
		::openfl::_v2::display::Sprite mBack;
		::openfl::_v2::display::Sprite mMid;
		::openfl::_v2::display::Sprite mFront;
		virtual Void init( );
		Dynamic init_dyn();

		virtual Void gameLoop( ::openfl::_v2::events::Event e);
		Dynamic gameLoop_dyn();

		virtual Void drawBackground( int _color);
		Dynamic drawBackground_dyn();

		virtual Void effectMid( );
		Dynamic effectMid_dyn();

};

} // end namespace game
} // end namespace gameobject
} // end namespace board

#endif /* INCLUDED_game_gameobject_board_BoardBG */ 
