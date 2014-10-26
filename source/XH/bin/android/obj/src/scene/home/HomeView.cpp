#include <hxcpp.h>

#ifndef INCLUDED_core_display_DisplayManager
#include <core/display/DisplayManager.h>
#endif
#ifndef INCLUDED_core_display_ex_ExSprite
#include <core/display/ex/ExSprite.h>
#endif
#ifndef INCLUDED_core_display_ex_SimpleButton
#include <core/display/ex/SimpleButton.h>
#endif
#ifndef INCLUDED_core_display_scene_SceneID
#include <core/display/scene/SceneID.h>
#endif
#ifndef INCLUDED_core_display_scene_SceneView
#include <core/display/scene/SceneView.h>
#endif
#ifndef INCLUDED_core_display_screen_Screen
#include <core/display/screen/Screen.h>
#endif
#ifndef INCLUDED_core_display_screen_ScreenID
#include <core/display/screen/ScreenID.h>
#endif
#ifndef INCLUDED_core_display_screen_ScreenView
#include <core/display/screen/ScreenView.h>
#endif
#ifndef INCLUDED_core_resource_ResourceManager
#include <core/resource/ResourceManager.h>
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
#ifndef INCLUDED_scene_home_HomeView
#include <scene/home/HomeView.h>
#endif
namespace scene{
namespace home{

Void HomeView_obj::__construct()
{
HX_STACK_FRAME("scene.home.HomeView","new",0xfe0e9743,"scene.home.HomeView.new","scene/home/HomeView.hx",33,0x2c02812d)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(34)
	super::__construct();
	HX_STACK_LINE(37)
	this->init();
}
;
	return null();
}

//HomeView_obj::~HomeView_obj() { }

Dynamic HomeView_obj::__CreateEmpty() { return  new HomeView_obj; }
hx::ObjectPtr< HomeView_obj > HomeView_obj::__new()
{  hx::ObjectPtr< HomeView_obj > result = new HomeView_obj();
	result->__construct();
	return result;}

Dynamic HomeView_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HomeView_obj > result = new HomeView_obj();
	result->__construct();
	return result;}

