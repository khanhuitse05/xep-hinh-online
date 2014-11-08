#ifndef INCLUDED_game_gameobject_brick_BrickType
#define INCLUDED_game_gameobject_brick_BrickType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(game,gameobject,brick,BrickType)
namespace game{
namespace gameobject{
namespace brick{


class HXCPP_CLASS_ATTRIBUTES  BrickType_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BrickType_obj OBJ_;
		BrickType_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< BrickType_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BrickType_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("BrickType"); }

		static int I;
		static int O;
		static int T;
		static int LL;
		static int LR;
		static int ZL;
		static int ZR;
		static int OTHER;
		static int NON;
};

} // end namespace game
} // end namespace gameobject
} // end namespace brick

#endif /* INCLUDED_game_gameobject_brick_BrickType */ 
