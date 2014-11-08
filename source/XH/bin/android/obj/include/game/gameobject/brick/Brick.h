#ifndef INCLUDED_game_gameobject_brick_Brick
#define INCLUDED_game_gameobject_brick_Brick

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/display/Sprite.h>
HX_DECLARE_CLASS3(game,gameobject,brick,Brick)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,display,Tilesheet)
HX_DECLARE_CLASS3(openfl,_v2,events,Event)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
namespace game{
namespace gameobject{
namespace brick{


class HXCPP_CLASS_ATTRIBUTES  Brick_obj : public ::openfl::_v2::display::Sprite_obj{
	public:
		typedef ::openfl::_v2::display::Sprite_obj super;
		typedef Brick_obj OBJ_;
		Brick_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Brick_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Brick_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Brick"); }

		int mType;
		int mState;
		int column;
		int row;
		int special;
		bool isMoving;
		::openfl::_v2::display::Tilesheet tilesheet;
		virtual Void init( );
		Dynamic init_dyn();

		virtual Void setValue( int _x,int _y,int _type);
		Dynamic setValue_dyn();

		virtual Void gameLoop( ::openfl::_v2::events::Event e);
		Dynamic gameLoop_dyn();

		virtual Void gameDraw( );
		Dynamic gameDraw_dyn();

		virtual Void MoveTo( Float duration,Float delay,Float targetX,Float targetY);
		Dynamic MoveTo_dyn();

		virtual Void falling( Dynamic onComplete);
		Dynamic falling_dyn();

		virtual int set_column( int value);
		Dynamic set_column_dyn();

		virtual int set_row( int value);
		Dynamic set_row_dyn();

};

} // end namespace game
} // end namespace gameobject
} // end namespace brick

#endif /* INCLUDED_game_gameobject_brick_Brick */ 
