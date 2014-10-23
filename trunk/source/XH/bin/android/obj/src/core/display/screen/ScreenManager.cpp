#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_core_display_DisplayManager
#include <core/display/DisplayManager.h>
#endif
#ifndef INCLUDED_core_display_layer_LayerManager
#include <core/display/layer/LayerManager.h>
#endif
#ifndef INCLUDED_core_display_screen_Screen
#include <core/display/screen/Screen.h>
#endif
#ifndef INCLUDED_core_display_screen_ScreenBase
#include <core/display/screen/ScreenBase.h>
#endif
#ifndef INCLUDED_core_display_screen_ScreenManager
#include <core/display/screen/ScreenManager.h>
#endif
#ifndef INCLUDED_game_tnk_Game
#include <game/tnk/Game.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
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

Void ScreenManager_obj::__construct()
{
HX_STACK_FRAME("core.display.screen.ScreenManager","new",0x12dca1cc,"core.display.screen.ScreenManager.new","core/display/screen/ScreenManager.hx",18,0xa158e463)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(19)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(19)
	this->m_pScreensList = _g;
	HX_STACK_LINE(20)
	this->m_pCurrentBase = null();
}
;
	return null();
}

//ScreenManager_obj::~ScreenManager_obj() { }

Dynamic ScreenManager_obj::__CreateEmpty() { return  new ScreenManager_obj; }
hx::ObjectPtr< ScreenManager_obj > ScreenManager_obj::__new()
{  hx::ObjectPtr< ScreenManager_obj > result = new ScreenManager_obj();
	result->__construct();
	return result;}

Dynamic ScreenManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ScreenManager_obj > result = new ScreenManager_obj();
	result->__construct();
	return result;}

