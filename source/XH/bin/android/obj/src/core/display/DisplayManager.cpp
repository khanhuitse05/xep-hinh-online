#include <hxcpp.h>

#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_core_display_DisplayManager
#include <core/display/DisplayManager.h>
#endif
#ifndef INCLUDED_core_display_dialog_DialogManager
#include <core/display/dialog/DialogManager.h>
#endif
#ifndef INCLUDED_core_display_layer_LayerManager
#include <core/display/layer/LayerManager.h>
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

Void DisplayManager_obj::__construct(::Main main)
{
HX_STACK_FRAME("core.display.DisplayManager","new",0x20849238,"core.display.DisplayManager.new","core/display/DisplayManager.hx",19,0xf6b8f0f6)
HX_STACK_THIS(this)
HX_STACK_ARG(main,"main")
{
	HX_STACK_LINE(20)
	::core::display::layer::LayerManager _g = ::core::display::layer::LayerManager_obj::__new(main);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(20)
	this->layerManager = _g;
	HX_STACK_LINE(22)
	Dynamic _g1 = Dynamic( Array_obj<Dynamic>::__new() );		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(22)
	this->m_pScreensManager = _g1;
	HX_STACK_LINE(23)
	hx::IndexRef((this->m_pScreensManager).mPtr,(int)2) = ::core::display::popup::PopupManager_obj::__new();
	HX_STACK_LINE(24)
	hx::IndexRef((this->m_pScreensManager).mPtr,(int)1) = ::core::display::dialog::DialogManager_obj::__new();
	HX_STACK_LINE(25)
	{
		HX_STACK_LINE(25)
		int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(25)
		while((true)){
			HX_STACK_LINE(25)
			if ((!(((_g2 < (int)4))))){
				HX_STACK_LINE(25)
				break;
			}
			HX_STACK_LINE(25)
			int i = (_g2)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(27)
			if (((this->m_pScreensManager->__GetItem(i) == null()))){
				HX_STACK_LINE(29)
				hx::IndexRef((this->m_pScreensManager).mPtr,i) = ::core::display::screen::ScreenManager_obj::__new();
			}
		}
	}
	HX_STACK_LINE(32)
	this->m_pPopupManager = this->m_pScreensManager->__GetItem((int)2);
}
;
	return null();
}

//DisplayManager_obj::~DisplayManager_obj() { }

Dynamic DisplayManager_obj::__CreateEmpty() { return  new DisplayManager_obj; }
hx::ObjectPtr< DisplayManager_obj > DisplayManager_obj::__new(::Main main)
{  hx::ObjectPtr< DisplayManager_obj > result = new DisplayManager_obj();
	result->__construct(main);
	return result;}

Dynamic DisplayManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DisplayManager_obj > result = new DisplayManager_obj();
	result->__construct(inArgs[0]);
	return result;}

Void DisplayManager_obj::toScreen( Dynamic screenID){
{
		HX_STACK_FRAME("core.display.DisplayManager","toScreen",0xde25726f,"core.display.DisplayManager.toScreen","core/display/DisplayManager.hx",40,0xf6b8f0f6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(screenID,"screenID")
		HX_STACK_LINE(42)
		{
			HX_STACK_LINE(42)
			int _g = (screenID->__Field(HX_CSTRING("m_nLayer"),true) + (int)1);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(42)
			while((true)){
				HX_STACK_LINE(42)
				if ((!(((_g < (int)4))))){
					HX_STACK_LINE(42)
					break;
				}
				HX_STACK_LINE(42)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(44)
				this->m_pScreensManager->__GetItem(i)->__Field(HX_CSTRING("toTransitionOut"),true)();
			}
		}
		HX_STACK_LINE(47)
		if (((screenID->__Field(HX_CSTRING("m_nLayer"),true) != (int)2))){
			HX_STACK_LINE(49)
			this->m_pScreensManager->__GetItem(screenID->__Field(HX_CSTRING("m_nLayer"),true))->__Field(HX_CSTRING("toScreen"),true)(screenID);
		}
		else{
			HX_STACK_LINE(53)
			this->m_pPopupManager->showPopup(screenID,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayManager_obj,toScreen,(void))


DisplayManager_obj::DisplayManager_obj()
{
}

void DisplayManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DisplayManager);
	HX_MARK_MEMBER_NAME(m_pScreensManager,"m_pScreensManager");
	HX_MARK_MEMBER_NAME(layerManager,"layerManager");
	HX_MARK_MEMBER_NAME(m_pPopupManager,"m_pPopupManager");
	HX_MARK_END_CLASS();
}

void DisplayManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_pScreensManager,"m_pScreensManager");
	HX_VISIT_MEMBER_NAME(layerManager,"layerManager");
	HX_VISIT_MEMBER_NAME(m_pPopupManager,"m_pPopupManager");
}

Dynamic DisplayManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toScreen") ) { return toScreen_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"layerManager") ) { return layerManager; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"m_pPopupManager") ) { return m_pPopupManager; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"m_pScreensManager") ) { return m_pScreensManager; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DisplayManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"layerManager") ) { layerManager=inValue.Cast< ::core::display::layer::LayerManager >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"m_pPopupManager") ) { m_pPopupManager=inValue.Cast< ::core::display::popup::PopupManager >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"m_pScreensManager") ) { m_pScreensManager=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DisplayManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("m_pScreensManager"));
	outFields->push(HX_CSTRING("layerManager"));
	outFields->push(HX_CSTRING("m_pPopupManager"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DisplayManager_obj,m_pScreensManager),HX_CSTRING("m_pScreensManager")},
	{hx::fsObject /*::core::display::layer::LayerManager*/ ,(int)offsetof(DisplayManager_obj,layerManager),HX_CSTRING("layerManager")},
	{hx::fsObject /*::core::display::popup::PopupManager*/ ,(int)offsetof(DisplayManager_obj,m_pPopupManager),HX_CSTRING("m_pPopupManager")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("m_pScreensManager"),
	HX_CSTRING("layerManager"),
	HX_CSTRING("m_pPopupManager"),
	HX_CSTRING("toScreen"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DisplayManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DisplayManager_obj::__mClass,"__mClass");
};

#endif

Class DisplayManager_obj::__mClass;

void DisplayManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("core.display.DisplayManager"), hx::TCanCast< DisplayManager_obj> ,sStaticFields,sMemberFields,
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

void DisplayManager_obj::__boot()
{
}

} // end namespace core
} // end namespace display
