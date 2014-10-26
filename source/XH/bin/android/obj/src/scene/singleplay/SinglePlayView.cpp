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
#ifndef INCLUDED_scene_singleplay_SinglePlayView
#include <scene/singleplay/SinglePlayView.h>
#endif
namespace scene{
namespace singleplay{

Void SinglePlayView_obj::__construct()
{
HX_STACK_FRAME("scene.singleplay.SinglePlayView","new",0x0902f0c3,"scene.singleplay.SinglePlayView.new","scene/singleplay/SinglePlayView.hx",23,0x0751d66d)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(24)
	super::__construct();
	HX_STACK_LINE(27)
	this->init();
}
;
	return null();
}

//SinglePlayView_obj::~SinglePlayView_obj() { }

Dynamic SinglePlayView_obj::__CreateEmpty() { return  new SinglePlayView_obj; }
hx::ObjectPtr< SinglePlayView_obj > SinglePlayView_obj::__new()
{  hx::ObjectPtr< SinglePlayView_obj > result = new SinglePlayView_obj();
	result->__construct();
	return result;}

Dynamic SinglePlayView_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SinglePlayView_obj > result = new SinglePlayView_obj();
	result->__construct();
	return result;}

Void SinglePlayView_obj::init( ){
{
		HX_STACK_FRAME("scene.singleplay.SinglePlayView","init",0xd648714d,"scene.singleplay.SinglePlayView.init","scene/singleplay/SinglePlayView.hx",31,0x0751d66d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(33)
		::openfl::_v2::display::Sprite _g = ::game::tnk::Game_obj::resource->getSprite((int)4);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(33)
		this->mBg = _g;
		HX_STACK_LINE(34)
		this->addChild(this->mBg);
		HX_STACK_LINE(36)
		::core::display::ex::SimpleButton _g1 = ::core::display::ex::SimpleButton_obj::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(36)
		this->btnBack = _g1;
		HX_STACK_LINE(37)
		::openfl::_v2::display::Sprite _g2 = ::game::tnk::Game_obj::resource->getSprite((int)12);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(37)
		this->btnBack->setDisplay(_g2,null(),null(),null());
		HX_STACK_LINE(38)
		this->btnBack->set_x((int)50);
		HX_STACK_LINE(39)
		this->btnBack->set_y((int)50);
		HX_STACK_LINE(40)
		this->btnBack->addEventListener(::openfl::_v2::events::MouseEvent_obj::CLICK,this->onBack_dyn(),null(),null(),null());
		HX_STACK_LINE(41)
		this->addChild(this->btnBack);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SinglePlayView_obj,init,(void))

Void SinglePlayView_obj::gameLoop( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("scene.singleplay.SinglePlayView","gameLoop",0xd1af4033,"scene.singleplay.SinglePlayView.gameLoop","scene/singleplay/SinglePlayView.hx",45,0x0751d66d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SinglePlayView_obj,gameLoop,(void))

Void SinglePlayView_obj::onBack( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("scene.singleplay.SinglePlayView","onBack",0x9a8fe263,"scene.singleplay.SinglePlayView.onBack","scene/singleplay/SinglePlayView.hx",54,0x0751d66d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(54)
		::game::tnk::Game_obj::displayManager->toScreen(::core::display::screen::ScreenID_obj::HOME);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SinglePlayView_obj,onBack,(void))


SinglePlayView_obj::SinglePlayView_obj()
{
}

void SinglePlayView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SinglePlayView);
	HX_MARK_MEMBER_NAME(mBg,"mBg");
	HX_MARK_MEMBER_NAME(btnBack,"btnBack");
	::core::display::ex::ExSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SinglePlayView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mBg,"mBg");
	HX_VISIT_MEMBER_NAME(btnBack,"btnBack");
	::core::display::ex::ExSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic SinglePlayView_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic SinglePlayView_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
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

void SinglePlayView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("mBg"));
	outFields->push(HX_CSTRING("btnBack"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(SinglePlayView_obj,mBg),HX_CSTRING("mBg")},
	{hx::fsObject /*::core::display::ex::SimpleButton*/ ,(int)offsetof(SinglePlayView_obj,btnBack),HX_CSTRING("btnBack")},
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
	HX_MARK_MEMBER_NAME(SinglePlayView_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SinglePlayView_obj::__mClass,"__mClass");
};

#endif

Class SinglePlayView_obj::__mClass;

void SinglePlayView_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("scene.singleplay.SinglePlayView"), hx::TCanCast< SinglePlayView_obj> ,sStaticFields,sMemberFields,
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

void SinglePlayView_obj::__boot()
{
}

} // end namespace scene
} // end namespace singleplay
