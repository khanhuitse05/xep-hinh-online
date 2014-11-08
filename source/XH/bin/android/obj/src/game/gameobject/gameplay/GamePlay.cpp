#include <hxcpp.h>

#ifndef INCLUDED_core_display_ex_ExSprite
#include <core/display/ex/ExSprite.h>
#endif
#ifndef INCLUDED_core_resource_ResourceManager
#include <core/resource/ResourceManager.h>
#endif
#ifndef INCLUDED_game_data_DataCenter
#include <game/data/DataCenter.h>
#endif
#ifndef INCLUDED_game_data_PlayerData
#include <game/data/PlayerData.h>
#endif
#ifndef INCLUDED_game_data_gameplay_DTingame
#include <game/data/gameplay/DTingame.h>
#endif
#ifndef INCLUDED_game_gameobject_background_Background
#include <game/gameobject/background/Background.h>
#endif
#ifndef INCLUDED_game_gameobject_board_Board
#include <game/gameobject/board/Board.h>
#endif
#ifndef INCLUDED_game_gameobject_gameplay_GamePlay
#include <game/gameobject/gameplay/GamePlay.h>
#endif
#ifndef INCLUDED_game_gameobject_gameplay_HudLeft
#include <game/gameobject/gameplay/HudLeft.h>
#endif
#ifndef INCLUDED_game_gameobject_gameplay_HudRight
#include <game/gameobject/gameplay/HudRight.h>
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
#ifndef INCLUDED_openfl__v2_events_Event
#include <openfl/_v2/events/Event.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_MouseEvent
#include <openfl/_v2/events/MouseEvent.h>
#endif
namespace game{
namespace gameobject{
namespace gameplay{

Void GamePlay_obj::__construct()
{
HX_STACK_FRAME("game.gameobject.gameplay.GamePlay","new",0xdc31f79f,"game.gameobject.gameplay.GamePlay.new","game/gameobject/gameplay/GamePlay.hx",33,0x93d28bf0)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(34)
	super::__construct();
	HX_STACK_LINE(35)
	this->init();
}
;
	return null();
}

//GamePlay_obj::~GamePlay_obj() { }

Dynamic GamePlay_obj::__CreateEmpty() { return  new GamePlay_obj; }
hx::ObjectPtr< GamePlay_obj > GamePlay_obj::__new()
{  hx::ObjectPtr< GamePlay_obj > result = new GamePlay_obj();
	result->__construct();
	return result;}

Dynamic GamePlay_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GamePlay_obj > result = new GamePlay_obj();
	result->__construct();
	return result;}

Void GamePlay_obj::init( ){
{
		HX_STACK_FRAME("game.gameobject.gameplay.GamePlay","init",0xcc3f6af1,"game.gameobject.gameplay.GamePlay.init","game/gameobject/gameplay/GamePlay.hx",40,0x93d28bf0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(41)
		::game::gameobject::background::Background _g = ::game::gameobject::background::Background_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(41)
		this->mBackground = _g;
		HX_STACK_LINE(42)
		this->mBackground->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_DOWN,this->onCycle_dyn(),null(),null(),null());
		HX_STACK_LINE(43)
		this->addChild(this->mBackground);
		HX_STACK_LINE(45)
		::game::gameobject::gameplay::HudRight _g1 = ::game::gameobject::gameplay::HudRight_obj::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(45)
		this->mHudRight = _g1;
		HX_STACK_LINE(46)
		this->mHudRight->set_x(::game::gameobject::gameplay::GamePlay_obj::HUDRIGHT_X);
		HX_STACK_LINE(47)
		this->mHudRight->set_y(::game::gameobject::gameplay::GamePlay_obj::HUD_Y);
		HX_STACK_LINE(48)
		this->addChild(this->mHudRight);
		HX_STACK_LINE(50)
		::game::gameobject::gameplay::HudLeft _g2 = ::game::gameobject::gameplay::HudLeft_obj::__new();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(50)
		this->mHudLeft = _g2;
		HX_STACK_LINE(51)
		this->mHudLeft->set_x(::game::gameobject::gameplay::GamePlay_obj::HUDLEFT_X);
		HX_STACK_LINE(52)
		this->mHudLeft->set_y(::game::gameobject::gameplay::GamePlay_obj::HUD_Y);
		HX_STACK_LINE(53)
		this->addChild(this->mHudLeft);
		HX_STACK_LINE(55)
		::openfl::_v2::display::Sprite _g3 = ::game::tnk::Game_obj::resource->getSprite((int)22);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(55)
		this->mBoder = _g3;
		HX_STACK_LINE(56)
		this->mBackground->addChild(this->mBoder);
		HX_STACK_LINE(58)
		::game::gameobject::board::Board _g4 = ::game::gameobject::board::Board_obj::__new();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(58)
		this->mBoard = _g4;
		HX_STACK_LINE(59)
		this->mBoard->set_x(::game::gameobject::gameplay::GamePlay_obj::Board_X);
		HX_STACK_LINE(60)
		this->mBoard->set_y(::game::gameobject::gameplay::GamePlay_obj::Board_Y);
		HX_STACK_LINE(61)
		this->addChild(this->mBoard);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GamePlay_obj,init,(void))

Void GamePlay_obj::onCycle( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("game.gameobject.gameplay.GamePlay","onCycle",0xf0eb8dc6,"game.gameobject.gameplay.GamePlay.onCycle","game/gameobject/gameplay/GamePlay.hx",66,0x93d28bf0)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(66)
		::game::tnk::Game_obj::data->playerData->mDTingame->isCycle = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GamePlay_obj,onCycle,(void))

int GamePlay_obj::Board_X;

int GamePlay_obj::Board_Y;

int GamePlay_obj::HUD_Y;

int GamePlay_obj::HUDLEFT_X;

int GamePlay_obj::HUDRIGHT_X;


GamePlay_obj::GamePlay_obj()
{
}

void GamePlay_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GamePlay);
	HX_MARK_MEMBER_NAME(mHudLeft,"mHudLeft");
	HX_MARK_MEMBER_NAME(mHudRight,"mHudRight");
	HX_MARK_MEMBER_NAME(mBoder,"mBoder");
	HX_MARK_MEMBER_NAME(mBackground,"mBackground");
	HX_MARK_MEMBER_NAME(mBoard,"mBoard");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GamePlay_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mHudLeft,"mHudLeft");
	HX_VISIT_MEMBER_NAME(mHudRight,"mHudRight");
	HX_VISIT_MEMBER_NAME(mBoder,"mBoder");
	HX_VISIT_MEMBER_NAME(mBackground,"mBackground");
	HX_VISIT_MEMBER_NAME(mBoard,"mBoard");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic GamePlay_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"HUD_Y") ) { return HUD_Y; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mBoder") ) { return mBoder; }
		if (HX_FIELD_EQ(inName,"mBoard") ) { return mBoard; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"Board_X") ) { return Board_X; }
		if (HX_FIELD_EQ(inName,"Board_Y") ) { return Board_Y; }
		if (HX_FIELD_EQ(inName,"onCycle") ) { return onCycle_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mHudLeft") ) { return mHudLeft; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"HUDLEFT_X") ) { return HUDLEFT_X; }
		if (HX_FIELD_EQ(inName,"mHudRight") ) { return mHudRight; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"HUDRIGHT_X") ) { return HUDRIGHT_X; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mBackground") ) { return mBackground; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GamePlay_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"HUD_Y") ) { HUD_Y=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mBoder") ) { mBoder=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mBoard") ) { mBoard=inValue.Cast< ::game::gameobject::board::Board >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"Board_X") ) { Board_X=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"Board_Y") ) { Board_Y=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mHudLeft") ) { mHudLeft=inValue.Cast< ::game::gameobject::gameplay::HudLeft >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"HUDLEFT_X") ) { HUDLEFT_X=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mHudRight") ) { mHudRight=inValue.Cast< ::game::gameobject::gameplay::HudRight >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"HUDRIGHT_X") ) { HUDRIGHT_X=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mBackground") ) { mBackground=inValue.Cast< ::game::gameobject::background::Background >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GamePlay_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("mHudLeft"));
	outFields->push(HX_CSTRING("mHudRight"));
	outFields->push(HX_CSTRING("mBoder"));
	outFields->push(HX_CSTRING("mBackground"));
	outFields->push(HX_CSTRING("mBoard"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("Board_X"),
	HX_CSTRING("Board_Y"),
	HX_CSTRING("HUD_Y"),
	HX_CSTRING("HUDLEFT_X"),
	HX_CSTRING("HUDRIGHT_X"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::game::gameobject::gameplay::HudLeft*/ ,(int)offsetof(GamePlay_obj,mHudLeft),HX_CSTRING("mHudLeft")},
	{hx::fsObject /*::game::gameobject::gameplay::HudRight*/ ,(int)offsetof(GamePlay_obj,mHudRight),HX_CSTRING("mHudRight")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(GamePlay_obj,mBoder),HX_CSTRING("mBoder")},
	{hx::fsObject /*::game::gameobject::background::Background*/ ,(int)offsetof(GamePlay_obj,mBackground),HX_CSTRING("mBackground")},
	{hx::fsObject /*::game::gameobject::board::Board*/ ,(int)offsetof(GamePlay_obj,mBoard),HX_CSTRING("mBoard")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("mHudLeft"),
	HX_CSTRING("mHudRight"),
	HX_CSTRING("mBoder"),
	HX_CSTRING("mBackground"),
	HX_CSTRING("mBoard"),
	HX_CSTRING("init"),
	HX_CSTRING("onCycle"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GamePlay_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GamePlay_obj::Board_X,"Board_X");
	HX_MARK_MEMBER_NAME(GamePlay_obj::Board_Y,"Board_Y");
	HX_MARK_MEMBER_NAME(GamePlay_obj::HUD_Y,"HUD_Y");
	HX_MARK_MEMBER_NAME(GamePlay_obj::HUDLEFT_X,"HUDLEFT_X");
	HX_MARK_MEMBER_NAME(GamePlay_obj::HUDRIGHT_X,"HUDRIGHT_X");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GamePlay_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GamePlay_obj::Board_X,"Board_X");
	HX_VISIT_MEMBER_NAME(GamePlay_obj::Board_Y,"Board_Y");
	HX_VISIT_MEMBER_NAME(GamePlay_obj::HUD_Y,"HUD_Y");
	HX_VISIT_MEMBER_NAME(GamePlay_obj::HUDLEFT_X,"HUDLEFT_X");
	HX_VISIT_MEMBER_NAME(GamePlay_obj::HUDRIGHT_X,"HUDRIGHT_X");
};

#endif

Class GamePlay_obj::__mClass;

void GamePlay_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("game.gameobject.gameplay.GamePlay"), hx::TCanCast< GamePlay_obj> ,sStaticFields,sMemberFields,
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

void GamePlay_obj::__boot()
{
	Board_X= (int)110;
	Board_Y= (int)160;
	HUD_Y= (int)210;
	HUDLEFT_X= (int)0;
	HUDRIGHT_X= (int)443;
}

} // end namespace game
} // end namespace gameobject
} // end namespace gameplay
