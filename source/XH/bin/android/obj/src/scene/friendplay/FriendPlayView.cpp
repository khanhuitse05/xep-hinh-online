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
#ifndef INCLUDED_scene_friendplay_FriendPlayView
#include <scene/friendplay/FriendPlayView.h>
#endif
namespace scene{
namespace friendplay{

Void FriendPlayView_obj::__construct()
{
HX_STACK_FRAME("scene.friendplay.FriendPlayView","new",0xe60e1483,"scene.friendplay.FriendPlayView.new","scene/friendplay/FriendPlayView.hx",22,0x8a086aad)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(23)
	super::__construct();
	HX_STACK_LINE(26)
	this->init();
}
;
	return null();
}

//FriendPlayView_obj::~FriendPlayView_obj() { }

Dynamic FriendPlayView_obj::__CreateEmpty() { return  new FriendPlayView_obj; }
hx::ObjectPtr< FriendPlayView_obj > FriendPlayView_obj::__new()
{  hx::ObjectPtr< FriendPlayView_obj > result = new FriendPlayView_obj();
	result->__construct();
	return result;}

Dynamic FriendPlayView_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FriendPlayView_obj > result = new FriendPlayView_obj();
	result->__construct();
	return result;}

Void FriendPlayView_obj::init( ){
{
		HX_STACK_FRAME("scene.friendplay.FriendPlayView","init",0x62fc958d,"scene.friendplay.FriendPlayView.init","scene/friendplay/FriendPlayView.hx",30,0x8a086aad)
		HX_STACK_THIS(this)
		HX_STACK_LINE(32)
		::openfl::_v2::display::Sprite _g = ::game::tnk::Game_obj::resource->getSprite((int)6);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(32)
		this->mBg = _g;
		HX_STACK_LINE(33)
		this->addChild(this->mBg);
		HX_STACK_LINE(35)
		::core::display::ex::SimpleButton _g1 = ::core::display::ex::SimpleButton_obj::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(35)
		this->btnBack = _g1;
		HX_STACK_LINE(36)
		::openfl::_v2::display::Sprite _g2 = ::game::tnk::Game_obj::resource->getSprite((int)12);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(36)
		this->btnBack->setDisplay(_g2,null(),null(),null());
		HX_STACK_LINE(37)
		this->btnBack->set_x((int)50);
		HX_STACK_LINE(38)
		this->btnBack->set_y((int)50);
		HX_STACK_LINE(39)
		this->btnBack->addEventListener(::openfl::_v2::events::MouseEvent_obj::CLICK,this->onBack_dyn(),null(),null(),null());
		HX_STACK_LINE(40)
		this->addChild(this->btnBack);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FriendPlayView_obj,init,(void))

Void FriendPlayView_obj::gameLoop( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("scene.friendplay.FriendPlayView","gameLoop",0x0eea8473,"scene.friendplay.FriendPlayView.gameLoop","scene/friendplay/FriendPlayView.hx",44,0x8a086aad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FriendPlayView_obj,gameLoop,(void))

Void FriendPlayView_obj::onBack( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("scene.friendplay.FriendPlayView","onBack",0xd7c596a3,"scene.friendplay.FriendPlayView.onBack","scene/friendplay/FriendPlayView.hx",53,0x8a086aad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(53)
		::game::tnk::Game_obj::displayManager->toScreen(::core::display::screen::ScreenID_obj::HOME);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FriendPlayView_obj,onBack,(void))


FriendPlayView_obj::FriendPlayView_obj()
{
}

void FriendPlayView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FriendPlayView);
	HX_MARK_MEMBER_NAME(mBg,"mBg");
	HX_MARK_MEMBER_NAME(btnBack,"btnBack");
	::core::display::ex::ExSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FriendPlayView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mBg,"mBg");
	HX_VISIT_MEMBER_NAME(btnBack,"btnBack");
	::core::display::ex::ExSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FriendPlayView_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"mBg") ) { return mBg; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onBack") ) { return onBack_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"btnBack") ) { return btnBack; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"gameLoop") ) { return gameLoop_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FriendPlayView_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"mBg") ) { mBg=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"btnBack") ) { btnBack=inValue.Cast< ::core::display::ex::SimpleButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FriendPlayView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("mBg"));
	outFields->push(HX_CSTRING("btnBack"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(FriendPlayView_obj,mBg),HX_CSTRING("mBg")},
	{hx::fsObject /*::core::display::ex::SimpleButton*/ ,(int)offsetof(FriendPlayView_obj,btnBack),HX_CSTRING("btnBack")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("mBg"),
	HX_CSTRING("btnBack"),
	HX_CSTRING("init"),
	HX_CSTRING("gameLoop"),
	HX_CSTRING("onBack"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FriendPlayView_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FriendPlayView_obj::__mClass,"__mClass");
};

#endif

Class FriendPlayView_obj::__mClass;

void FriendPlayView_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("scene.friendplay.FriendPlayView"), hx::TCanCast< FriendPlayView_obj> ,sStaticFields,sMemberFields,
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

void FriendPlayView_obj::__boot()
{
}

} // end namespace scene
} // end namespace friendplay
