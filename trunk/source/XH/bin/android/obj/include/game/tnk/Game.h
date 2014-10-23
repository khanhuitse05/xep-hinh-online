#ifndef INCLUDED_game_tnk_Game
#define INCLUDED_game_tnk_Game

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Main)
HX_DECLARE_CLASS2(core,display,DisplayManager)
HX_DECLARE_CLASS2(core,resource,ResourceManager)
HX_DECLARE_CLASS2(game,network,Server)
HX_DECLARE_CLASS2(game,tnk,Game)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,display,Stage)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
namespace game{
namespace tnk{


class HXCPP_CLASS_ATTRIBUTES  Game_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Game_obj OBJ_;
		Game_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Game_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Game_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Game"); }

		static int GAME_WIDTH;
		static int GAME_HEIGHT;
		static ::openfl::_v2::display::Stage stage;
		static ::game::network::Server server;
		static ::core::resource::ResourceManager resource;
		static ::core::display::DisplayManager displayManager;
		static Void initialize( ::openfl::_v2::display::Stage gStage,::Main main);
		static Dynamic initialize_dyn();

};

} // end namespace game
} // end namespace tnk

#endif /* INCLUDED_game_tnk_Game */ 
