#include <hxcpp.h>

#ifndef INCLUDED_core_display_ex_ExFont
#include <core/display/ex/ExFont.h>
#endif
#ifndef INCLUDED_core_display_ex_ExSprite
#include <core/display/ex/ExSprite.h>
#endif
#ifndef INCLUDED_openfl__v2_Assets
#include <openfl/_v2/Assets.h>
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
namespace core{
namespace display{
namespace ex{

Void ExFont_obj::__construct()
{
HX_STACK_FRAME("core.display.ex.ExFont","new",0xa4da3094,"core.display.ex.ExFont.new","core/display/ex/ExFont.hx",29,0xf5de593d)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(30)
	super::__construct();
	HX_STACK_LINE(31)
	this->m_nBorderSize = (int)-1;
	HX_STACK_LINE(32)
	this->m_nFontType = ::core::display::ex::ExFont_obj::FONT_NONE;
}
;
	return null();
}

//ExFont_obj::~ExFont_obj() { }

Dynamic ExFont_obj::__CreateEmpty() { return  new ExFont_obj; }
hx::ObjectPtr< ExFont_obj > ExFont_obj::__new()
{  hx::ObjectPtr< ExFont_obj > result = new ExFont_obj();
	result->__construct();
	return result;}

Dynamic ExFont_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ExFont_obj > result = new ExFont_obj();
	result->__construct();
	return result;}

Void ExFont_obj::setSystemFont( ::String strFontName,int nFontSize,int nFontColor,bool isBorder,int nBorderColor,int nBorderSize){
{
		HX_STACK_FRAME("core.display.ex.ExFont","setSystemFont",0xf1282bd4,"core.display.ex.ExFont.setSystemFont","core/display/ex/ExFont.hx",58,0xf5de593d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(strFontName,"strFontName")
		HX_STACK_ARG(nFontSize,"nFontSize")
		HX_STACK_ARG(nFontColor,"nFontColor")
		HX_STACK_ARG(isBorder,"isBorder")
		HX_STACK_ARG(nBorderColor,"nBorderColor")
		HX_STACK_ARG(nBorderSize,"nBorderSize")
		HX_STACK_LINE(59)
		if (((this->m_pSysTextField != null()))){
			HX_STACK_LINE(61)
			this->removeChild(this->m_pSysTextField);
		}
		else{
			HX_STACK_LINE(65)
			::openfl::_v2::text::TextField _g = ::openfl::_v2::text::TextField_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(65)
			this->m_pSysTextField = _g;
		}
		HX_STACK_LINE(68)
		::openfl::_v2::text::TextFormat _g1 = ::core::display::ex::ExFont_obj::getSysFontFormat(strFontName,nFontSize,nFontColor,null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(68)
		this->m_pSysTextField->set_defaultTextFormat(_g1);
		HX_STACK_LINE(69)
		this->m_pSysTextField->set_selectable(false);
		HX_STACK_LINE(70)
		this->m_pSysTextField->set_embedFonts(true);
		HX_STACK_LINE(72)
		this->m_nFontType = ::core::display::ex::ExFont_obj::FONT_SYSTEM;
		HX_STACK_LINE(74)
		if ((isBorder)){
			HX_STACK_LINE(76)
			this->m_nBorderSize = nBorderSize;
			HX_STACK_LINE(77)
			Array< ::Dynamic > _g2 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(77)
			this->m_pSysTextBorder = _g2;
			HX_STACK_LINE(78)
			::openfl::_v2::text::TextFormat pFormatBorder = ::core::display::ex::ExFont_obj::getSysFontFormat(strFontName,nFontSize,nBorderColor,null());		HX_STACK_VAR(pFormatBorder,"pFormatBorder");
			HX_STACK_LINE(79)
			{
				HX_STACK_LINE(79)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(79)
				while((true)){
					HX_STACK_LINE(79)
					if ((!(((_g < (int)4))))){
						HX_STACK_LINE(79)
						break;
					}
					HX_STACK_LINE(79)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(81)
					this->m_pSysTextBorder[i] = ::openfl::_v2::text::TextField_obj::__new();
					HX_STACK_LINE(82)
					this->m_pSysTextBorder->__get(i).StaticCast< ::openfl::_v2::text::TextField >()->set_defaultTextFormat(pFormatBorder);
					HX_STACK_LINE(83)
					this->m_pSysTextBorder->__get(i).StaticCast< ::openfl::_v2::text::TextField >()->set_selectable(false);
					HX_STACK_LINE(84)
					this->m_pSysTextBorder->__get(i).StaticCast< ::openfl::_v2::text::TextField >()->set_embedFonts(true);
					HX_STACK_LINE(86)
					this->addChild(this->m_pSysTextBorder->__get(i).StaticCast< ::openfl::_v2::text::TextField >());
				}
			}
			HX_STACK_LINE(89)
			this->m_pSysTextBorder->__get((int)0).StaticCast< ::openfl::_v2::text::TextField >()->set_x(-(this->m_nBorderSize));
			HX_STACK_LINE(90)
			this->m_pSysTextBorder->__get((int)1).StaticCast< ::openfl::_v2::text::TextField >()->set_y(-(this->m_nBorderSize));
			HX_STACK_LINE(91)
			this->m_pSysTextBorder->__get((int)2).StaticCast< ::openfl::_v2::text::TextField >()->set_x(this->m_nBorderSize);
			HX_STACK_LINE(92)
			this->m_pSysTextBorder->__get((int)3).StaticCast< ::openfl::_v2::text::TextField >()->set_y(this->m_nBorderSize);
		}
		HX_STACK_LINE(95)
		this->addChild(this->m_pSysTextField);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(ExFont_obj,setSystemFont,(void))

Void ExFont_obj::setSysFontSelectable( bool isSel){
{
		HX_STACK_FRAME("core.display.ex.ExFont","setSysFontSelectable",0xcedb427c,"core.display.ex.ExFont.setSysFontSelectable","core/display/ex/ExFont.hx",121,0xf5de593d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(isSel,"isSel")
		HX_STACK_LINE(122)
		this->m_pSysTextField->set_selectable(isSel);
		HX_STACK_LINE(123)
		if (((this->m_pSysTextBorder != null()))){
			HX_STACK_LINE(125)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(125)
			Array< ::Dynamic > _g1 = this->m_pSysTextBorder;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(125)
			while((true)){
				HX_STACK_LINE(125)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(125)
					break;
				}
				HX_STACK_LINE(125)
				::openfl::_v2::text::TextField border = _g1->__get(_g).StaticCast< ::openfl::_v2::text::TextField >();		HX_STACK_VAR(border,"border");
				HX_STACK_LINE(125)
				++(_g);
				HX_STACK_LINE(127)
				border->set_selectable(isSel);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ExFont_obj,setSysFontSelectable,(void))

Void ExFont_obj::setSysText( ::String str){
{
		HX_STACK_FRAME("core.display.ex.ExFont","setSysText",0xf25ea324,"core.display.ex.ExFont.setSysText","core/display/ex/ExFont.hx",137,0xf5de593d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(str,"str")
		HX_STACK_LINE(138)
		this->m_pSysTextField->set_text(str);
		HX_STACK_LINE(139)
		if (((this->m_pSysTextBorder != null()))){
			HX_STACK_LINE(141)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(141)
			int _g = this->m_pSysTextBorder->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(141)
			while((true)){
				HX_STACK_LINE(141)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(141)
					break;
				}
				HX_STACK_LINE(141)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(143)
				this->m_pSysTextBorder->__get(i).StaticCast< ::openfl::_v2::text::TextField >()->set_text(str);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ExFont_obj,setSysText,(void))

Void ExFont_obj::setSysTextInfo( Float x,Float y,::String str){
{
		HX_STACK_FRAME("core.display.ex.ExFont","setSysTextInfo",0xb4ed69b2,"core.display.ex.ExFont.setSysTextInfo","core/display/ex/ExFont.hx",153,0xf5de593d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(str,"str")
		HX_STACK_LINE(154)
		this->setSysText(str);
		HX_STACK_LINE(155)
		this->set_x(x);
		HX_STACK_LINE(156)
		this->set_y(y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ExFont_obj,setSysTextInfo,(void))

Void ExFont_obj::setSysFieldWidth( int w){
{
		HX_STACK_FRAME("core.display.ex.ExFont","setSysFieldWidth",0xa608b8a3,"core.display.ex.ExFont.setSysFieldWidth","core/display/ex/ExFont.hx",164,0xf5de593d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(w,"w")
		HX_STACK_LINE(165)
		this->m_pSysTextField->set_width(w);
		HX_STACK_LINE(166)
		if (((this->m_pSysTextBorder != null()))){
			HX_STACK_LINE(168)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(168)
			int _g = this->m_pSysTextBorder->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(168)
			while((true)){
				HX_STACK_LINE(168)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(168)
					break;
				}
				HX_STACK_LINE(168)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(170)
				this->m_pSysTextBorder->__get(i).StaticCast< ::openfl::_v2::text::TextField >()->set_width(w);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ExFont_obj,setSysFieldWidth,(void))

Void ExFont_obj::setSysMouseEnabled( bool isEnable){
{
		HX_STACK_FRAME("core.display.ex.ExFont","setSysMouseEnabled",0xe538fa53,"core.display.ex.ExFont.setSysMouseEnabled","core/display/ex/ExFont.hx",180,0xf5de593d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(isEnable,"isEnable")
		HX_STACK_LINE(181)
		this->set_mouseEnabled(isEnable);
		HX_STACK_LINE(182)
		this->m_pSysTextField->set_mouseEnabled(isEnable);
		HX_STACK_LINE(183)
		if (((this->m_pSysTextBorder != null()))){
			HX_STACK_LINE(185)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(185)
			int _g = this->m_pSysTextBorder->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(185)
			while((true)){
				HX_STACK_LINE(185)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(185)
					break;
				}
				HX_STACK_LINE(185)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(187)
				this->m_pSysTextBorder->__get(i).StaticCast< ::openfl::_v2::text::TextField >()->set_mouseEnabled(isEnable);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ExFont_obj,setSysMouseEnabled,(void))

int ExFont_obj::FONT_NONE;

int ExFont_obj::FONT_SYSTEM;

int ExFont_obj::FONT_MANUAL;

::core::display::ex::ExFont ExFont_obj::getSystemFont( ::String strFontName,int nFontSize,int nFontColor,hx::Null< bool >  __o_isBorder,hx::Null< int >  __o_nBorderColor,hx::Null< int >  __o_nBorderSize){
bool isBorder = __o_isBorder.Default(false);
int nBorderColor = __o_nBorderColor.Default(0);
int nBorderSize = __o_nBorderSize.Default(1);
	HX_STACK_FRAME("core.display.ex.ExFont","getSystemFont",0xac2249c8,"core.display.ex.ExFont.getSystemFont","core/display/ex/ExFont.hx",44,0xf5de593d)
	HX_STACK_ARG(strFontName,"strFontName")
	HX_STACK_ARG(nFontSize,"nFontSize")
	HX_STACK_ARG(nFontColor,"nFontColor")
	HX_STACK_ARG(isBorder,"isBorder")
	HX_STACK_ARG(nBorderColor,"nBorderColor")
	HX_STACK_ARG(nBorderSize,"nBorderSize")
{
		HX_STACK_LINE(45)
		::core::display::ex::ExFont pFont = ::core::display::ex::ExFont_obj::__new();		HX_STACK_VAR(pFont,"pFont");
		HX_STACK_LINE(46)
		pFont->setSystemFont(strFontName,nFontSize,nFontColor,isBorder,nBorderColor,nBorderSize);
		HX_STACK_LINE(47)
		return pFont;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(ExFont_obj,getSystemFont,return )

::openfl::_v2::text::TextFormat ExFont_obj::getSysFontFormat( ::String strFontName,int nFontSize,int nFontColor,hx::Null< bool >  __o_isNewFont){
bool isNewFont = __o_isNewFont.Default(true);
	HX_STACK_FRAME("core.display.ex.ExFont","getSysFontFormat",0x69c3c2a9,"core.display.ex.ExFont.getSysFontFormat","core/display/ex/ExFont.hx",105,0xf5de593d)
	HX_STACK_ARG(strFontName,"strFontName")
	HX_STACK_ARG(nFontSize,"nFontSize")
	HX_STACK_ARG(nFontColor,"nFontColor")
	HX_STACK_ARG(isNewFont,"isNewFont")
{
		HX_STACK_LINE(106)
		::openfl::_v2::text::Font pFont = null();		HX_STACK_VAR(pFont,"pFont");
		HX_STACK_LINE(107)
		if ((isNewFont)){
			HX_STACK_LINE(109)
			::openfl::_v2::text::Font _g = ::openfl::_v2::Assets_obj::getFont(strFontName,null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(109)
			pFont = _g;
		}
		HX_STACK_LINE(111)
		::openfl::_v2::text::TextFormat pFormat = ::openfl::_v2::text::TextFormat_obj::__new((  (((pFont != null()))) ? ::String(pFont->fontName) : ::String(strFontName) ),nFontSize,nFontColor,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(pFormat,"pFormat");
		HX_STACK_LINE(112)
		return pFormat;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ExFont_obj,getSysFontFormat,return )


ExFont_obj::ExFont_obj()
{
}

void ExFont_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ExFont);
	HX_MARK_MEMBER_NAME(m_pSysTextField,"m_pSysTextField");
	HX_MARK_MEMBER_NAME(m_pSysTextBorder,"m_pSysTextBorder");
	HX_MARK_MEMBER_NAME(m_pSysFont,"m_pSysFont");
	HX_MARK_MEMBER_NAME(m_nFontType,"m_nFontType");
	HX_MARK_MEMBER_NAME(m_nBorderSize,"m_nBorderSize");
	::core::display::ex::ExSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ExFont_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_pSysTextField,"m_pSysTextField");
	HX_VISIT_MEMBER_NAME(m_pSysTextBorder,"m_pSysTextBorder");
	HX_VISIT_MEMBER_NAME(m_pSysFont,"m_pSysFont");
	HX_VISIT_MEMBER_NAME(m_nFontType,"m_nFontType");
	HX_VISIT_MEMBER_NAME(m_nBorderSize,"m_nBorderSize");
	::core::display::ex::ExSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ExFont_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"FONT_NONE") ) { return FONT_NONE; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_pSysFont") ) { return m_pSysFont; }
		if (HX_FIELD_EQ(inName,"setSysText") ) { return setSysText_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"FONT_SYSTEM") ) { return FONT_SYSTEM; }
		if (HX_FIELD_EQ(inName,"FONT_MANUAL") ) { return FONT_MANUAL; }
		if (HX_FIELD_EQ(inName,"m_nFontType") ) { return m_nFontType; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getSystemFont") ) { return getSystemFont_dyn(); }
		if (HX_FIELD_EQ(inName,"m_nBorderSize") ) { return m_nBorderSize; }
		if (HX_FIELD_EQ(inName,"setSystemFont") ) { return setSystemFont_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setSysTextInfo") ) { return setSysTextInfo_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"m_pSysTextField") ) { return m_pSysTextField; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getSysFontFormat") ) { return getSysFontFormat_dyn(); }
		if (HX_FIELD_EQ(inName,"m_pSysTextBorder") ) { return m_pSysTextBorder; }
		if (HX_FIELD_EQ(inName,"setSysFieldWidth") ) { return setSysFieldWidth_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"setSysMouseEnabled") ) { return setSysMouseEnabled_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"setSysFontSelectable") ) { return setSysFontSelectable_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ExFont_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"FONT_NONE") ) { FONT_NONE=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_pSysFont") ) { m_pSysFont=inValue.Cast< ::openfl::_v2::text::Font >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"FONT_SYSTEM") ) { FONT_SYSTEM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FONT_MANUAL") ) { FONT_MANUAL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_nFontType") ) { m_nFontType=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"m_nBorderSize") ) { m_nBorderSize=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"m_pSysTextField") ) { m_pSysTextField=inValue.Cast< ::openfl::_v2::text::TextField >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"m_pSysTextBorder") ) { m_pSysTextBorder=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ExFont_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("m_pSysTextField"));
	outFields->push(HX_CSTRING("m_pSysTextBorder"));
	outFields->push(HX_CSTRING("m_pSysFont"));
	outFields->push(HX_CSTRING("m_nFontType"));
	outFields->push(HX_CSTRING("m_nBorderSize"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("FONT_NONE"),
	HX_CSTRING("FONT_SYSTEM"),
	HX_CSTRING("FONT_MANUAL"),
	HX_CSTRING("getSystemFont"),
	HX_CSTRING("getSysFontFormat"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_v2::text::TextField*/ ,(int)offsetof(ExFont_obj,m_pSysTextField),HX_CSTRING("m_pSysTextField")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ExFont_obj,m_pSysTextBorder),HX_CSTRING("m_pSysTextBorder")},
	{hx::fsObject /*::openfl::_v2::text::Font*/ ,(int)offsetof(ExFont_obj,m_pSysFont),HX_CSTRING("m_pSysFont")},
	{hx::fsInt,(int)offsetof(ExFont_obj,m_nFontType),HX_CSTRING("m_nFontType")},
	{hx::fsInt,(int)offsetof(ExFont_obj,m_nBorderSize),HX_CSTRING("m_nBorderSize")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("m_pSysTextField"),
	HX_CSTRING("m_pSysTextBorder"),
	HX_CSTRING("m_pSysFont"),
	HX_CSTRING("m_nFontType"),
	HX_CSTRING("m_nBorderSize"),
	HX_CSTRING("setSystemFont"),
	HX_CSTRING("setSysFontSelectable"),
	HX_CSTRING("setSysText"),
	HX_CSTRING("setSysTextInfo"),
	HX_CSTRING("setSysFieldWidth"),
	HX_CSTRING("setSysMouseEnabled"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ExFont_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ExFont_obj::FONT_NONE,"FONT_NONE");
	HX_MARK_MEMBER_NAME(ExFont_obj::FONT_SYSTEM,"FONT_SYSTEM");
	HX_MARK_MEMBER_NAME(ExFont_obj::FONT_MANUAL,"FONT_MANUAL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ExFont_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ExFont_obj::FONT_NONE,"FONT_NONE");
	HX_VISIT_MEMBER_NAME(ExFont_obj::FONT_SYSTEM,"FONT_SYSTEM");
	HX_VISIT_MEMBER_NAME(ExFont_obj::FONT_MANUAL,"FONT_MANUAL");
};

#endif

Class ExFont_obj::__mClass;

void ExFont_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("core.display.ex.ExFont"), hx::TCanCast< ExFont_obj> ,sStaticFields,sMemberFields,
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

void ExFont_obj::__boot()
{
	FONT_NONE= (int)0;
	FONT_SYSTEM= (int)1;
	FONT_MANUAL= (int)2;
}

} // end namespace core
} // end namespace display
} // end namespace ex
