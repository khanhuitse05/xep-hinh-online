#include <hxcpp.h>

#ifndef INCLUDED_game_tnk_GameConfig
#include <game/tnk/GameConfig.h>
#endif
namespace game{
namespace tnk{

Void GameConfig_obj::__construct()
{
HX_STACK_FRAME("game.tnk.GameConfig","new",0x24a8bc7f,"game.tnk.GameConfig.new","game/tnk/GameConfig.hx",17,0x94f1da0f)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//GameConfig_obj::~GameConfig_obj() { }

Dynamic GameConfig_obj::__CreateEmpty() { return  new GameConfig_obj; }
hx::ObjectPtr< GameConfig_obj > GameConfig_obj::__new()
{  hx::ObjectPtr< GameConfig_obj > result = new GameConfig_obj();
	result->__construct();
	return result;}

Dynamic GameConfig_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GameConfig_obj > result = new GameConfig_obj();
	result->__construct();
	return result;}

bool GameConfig_obj::DEBUG;

::String GameConfig_obj::STATIC_SERVER;

::String GameConfig_obj::SERVER;

int GameConfig_obj::PORT;


GameConfig_obj::GameConfig_obj()
{
}

Dynamic GameConfig_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic GameConfig_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void GameConfig_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("DEBUG"),
	HX_CSTRING("STATIC_SERVER"),
	HX_CSTRING("SERVER"),
	HX_CSTRING("PORT"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameConfig_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GameConfig_obj::DEBUG,"DEBUG");
	HX_MARK_MEMBER_NAME(GameConfig_obj::STATIC_SERVER,"STATIC_SERVER");
	HX_MARK_MEMBER_NAME(GameConfig_obj::SERVER,"SERVER");
	HX_MARK_MEMBER_NAME(GameConfig_obj::PORT,"PORT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameConfig_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GameConfig_obj::DEBUG,"DEBUG");
	HX_VISIT_MEMBER_NAME(GameConfig_obj::STATIC_SERVER,"STATIC_SERVER");
	HX_VISIT_MEMBER_NAME(GameConfig_obj::SERVER,"SERVER");
	HX_VISIT_MEMBER_NAME(GameConfig_obj::PORT,"PORT");
};

#endif

Class GameConfig_obj::__mClass;

void GameConfig_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("game.tnk.GameConfig"), hx::TCanCast< GameConfig_obj> ,sStaticFields,sMemberFields,
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

void GameConfig_obj::__boot()
{
	DEBUG= true;
	STATIC_SERVER= HX_CSTRING("../../../bin/");
	SERVER= HX_CSTRING("127.0.0.1");
	PORT= (int)8087;
}

} // end namespace game
} // end namespace tnk
