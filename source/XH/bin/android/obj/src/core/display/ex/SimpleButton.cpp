#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_core_display_ex_ExSprite
#include <core/display/ex/ExSprite.h>
#endif
#ifndef INCLUDED_core_display_ex_SimpleButton
#include <core/display/ex/SimpleButton.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Bitmap
#include <openfl/_v2/display/Bitmap.h>
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
namespace core{
namespace display{
namespace ex{

Void SimpleButton_obj::__construct()
{
HX_STACK_FRAME("core.display.ex.SimpleButton","new",0x5a97cd76,"core.display.ex.SimpleButton.new","core/display/ex/SimpleButton.hx",16,0x38a70d5b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(30)
	this->_isDisable = false;
	HX_STACK_LINE(28)
	this->_noOverDisplay = false;
	HX_STACK_LINE(34)
	super::__construct();
	HX_STACK_LINE(35)
	this->buttonMode = true;
}
;
	return null();
}

//SimpleButton_obj::~SimpleButton_obj() { }

Dynamic SimpleButton_obj::__CreateEmpty() { return  new SimpleButton_obj; }
hx::ObjectPtr< SimpleButton_obj > SimpleButton_obj::__new()
{  hx::ObjectPtr< SimpleButton_obj > result = new SimpleButton_obj();
	result->__construct();
	return result;}

Dynamic SimpleButton_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SimpleButton_obj > result = new SimpleButton_obj();
	result->__construct();
	return result;}

Void SimpleButton_obj::setDisplay( ::openfl::_v2::display::DisplayObject normalDisplay,::openfl::_v2::display::DisplayObject overDisplay,::openfl::_v2::display::DisplayObject pressDisplay,::openfl::_v2::display::DisplayObject disableDisplay){
{
		HX_STACK_FRAME("core.display.ex.SimpleButton","setDisplay",0x9764c06a,"core.display.ex.SimpleButton.setDisplay","core/display/ex/SimpleButton.hx",39,0x38a70d5b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(normalDisplay,"normalDisplay")
		HX_STACK_ARG(overDisplay,"overDisplay")
		HX_STACK_ARG(pressDisplay,"pressDisplay")
		HX_STACK_ARG(disableDisplay,"disableDisplay")
		HX_STACK_LINE(40)
		this->_normalDisplay = normalDisplay;
		HX_STACK_LINE(41)
		if (((this->_normalDisplay != null()))){
			HX_STACK_LINE(42)
			Float _g = -(this->_normalDisplay->get_width());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(42)
			Float _g1 = (Float(_g) / Float((int)2));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(42)
			this->_normalDisplay->set_x(_g1);
			HX_STACK_LINE(43)
			Float _g2 = -(this->_normalDisplay->get_height());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(43)
			Float _g3 = (Float(_g2) / Float((int)2));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(43)
			this->_normalDisplay->set_y(_g3);
			HX_STACK_LINE(44)
			this->addChild(this->_normalDisplay);
		}
		HX_STACK_LINE(47)
		if ((::Std_obj::is(normalDisplay,hx::ClassOf< ::openfl::_v2::display::Bitmap >()))){
			HX_STACK_LINE(47)
			(hx::TCast< openfl::_v2::display::Bitmap >::cast(this->_normalDisplay))->set_smoothing(true);
		}
		HX_STACK_LINE(49)
		if (((overDisplay == null()))){
			HX_STACK_LINE(50)
			this->_overDisplay = normalDisplay;
			HX_STACK_LINE(51)
			this->_noOverDisplay = true;
		}
		else{
			HX_STACK_LINE(54)
			this->_overDisplay = overDisplay;
			HX_STACK_LINE(55)
			Float _g4 = -(this->_overDisplay->get_width());		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(55)
			Float _g5 = (Float(_g4) / Float((int)2));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(55)
			this->_overDisplay->set_x(_g5);
			HX_STACK_LINE(56)
			Float _g6 = -(this->_overDisplay->get_height());		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(56)
			Float _g7 = (Float(_g6) / Float((int)2));		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(56)
			this->_overDisplay->set_y(_g7);
			HX_STACK_LINE(57)
			this->_overDisplay->set_visible(false);
			HX_STACK_LINE(58)
			this->addChild(this->_overDisplay);
		}
		HX_STACK_LINE(61)
		if (((pressDisplay == null()))){
			HX_STACK_LINE(62)
			this->_pressDisplay = normalDisplay;
		}
		else{
			HX_STACK_LINE(64)
			this->_pressDisplay = pressDisplay;
			HX_STACK_LINE(65)
			Float _g8 = -(this->_pressDisplay->get_width());		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(65)
			Float _g9 = (Float(_g8) / Float((int)2));		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(65)
			this->_pressDisplay->set_x(_g9);
			HX_STACK_LINE(66)
			Float _g10 = -(this->_pressDisplay->get_height());		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(66)
			Float _g11 = (Float(_g10) / Float((int)2));		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(66)
			this->_pressDisplay->set_y(_g11);
			HX_STACK_LINE(67)
			this->_pressDisplay->set_visible(false);
			HX_STACK_LINE(68)
			this->addChild(this->_pressDisplay);
		}
		HX_STACK_LINE(71)
		if (((disableDisplay == null()))){
			HX_STACK_LINE(72)
			this->_disableDisplay = normalDisplay;
		}
		else{
			HX_STACK_LINE(74)
			this->_disableDisplay = disableDisplay;
			HX_STACK_LINE(75)
			Float _g12 = -(this->_disableDisplay->get_width());		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(75)
			Float _g13 = (Float(_g12) / Float((int)2));		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(75)
			this->_disableDisplay->set_x(_g13);
			HX_STACK_LINE(76)
			Float _g14 = -(this->_disableDisplay->get_height());		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(76)
			Float _g15 = (Float(_g14) / Float((int)2));		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(76)
			this->_disableDisplay->set_y(_g15);
			HX_STACK_LINE(77)
			this->_disableDisplay->set_visible(false);
			HX_STACK_LINE(78)
			this->addChild(this->_disableDisplay);
		}
		HX_STACK_LINE(81)
		this->addEventListener(::openfl::_v2::events::MouseEvent_obj::ROLL_OVER,this->onMouseOver_dyn(),null(),null(),null());
		HX_STACK_LINE(82)
		this->addEventListener(::openfl::_v2::events::MouseEvent_obj::ROLL_OUT,this->onMouseOut_dyn(),null(),null(),null());
		HX_STACK_LINE(83)
		this->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_DOWN,this->onMouseDown_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(SimpleButton_obj,setDisplay,(void))

Void SimpleButton_obj::setStatus( int status){
{
		HX_STACK_FRAME("core.display.ex.SimpleButton","setStatus",0x9d5b4e0a,"core.display.ex.SimpleButton.setStatus","core/display/ex/SimpleButton.hx",88,0x38a70d5b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(status,"status")
		HX_STACK_LINE(88)
		switch( (int)(status)){
			case (int)0: {
				HX_STACK_LINE(92)
				Float _g = this->set_scaleY((int)1);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(92)
				this->set_scaleX(_g);
				HX_STACK_LINE(94)
				this->_overDisplay->set_visible(false);
				HX_STACK_LINE(95)
				this->_pressDisplay->set_visible(false);
				HX_STACK_LINE(96)
				this->_disableDisplay->set_visible(false);
				HX_STACK_LINE(97)
				this->_normalDisplay->set_visible(true);
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(102)
				if ((this->_noOverDisplay)){
					HX_STACK_LINE(104)
					Float _g1 = this->set_scaleY(1.05);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(104)
					this->set_scaleX(_g1);
				}
				HX_STACK_LINE(107)
				this->_pressDisplay->set_visible(false);
				HX_STACK_LINE(108)
				this->_normalDisplay->set_visible(false);
				HX_STACK_LINE(109)
				this->_disableDisplay->set_visible(false);
				HX_STACK_LINE(110)
				this->_overDisplay->set_visible(true);
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(115)
				Float _g2 = this->set_scaleY((int)1);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(115)
				this->set_scaleX(_g2);
				HX_STACK_LINE(117)
				this->_normalDisplay->set_visible(false);
				HX_STACK_LINE(118)
				this->_overDisplay->set_visible(false);
				HX_STACK_LINE(119)
				this->_disableDisplay->set_visible(false);
				HX_STACK_LINE(120)
				this->_pressDisplay->set_visible(true);
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(125)
				Float _g3 = this->set_scaleY((int)1);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(125)
				this->set_scaleX(_g3);
				HX_STACK_LINE(127)
				this->_normalDisplay->set_visible(false);
				HX_STACK_LINE(128)
				this->_overDisplay->set_visible(false);
				HX_STACK_LINE(129)
				this->_pressDisplay->set_visible(false);
				HX_STACK_LINE(130)
				this->_disableDisplay->set_visible(true);
			}
			;break;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SimpleButton_obj,setStatus,(void))

bool SimpleButton_obj::isDisabled( ){
	HX_STACK_FRAME("core.display.ex.SimpleButton","isDisabled",0x7feec530,"core.display.ex.SimpleButton.isDisabled","core/display/ex/SimpleButton.hx",141,0x38a70d5b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(141)
	return this->_isDisable;
}


HX_DEFINE_DYNAMIC_FUNC0(SimpleButton_obj,isDisabled,return )

bool SimpleButton_obj::isPressed( ){
	HX_STACK_FRAME("core.display.ex.SimpleButton","isPressed",0x759d416e,"core.display.ex.SimpleButton.isPressed","core/display/ex/SimpleButton.hx",150,0x38a70d5b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(150)
	return this->_pressDisplay->get_visible();
}


HX_DEFINE_DYNAMIC_FUNC0(SimpleButton_obj,isPressed,return )

bool SimpleButton_obj::onMouseDown( ::openfl::_v2::events::MouseEvent e){
	HX_STACK_FRAME("core.display.ex.SimpleButton","onMouseDown",0x9bcd971e,"core.display.ex.SimpleButton.onMouseDown","core/display/ex/SimpleButton.hx",154,0x38a70d5b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(155)
	if ((!(this->_isDisable))){
		HX_STACK_LINE(157)
		this->setStatus((int)2);
		HX_STACK_LINE(158)
		return true;
	}
	HX_STACK_LINE(160)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(SimpleButton_obj,onMouseDown,return )

bool SimpleButton_obj::onMouseOver( ::openfl::_v2::events::MouseEvent e){
	HX_STACK_FRAME("core.display.ex.SimpleButton","onMouseOver",0xa3183010,"core.display.ex.SimpleButton.onMouseOver","core/display/ex/SimpleButton.hx",164,0x38a70d5b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(165)
	if ((!(this->_isDisable))){
		HX_STACK_LINE(167)
		this->setStatus((int)1);
		HX_STACK_LINE(168)
		return true;
	}
	HX_STACK_LINE(170)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(SimpleButton_obj,onMouseOver,return )

bool SimpleButton_obj::onMouseOut( ::openfl::_v2::events::MouseEvent e){
	HX_STACK_FRAME("core.display.ex.SimpleButton","onMouseOut",0x0b102d52,"core.display.ex.SimpleButton.onMouseOut","core/display/ex/SimpleButton.hx",174,0x38a70d5b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(e,"e")
	HX_STACK_LINE(175)
	if ((!(this->_isDisable))){
		HX_STACK_LINE(177)
		this->setStatus((int)0);
		HX_STACK_LINE(178)
		return true;
	}
	HX_STACK_LINE(180)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(SimpleButton_obj,onMouseOut,return )

bool SimpleButton_obj::GetDisable( ){
	HX_STACK_FRAME("core.display.ex.SimpleButton","GetDisable",0x80a665bc,"core.display.ex.SimpleButton.GetDisable","core/display/ex/SimpleButton.hx",185,0x38a70d5b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(185)
	return this->_isDisable;
}


HX_DEFINE_DYNAMIC_FUNC0(SimpleButton_obj,GetDisable,return )

Void SimpleButton_obj::SetDisable( bool disable){
{
		HX_STACK_FRAME("core.display.ex.SimpleButton","SetDisable",0x84240430,"core.display.ex.SimpleButton.SetDisable","core/display/ex/SimpleButton.hx",190,0x38a70d5b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(disable,"disable")
		HX_STACK_LINE(190)
		if ((disable)){
			HX_STACK_LINE(192)
			this->_isDisable = true;
			HX_STACK_LINE(193)
			this->setStatus((int)3);
			HX_STACK_LINE(194)
			this->buttonMode = false;
		}
		else{
			HX_STACK_LINE(198)
			this->_isDisable = false;
			HX_STACK_LINE(199)
			this->setStatus((int)0);
			HX_STACK_LINE(200)
			this->buttonMode = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SimpleButton_obj,SetDisable,(void))

Void SimpleButton_obj::setPosition( Float x,Float y){
{
		HX_STACK_FRAME("core.display.ex.SimpleButton","setPosition",0x86236d81,"core.display.ex.SimpleButton.setPosition","core/display/ex/SimpleButton.hx",210,0x38a70d5b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(211)
		this->set_x(x);
		HX_STACK_LINE(212)
		this->set_y(y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SimpleButton_obj,setPosition,(void))

int SimpleButton_obj::NORMAL_STATUS;

int SimpleButton_obj::OVER_STATUS;

int SimpleButton_obj::PRESS_STATUS;

int SimpleButton_obj::DISABLE_STATUS;


SimpleButton_obj::SimpleButton_obj()
{
}

void SimpleButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SimpleButton);
	HX_MARK_MEMBER_NAME(_normalDisplay,"_normalDisplay");
	HX_MARK_MEMBER_NAME(_overDisplay,"_overDisplay");
	HX_MARK_MEMBER_NAME(_pressDisplay,"_pressDisplay");
	HX_MARK_MEMBER_NAME(_disableDisplay,"_disableDisplay");
	HX_MARK_MEMBER_NAME(_noOverDisplay,"_noOverDisplay");
	HX_MARK_MEMBER_NAME(_isDisable,"_isDisable");
	::core::display::ex::ExSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SimpleButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_normalDisplay,"_normalDisplay");
	HX_VISIT_MEMBER_NAME(_overDisplay,"_overDisplay");
	HX_VISIT_MEMBER_NAME(_pressDisplay,"_pressDisplay");
	HX_VISIT_MEMBER_NAME(_disableDisplay,"_disableDisplay");
	HX_VISIT_MEMBER_NAME(_noOverDisplay,"_noOverDisplay");
	HX_VISIT_MEMBER_NAME(_isDisable,"_isDisable");
	::core::display::ex::ExSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic SimpleButton_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"setStatus") ) { return setStatus_dyn(); }
		if (HX_FIELD_EQ(inName,"isPressed") ) { return isPressed_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_isDisable") ) { return _isDisable; }
		if (HX_FIELD_EQ(inName,"setDisplay") ) { return setDisplay_dyn(); }
		if (HX_FIELD_EQ(inName,"isDisabled") ) { return isDisabled_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseOut") ) { return onMouseOut_dyn(); }
		if (HX_FIELD_EQ(inName,"GetDisable") ) { return GetDisable_dyn(); }
		if (HX_FIELD_EQ(inName,"SetDisable") ) { return SetDisable_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return onMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseOver") ) { return onMouseOver_dyn(); }
		if (HX_FIELD_EQ(inName,"setPosition") ) { return setPosition_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_overDisplay") ) { return _overDisplay; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_pressDisplay") ) { return _pressDisplay; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_normalDisplay") ) { return _normalDisplay; }
		if (HX_FIELD_EQ(inName,"_noOverDisplay") ) { return _noOverDisplay; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_disableDisplay") ) { return _disableDisplay; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SimpleButton_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"_isDisable") ) { _isDisable=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_overDisplay") ) { _overDisplay=inValue.Cast< ::openfl::_v2::display::DisplayObject >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_pressDisplay") ) { _pressDisplay=inValue.Cast< ::openfl::_v2::display::DisplayObject >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_normalDisplay") ) { _normalDisplay=inValue.Cast< ::openfl::_v2::display::DisplayObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_noOverDisplay") ) { _noOverDisplay=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_disableDisplay") ) { _disableDisplay=inValue.Cast< ::openfl::_v2::display::DisplayObject >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SimpleButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_normalDisplay"));
	outFields->push(HX_CSTRING("_overDisplay"));
	outFields->push(HX_CSTRING("_pressDisplay"));
	outFields->push(HX_CSTRING("_disableDisplay"));
	outFields->push(HX_CSTRING("_noOverDisplay"));
	outFields->push(HX_CSTRING("_isDisable"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("NORMAL_STATUS"),
	HX_CSTRING("OVER_STATUS"),
	HX_CSTRING("PRESS_STATUS"),
	HX_CSTRING("DISABLE_STATUS"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_v2::display::DisplayObject*/ ,(int)offsetof(SimpleButton_obj,_normalDisplay),HX_CSTRING("_normalDisplay")},
	{hx::fsObject /*::openfl::_v2::display::DisplayObject*/ ,(int)offsetof(SimpleButton_obj,_overDisplay),HX_CSTRING("_overDisplay")},
	{hx::fsObject /*::openfl::_v2::display::DisplayObject*/ ,(int)offsetof(SimpleButton_obj,_pressDisplay),HX_CSTRING("_pressDisplay")},
	{hx::fsObject /*::openfl::_v2::display::DisplayObject*/ ,(int)offsetof(SimpleButton_obj,_disableDisplay),HX_CSTRING("_disableDisplay")},
	{hx::fsBool,(int)offsetof(SimpleButton_obj,_noOverDisplay),HX_CSTRING("_noOverDisplay")},
	{hx::fsBool,(int)offsetof(SimpleButton_obj,_isDisable),HX_CSTRING("_isDisable")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_normalDisplay"),
	HX_CSTRING("_overDisplay"),
	HX_CSTRING("_pressDisplay"),
	HX_CSTRING("_disableDisplay"),
	HX_CSTRING("_noOverDisplay"),
	HX_CSTRING("_isDisable"),
	HX_CSTRING("setDisplay"),
	HX_CSTRING("setStatus"),
	HX_CSTRING("isDisabled"),
	HX_CSTRING("isPressed"),
	HX_CSTRING("onMouseDown"),
	HX_CSTRING("onMouseOver"),
	HX_CSTRING("onMouseOut"),
	HX_CSTRING("GetDisable"),
	HX_CSTRING("SetDisable"),
	HX_CSTRING("setPosition"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SimpleButton_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SimpleButton_obj::NORMAL_STATUS,"NORMAL_STATUS");
	HX_MARK_MEMBER_NAME(SimpleButton_obj::OVER_STATUS,"OVER_STATUS");
	HX_MARK_MEMBER_NAME(SimpleButton_obj::PRESS_STATUS,"PRESS_STATUS");
	HX_MARK_MEMBER_NAME(SimpleButton_obj::DISABLE_STATUS,"DISABLE_STATUS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SimpleButton_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SimpleButton_obj::NORMAL_STATUS,"NORMAL_STATUS");
	HX_VISIT_MEMBER_NAME(SimpleButton_obj::OVER_STATUS,"OVER_STATUS");
	HX_VISIT_MEMBER_NAME(SimpleButton_obj::PRESS_STATUS,"PRESS_STATUS");
	HX_VISIT_MEMBER_NAME(SimpleButton_obj::DISABLE_STATUS,"DISABLE_STATUS");
};

#endif

Class SimpleButton_obj::__mClass;

void SimpleButton_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("core.display.ex.SimpleButton"), hx::TCanCast< SimpleButton_obj> ,sStaticFields,sMemberFields,
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

void SimpleButton_obj::__boot()
{
	NORMAL_STATUS= (int)0;
	OVER_STATUS= (int)1;
	PRESS_STATUS= (int)2;
	DISABLE_STATUS= (int)3;
}

} // end namespace core
} // end namespace display
} // end namespace ex
