#ifndef INCLUDED_game_gameobject_brick_Oblock
#define INCLUDED_game_gameobject_brick_Oblock

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <game/gameobject/brick/Block.h>
HX_DECLARE_CLASS3(game,gameobject,brick,Block)
HX_DECLARE_CLASS3(game,gameobject,brick,Oblock)
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


class HXCPP_CLASS_ATTRIBUTES  Oblock_obj : public ::game::gameobject::brick::Block_obj{
	public:
		typedef ::game::gameobject::brick::Block_obj super;
		typedef Oblock_obj OBJ_;
		Oblock_obj();
		Void __construct(int _x,int _y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Oblock_obj > __new(int _x,int _y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Oblock_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Oblock"); }

		virtual Void setDirect( int _direct);

};

} // end namespace game
} // end namespace gameobject
} // end namespace brick

#endif /* INCLUDED_game_gameobject_brick_Oblock */ 
