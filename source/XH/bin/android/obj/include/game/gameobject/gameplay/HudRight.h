#ifndef INCLUDED_game_gameobject_gameplay_HudRight
#define INCLUDED_game_gameobject_gameplay_HudRight

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <core/display/ex/ExSprite.h>
HX_DECLARE_CLASS3(core,display,ex,ExSprite)
HX_DECLARE_CLASS3(core,display,ex,Lable)
HX_DECLARE_CLASS3(game,data,gameplay,InfoBlock)
HX_DECLARE_CLASS3(game,gameobject,board,CBlock)
HX_DECLARE_CLASS3(game,gameobject,gameplay,HudRight)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,events,Event)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,text,TextField)
namespace game{
namespace gameobject{
namespace gameplay{


class HXCPP_CLASS_ATTRIBUTES  HudRight_obj : public ::core::display::ex::ExSprite_obj{
	public:
		typedef ::core::display::ex::ExSprite_obj super;
		typedef HudRight_obj OBJ_;
		HudRight_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< HudRight_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HudRight_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("HudRight"); }

		Array< ::Dynamic > mStackBlock;
		int mMaxStack;
		int mX;
		Array< ::Dynamic > mListBlock;
		Array< ::Dynamic > mListPlan;
		::core::display::ex::Lable mXExpText;
		virtual Void initValue( );
		Dynamic initValue_dyn();

		virtual Void init( );
		Dynamic init_dyn();

		virtual Void gameLoop( ::openfl::_v2::events::Event e);
		Dynamic gameLoop_dyn();

		virtual Void Update( );
		Dynamic Update_dyn();

		static int POS_X;
		static int POS_Y;
		static int POS_OFFSET;
		static int BLOCK_OFFSET_X;
		static int BLOCK_OFFSET_Y;
};

} // end namespace game
} // end namespace gameobject
} // end namespace gameplay

#endif /* INCLUDED_game_gameobject_gameplay_HudRight */ 
