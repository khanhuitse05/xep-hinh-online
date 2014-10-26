#include <hxcpp.h>

#ifndef INCLUDED_core_display_ex_Lable
#include <core/display/ex/Lable.h>
#endif
#ifndef INCLUDED_openfl__v2_Assets
#include <openfl/_v2/Assets.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_text_Font
#include <openfl/_v2/text/Font.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextField
#include <openfl/_v2/text/TextField.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextFormat
#include <openfl/_v2/text/TextFormat.h>
#endif
#ifndef INCLUDED_openfl_text_TextFieldAutoSize
#include <openfl/text/TextFieldAutoSize.h>
#endif
namespace core{
namespace display{
namespace ex{

Void Lable_obj::__construct()
{
HX_STACK_FRAME("core.display.ex.Lable","new",0x5bd0e938,"core.display.ex.Lable.new","core/display/ex/Lable.hx",22,0x38e9a077)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(22)
	super::__construct();
}
;
	return null();
}

//Lable_obj::~Lable_obj() { }

Dynamic Lable_obj::__CreateEmpty() { return  new Lable_obj; }
hx::ObjectPtr< Lable_obj > Lable_obj::__new()
{  hx::ObjectPtr< Lable_obj > result = new Lable_obj();
	result->__construct();
	return result;}

Dynamic Lable_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Lable_obj > result = new Lable_obj();
	result->__construct();
	return result;}

Void Lable_obj::setFont( int nFontSize,int nFontColor){
{
		HX_STACK_FRAME("core.display.ex.Lable","setFont",0x63bb0369,"core.display.ex.Lable.setFont","core/display/ex/Lable.hx",30,0x38e9a077)
		HX_STACK_THIS(this)
		HX_STACK_ARG(nFontSize,"nFontSize")
		HX_STACK_ARG(nFontColor,"nFontColor")
		HX_STACK_LINE(31)
		::openfl::_v2::text::TextFormat pFormat = ::openfl::_v2::text::TextFormat_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(pFormat,"pFormat");
		HX_STACK_LINE(32)
		pFormat->size = nFontSize;
		HX_STACK_LINE(33)
		pFormat->color = nFontColor;
		HX_STACK_LINE(34)
		this->set_defaultTextFormat(pFormat);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Lable_obj,setFont,(void))

Void Lable_obj::setSystemFont( ::String strFontName,int nFontSize,int nFontColor){
{
		HX_STACK_FRAME("core.display.ex.Lable","setSystemFont",0xa3319978,"core.display.ex.Lable.setSystemFont","core/display/ex/Lable.hx",44,0x38e9a077)
		HX_STACK_THIS(this)
		HX_STACK_ARG(strFontName,"strFontName")
		HX_STACK_ARG(nFontSize,"nFontSize")
		HX_STACK_ARG(nFontColor,"nFontColor")
		HX_STACK_LINE(45)
		::openfl::_v2::text::TextFormat _g = ::core::display::ex::Lable_obj::getSysFontFormat(strFontName,nFontSize,nFontColor);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(45)
		this->set_defaultTextFormat(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Lable_obj,setSystemFont,(void))

Void Lable_obj::setSysText( ::String str){
{
		HX_STACK_FRAME("core.display.ex.Lable","setSysText",0x8c800700,"core.display.ex.Lable.setSysText","core/display/ex/Lable.hx",68,0x38e9a077)
		HX_STACK_THIS(this)
		HX_STACK_ARG(str,"str")
		HX_STACK_LINE(69)
		this->set_htmlText(str);
		HX_STACK_LINE(70)
		this->set_autoSize(::openfl::text::TextFieldAutoSize_obj::LEFT);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Lable_obj,setSysText,(void))

Void Lable_obj::setSysTextInfo( Float x,Float y,::String str){
{
		HX_STACK_FRAME("core.display.ex.Lable","setSysTextInfo",0xcb23eb8e,"core.display.ex.Lable.setSysTextInfo","core/display/ex/Lable.hx",78,0x38e9a077)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(str,"str")
		HX_STACK_LINE(79)
		this->setSysText(str);
		HX_STACK_LINE(80)
		this->set_x(x);
		HX_STACK_LINE(81)
		this->set_y(y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Lable_obj,setSysTextInfo,(void))

::openfl::_v2::text::TextFormat Lable_obj::getSysFontFormat( ::String strFontName,int nFontSize,int nFontColor){
	HX_STACK_FRAME("core.display.ex.Lable","getSysFontFormat",0x5c037385,"core.display.ex.Lable.getSysFontFormat","core/display/ex/Lable.hx",55,0x38e9a077)
	HX_STACK_ARG(strFontName,"strFontName")
	HX_STACK_ARG(nFontSize,"nFontSize")
	HX_STACK_ARG(nFontColor,"nFontColor")
	HX_STACK_LINE(56)
	::openfl::_v2::text::Font pFont = ::openfl::_v2::Assets_obj::getFont(strFontName,null());		HX_STACK_VAR(pFont,"pFont");
	HX_STACK_LINE(57)
	::openfl::_v2::text::TextFormat pFormat = ::openfl::_v2::text::TextFormat_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(pFormat,"pFormat");
	HX_STACK_LINE(58)
	pFormat->font = pFont->fontName;
	HX_STACK_LINE(59)
	pFormat->size = nFontSize;
	HX_STACK_LINE(60)
	pFormat->color = nFontColor;
	HX_STACK_LINE(61)
	return pFormat;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Lable_obj,getSysFontFormat,return )


Lable_obj::Lable_obj()
{
}

Dynamic Lable_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"setFont") ) { return setFont_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"setSysText") ) { return setSysText_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setSystemFont") ) { return setSystemFont_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setSysTextInfo") ) { return setSysTextInfo_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getSysFontFormat") ) { return getSysFontFormat_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Lable_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Lable_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("getSysFontFormat"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("setFont"),
	HX_CSTRING("setSystemFont"),
	HX_CSTRING("setSysText"),
	HX_CSTRING("setSysTextInfo"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Lable_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Lable_obj::__mClass,"__mClass");
};

#endif

Class Lable_obj::__mClass;

void Lable_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("core.display.ex.Lable"), hx::TCanCast< Lable_obj> ,sStaticFields,sMemberFields,
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

void Lable_obj::__boot()
{
}

} // end namespace core
} // end namespace display
} // end namespace ex
