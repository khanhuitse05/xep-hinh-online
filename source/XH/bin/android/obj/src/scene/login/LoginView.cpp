#include <hxcpp.h>

#ifndef INCLUDED_core_display_ex_ExSprite
#include <core/display/ex/ExSprite.h>
#endif
#ifndef INCLUDED_core_display_scene_SceneView
#include <core/display/scene/SceneView.h>
#endif
#ifndef INCLUDED_core_display_screen_ScreenView
#include <core/display/screen/ScreenView.h>
#endif
#ifndef INCLUDED_core_util_Log
#include <core/util/Log.h>
#endif
#ifndef INCLUDED_openfl__v2_Assets
#include <openfl/_v2/Assets.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Bitmap
#include <openfl/_v2/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
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
#ifndef INCLUDED_openfl__v2_text_TextField
#include <openfl/_v2/text/TextField.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextFormat
#include <openfl/_v2/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl_text_TextFieldType
#include <openfl/text/TextFieldType.h>
#endif
#ifndef INCLUDED_scene_login_LoginView
#include <scene/login/LoginView.h>
#endif
namespace scene{
namespace login{

Void LoginView_obj::__construct()
{
HX_STACK_FRAME("scene.login.LoginView","new",0xf0c2d659,"scene.login.LoginView.new","scene/login/LoginView.hx",18,0x14c788f9)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(26)
	this->nameInputTf = ::openfl::_v2::text::TextField_obj::__new();
	HX_STACK_LINE(25)
	this->testInfoTf = ::openfl::_v2::text::TextField_obj::__new();
	HX_STACK_LINE(24)
	this->testTf = ::openfl::_v2::text::TextField_obj::__new();
	HX_STACK_LINE(22)
	this->loginBtn = ::openfl::_v2::display::Sprite_obj::__new();
	HX_STACK_LINE(21)
	this->testBtn = ::openfl::_v2::display::Sprite_obj::__new();
	HX_STACK_LINE(30)
	super::__construct();
	HX_STACK_LINE(32)
	::core::util::Log_obj::info(HX_CSTRING("new loginview"));
	HX_STACK_LINE(33)
	::openfl::_v2::display::BitmapData _g = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/btn.png"),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(33)
	::openfl::_v2::display::Bitmap _g1 = ::openfl::_v2::display::Bitmap_obj::__new(_g,null(),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(33)
	this->testBtn->addChild(_g1);
	HX_STACK_LINE(34)
	this->testBtn->buttonMode = true;
	HX_STACK_LINE(35)
	this->testBtn->set_x((int)120);
	HX_STACK_LINE(36)
	this->testBtn->set_y((int)120);
	HX_STACK_LINE(37)
	this->addChild(this->testBtn);
	HX_STACK_LINE(38)
	this->testBtn->addEventListener(::openfl::_v2::events::MouseEvent_obj::CLICK,this->onClick_dyn(),null(),null(),null());
	HX_STACK_LINE(40)
	::openfl::_v2::text::TextFormat textFM;		HX_STACK_VAR(textFM,"textFM");
	HX_STACK_LINE(41)
	this->testInfoTf->set_x((int)70);
	HX_STACK_LINE(42)
	this->testInfoTf->set_y((int)60);
	HX_STACK_LINE(43)
	this->testInfoTf->set_width((int)200);
	HX_STACK_LINE(44)
	::openfl::_v2::text::TextFormat _g2 = ::openfl::_v2::text::TextFormat_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(44)
	textFM = _g2;
	HX_STACK_LINE(45)
	textFM->size = (int)25;
	HX_STACK_LINE(46)
	this->testInfoTf->set_text(HX_CSTRING("Info"));
	HX_STACK_LINE(48)
	this->testInfoTf->setTextFormat(textFM,null(),null());
	HX_STACK_LINE(49)
	this->addChild(this->testInfoTf);
	HX_STACK_LINE(52)
	this->nameInputTf->set_width((int)200);
	HX_STACK_LINE(53)
	this->nameInputTf->set_height((int)30);
	HX_STACK_LINE(54)
	this->nameInputTf->set_x((int)100);
	HX_STACK_LINE(55)
	this->nameInputTf->set_y((int)100);
	HX_STACK_LINE(56)
	this->nameInputTf->set_multiline(false);
	HX_STACK_LINE(57)
	this->nameInputTf->set_type(::openfl::text::TextFieldType_obj::INPUT);
	HX_STACK_LINE(58)
	this->nameInputTf->set_border(true);
	HX_STACK_LINE(59)
	this->nameInputTf->set_background(true);
	HX_STACK_LINE(60)
	this->nameInputTf->set_backgroundColor((int)-7171438);
	HX_STACK_LINE(61)
	this->nameInputTf->set_maxChars((int)12);
	HX_STACK_LINE(62)
	::openfl::_v2::text::TextFormat _g3 = ::openfl::_v2::text::TextFormat_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(62)
	textFM = _g3;
	HX_STACK_LINE(63)
	textFM->size = (int)25;
	HX_STACK_LINE(64)
	this->nameInputTf->set_text(HX_CSTRING("LoginName"));
	HX_STACK_LINE(65)
	this->nameInputTf->setTextFormat(textFM,null(),null());
	HX_STACK_LINE(66)
	this->addChild(this->nameInputTf);
	HX_STACK_LINE(68)
	::openfl::_v2::display::BitmapData _g4 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/btn.png"),null());		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(68)
	::openfl::_v2::display::Bitmap _g5 = ::openfl::_v2::display::Bitmap_obj::__new(_g4,null(),null());		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(68)
	this->loginBtn->addChild(_g5);
	HX_STACK_LINE(69)
	this->loginBtn->buttonMode = true;
	HX_STACK_LINE(70)
	this->loginBtn->set_x((int)220);
	HX_STACK_LINE(71)
	this->loginBtn->set_y((int)220);
	HX_STACK_LINE(72)
	this->loginBtn->addEventListener(::openfl::_v2::events::MouseEvent_obj::CLICK,this->onLogin_dyn(),null(),null(),null());
	HX_STACK_LINE(73)
	this->addChild(this->loginBtn);
}
;
	return null();
}

//LoginView_obj::~LoginView_obj() { }

Dynamic LoginView_obj::__CreateEmpty() { return  new LoginView_obj; }
hx::ObjectPtr< LoginView_obj > LoginView_obj::__new()
{  hx::ObjectPtr< LoginView_obj > result = new LoginView_obj();
	result->__construct();
	return result;}

Dynamic LoginView_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LoginView_obj > result = new LoginView_obj();
	result->__construct();
	return result;}

Void LoginView_obj::onLogin( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("scene.login.LoginView","onLogin",0xc2cd6e43,"scene.login.LoginView.onLogin","scene/login/LoginView.hx",79,0x14c788f9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(LoginView_obj,onLogin,(void))

Void LoginView_obj::onClick( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("scene.login.LoginView","onClick",0x92381122,"scene.login.LoginView.onClick","scene/login/LoginView.hx",85,0x14c788f9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(LoginView_obj,onClick,(void))


LoginView_obj::LoginView_obj()
{
}

void LoginView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LoginView);
	HX_MARK_MEMBER_NAME(testBtn,"testBtn");
	HX_MARK_MEMBER_NAME(loginBtn,"loginBtn");
	HX_MARK_MEMBER_NAME(testTf,"testTf");
	HX_MARK_MEMBER_NAME(testInfoTf,"testInfoTf");
	HX_MARK_MEMBER_NAME(nameInputTf,"nameInputTf");
	::core::display::ex::ExSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LoginView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(testBtn,"testBtn");
	HX_VISIT_MEMBER_NAME(loginBtn,"loginBtn");
	HX_VISIT_MEMBER_NAME(testTf,"testTf");
	HX_VISIT_MEMBER_NAME(testInfoTf,"testInfoTf");
	HX_VISIT_MEMBER_NAME(nameInputTf,"nameInputTf");
	::core::display::ex::ExSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic LoginView_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"testTf") ) { return testTf; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"testBtn") ) { return testBtn; }
		if (HX_FIELD_EQ(inName,"onLogin") ) { return onLogin_dyn(); }
		if (HX_FIELD_EQ(inName,"onClick") ) { return onClick_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"loginBtn") ) { return loginBtn; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"testInfoTf") ) { return testInfoTf; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"nameInputTf") ) { return nameInputTf; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LoginView_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"testTf") ) { testTf=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"testBtn") ) { testBtn=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"loginBtn") ) { loginBtn=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"testInfoTf") ) { testInfoTf=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"nameInputTf") ) { nameInputTf=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LoginView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("testBtn"));
	outFields->push(HX_CSTRING("loginBtn"));
	outFields->push(HX_CSTRING("testTf"));
	outFields->push(HX_CSTRING("testInfoTf"));
	outFields->push(HX_CSTRING("nameInputTf"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(LoginView_obj,testBtn),HX_CSTRING("testBtn")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(LoginView_obj,loginBtn),HX_CSTRING("loginBtn")},
	{hx::fsObject /*::openfl::_v2::text::TextField*/ ,(int)offsetof(LoginView_obj,testTf),HX_CSTRING("testTf")},
	{hx::fsObject /*::openfl::_v2::text::TextField*/ ,(int)offsetof(LoginView_obj,testInfoTf),HX_CSTRING("testInfoTf")},
	{hx::fsObject /*::openfl::_v2::text::TextField*/ ,(int)offsetof(LoginView_obj,nameInputTf),HX_CSTRING("nameInputTf")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("testBtn"),
	HX_CSTRING("loginBtn"),
	HX_CSTRING("testTf"),
	HX_CSTRING("testInfoTf"),
	HX_CSTRING("nameInputTf"),
	HX_CSTRING("onLogin"),
	HX_CSTRING("onClick"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LoginView_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LoginView_obj::__mClass,"__mClass");
};

#endif

Class LoginView_obj::__mClass;

void LoginView_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("scene.login.LoginView"), hx::TCanCast< LoginView_obj> ,sStaticFields,sMemberFields,
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

void LoginView_obj::__boot()
{
}

} // end namespace scene
} // end namespace login
