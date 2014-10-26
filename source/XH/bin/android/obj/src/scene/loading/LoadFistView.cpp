#include <hxcpp.h>

#ifndef INCLUDED_core_display_DisplayManager
#include <core/display/DisplayManager.h>
#endif
#ifndef INCLUDED_core_display_ex_ExSprite
#include <core/display/ex/ExSprite.h>
#endif
#ifndef INCLUDED_core_display_ex_Lable
#include <core/display/ex/Lable.h>
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
#ifndef INCLUDED_core_sprites_Animx
#include <core/sprites/Animx.h>
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
#ifndef INCLUDED_openfl__v2_text_TextField
#include <openfl/_v2/text/TextField.h>
#endif
#ifndef INCLUDED_scene_loading_LoadFistView
#include <scene/loading/LoadFistView.h>
#endif
namespace scene{
namespace loading{

Void LoadFistView_obj::__construct()
{
HX_STACK_FRAME("scene.loading.LoadFistView","new",0x3e046395,"scene.loading.LoadFistView.new","scene/loading/LoadFistView.hx",24,0xc535eeb9)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(25)
	super::__construct();
	HX_STACK_LINE(26)
	this->mCount = (int)0;
	HX_STACK_LINE(27)
	this->addEventListener(::openfl::_v2::events::Event_obj::ENTER_FRAME,this->gameLoop_dyn(),null(),null(),null());
	HX_STACK_LINE(29)
	this->init();
}
;
	return null();
}

//LoadFistView_obj::~LoadFistView_obj() { }

Dynamic LoadFistView_obj::__CreateEmpty() { return  new LoadFistView_obj; }
hx::ObjectPtr< LoadFistView_obj > LoadFistView_obj::__new()
{  hx::ObjectPtr< LoadFistView_obj > result = new LoadFistView_obj();
	result->__construct();
	return result;}

Dynamic LoadFistView_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LoadFistView_obj > result = new LoadFistView_obj();
	result->__construct();
	return result;}

Void LoadFistView_obj::init( ){
{
		HX_STACK_FRAME("scene.loading.LoadFistView","init",0x028b763b,"scene.loading.LoadFistView.init","scene/loading/LoadFistView.hx",33,0xc535eeb9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(35)
		this->get_graphics()->beginFill((int)16777215,null());
		HX_STACK_LINE(36)
		this->get_graphics()->drawRect((int)0,(int)0,(int)540,(int)960);
		HX_STACK_LINE(37)
		this->get_graphics()->endFill();
		HX_STACK_LINE(39)
		::core::sprites::Animx _g = ::game::tnk::Game_obj::resource->getAnim((int)1);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(39)
		this->mAnim = _g;
		HX_STACK_LINE(40)
		this->mAnim->set_x((Float((((int)540 - this->mAnim->mWidth))) / Float((int)2)));
		HX_STACK_LINE(41)
		this->mAnim->set_y((int)300);
		HX_STACK_LINE(42)
		this->mAnim->animate();
		HX_STACK_LINE(43)
		this->addChild(this->mAnim);
		HX_STACK_LINE(45)
		::core::display::ex::Lable _g1 = ::core::display::ex::Lable_obj::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(45)
		this->mNoteText = _g1;
		HX_STACK_LINE(46)
		this->mNoteText->setFont((int)20,(int)2958262);
		HX_STACK_LINE(47)
		this->mNoteText->setSysTextInfo((int)220,(int)350,HX_CSTRING("loading..."));
		HX_STACK_LINE(48)
		this->addChild(this->mNoteText);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(LoadFistView_obj,init,(void))

Void LoadFistView_obj::gameLoop( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("scene.loading.LoadFistView","gameLoop",0x7f225421,"scene.loading.LoadFistView.gameLoop","scene/loading/LoadFistView.hx",53,0xc535eeb9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(54)
		(this->mCount)++;
		HX_STACK_LINE(55)
		if (((this->mCount > (int)300))){
			HX_STACK_LINE(57)
			this->removeEventListener(::openfl::_v2::events::Event_obj::ENTER_FRAME,this->gameLoop_dyn(),null());
			HX_STACK_LINE(58)
			::game::tnk::Game_obj::displayManager->toScreen(::core::display::screen::ScreenID_obj::HOME);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(LoadFistView_obj,gameLoop,(void))


LoadFistView_obj::LoadFistView_obj()
{
}

void LoadFistView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LoadFistView);
	HX_MARK_MEMBER_NAME(mAnim,"mAnim");
	HX_MARK_MEMBER_NAME(mNoteText,"mNoteText");
	HX_MARK_MEMBER_NAME(mCount,"mCount");
	::core::display::ex::ExSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LoadFistView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mAnim,"mAnim");
	HX_VISIT_MEMBER_NAME(mNoteText,"mNoteText");
	HX_VISIT_MEMBER_NAME(mCount,"mCount");
	::core::display::ex::ExSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic LoadFistView_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mAnim") ) { return mAnim; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mCount") ) { return mCount; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"gameLoop") ) { return gameLoop_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mNoteText") ) { return mNoteText; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LoadFistView_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"mAnim") ) { mAnim=inValue.Cast< ::core::sprites::Animx >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mCount") ) { mCount=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mNoteText") ) { mNoteText=inValue.Cast< ::core::display::ex::Lable >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LoadFistView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("mAnim"));
	outFields->push(HX_CSTRING("mNoteText"));
	outFields->push(HX_CSTRING("mCount"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::core::sprites::Animx*/ ,(int)offsetof(LoadFistView_obj,mAnim),HX_CSTRING("mAnim")},
	{hx::fsObject /*::core::display::ex::Lable*/ ,(int)offsetof(LoadFistView_obj,mNoteText),HX_CSTRING("mNoteText")},
	{hx::fsInt,(int)offsetof(LoadFistView_obj,mCount),HX_CSTRING("mCount")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("mAnim"),
	HX_CSTRING("mNoteText"),
	HX_CSTRING("mCount"),
	HX_CSTRING("init"),
	HX_CSTRING("gameLoop"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LoadFistView_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LoadFistView_obj::__mClass,"__mClass");
};

#endif

Class LoadFistView_obj::__mClass;

void LoadFistView_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("scene.loading.LoadFistView"), hx::TCanCast< LoadFistView_obj> ,sStaticFields,sMemberFields,
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

void LoadFistView_obj::__boot()
{
}

} // end namespace scene
} // end namespace loading
