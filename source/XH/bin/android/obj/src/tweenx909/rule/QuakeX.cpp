#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_tweenx909_TweenX
#include <tweenx909/TweenX.h>
#endif
#ifndef INCLUDED_tweenx909_advanced_CommandX
#include <tweenx909/advanced/CommandX.h>
#endif
#ifndef INCLUDED_tweenx909_rule_QuakeX
#include <tweenx909/rule/QuakeX.h>
#endif
namespace tweenx909{
namespace rule{

Void QuakeX_obj::__construct(Float value,Float scale,Dynamic ease)
{
HX_STACK_FRAME("tweenx909.rule.QuakeX","new",0xdb65beec,"tweenx909.rule.QuakeX.new","tweenx909/rule/QuakeX.hx",25,0x285699a4)
HX_STACK_THIS(this)
HX_STACK_ARG(value,"value")
HX_STACK_ARG(scale,"scale")
HX_STACK_ARG(ease,"ease")
{
	HX_STACK_LINE(26)
	this->value = value;
	HX_STACK_LINE(27)
	this->scale = scale;
	HX_STACK_LINE(28)
	if (((ease == null()))){
		HX_STACK_LINE(28)
		this->ease = this->none_dyn();
	}
	else{
		HX_STACK_LINE(29)
		this->ease = ease;
	}
}
;
	return null();
}

//QuakeX_obj::~QuakeX_obj() { }

Dynamic QuakeX_obj::__CreateEmpty() { return  new QuakeX_obj; }
hx::ObjectPtr< QuakeX_obj > QuakeX_obj::__new(Float value,Float scale,Dynamic ease)
{  hx::ObjectPtr< QuakeX_obj > result = new QuakeX_obj();
	result->__construct(value,scale,ease);
	return result;}

Dynamic QuakeX_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< QuakeX_obj > result = new QuakeX_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

int QuakeX_obj::none( Float t){
	HX_STACK_FRAME("tweenx909.rule.QuakeX","none",0x1da8deac,"tweenx909.rule.QuakeX.none","tweenx909/rule/QuakeX.hx",31,0x285699a4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(31)
	if (((t <= (int)0))){
		HX_STACK_LINE(31)
		return (int)0;
	}
	else{
		HX_STACK_LINE(31)
		return (int)1;
	}
	HX_STACK_LINE(31)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(QuakeX_obj,none,return )

Dynamic QuakeX_obj::inputClass;

Float QuakeX_obj::calc( ::tweenx909::rule::QuakeX _from,::tweenx909::rule::QuakeX _to,Float t1,Float t2,::tweenx909::TweenX tween){
	HX_STACK_FRAME("tweenx909.rule.QuakeX","calc",0x1658e489,"tweenx909.rule.QuakeX.calc","tweenx909/rule/QuakeX.hx",11,0x285699a4)
	HX_STACK_ARG(_from,"_from")
	HX_STACK_ARG(_to,"_to")
	HX_STACK_ARG(t1,"t1")
	HX_STACK_ARG(t2,"t2")
	HX_STACK_ARG(tween,"tween")
	HX_STACK_LINE(13)
	Float p;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(13)
	if (((t1 < 0.5))){
		HX_STACK_LINE(13)
		p = _from->ease((t1 * (int)2));
	}
	else{
		HX_STACK_LINE(14)
		p = _to->ease((t2 * (int)2));
	}
	HX_STACK_LINE(15)
	Float _g = ::Math_obj::random();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(15)
	Float _g1 = (_g * (int)2);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(15)
	Float _g2 = (_g1 - (int)1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(15)
	Float _g3 = (p * _g2);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(15)
	Float _g4 = (_g3 * (((_from->scale * t2) + (_to->scale * t1))));		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(15)
	return (((_from->value * t2) + (_to->value * t1)) + _g4);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(QuakeX_obj,calc,return )

::tweenx909::rule::QuakeX QuakeX_obj::defaultFrom( Float value,::tweenx909::rule::QuakeX _to,::tweenx909::TweenX tween){
	HX_STACK_FRAME("tweenx909.rule.QuakeX","defaultFrom",0xb536f957,"tweenx909.rule.QuakeX.defaultFrom","tweenx909/rule/QuakeX.hx",18,0x285699a4)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(_to,"_to")
	HX_STACK_ARG(tween,"tween")
	HX_STACK_LINE(18)
	return ::tweenx909::rule::QuakeX_obj::__new(value,_to->scale,_to->ease);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(QuakeX_obj,defaultFrom,return )


QuakeX_obj::QuakeX_obj()
{
}

void QuakeX_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(QuakeX);
	HX_MARK_MEMBER_NAME(ease,"ease");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_END_CLASS();
}

void QuakeX_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ease,"ease");
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(scale,"scale");
}

Dynamic QuakeX_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"calc") ) { return calc_dyn(); }
		if (HX_FIELD_EQ(inName,"ease") ) { return ease; }
		if (HX_FIELD_EQ(inName,"none") ) { return none_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return value; }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"inputClass") ) { return inputClass; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultFrom") ) { return defaultFrom_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic QuakeX_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ease") ) { ease=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"inputClass") ) { inputClass=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void QuakeX_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("value"));
	outFields->push(HX_CSTRING("scale"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("inputClass"),
	HX_CSTRING("calc"),
	HX_CSTRING("defaultFrom"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(QuakeX_obj,ease),HX_CSTRING("ease")},
	{hx::fsFloat,(int)offsetof(QuakeX_obj,value),HX_CSTRING("value")},
	{hx::fsFloat,(int)offsetof(QuakeX_obj,scale),HX_CSTRING("scale")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("ease"),
	HX_CSTRING("value"),
	HX_CSTRING("scale"),
	HX_CSTRING("none"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(QuakeX_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(QuakeX_obj::inputClass,"inputClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(QuakeX_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(QuakeX_obj::inputClass,"inputClass");
};

#endif

Class QuakeX_obj::__mClass;

void QuakeX_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("tweenx909.rule.QuakeX"), hx::TCanCast< QuakeX_obj> ,sStaticFields,sMemberFields,
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

void QuakeX_obj::__boot()
{
	inputClass= hx::ClassOf< ::tweenx909::rule::QuakeX >();
}

} // end namespace tweenx909
} // end namespace rule
