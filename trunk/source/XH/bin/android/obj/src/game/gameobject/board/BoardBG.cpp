#include <hxcpp.h>

#ifndef INCLUDED_core_resource_ResourceManager
#include <core/resource/ResourceManager.h>
#endif
#ifndef INCLUDED_game_gameobject_board_BoardBG
#include <game/gameobject/board/BoardBG.h>
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
#ifndef INCLUDED_openfl__v2_events_Event
#include <openfl/_v2/events/Event.h>
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
namespace board{

Void BoardBG_obj::__construct()
{
HX_STACK_FRAME("game.gameobject.board.BoardBG","new",0xf7c2dcf4,"game.gameobject.board.BoardBG.new","game/gameobject/board/BoardBG.hx",23,0x14ca15dd)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(24)
	super::__construct();
	HX_STACK_LINE(25)
	this->init();
	HX_STACK_LINE(26)
	this->addEventListener(::openfl::_v2::events::Event_obj::ENTER_FRAME,this->gameLoop_dyn(),null(),null(),null());
}
;
	return null();
}

//BoardBG_obj::~BoardBG_obj() { }

Dynamic BoardBG_obj::__CreateEmpty() { return  new BoardBG_obj; }
hx::ObjectPtr< BoardBG_obj > BoardBG_obj::__new()
{  hx::ObjectPtr< BoardBG_obj > result = new BoardBG_obj();
	result->__construct();
	return result;}

Dynamic BoardBG_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BoardBG_obj > result = new BoardBG_obj();
	result->__construct();
	return result;}

Void BoardBG_obj::init( ){
{
		HX_STACK_FRAME("game.gameobject.board.BoardBG","init",0xcf772ffc,"game.gameobject.board.BoardBG.init","game/gameobject/board/BoardBG.hx",30,0x14ca15dd)
		HX_STACK_THIS(this)
		HX_STACK_LINE(31)
		this->mColor = (int)0;
		HX_STACK_LINE(33)
		::openfl::_v2::display::Sprite _g = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(33)
		this->mBack = _g;
		HX_STACK_LINE(34)
		this->addChild(this->mBack);
		HX_STACK_LINE(35)
		this->mBack->get_graphics()->beginFill((int)0,(int)1);
		HX_STACK_LINE(36)
		this->mBack->get_graphics()->drawRect((int)0,(int)0,(int)320,(int)704);
		HX_STACK_LINE(37)
		this->mBack->get_graphics()->endFill();
		HX_STACK_LINE(38)
		::openfl::_v2::display::Sprite _g1 = ::game::tnk::Game_obj::resource->getSprite((int)19);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(38)
		this->mMid = _g1;
		HX_STACK_LINE(39)
		this->addChild(this->mMid);
		HX_STACK_LINE(40)
		this->mMid->set_visible(false);
		HX_STACK_LINE(41)
		::openfl::_v2::display::Sprite _g2 = ::game::tnk::Game_obj::resource->getSprite((int)12);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(41)
		this->mFront = _g2;
		HX_STACK_LINE(42)
		this->addChild(this->mFront);
		HX_STACK_LINE(43)
		this->mMid->set_y((int)960);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BoardBG_obj,init,(void))

Void BoardBG_obj::gameLoop( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("game.gameobject.board.BoardBG","gameLoop",0xdf348262,"game.gameobject.board.BoardBG.gameLoop","game/gameobject/board/BoardBG.hx",52,0x14ca15dd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(52)
		this->drawBackground(this->mColor);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BoardBG_obj,gameLoop,(void))

Void BoardBG_obj::drawBackground( int _color){
{
		HX_STACK_FRAME("game.gameobject.board.BoardBG","drawBackground",0xf5e744fe,"game.gameobject.board.BoardBG.drawBackground","game/gameobject/board/BoardBG.hx",55,0x14ca15dd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_color,"_color")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BoardBG_obj,drawBackground,(void))

Void BoardBG_obj::effectMid( ){
{
		HX_STACK_FRAME("game.gameobject.board.BoardBG","effectMid",0x052c530b,"game.gameobject.board.BoardBG.effectMid","game/gameobject/board/BoardBG.hx",64,0x14ca15dd)
		HX_STACK_THIS(this)
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","game/gameobject/board/BoardBG.hx",64,0x14ca15dd)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("y") , (int)-10,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(64)
		hx::TCast< ::tweenx909::advanced::StandardTweenX >::cast(hx::TCast< ::tweenx909::advanced::StandardTweenX >::cast(::tweenx909::TweenX_obj::to(this->mMid,_Function_1_1::Block(),1.0,null(),null(),null(),null(),null(),null(),null(),hx::SourceInfo(HX_CSTRING("BoardBG.hx"),64,HX_CSTRING("game.gameobject.board.BoardBG"),HX_CSTRING("effectMid")))->ease(::tweenx909::EaseX_obj::quartOut_dyn()))->repeat((int)0));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BoardBG_obj,effectMid,(void))


BoardBG_obj::BoardBG_obj()
{
}

void BoardBG_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BoardBG);
	HX_MARK_MEMBER_NAME(mColor,"mColor");
	HX_MARK_MEMBER_NAME(mBack,"mBack");
	HX_MARK_MEMBER_NAME(mMid,"mMid");
	HX_MARK_MEMBER_NAME(mFront,"mFront");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BoardBG_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mColor,"mColor");
	HX_VISIT_MEMBER_NAME(mBack,"mBack");
	HX_VISIT_MEMBER_NAME(mMid,"mMid");
	HX_VISIT_MEMBER_NAME(mFront,"mFront");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic BoardBG_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mMid") ) { return mMid; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mBack") ) { return mBack; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mColor") ) { return mColor; }
		if (HX_FIELD_EQ(inName,"mFront") ) { return mFront; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"gameLoop") ) { return gameLoop_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"effectMid") ) { return effectMid_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"drawBackground") ) { return drawBackground_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BoardBG_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mMid") ) { mMid=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mBack") ) { mBack=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mColor") ) { mColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mFront") ) { mFront=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BoardBG_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("mColor"));
	outFields->push(HX_CSTRING("mBack"));
	outFields->push(HX_CSTRING("mMid"));
	outFields->push(HX_CSTRING("mFront"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(BoardBG_obj,mColor),HX_CSTRING("mColor")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(BoardBG_obj,mBack),HX_CSTRING("mBack")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(BoardBG_obj,mMid),HX_CSTRING("mMid")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(BoardBG_obj,mFront),HX_CSTRING("mFront")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("mColor"),
	HX_CSTRING("mBack"),
	HX_CSTRING("mMid"),
	HX_CSTRING("mFront"),
	HX_CSTRING("init"),
	HX_CSTRING("gameLoop"),
	HX_CSTRING("drawBackground"),
	HX_CSTRING("effectMid"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BoardBG_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BoardBG_obj::__mClass,"__mClass");
};

#endif

Class BoardBG_obj::__mClass;

void BoardBG_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("game.gameobject.board.BoardBG"), hx::TCanCast< BoardBG_obj> ,sStaticFields,sMemberFields,
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

void BoardBG_obj::__boot()
{
}

} // end namespace game
} // end namespace gameobject
} // end namespace board
