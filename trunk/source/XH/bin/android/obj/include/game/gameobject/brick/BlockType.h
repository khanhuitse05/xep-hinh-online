#ifndef INCLUDED_game_gameobject_brick_BlockType
#define INCLUDED_game_gameobject_brick_BlockType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(game,gameobject,brick,BlockType)
namespace game{
namespace gameobject{
namespace brick{


class HXCPP_CLASS_ATTRIBUTES  BlockType_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BlockType_obj OBJ_;
		BlockType_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< BlockType_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BlockType_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("BlockType"); }

		static int I;
		static int O;
		static int T;
		static int LL;
		static int LR;
		static int ZL;
		static int ZR;
};

} // end namespace game
} // end namespace gameobject
} // end namespace brick

#endif /* INCLUDED_game_gameobject_brick_BlockType */ 
