#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_core_display_ex_ExSprite
#include <core/display/ex/ExSprite.h>
#endif
#ifndef INCLUDED_core_display_screen_Screen
#include <core/display/screen/Screen.h>
#endif
#ifndef INCLUDED_core_display_screen_ScreenBase
#include <core/display/screen/ScreenBase.h>
#endif
#ifndef INCLUDED_core_display_screen_ScreenView
#include <core/display/screen/ScreenView.h>
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
namespace core{
namespace display{
namespace screen{

Void ScreenBase_obj::__construct(::core::display::screen::Screen screenID)
{
HX_STACK_FRAME("core.display.screen.ScreenBase","new",0xeb172b76,"core.display.screen.ScreenBase.new","core/display/screen/ScreenBase.hx",18,0x8e737e1b)
HX_STACK_THIS(this)
HX_STACK_ARG(screenID,"screenID")
{
	HX_STACK_LINE(19)
	super::__construct(null());
	HX_STACK_LINE(20)
	this->m_pScreenID = screenID;
}
;
	return null();
}

//ScreenBase_obj::~ScreenBase_obj() { }

Dynamic ScreenBase_obj::__CreateEmpty() { return  new ScreenBase_obj; }
hx::ObjectPtr< ScreenBase_obj > ScreenBase_obj::__new(::core::display::screen::Screen screenID)
{  hx::ObjectPtr< ScreenBase_obj > result = new ScreenBase_obj();
	result->__construct(screenID);
	return result;}

Dynamic ScreenBase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ScreenBase_obj > result = new ScreenBase_obj();
	result->__construct(inArgs[0]);
	return result;}

Dynamic ScreenBase_obj::getView( ){
	HX_STACK_FRAME("core.display.screen.ScreenBase","getView",0x4aaf8031,"core.display.screen.ScreenBase.getView","core/display/screen/ScreenBase.hx",29,0x8e737e1b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(29)
	return this->m_pView;
}


HX_DEFINE_DYNAMIC_FUNC0(ScreenBase_obj,getView,return )

Array< ::String > ScreenBase_obj::preloadResourceURLs( ){
	HX_STACK_FRAME("core.display.screen.ScreenBase","preloadResourceURLs",0xdf1b7e91,"core.display.screen.ScreenBase.preloadResourceURLs","core/display/screen/ScreenBase.hx",38,0x8e737e1b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(38)
	return Array_obj< ::String >::__new();
}


HX_DEFINE_DYNAMIC_FUNC0(ScreenBase_obj,preloadResourceURLs,return )

Void ScreenBase_obj::transitionOut( ){
{
		HX_STACK_FRAME("core.display.screen.ScreenBase","transitionOut",0xd440088f,"core.display.screen.ScreenBase.transitionOut","core/display/screen/ScreenBase.hx",42,0x8e737e1b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(43)
		if ((!(this->m_isInBase))){
			HX_STACK_LINE(45)
			return null();
		}
		HX_STACK_LINE(47)
		this->m_isInBase = false;
		HX_STACK_LINE(48)
		this->m_pView->transitionOut();
		HX_STACK_LINE(50)
		this->onExit();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ScreenBase_obj,transitionOut,(void))

Void ScreenBase_obj::transitionIn( ){
{
		HX_STACK_FRAME("core.display.screen.ScreenBase","transitionIn",0xb1bdaf04,"core.display.screen.ScreenBase.transitionIn","core/display/screen/ScreenBase.hx",55,0x8e737e1b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(56)
		this->m_isInBase = true;
		HX_STACK_LINE(57)
		this->onEnter();
		HX_STACK_LINE(58)
		this->m_pView->transitionIn();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ScreenBase_obj,transitionIn,(void))

Void ScreenBase_obj::createView( ){
{
		HX_STACK_FRAME("core.display.screen.ScreenBase","createView",0x7d60c72b,"core.display.screen.ScreenBase.createView","core/display/screen/ScreenBase.hx",66,0x8e737e1b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(66)
		if (((bool((this->m_pView == null())) && bool((this->m_pScreenID->m_pViewClass != null()))))){
			HX_STACK_LINE(68)
			::core::display::screen::ScreenView _g = ::Type_obj::createInstance(this->m_pScreenID->m_pViewClass,Dynamic( Array_obj<Dynamic>::__new()));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(68)
			this->m_pView = _g;
			HX_STACK_LINE(69)
			this->m_pView->addEventListener(HX_CSTRING("viewTransitionInComplete"),this->viewTransitionInComplete_dyn(),null(),null(),null());
			HX_STACK_LINE(70)
			this->m_pView->addEventListener(HX_CSTRING("viewTransitionOutComplete"),this->viewTransitionOutComplete_dyn(),null(),null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ScreenBase_obj,createView,(void))

Void ScreenBase_obj::onEnter( ){
{
		HX_STACK_FRAME("core.display.screen.ScreenBase","onEnter",0x30a1a98f,"core.display.screen.ScreenBase.onEnter","core/display/screen/ScreenBase.hx",79,0x8e737e1b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(79)
		this->m_pView->onEnter();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ScreenBase_obj,onEnter,(void))

Void ScreenBase_obj::onExit( ){
{
		HX_STACK_FRAME("core.display.screen.ScreenBase","onExit",0x0bba3687,"core.display.screen.ScreenBase.onExit","core/display/screen/ScreenBase.hx",87,0x8e737e1b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(87)
		this->m_pView->onExit();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ScreenBase_obj,onExit,(void))

Void ScreenBase_obj::viewTransitionOutComplete( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("core.display.screen.ScreenBase","viewTransitionOutComplete",0x351084c3,"core.display.screen.ScreenBase.viewTransitionOutComplete","core/display/screen/ScreenBase.hx",96,0x8e737e1b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(96)
		this->onTransitionOutComplete();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ScreenBase_obj,viewTransitionOutComplete,(void))

Void ScreenBase_obj::viewTransitionInComplete( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("core.display.screen.ScreenBase","viewTransitionInComplete",0x63cd7be2,"core.display.screen.ScreenBase.viewTransitionInComplete","core/display/screen/ScreenBase.hx",105,0x8e737e1b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(105)
		this->onTransitionInComplete();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ScreenBase_obj,viewTransitionInComplete,(void))

Void ScreenBase_obj::onTransitionInComplete( ){
{
		HX_STACK_FRAME("core.display.screen.ScreenBase","onTransitionInComplete",0x75b2a51c,"core.display.screen.ScreenBase.onTransitionInComplete","core/display/screen/ScreenBase.hx",112,0x8e737e1b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(113)
		::openfl::_v2::events::Event _g = ::openfl::_v2::events::Event_obj::__new(HX_CSTRING("viewTransitionInComplete"),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(113)
		this->dispatchEvent(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ScreenBase_obj,onTransitionInComplete,(void))

Void ScreenBase_obj::onTransitionOutComplete( ){
{
		HX_STACK_FRAME("core.display.screen.ScreenBase","onTransitionOutComplete",0xcbaf6e49,"core.display.screen.ScreenBase.onTransitionOutComplete","core/display/screen/ScreenBase.hx",120,0x8e737e1b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(121)
		this->m_pView->set_visible(false);
		HX_STACK_LINE(122)
		::openfl::_v2::display::DisplayObjectContainer _g = this->m_pView->get_parent();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(122)
		if (((_g != null()))){
			HX_STACK_LINE(124)
			this->m_pView->get_parent()->removeChild(this->m_pView);
		}
		HX_STACK_LINE(127)
		::openfl::_v2::events::Event _g1 = ::openfl::_v2::events::Event_obj::__new(HX_CSTRING("viewTransitionOutComplete"),null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(127)
		this->dispatchEvent(_g1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ScreenBase_obj,onTransitionOutComplete,(void))


ScreenBase_obj::ScreenBase_obj()
{
}

void ScreenBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ScreenBase);
	HX_MARK_MEMBER_NAME(m_isInBase,"m_isInBase");
	HX_MARK_MEMBER_NAME(m_pView,"m_pView");
	HX_MARK_MEMBER_NAME(m_pScreenID,"m_pScreenID");
	::openfl::_v2::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ScreenBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_isInBase,"m_isInBase");
	HX_VISIT_MEMBER_NAME(m_pView,"m_pView");
	HX_VISIT_MEMBER_NAME(m_pScreenID,"m_pScreenID");
	::openfl::_v2::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ScreenBase_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"onExit") ) { return onExit_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"m_pView") ) { return m_pView; }
		if (HX_FIELD_EQ(inName,"getView") ) { return getView_dyn(); }
		if (HX_FIELD_EQ(inName,"onEnter") ) { return onEnter_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_isInBase") ) { return m_isInBase; }
		if (HX_FIELD_EQ(inName,"createView") ) { return createView_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"m_pScreenID") ) { return m_pScreenID; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"transitionIn") ) { return transitionIn_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"transitionOut") ) { return transitionOut_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"preloadResourceURLs") ) { return preloadResourceURLs_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"onTransitionInComplete") ) { return onTransitionInComplete_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"onTransitionOutComplete") ) { return onTransitionOutComplete_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"viewTransitionInComplete") ) { return viewTransitionInComplete_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"viewTransitionOutComplete") ) { return viewTransitionOutComplete_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ScreenBase_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"m_pView") ) { m_pView=inValue.Cast< ::core::display::screen::ScreenView >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"m_isInBase") ) { m_isInBase=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"m_pScreenID") ) { m_pScreenID=inValue.Cast< ::core::display::screen::Screen >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ScreenBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("m_isInBase"));
	outFields->push(HX_CSTRING("m_pView"));
	outFields->push(HX_CSTRING("m_pScreenID"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(ScreenBase_obj,m_isInBase),HX_CSTRING("m_isInBase")},
	{hx::fsObject /*::core::display::screen::ScreenView*/ ,(int)offsetof(ScreenBase_obj,m_pView),HX_CSTRING("m_pView")},
	{hx::fsObject /*::core::display::screen::Screen*/ ,(int)offsetof(ScreenBase_obj,m_pScreenID),HX_CSTRING("m_pScreenID")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("m_isInBase"),
	HX_CSTRING("m_pView"),
	HX_CSTRING("m_pScreenID"),
	HX_CSTRING("getView"),
	HX_CSTRING("preloadResourceURLs"),
	HX_CSTRING("transitionOut"),
	HX_CSTRING("transitionIn"),
	HX_CSTRING("createView"),
	HX_CSTRING("onEnter"),
	HX_CSTRING("onExit"),
	HX_CSTRING("viewTransitionOutComplete"),
	HX_CSTRING("viewTransitionInComplete"),
	HX_CSTRING("onTransitionInComplete"),
	HX_CSTRING("onTransitionOutComplete"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ScreenBase_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ScreenBase_obj::__mClass,"__mClass");
};

#endif

Class ScreenBase_obj::__mClass;

void ScreenBase_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("core.display.screen.ScreenBase"), hx::TCanCast< ScreenBase_obj> ,sStaticFields,sMemberFields,
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

void ScreenBase_obj::__boot()
{
}

} // end namespace core
} // end namespace display
} // end namespace screen
