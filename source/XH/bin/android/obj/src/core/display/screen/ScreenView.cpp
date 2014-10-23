#include <hxcpp.h>

#ifndef INCLUDED_core_display_ex_ExSprite
#include <core/display/ex/ExSprite.h>
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

Void ScreenView_obj::__construct()
{
HX_STACK_FRAME("core.display.screen.ScreenView","new",0x73eb2fca,"core.display.screen.ScreenView.new","core/display/screen/ScreenView.hx",22,0xfd456047)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(22)
	super::__construct();
}
;
	return null();
}

//ScreenView_obj::~ScreenView_obj() { }

Dynamic ScreenView_obj::__CreateEmpty() { return  new ScreenView_obj; }
hx::ObjectPtr< ScreenView_obj > ScreenView_obj::__new()
{  hx::ObjectPtr< ScreenView_obj > result = new ScreenView_obj();
	result->__construct();
	return result;}

Dynamic ScreenView_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ScreenView_obj > result = new ScreenView_obj();
	result->__construct();
	return result;}

Void ScreenView_obj::transitionIn( ){
{
		HX_STACK_FRAME("core.display.screen.ScreenView","transitionIn",0xb0b88030,"core.display.screen.ScreenView.transitionIn","core/display/screen/ScreenView.hx",32,0xfd456047)
		HX_STACK_THIS(this)
		HX_STACK_LINE(33)
		this->set_visible(true);
		HX_STACK_LINE(34)
		this->set_alpha((int)0);
		HX_STACK_LINE(35)
		this->set_mouseChildren(false);
		HX_STACK_LINE(36)
		this->set_mouseEnabled(false);
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","core/display/screen/ScreenView.hx",37,0xfd456047)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("alpha") , (int)1,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(37)
		::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),0.4,_Function_1_1::Block(),null(),null())->onComplete(this->transitionInComplete_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ScreenView_obj,transitionIn,(void))

