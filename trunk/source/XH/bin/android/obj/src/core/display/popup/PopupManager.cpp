#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_core_display_DisplayManager
#include <core/display/DisplayManager.h>
#endif
#ifndef INCLUDED_core_display_ex_ExSprite
#include <core/display/ex/ExSprite.h>
#endif
#ifndef INCLUDED_core_display_layer_LayerManager
#include <core/display/layer/LayerManager.h>
#endif
#ifndef INCLUDED_core_display_popup_PopupBase
#include <core/display/popup/PopupBase.h>
#endif
#ifndef INCLUDED_core_display_popup_PopupID
#include <core/display/popup/PopupID.h>
#endif
#ifndef INCLUDED_core_display_popup_PopupManager
#include <core/display/popup/PopupManager.h>
#endif
#ifndef INCLUDED_core_display_screen_Screen
#include <core/display/screen/Screen.h>
#endif
#ifndef INCLUDED_core_display_screen_ScreenManager
#include <core/display/screen/ScreenManager.h>
#endif
#ifndef INCLUDED_core_display_screen_ScreenView
#include <core/display/screen/ScreenView.h>
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
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
namespace core{
namespace display{
namespace popup{

Void PopupManager_obj::__construct()
{
HX_STACK_FRAME("core.display.popup.PopupManager","new",0x9bb1c890,"core.display.popup.PopupManager.new","core/display/popup/PopupManager.hx",16,0xd6f92dbd)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(16)
	super::__construct();
}
;
	return null();
}

//PopupManager_obj::~PopupManager_obj() { }

Dynamic PopupManager_obj::__CreateEmpty() { return  new PopupManager_obj; }
hx::ObjectPtr< PopupManager_obj > PopupManager_obj::__new()
{  hx::ObjectPtr< PopupManager_obj > result = new PopupManager_obj();
	result->__construct();
	return result;}

Dynamic PopupManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PopupManager_obj > result = new PopupManager_obj();
	result->__construct();
	return result;}

Void PopupManager_obj::showPopup( ::core::display::popup::PopupID popupID,hx::Null< bool >  __o_showDarkBg){
bool showDarkBg = __o_showDarkBg.Default(true);
	HX_STACK_FRAME("core.display.popup.PopupManager","showPopup",0x8b27ac1f,"core.display.popup.PopupManager.showPopup","core/display/popup/PopupManager.hx",20,0xd6f92dbd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(popupID,"popupID")
	HX_STACK_ARG(showDarkBg,"showDarkBg")
{
		HX_STACK_LINE(21)
		::core::display::popup::PopupBase pView = ::Type_obj::createInstance(popupID->m_pViewClass,Dynamic( Array_obj<Dynamic>::__new().Add(showDarkBg)));		HX_STACK_VAR(pView,"pView");
		HX_STACK_LINE(22)
		::game::tnk::Game_obj::displayManager->layerManager->addToLayer(pView,(int)2);
		HX_STACK_LINE(23)
		pView->transitionIn();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PopupManager_obj,showPopup,(void))


PopupManager_obj::PopupManager_obj()
{
}

Dynamic PopupManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"showPopup") ) { return showPopup_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PopupManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void PopupManager_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("showPopup"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PopupManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PopupManager_obj::__mClass,"__mClass");
};

#endif

Class PopupManager_obj::__mClass;

void PopupManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("core.display.popup.PopupManager"), hx::TCanCast< PopupManager_obj> ,sStaticFields,sMemberFields,
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

void PopupManager_obj::__boot()
{
}

} // end namespace core
} // end namespace display
} // end namespace popup
