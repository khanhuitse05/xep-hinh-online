#ifndef INCLUDED_game_gameobject_brick_Iblock
#define INCLUDED_game_gameobject_brick_Iblock

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <game/gameobject/brick/Block.h>
HX_DECLARE_CLASS3(game,gameobject,brick,Block)
HX_DECLARE_CLASS3(game,gameobject,brick,Iblock)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
namespace game{
namespace gameobject{
namespace brick{


class HXCPP_CLASS_ATTRIBUTES  Iblock_obj : public ::game::gameobject::brick::Block_obj{
	public:
		typedef ::game::gameobject::brick::Block_obj super;
		typedef Iblock_obj OBJ_;
		Iblock_obj();
		Void __construct(int _x,int _y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Iblock_obj > __new(int _x,int _y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Iblock_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Iblock"); }

		virtual Void setDirect( int _direct);

};

} // end namespace game
} // end namespace gameobject
} // end namespace brick

#endif /* INCLUDED_game_gameobject_brick_Iblock */ 