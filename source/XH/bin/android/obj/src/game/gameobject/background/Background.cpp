#include <hxcpp.h>

#ifndef INCLUDED_core_resource_ResourceManager
#include <core/resource/ResourceManager.h>
#endif
#ifndef INCLUDED_game_gameobject_background_Background
#include <game/gameobject/background/Background.h>
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
#ifndef INCLUDED_openfl__v2_display_Graphics
#include <openfl/_v2/display/Graphics.h>
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
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_tweenx909_EaseX
#include <tweenx909/EaseX.h>
#endif
#ifndef INCLUDED_tweenx909_TweenX
#include <tweenx909/TweenX.h>
#endif
#ifndef INCLUDED_tweenx909_advanced_CommandX
#include <tweenx909/advanced/CommandX.h>
#endif
#ifndef INCLUDED_tweenx909_advanced_StandardTweenX
#include <tweenx909/advanced/StandardTweenX.h>
#endif
namespace game{
namespace gameobject{
namespace background{

Void Background_obj::__construct()
{
HX_STACK_FRAME("game.gameobject.background.Background","new",0x40c12dff,"game.gameobject.background.Background.new","game/gameobject/background/Background.hx",20,0xf84f7750)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(21)
	super::__construct();
	HX_STACK_LINE(22)
	this->init();
}
;
	return null();
}

//Background_obj::~Background_obj() { }

Dynamic Background_obj::__CreateEmpty() { return  new Background_obj; }
hx::ObjectPtr< Background_obj > Background_obj::__new()
{  hx::ObjectPtr< Background_obj > result = new Background_obj();
	result->__construct();
	return result;}

Dynamic Background_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Background_obj > result = new Background_obj();
	result->__construct();
	return result;}

Void Background_obj::init( ){
{
		HX_STACK_FRAME("game.gameobject.background.Background","init",0x64ffc891,"game.gameobject.background.Background.init","game/gameobject/background/Background.hx",25,0xf84f7750)
		HX_STACK_THIS(this)
		HX_STACK_LINE(26)
		this->get_graphics()->beginFill((int)0,(int)1);
		HX_STACK_LINE(27)
		this->get_graphics()->drawRect((int)0,(int)0,(int)540,(int)960);
		HX_STACK_LINE(28)
		this->get_graphics()->endFill();
		HX_STACK_LINE(29)
		::openfl::_v2::display::Sprite _g = ::game::tnk::Game_obj::resource->getSprite((int)19);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(29)
		this->mMid = _g;
		HX_STACK_LINE(30)
		this->addChild(this->mMid);
		HX_STACK_LINE(31)
		::openfl::_v2::display::Sprite _g1 = ::game::tnk::Game_obj::resource->getSprite((int)16);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(31)
		this->mFront = _g1;
		HX_STACK_LINE(32)
		this->addChild(this->mFront);
		HX_STACK_LINE(33)
		this->mMid->set_y((int)960);
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","game/gameobject/background/Background.hx",34,0xf84f7750)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("y") , (int)-10,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(34)
		hx::TCast< ::tweenx909::advanced::StandardTweenX >::cast(hx::TCast< ::tweenx909::advanced::StandardTweenX >::cast(::tweenx909::TweenX_obj::to(this->mMid,_Function_1_1::Block(),1.0,null(),null(),null(),null(),null(),null(),null(),hx::SourceInfo(HX_CSTRING("Background.hx"),34,HX_CSTRING("game.gameobject.background.Background"),HX_CSTRING("init")))->ease(::tweenx909::EaseX_obj::quartOut_dyn()))->repeat((int)0));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Background_obj,init,(void))


Background_obj::Background_obj()
{
}

void Background_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Background);
	HX_MARK_MEMBER_NAME(mMid,"mMid");
	HX_MARK_MEMBER_NAME(mFront,"mFront");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Background_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mMid,"mMid");
	HX_VISIT_MEMBER_NAME(mFront,"mFront");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Background_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mMid") ) { return mMid; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mFront") ) { return mFront; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Background_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mMid") ) { mMid=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mFront") ) { mFront=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Background_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("mMid"));
	outFields->push(HX_CSTRING("mFront"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(Background_obj,mMid),HX_CSTRING("mMid")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(Background_obj,mFront),HX_CSTRING("mFront")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("mMid"),
	HX_CSTRING("mFront"),
	HX_CSTRING("init"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Background_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Background_obj::__mClass,"__mClass");
};

#endif

Class Background_obj::__mClass;

void Background_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("game.gameobject.background.Background"), hx::TCanCast< Background_obj> ,sStaticFields,sMemberFields,
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

void Background_obj::__boot()
{
}

} // end namespace game
} // end namespace gameobject
} // end namespace background
