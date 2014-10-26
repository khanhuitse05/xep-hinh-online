#include <hxcpp.h>

#ifndef INCLUDED_core_display_ex_ExSprite
#include <core/display/ex/ExSprite.h>
#endif
#ifndef INCLUDED_core_display_popup_PopupBase
#include <core/display/popup/PopupBase.h>
#endif
#ifndef INCLUDED_core_display_screen_ScreenView
#include <core/display/screen/ScreenView.h>
#endif
#ifndef INCLUDED_motion_Actuate
#include <motion/Actuate.h>
#endif
#ifndef INCLUDED_motion_actuators_IGenericActuator
#include <motion/actuators/IGenericActuator.h>
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
#ifndef INCLUDED_openfl__v2_events_MouseEvent
#include <openfl/_v2/events/MouseEvent.h>
#endif
namespace core{
namespace display{
namespace popup{

Void PopupBase_obj::__construct(hx::Null< bool >  __o_showDarkBg)
{
HX_STACK_FRAME("core.display.popup.PopupBase","new",0x3ddbe232,"core.display.popup.PopupBase.new","core/display/popup/PopupBase.hx",19,0x38cf3881)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_showDarkBg,"showDarkBg")
bool showDarkBg = __o_showDarkBg.Default(true);
{
	HX_STACK_LINE(20)
	super::__construct();
	HX_STACK_LINE(22)
	this->set_alpha((int)0);
	HX_STACK_LINE(23)
	this->set_visible(false);
	HX_STACK_LINE(24)
	this->addEventListener(::openfl::_v2::events::MouseEvent_obj::CLICK,this->onHide_dyn(),null(),null(),null());
	HX_STACK_LINE(25)
	if ((showDarkBg)){
		HX_STACK_LINE(26)
		this->get_graphics()->beginFill((int)0,0.6);
		HX_STACK_LINE(27)
		this->get_graphics()->drawRect((int)0,(int)0,(int)540,(int)960);
		HX_STACK_LINE(28)
		this->get_graphics()->endFill();
	}
}
;
	return null();
}

//PopupBase_obj::~PopupBase_obj() { }

Dynamic PopupBase_obj::__CreateEmpty() { return  new PopupBase_obj; }
hx::ObjectPtr< PopupBase_obj > PopupBase_obj::__new(hx::Null< bool >  __o_showDarkBg)
{  hx::ObjectPtr< PopupBase_obj > result = new PopupBase_obj();
	result->__construct(__o_showDarkBg);
	return result;}

Dynamic PopupBase_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PopupBase_obj > result = new PopupBase_obj();
	result->__construct(inArgs[0]);
	return result;}

Void PopupBase_obj::onHide( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("core.display.popup.PopupBase","onHide",0x967f9aef,"core.display.popup.PopupBase.onHide","core/display/popup/PopupBase.hx",34,0x38cf3881)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(34)
		this->transitionOut();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PopupBase_obj,onHide,(void))

Void PopupBase_obj::transitionIn( ){
{
		HX_STACK_FRAME("core.display.popup.PopupBase","transitionIn",0x0e6240c8,"core.display.popup.PopupBase.transitionIn","core/display/popup/PopupBase.hx",37,0x38cf3881)
		HX_STACK_THIS(this)
		HX_STACK_LINE(38)
		this->set_visible(true);
		HX_STACK_LINE(39)
		this->set_alpha((int)0);
		HX_STACK_LINE(40)
		this->set_mouseChildren(false);
		HX_STACK_LINE(41)
		this->set_mouseEnabled(false);
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","core/display/popup/PopupBase.hx",42,0x38cf3881)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("alpha") , (int)1,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(42)
		::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),0.4,_Function_1_1::Block(),null(),null())->onComplete(this->transitionInComplete_dyn(),null());
	}
return null();
}


Void PopupBase_obj::transitionInComplete( ){
{
		HX_STACK_FRAME("core.display.popup.PopupBase","transitionInComplete",0xc0b605a1,"core.display.popup.PopupBase.transitionInComplete","core/display/popup/PopupBase.hx",45,0x38cf3881)
		HX_STACK_THIS(this)
		HX_STACK_LINE(46)
		this->set_mouseChildren(true);
		HX_STACK_LINE(47)
		this->set_mouseEnabled(true);
	}
return null();
}


Void PopupBase_obj::transitionOut( ){
{
		HX_STACK_FRAME("core.display.popup.PopupBase","transitionOut",0x879b024b,"core.display.popup.PopupBase.transitionOut","core/display/popup/PopupBase.hx",51,0x38cf3881)
		HX_STACK_THIS(this)
		HX_STACK_LINE(52)
		this->set_alpha((int)1);
		HX_STACK_LINE(53)
		this->set_mouseChildren(false);
		HX_STACK_LINE(54)
		this->set_mouseEnabled(false);
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","core/display/popup/PopupBase.hx",55,0x38cf3881)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("alpha") , (int)0,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(55)
		::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),0.3,_Function_1_1::Block(),null(),null())->onComplete(this->transitionOutComplete_dyn(),null());
	}
return null();
}


Void PopupBase_obj::transitionOutComplete( ){
{
		HX_STACK_FRAME("core.display.popup.PopupBase","transitionOutComplete",0x23a08224,"core.display.popup.PopupBase.transitionOutComplete","core/display/popup/PopupBase.hx",60,0x38cf3881)
		HX_STACK_THIS(this)
		HX_STACK_LINE(60)
		this->set_visible(false);
	}
return null();
}



PopupBase_obj::PopupBase_obj()
{
}

Dynamic PopupBase_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"onHide") ) { return onHide_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"transitionIn") ) { return transitionIn_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"transitionOut") ) { return transitionOut_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"transitionInComplete") ) { return transitionInComplete_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"transitionOutComplete") ) { return transitionOutComplete_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PopupBase_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void PopupBase_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("onHide"),
	HX_CSTRING("transitionIn"),
	HX_CSTRING("transitionInComplete"),
	HX_CSTRING("transitionOut"),
	HX_CSTRING("transitionOutComplete"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PopupBase_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PopupBase_obj::__mClass,"__mClass");
};

#endif

Class PopupBase_obj::__mClass;

void PopupBase_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("core.display.popup.PopupBase"), hx::TCanCast< PopupBase_obj> ,sStaticFields,sMemberFields,
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

void PopupBase_obj::__boot()
{
}

} // end namespace core
} // end namespace display
} // end namespace popup
