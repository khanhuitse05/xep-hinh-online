#ifndef INCLUDED_game_gameobject_board_VirtualBlock
#define INCLUDED_game_gameobject_board_VirtualBlock

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/display/Sprite.h>
HX_DECLARE_CLASS3(game,gameobject,board,VirtualBlock)
HX_DECLARE_CLASS3(game,gameobject,brick,Block)
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


class HXCPP_CLASS_ATTRIBUTES  VirtualBlock_obj : public ::openfl::_v2::display::Sprite_obj{
	public:
		typedef ::openfl::_v2::display::Sprite_obj super;
		typedef VirtualBlock_obj OBJ_;
		VirtualBlock_obj();
		Void __construct(int _type,int _direct);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< VirtualBlock_obj > __new(int _type,int _direct);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VirtualBlock_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("VirtualBlock"); }

		int mType;
		int mDirect;
		::game::gameobject::brick::Block mBlock;
		int mColumn;
		int mRow;
		virtual Void gameLoop( ::openfl::_v2::events::Event e);
		Dynamic gameLoop_dyn();

		virtual Void onTap( ::openfl::_v2::events::Event e);
		Dynamic onTap_dyn();

		virtual Void setGrid( int _column,int _row);
		Dynamic setGrid_dyn();

};

} // end namespace game
} // end namespace gameobject
} // end namespace board

#endif /* INCLUDED_game_gameobject_board_VirtualBlock */ 
