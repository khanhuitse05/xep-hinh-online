#include <hxcpp.h>

#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_core_display_DisplayManager
#include <core/display/DisplayManager.h>
#endif
#ifndef INCLUDED_core_resource_ResourceManager
#include <core/resource/ResourceManager.h>
#endif
#ifndef INCLUDED_game_network_Server
#include <game/network/Server.h>
#endif
#ifndef INCLUDED_game_tnk_Game
#include <game/tnk/Game.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObjectContainer
#include <openfl/_v2/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Stage
#include <openfl/_v2/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
namespace game{
namespace tnk{

Void Game_obj::__construct()
{
	return null();
}

//Game_obj::~Game_obj() { }

Dynamic Game_obj::__CreateEmpty() { return  new Game_obj; }
hx::ObjectPtr< Game_obj > Game_obj::__new()
{  hx::ObjectPtr< Game_obj > result = new Game_obj();
	result->__construct();
	return result;}

Dynamic Game_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Game_obj > result = new Game_obj();
	result->__construct();
	return result;}

int Game_obj::GAME_WIDTH;

int Game_obj::GAME_HEIGHT;

::openfl::_v2::display::Stage Game_obj::stage;

::game::network::Server Game_obj::server;

::core::resource::ResourceManager Game_obj::resource;

::core::display::DisplayManager Game_obj::displayManager;

Void Game_obj::initialize( ::openfl::_v2::display::Stage gStage,::Main main){
{
		HX_STACK_FRAME("game.tnk.Game","initialize",0x78d8f4f3,"game.tnk.Game.initialize","game/tnk/Game.hx",24,0x19322371)
		HX_STACK_ARG(gStage,"gStage")
		HX_STACK_ARG(main,"main")
		HX_STACK_LINE(25)
		::game::tnk::Game_obj::stage = gStage;
		HX_STACK_LINE(26)
		::game::network::Server _g = ::game::network::Server_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(26)
		::game::tnk::Game_obj::server = _g;
		HX_STACK_LINE(27)
		::core::resource::ResourceManager _g1 = ::core::resource::ResourceManager_obj::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(27)
		::game::tnk::Game_obj::resource = _g1;
		HX_STACK_LINE(28)
		::core::display::DisplayManager _g2 = ::core::display::DisplayManager_obj::__new(main);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(28)
		::game::tnk::Game_obj::displayManager = _g2;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Game_obj,initialize,(void))


Game_obj::Game_obj()
{
}

Dynamic Game_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"stage") ) { return stage; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"server") ) { return server; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"resource") ) { return resource; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"displayManager") ) { return displayManager; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Game_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"stage") ) { stage=inValue.Cast< ::openfl::_v2::display::Stage >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"server") ) { server=inValue.Cast< ::game::network::Server >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"resource") ) { resource=inValue.Cast< ::core::resource::ResourceManager >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"displayManager") ) { displayManager=inValue.Cast< ::core::display::DisplayManager >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Game_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("GAME_WIDTH"),
	HX_CSTRING("GAME_HEIGHT"),
	HX_CSTRING("stage"),
	HX_CSTRING("server"),
	HX_CSTRING("resource"),
	HX_CSTRING("displayManager"),
	HX_CSTRING("initialize"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Game_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Game_obj::GAME_WIDTH,"GAME_WIDTH");
	HX_MARK_MEMBER_NAME(Game_obj::GAME_HEIGHT,"GAME_HEIGHT");
	HX_MARK_MEMBER_NAME(Game_obj::stage,"stage");
	HX_MARK_MEMBER_NAME(Game_obj::server,"server");
	HX_MARK_MEMBER_NAME(Game_obj::resource,"resource");
	HX_MARK_MEMBER_NAME(Game_obj::displayManager,"displayManager");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Game_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Game_obj::GAME_WIDTH,"GAME_WIDTH");
	HX_VISIT_MEMBER_NAME(Game_obj::GAME_HEIGHT,"GAME_HEIGHT");
	HX_VISIT_MEMBER_NAME(Game_obj::stage,"stage");
	HX_VISIT_MEMBER_NAME(Game_obj::server,"server");
	HX_VISIT_MEMBER_NAME(Game_obj::resource,"resource");
	HX_VISIT_MEMBER_NAME(Game_obj::displayManager,"displayManager");
};

#endif

Class Game_obj::__mClass;

void Game_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("game.tnk.Game"), hx::TCanCast< Game_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void Game_obj::__boot()
{
	GAME_WIDTH= (int)480;
	GAME_HEIGHT= (int)800;
}

} // end namespace game
} // end namespace tnk