Void ScreenView_obj::transitionInComplete( ){
{
		HX_STACK_FRAME("core.display.screen.ScreenView","transitionInComplete",0xc3f5ed09,"core.display.screen.ScreenView.transitionInComplete","core/display/screen/ScreenView.hx",44,0xfd456047)
		HX_STACK_THIS(this)
		HX_STACK_LINE(45)
		this->set_mouseChildren(true);
		HX_STACK_LINE(46)
		this->set_mouseEnabled(true);
		HX_STACK_LINE(47)
		::openfl::_v2::events::Event _g = ::openfl::_v2::events::Event_obj::__new(HX_CSTRING("viewTransitionInComplete"),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(47)
		this->dispatchEvent(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ScreenView_obj,transitionInComplete,(void))

Void ScreenView_obj::transitionOut( ){
{
		HX_STACK_FRAME("core.display.screen.ScreenView","transitionOut",0xf0bc3de3,"core.display.screen.ScreenView.transitionOut","core/display/screen/ScreenView.hx",54,0xfd456047)
		HX_STACK_THIS(this)
		HX_STACK_LINE(55)
		this->set_alpha((int)1);
		HX_STACK_LINE(56)
		this->set_mouseChildren(false);
		HX_STACK_LINE(57)
		this->set_mouseEnabled(false);
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","core/display/screen/ScreenView.hx",58,0xfd456047)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("alpha") , (int)0,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(58)
		::motion::Actuate_obj::tween(hx::ObjectPtr<OBJ_>(this),0.3,_Function_1_1::Block(),null(),null())->onComplete(this->transitionOutComplete_dyn(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ScreenView_obj,transitionOut,(void))

Void ScreenView_obj::transitionOutComplete( ){
{
		HX_STACK_FRAME("core.display.screen.ScreenView","transitionOutComplete",0xf84b15bc,"core.display.screen.ScreenView.transitionOutComplete","core/display/screen/ScreenView.hx",65,0xfd456047)
		HX_STACK_THIS(this)
		HX_STACK_LINE(66)
		this->set_visible(false);
		HX_STACK_LINE(67)
		::openfl::_v2::events::Event _g = ::openfl::_v2::events::Event_obj::__new(HX_CSTRING("viewTransitionOutComplete"),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(67)
		this->dispatchEvent(_g);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ScreenView_obj,transitionOutComplete,(void))

Void ScreenView_obj::onEnter( ){
{
		HX_STACK_FRAME("core.display.screen.ScreenView","onEnter",0xab7067e3,"core.display.screen.ScreenView.onEnter","core/display/screen/ScreenView.hx",74,0xfd456047)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ScreenView_obj,onEnter,(void))

Void ScreenView_obj::onExit( ){
{
		HX_STACK_FRAME("core.display.screen.ScreenView","onExit",0x9bc69eb3,"core.display.screen.ScreenView.onExit","core/display/screen/ScreenView.hx",82,0xfd456047)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ScreenView_obj,onExit,(void))

Void ScreenView_obj::dispose( ){
{
		HX_STACK_FRAME("core.display.screen.ScreenView","dispose",0x5ff8dd09,"core.display.screen.ScreenView.dispose","core/display/screen/ScreenView.hx",100,0xfd456047)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ScreenView_obj,dispose,(void))

::String ScreenView_obj::TRANSITION_IN_COMPLETE;

::String ScreenView_obj::TRANSITION_OUT_COMPLETE;

::String ScreenView_obj::PRE_TRANSITION_OUT;

::String ScreenView_obj::PRE_TRANSITION_IN;


ScreenView_obj::ScreenView_obj()
{
}

Dynamic ScreenView_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"onExit") ) { return onExit_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onEnter") ) { return onEnter_dyn(); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
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

Dynamic ScreenView_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ScreenView_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("TRANSITION_IN_COMPLETE"),
	HX_CSTRING("TRANSITION_OUT_COMPLETE"),
	HX_CSTRING("PRE_TRANSITION_OUT"),
	HX_CSTRING("PRE_TRANSITION_IN"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("transitionIn"),
	HX_CSTRING("transitionInComplete"),
	HX_CSTRING("transitionOut"),
	HX_CSTRING("transitionOutComplete"),
	HX_CSTRING("onEnter"),
	HX_CSTRING("onExit"),
	HX_CSTRING("dispose"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ScreenView_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ScreenView_obj::TRANSITION_IN_COMPLETE,"TRANSITION_IN_COMPLETE");
	HX_MARK_MEMBER_NAME(ScreenView_obj::TRANSITION_OUT_COMPLETE,"TRANSITION_OUT_COMPLETE");
	HX_MARK_MEMBER_NAME(ScreenView_obj::PRE_TRANSITION_OUT,"PRE_TRANSITION_OUT");
	HX_MARK_MEMBER_NAME(ScreenView_obj::PRE_TRANSITION_IN,"PRE_TRANSITION_IN");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ScreenView_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ScreenView_obj::TRANSITION_IN_COMPLETE,"TRANSITION_IN_COMPLETE");
	HX_VISIT_MEMBER_NAME(ScreenView_obj::TRANSITION_OUT_COMPLETE,"TRANSITION_OUT_COMPLETE");
	HX_VISIT_MEMBER_NAME(ScreenView_obj::PRE_TRANSITION_OUT,"PRE_TRANSITION_OUT");
	HX_VISIT_MEMBER_NAME(ScreenView_obj::PRE_TRANSITION_IN,"PRE_TRANSITION_IN");
};

#endif

Class ScreenView_obj::__mClass;

void ScreenView_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("core.display.screen.ScreenView"), hx::TCanCast< ScreenView_obj> ,sStaticFields,sMemberFields,
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

void ScreenView_obj::__boot()
{
	TRANSITION_IN_COMPLETE= HX_CSTRING("viewTransitionInComplete");
	TRANSITION_OUT_COMPLETE= HX_CSTRING("viewTransitionOutComplete");
	PRE_TRANSITION_OUT= HX_CSTRING("preTransitionOut");
	PRE_TRANSITION_IN= HX_CSTRING("preTransitionIn");
}

} // end namespace core
} // end namespace display
} // end namespace screen
