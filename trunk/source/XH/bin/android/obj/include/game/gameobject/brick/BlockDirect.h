#ifndef INCLUDED_game_gameobject_brick_BlockDirect
#define INCLUDED_game_gameobject_brick_BlockDirect

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(game,gameobject,brick,BlockDirect)
namespace game{
namespace gameobject{
namespace brick{


class HXCPP_CLASS_ATTRIBUTES  BlockDirect_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BlockDirect_obj OBJ_;
		BlockDirect_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< BlockDirect_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BlockDirect_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("BlockDirect"); }

		static int LEFT;
		static int TOP;
		static int RIGHT;
		static int BOTTOM;
};

} // end namespace game
} // end namespace gameobject
} // end namespace brick

#endif /* INCLUDED_game_gameobject_brick_BlockDirect */ 
