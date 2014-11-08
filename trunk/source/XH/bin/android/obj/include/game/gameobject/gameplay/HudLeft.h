#ifndef INCLUDED_game_gameobject_gameplay_HudLeft
#define INCLUDED_game_gameobject_gameplay_HudLeft

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/display/Sprite.h>
HX_DECLARE_CLASS3(core,display,ex,ExSprite)
HX_DECLARE_CLASS3(game,data,gameplay,InfoBlock)
HX_DECLARE_CLASS3(game,gameobject,board,CBlock)
HX_DECLARE_CLASS3(game,gameobject,gameplay,HudLeft)
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


class HXCPP_CLASS_ATTRIBUTES  HudLeft_obj : public ::openfl::_v2::display::Sprite_obj{
	public:
		typedef ::openfl::_v2::display::Sprite_obj super;
		typedef HudLeft_obj OBJ_;
		HudLeft_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< HudLeft_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HudLeft_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("HudLeft"); }

		Array< ::Dynamic > mHoldBlock;
		int mMaxHold;
		int mX;
		Array< ::Dynamic > mListBlock;
		Array< ::Dynamic > mListPlan;
		virtual Void initValue( );
		Dynamic initValue_dyn();

		virtual Void init( );
		Dynamic init_dyn();

		virtual Void gameLoop( ::openfl::_v2::events::Event e);
		Dynamic gameLoop_dyn();

		virtual Void onTap( ::openfl::_v2::events::Event e);
		Dynamic onTap_dyn();

		virtual Void onTap2( ::openfl::_v2::events::Event e);
		Dynamic onTap2_dyn();

		static int POS_X;
		static int POS_Y;
		static int POS_OFFSET;
		static int BLOCK_OFFSET_X;
		static int BLOCK_OFFSET_Y;
};

} // end namespace game
} // end namespace gameobject
} // end namespace gameplay

#endif /* INCLUDED_game_gameobject_gameplay_HudLeft */ 