Void HomeView_obj::init( ){
{
		HX_STACK_FRAME("scene.home.HomeView","init",0x4b6e7acd,"scene.home.HomeView.init","scene/home/HomeView.hx",43,0x2c02812d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(45)
		::openfl::_v2::display::Sprite _g = ::game::tnk::Game_obj::resource->getSprite((int)3);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(45)
		this->mBg = _g;
		HX_STACK_LINE(46)
		this->addChild(this->mBg);
		HX_STACK_LINE(49)
		::core::display::ex::SimpleButton _g1 = ::core::display::ex::SimpleButton_obj::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(49)
		this->btnSingle = _g1;
		HX_STACK_LINE(50)
		::openfl::_v2::display::Sprite _g2 = ::game::tnk::Game_obj::resource->getSprite((int)8);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(50)
		this->btnSingle->setDisplay(_g2,null(),null(),null());
		HX_STACK_LINE(51)
		this->btnSingle->set_x(::scene::home::HomeView_obj::BTN_X);
		HX_STACK_LINE(52)
		this->btnSingle->set_y((::scene::home::HomeView_obj::BTN_Y + (::scene::home::HomeView_obj::BTN_OFFSET * (int)0)));
		HX_STACK_LINE(53)
		this->btnSingle->addEventListener(::openfl::_v2::events::MouseEvent_obj::CLICK,this->onSingle_dyn(),null(),null(),null());
		HX_STACK_LINE(54)
		this->addChild(this->btnSingle);
		HX_STACK_LINE(56)
		::core::display::ex::SimpleButton _g3 = ::core::display::ex::SimpleButton_obj::__new();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(56)
		this->btnBattle = _g3;
		HX_STACK_LINE(57)
		::openfl::_v2::display::Sprite _g4 = ::game::tnk::Game_obj::resource->getSprite((int)9);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(57)
		this->btnBattle->setDisplay(_g4,null(),null(),null());
		HX_STACK_LINE(58)
		this->btnBattle->set_x(::scene::home::HomeView_obj::BTN_X);
		HX_STACK_LINE(59)
		this->btnBattle->set_y((::scene::home::HomeView_obj::BTN_Y + ::scene::home::HomeView_obj::BTN_OFFSET));
		HX_STACK_LINE(60)
		this->btnBattle->addEventListener(::openfl::_v2::events::MouseEvent_obj::CLICK,this->onBattle_dyn(),null(),null(),null());
		HX_STACK_LINE(61)
		this->addChild(this->btnBattle);
		HX_STACK_LINE(63)
		::core::display::ex::SimpleButton _g5 = ::core::display::ex::SimpleButton_obj::__new();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(63)
		this->btnFriend = _g5;
		HX_STACK_LINE(64)
		::openfl::_v2::display::Sprite _g6 = ::game::tnk::Game_obj::resource->getSprite((int)10);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(64)
		this->btnFriend->setDisplay(_g6,null(),null(),null());
		HX_STACK_LINE(65)
		this->btnFriend->set_x(::scene::home::HomeView_obj::BTN_X);
		HX_STACK_LINE(66)
		this->btnFriend->set_y((::scene::home::HomeView_obj::BTN_Y + (::scene::home::HomeView_obj::BTN_OFFSET * (int)2)));
		HX_STACK_LINE(67)
		this->btnFriend->addEventListener(::openfl::_v2::events::MouseEvent_obj::CLICK,this->onFriend_dyn(),null(),null(),null());
		HX_STACK_LINE(68)
		this->addChild(this->btnFriend);
		HX_STACK_LINE(70)
		::core::display::ex::SimpleButton _g7 = ::core::display::ex::SimpleButton_obj::__new();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(70)
		this->btnMission = _g7;
		HX_STACK_LINE(71)
		::openfl::_v2::display::Sprite _g8 = ::game::tnk::Game_obj::resource->getSprite((int)11);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(71)
		this->btnMission->setDisplay(_g8,null(),null(),null());
		HX_STACK_LINE(72)
		this->btnMission->set_x(::scene::home::HomeView_obj::BTN_X);
		HX_STACK_LINE(73)
		this->btnMission->set_y((::scene::home::HomeView_obj::BTN_Y + (::scene::home::HomeView_obj::BTN_OFFSET * (int)3)));
		HX_STACK_LINE(74)
		this->btnMission->addEventListener(::openfl::_v2::events::MouseEvent_obj::CLICK,this->onMission_dyn(),null(),null(),null());
		HX_STACK_LINE(75)
		this->addChild(this->btnMission);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(HomeView_obj,init,(void))

Void HomeView_obj::gameLoop( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("scene.home.HomeView","gameLoop",0x205809b3,"scene.home.HomeView.gameLoop","scene/home/HomeView.hx",82,0x2c02812d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HomeView_obj,gameLoop,(void))

Void HomeView_obj::onSingle( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("scene.home.HomeView","onSingle",0x0548bf44,"scene.home.HomeView.onSingle","scene/home/HomeView.hx",90,0x2c02812d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(90)
		::game::tnk::Game_obj::displayManager->toScreen(::core::display::screen::ScreenID_obj::SINGLEPLAY);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HomeView_obj,onSingle,(void))

Void HomeView_obj::onBattle( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("scene.home.HomeView","onBattle",0xa2041df4,"scene.home.HomeView.onBattle","scene/home/HomeView.hx",98,0x2c02812d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(98)
		::game::tnk::Game_obj::displayManager->toScreen(::core::display::screen::ScreenID_obj::BATTLE);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HomeView_obj,onBattle,(void))

Void HomeView_obj::onFriend( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("scene.home.HomeView","onFriend",0xfdf0b31a,"scene.home.HomeView.onFriend","scene/home/HomeView.hx",106,0x2c02812d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(106)
		::game::tnk::Game_obj::displayManager->toScreen(::core::display::screen::ScreenID_obj::FRIENDPLAY);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HomeView_obj,onFriend,(void))

Void HomeView_obj::onMission( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("scene.home.HomeView","onMission",0x89cb0c10,"scene.home.HomeView.onMission","scene/home/HomeView.hx",114,0x2c02812d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(114)
		::game::tnk::Game_obj::displayManager->toScreen(::core::display::screen::ScreenID_obj::MISSION);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HomeView_obj,onMission,(void))

int HomeView_obj::BTN_X;

int HomeView_obj::BTN_Y;

int HomeView_obj::BTN_OFFSET;


HomeView_obj::HomeView_obj()
{
}

void HomeView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HomeView);
	HX_MARK_MEMBER_NAME(mBg,"mBg");
	HX_MARK_MEMBER_NAME(btnSingle,"btnSingle");
	HX_MARK_MEMBER_NAME(btnBattle,"btnBattle");
	HX_MARK_MEMBER_NAME(btnFriend,"btnFriend");
	HX_MARK_MEMBER_NAME(btnMission,"btnMission");
	::core::display::ex::ExSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HomeView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mBg,"mBg");
	HX_VISIT_MEMBER_NAME(btnSingle,"btnSingle");
	HX_VISIT_MEMBER_NAME(btnBattle,"btnBattle");
	HX_VISIT_MEMBER_NAME(btnFriend,"btnFriend");
	HX_VISIT_MEMBER_NAME(btnMission,"btnMission");
	::core::display::ex::ExSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic HomeView_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"mBg") ) { return mBg; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"BTN_X") ) { return BTN_X; }
		if (HX_FIELD_EQ(inName,"BTN_Y") ) { return BTN_Y; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"gameLoop") ) { return gameLoop_dyn(); }
		if (HX_FIELD_EQ(inName,"onSingle") ) { return onSingle_dyn(); }
		if (HX_FIELD_EQ(inName,"onBattle") ) { return onBattle_dyn(); }
		if (HX_FIELD_EQ(inName,"onFriend") ) { return onFriend_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"btnSingle") ) { return btnSingle; }
		if (HX_FIELD_EQ(inName,"btnBattle") ) { return btnBattle; }
		if (HX_FIELD_EQ(inName,"btnFriend") ) { return btnFriend; }
		if (HX_FIELD_EQ(inName,"onMission") ) { return onMission_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"BTN_OFFSET") ) { return BTN_OFFSET; }
		if (HX_FIELD_EQ(inName,"btnMission") ) { return btnMission; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic HomeView_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"mBg") ) { mBg=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"BTN_X") ) { BTN_X=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BTN_Y") ) { BTN_Y=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"btnSingle") ) { btnSingle=inValue.Cast< ::core::display::ex::SimpleButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"btnBattle") ) { btnBattle=inValue.Cast< ::core::display::ex::SimpleButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"btnFriend") ) { btnFriend=inValue.Cast< ::core::display::ex::SimpleButton >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"BTN_OFFSET") ) { BTN_OFFSET=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"btnMission") ) { btnMission=inValue.Cast< ::core::display::ex::SimpleButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HomeView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("mBg"));
	outFields->push(HX_CSTRING("btnSingle"));
	outFields->push(HX_CSTRING("btnBattle"));
	outFields->push(HX_CSTRING("btnFriend"));
	outFields->push(HX_CSTRING("btnMission"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("BTN_X"),
	HX_CSTRING("BTN_Y"),
	HX_CSTRING("BTN_OFFSET"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(HomeView_obj,mBg),HX_CSTRING("mBg")},
	{hx::fsObject /*::core::display::ex::SimpleButton*/ ,(int)offsetof(HomeView_obj,btnSingle),HX_CSTRING("btnSingle")},
	{hx::fsObject /*::core::display::ex::SimpleButton*/ ,(int)offsetof(HomeView_obj,btnBattle),HX_CSTRING("btnBattle")},
	{hx::fsObject /*::core::display::ex::SimpleButton*/ ,(int)offsetof(HomeView_obj,btnFriend),HX_CSTRING("btnFriend")},
	{hx::fsObject /*::core::display::ex::SimpleButton*/ ,(int)offsetof(HomeView_obj,btnMission),HX_CSTRING("btnMission")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("mBg"),
	HX_CSTRING("btnSingle"),
	HX_CSTRING("btnBattle"),
	HX_CSTRING("btnFriend"),
	HX_CSTRING("btnMission"),
	HX_CSTRING("init"),
	HX_CSTRING("gameLoop"),
	HX_CSTRING("onSingle"),
	HX_CSTRING("onBattle"),
	HX_CSTRING("onFriend"),
	HX_CSTRING("onMission"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HomeView_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(HomeView_obj::BTN_X,"BTN_X");
	HX_MARK_MEMBER_NAME(HomeView_obj::BTN_Y,"BTN_Y");
	HX_MARK_MEMBER_NAME(HomeView_obj::BTN_OFFSET,"BTN_OFFSET");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HomeView_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(HomeView_obj::BTN_X,"BTN_X");
	HX_VISIT_MEMBER_NAME(HomeView_obj::BTN_Y,"BTN_Y");
	HX_VISIT_MEMBER_NAME(HomeView_obj::BTN_OFFSET,"BTN_OFFSET");
};

#endif

Class HomeView_obj::__mClass;

void HomeView_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("scene.home.HomeView"), hx::TCanCast< HomeView_obj> ,sStaticFields,sMemberFields,
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

void HomeView_obj::__boot()
{
	BTN_X= (int)280;
	BTN_Y= (int)200;
	BTN_OFFSET= (int)150;
}

} // end namespace scene
} // end namespace home
