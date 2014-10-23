#ifndef INCLUDED_game_tnk_GameConfig
#define INCLUDED_game_tnk_GameConfig

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(game,tnk,GameConfig)
namespace game{
namespace tnk{


class HXCPP_CLASS_ATTRIBUTES  GameConfig_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GameConfig_obj OBJ_;
		GameConfig_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< GameConfig_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GameConfig_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("GameConfig"); }

		static bool DEBUG;
		static ::String STATIC_SERVER;
		static ::String SERVER;
		static int PORT;
};

} // end namespace game
} // end namespace tnk

#endif /* INCLUDED_game_tnk_GameConfig */ 