Void ScreenManager_obj::toScreen( ::core::display::screen::Screen screenID){
{
		HX_STACK_FRAME("core.display.screen.ScreenManager","toScreen",0xf4086a5b,"core.display.screen.ScreenManager.toScreen","core/display/screen/ScreenManager.hx",24,0xa158e463)
		HX_STACK_THIS(this)
		HX_STACK_ARG(screenID,"screenID")
		HX_STACK_LINE(25)
		this->cleanOldScreen();
		HX_STACK_LINE(27)
		::core::display::screen::ScreenBase pNextScreen = null();		HX_STACK_VAR(pNextScreen,"pNextScreen");
		HX_STACK_LINE(28)
		{
			HX_STACK_LINE(28)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(28)
			Array< ::Dynamic > _g1 = this->m_pScreensList;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(28)
			while((true)){
				HX_STACK_LINE(28)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(28)
					break;
				}
				HX_STACK_LINE(28)
				::core::display::screen::ScreenBase screen = _g1->__get(_g).StaticCast< ::core::display::screen::ScreenBase >();		HX_STACK_VAR(screen,"screen");
				HX_STACK_LINE(28)
				++(_g);
				HX_STACK_LINE(30)
				if (((screen->m_pScreenID == screenID))){
					HX_STACK_LINE(32)
					pNextScreen = screen;
					HX_STACK_LINE(33)
					break;
				}
			}
		}
		HX_STACK_LINE(37)
		if (((pNextScreen == null()))){
			HX_STACK_LINE(40)
			::core::display::screen::ScreenBase _g = ::Type_obj::createInstance(screenID->m_pBaseClass,Dynamic( Array_obj<Dynamic>::__new().Add(screenID)));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(40)
			this->m_pCurrentBase = _g;
			HX_STACK_LINE(41)
			this->m_pScreensList->push(this->m_pCurrentBase);
		}
		else{
			HX_STACK_LINE(45)
			this->m_pCurrentBase = pNextScreen;
		}
		HX_STACK_LINE(50)
		this->onLoadResourceComplete();
		HX_STACK_LINE(51)
		this->onLoadScreenProgess(0.1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ScreenManager_obj,toScreen,(void))

Void ScreenManager_obj::onLoadResourceComplete( ){
{
		HX_STACK_FRAME("core.display.screen.ScreenManager","onLoadResourceComplete",0x50a732c0,"core.display.screen.ScreenManager.onLoadResourceComplete","core/display/screen/ScreenManager.hx",58,0xa158e463)
		HX_STACK_THIS(this)
		HX_STACK_LINE(60)
		this->m_pCurrentBase->createView();
		HX_STACK_LINE(62)
		Dynamic _g = this->m_pCurrentBase->getView();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(62)
		::game::tnk::Game_obj::displayManager->layerManager->addToLayer(_g,this->m_pCurrentBase->m_pScreenID->m_nLayer);
		HX_STACK_LINE(63)
		this->m_pCurrentBase->transitionIn();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ScreenManager_obj,onLoadResourceComplete,(void))

Void ScreenManager_obj::onLoadScreenProgess( Float progess){
{
		HX_STACK_FRAME("core.display.screen.ScreenManager","onLoadScreenProgess",0x9dcd5a26,"core.display.screen.ScreenManager.onLoadScreenProgess","core/display/screen/ScreenManager.hx",71,0xa158e463)
		HX_STACK_THIS(this)
		HX_STACK_ARG(progess,"progess")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ScreenManager_obj,onLoadScreenProgess,(void))

Void ScreenManager_obj::toTransitionOut( ){
{
		HX_STACK_FRAME("core.display.screen.ScreenManager","toTransitionOut",0x19ced2ea,"core.display.screen.ScreenManager.toTransitionOut","core/display/screen/ScreenManager.hx",79,0xa158e463)
		HX_STACK_THIS(this)
		HX_STACK_LINE(79)
		if (((this->m_pCurrentBase != null()))){
			HX_STACK_LINE(81)
			this->m_pCurrentBase->transitionOut();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ScreenManager_obj,toTransitionOut,(void))

Void ScreenManager_obj::cleanOldScreen( ){
{
		HX_STACK_FRAME("core.display.screen.ScreenManager","cleanOldScreen",0x7edd42be,"core.display.screen.ScreenManager.cleanOldScreen","core/display/screen/ScreenManager.hx",90,0xa158e463)
		HX_STACK_THIS(this)
		HX_STACK_LINE(90)
		this->toTransitionOut();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ScreenManager_obj,cleanOldScreen,(void))


ScreenManager_obj::ScreenManager_obj()
{
}

void ScreenManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ScreenManager);
	HX_MARK_MEMBER_NAME(m_pScreensList,"m_pScreensList");
	HX_MARK_MEMBER_NAME(m_pCurrentBase,"m_pCurrentBase");
	HX_MARK_END_CLASS();
}

void ScreenManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_pScreensList,"m_pScreensList");
	HX_VISIT_MEMBER_NAME(m_pCurrentBase,"m_pCurrentBase");
}

Dynamic ScreenManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toScreen") ) { return toScreen_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"m_pScreensList") ) { return m_pScreensList; }
		if (HX_FIELD_EQ(inName,"m_pCurrentBase") ) { return m_pCurrentBase; }
		if (HX_FIELD_EQ(inName,"cleanOldScreen") ) { return cleanOldScreen_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"toTransitionOut") ) { return toTransitionOut_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"onLoadScreenProgess") ) { return onLoadScreenProgess_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"onLoadResourceComplete") ) { return onLoadResourceComplete_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ScreenManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"m_pScreensList") ) { m_pScreensList=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_pCurrentBase") ) { m_pCurrentBase=inValue.Cast< ::core::display::screen::ScreenBase >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ScreenManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("m_pScreensList"));
	outFields->push(HX_CSTRING("m_pCurrentBase"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ScreenManager_obj,m_pScreensList),HX_CSTRING("m_pScreensList")},
	{hx::fsObject /*::core::display::screen::ScreenBase*/ ,(int)offsetof(ScreenManager_obj,m_pCurrentBase),HX_CSTRING("m_pCurrentBase")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("m_pScreensList"),
	HX_CSTRING("m_pCurrentBase"),
	HX_CSTRING("toScreen"),
	HX_CSTRING("onLoadResourceComplete"),
	HX_CSTRING("onLoadScreenProgess"),
	HX_CSTRING("toTransitionOut"),
	HX_CSTRING("cleanOldScreen"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ScreenManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ScreenManager_obj::__mClass,"__mClass");
};

#endif

Class ScreenManager_obj::__mClass;

void ScreenManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("core.display.screen.ScreenManager"), hx::TCanCast< ScreenManager_obj> ,sStaticFields,sMemberFields,
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

void ScreenManager_obj::__boot()
{
}

} // end namespace core
} // end namespace display
} // end namespace screen
