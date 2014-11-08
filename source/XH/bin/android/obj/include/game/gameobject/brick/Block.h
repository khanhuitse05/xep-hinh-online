#ifndef INCLUDED_game_gameobject_brick_Block
#define INCLUDED_game_gameobject_brick_Block

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/display/Sprite.h>
HX_DECLARE_CLASS3(game,gameobject,brick,Block)
HX_DECLARE_CLASS3(game,gameobject,brick,Brick)
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
namespace brick{


class HXCPP_CLASS_ATTRIBUTES  Block_obj : public ::openfl::_v2::display::Sprite_obj{
	public:
		typedef ::openfl::_v2::display::Sprite_obj super;
		typedef Block_obj OBJ_;
		Block_obj();
		Void __construct(int _x,int _y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Block_obj > __new(int _x,int _y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Block_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Block"); }

		int mType;
		int mTypeBrick;
		int mDirect;
		int mCount;
		int column;
		int row;
		Array< ::Dynamic > mData;
		Array< int > mListDirect;
		Array< ::Dynamic > mListChild;
		virtual Void init( );
		Dynamic init_dyn();

		virtual Void UpdateDirect( );
		Dynamic UpdateDirect_dyn();

		virtual int MaxWidth( );
		Dynamic MaxWidth_dyn();

		virtual int getHoldColumn( int _column);
		Dynamic getHoldColumn_dyn();

		virtual int getHeightColumn( int _column);
		Dynamic getHeightColumn_dyn();

		virtual Void onTap( ::openfl::_v2::events::Event e);
		Dynamic onTap_dyn();

		virtual Void setDirect( int _direct);
		Dynamic setDirect_dyn();

		virtual Void setColumn( int value);
		Dynamic setColumn_dyn();

		virtual int getColumn( );
		Dynamic getColumn_dyn();

		virtual Void setRow( int value);
		Dynamic setRow_dyn();

		virtual int getRow( );
		Dynamic getRow_dyn();

		virtual Void setTypeBrick( int _type);
		Dynamic setTypeBrick_dyn();

		static Float DURATION;
};

} // end namespace game
} // end namespace gameobject
} // end namespace brick

#endif /* INCLUDED_game_gameobject_brick_Block */ 
