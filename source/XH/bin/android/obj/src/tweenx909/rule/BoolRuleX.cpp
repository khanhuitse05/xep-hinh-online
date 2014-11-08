#include <hxcpp.h>

#ifndef INCLUDED_tweenx909_TweenX
#include <tweenx909/TweenX.h>
#endif
#ifndef INCLUDED_tweenx909_advanced_CommandX
#include <tweenx909/advanced/CommandX.h>
#endif
#ifndef INCLUDED_tweenx909_rule_BoolRuleX
#include <tweenx909/rule/BoolRuleX.h>
#endif
namespace tweenx909{
namespace rule{

Void BoolRuleX_obj::__construct()
{
	return null();
}

//BoolRuleX_obj::~BoolRuleX_obj() { }

Dynamic BoolRuleX_obj::__CreateEmpty() { return  new BoolRuleX_obj; }
hx::ObjectPtr< BoolRuleX_obj > BoolRuleX_obj::__new()
{  hx::ObjectPtr< BoolRuleX_obj > result = new BoolRuleX_obj();
	result->__construct();
	return result;}

Dynamic BoolRuleX_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BoolRuleX_obj > result = new BoolRuleX_obj();
	result->__construct();
	return result;}

Dynamic BoolRuleX_obj::inputClass;

bool BoolRuleX_obj::calc( bool _from,bool _to,Float t1,Float t2,::tweenx909::TweenX tween){
	HX_STACK_FRAME("tweenx909.rule.BoolRuleX","calc",0x0ff7c08a,"tweenx909.rule.BoolRuleX.calc","tweenx909/rule/BoolRuleX.hx",14,0xa9251825)
	HX_STACK_ARG(_from,"_from")
	HX_STACK_ARG(_to,"_to")
	HX_STACK_ARG(t1,"t1")
	HX_STACK_ARG(t2,"t2")
	HX_STACK_ARG(tween,"tween")
	HX_STACK_LINE(14)
	return ((int)0 < ((((  ((_from)) ? int((int)1) : int((int)0) )) * t2) + (((  ((_to)) ? int((int)1) : int((int)0) )) * t1)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(BoolRuleX_obj,calc,return )

bool BoolRuleX_obj::defaultFrom( bool value,bool _to,::tweenx909::TweenX tween){
	HX_STACK_FRAME("tweenx909.rule.BoolRuleX","defaultFrom",0xde9e0f76,"tweenx909.rule.BoolRuleX.defaultFrom","tweenx909/rule/BoolRuleX.hx",16,0xa9251825)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(_to,"_to")
	HX_STACK_ARG(tween,"tween")
	HX_STACK_LINE(16)
	return value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(BoolRuleX_obj,defaultFrom,return )


BoolRuleX_obj::BoolRuleX_obj()
{
}

Dynamic BoolRuleX_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"calc") ) { return calc_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"inputClass") ) { return inputClass; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultFrom") ) { return defaultFrom_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BoolRuleX_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"inputClass") ) { inputClass=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BoolRuleX_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("inputClass"),
	HX_CSTRING("calc"),
	HX_CSTRING("defaultFrom"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BoolRuleX_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BoolRuleX_obj::inputClass,"inputClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BoolRuleX_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BoolRuleX_obj::inputClass,"inputClass");
};

#endif

Class BoolRuleX_obj::__mClass;

void BoolRuleX_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("tweenx909.rule.BoolRuleX"), hx::TCanCast< BoolRuleX_obj> ,sStaticFields,sMemberFields,
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

void BoolRuleX_obj::__boot()
{
	inputClass= hx::ClassOf< ::Bool >();
}

} // end namespace tweenx909
} // end namespace rule
