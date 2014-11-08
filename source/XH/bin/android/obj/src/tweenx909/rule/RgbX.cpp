#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_tweenx909_TweenX
#include <tweenx909/TweenX.h>
#endif
#ifndef INCLUDED_tweenx909_advanced_CommandX
#include <tweenx909/advanced/CommandX.h>
#endif
#ifndef INCLUDED_tweenx909_rule_RgbX
#include <tweenx909/rule/RgbX.h>
#endif
namespace tweenx909{
namespace rule{

Void RgbX_obj::__construct(Float red,Float green,Float blue)
{
HX_STACK_FRAME("tweenx909.rule.RgbX","new",0x8dbf63b6,"tweenx909.rule.RgbX.new","tweenx909/rule/RgbX.hx",13,0x551bf41a)
HX_STACK_THIS(this)
HX_STACK_ARG(red,"red")
HX_STACK_ARG(green,"green")
HX_STACK_ARG(blue,"blue")
{
	HX_STACK_LINE(14)
	this->r = red;
	HX_STACK_LINE(15)
	this->g = green;
	HX_STACK_LINE(16)
	this->b = blue;
}
;
	return null();
}

//RgbX_obj::~RgbX_obj() { }

Dynamic RgbX_obj::__CreateEmpty() { return  new RgbX_obj; }
hx::ObjectPtr< RgbX_obj > RgbX_obj::__new(Float red,Float green,Float blue)
{  hx::ObjectPtr< RgbX_obj > result = new RgbX_obj();
	result->__construct(red,green,blue);
	return result;}

Dynamic RgbX_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RgbX_obj > result = new RgbX_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Dynamic RgbX_obj::inputClass;

int RgbX_obj::calc( ::tweenx909::rule::RgbX _from,::tweenx909::rule::RgbX _to,Float t1,Float t2,::tweenx909::TweenX tween){
	HX_STACK_FRAME("tweenx909.rule.RgbX","calc",0x726f707f,"tweenx909.rule.RgbX.calc","tweenx909/rule/RgbX.hx",19,0x551bf41a)
	HX_STACK_ARG(_from,"_from")
	HX_STACK_ARG(_to,"_to")
	HX_STACK_ARG(t1,"t1")
	HX_STACK_ARG(t2,"t2")
	HX_STACK_ARG(tween,"tween")
	HX_STACK_LINE(20)
	int r = ::Std_obj::_int(((((_from->r * t2) + (_to->r * t1))) * (int)255));		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(21)
	if (((r < (int)0))){
		HX_STACK_LINE(21)
		r = (int)0;
	}
	else{
		HX_STACK_LINE(22)
		if (((r > (int)255))){
			HX_STACK_LINE(22)
			r = (int)255;
		}
	}
	HX_STACK_LINE(24)
	int g = ::Std_obj::_int(((((_from->g * t2) + (_to->g * t1))) * (int)255));		HX_STACK_VAR(g,"g");
	HX_STACK_LINE(25)
	if (((g < (int)0))){
		HX_STACK_LINE(25)
		g = (int)0;
	}
	else{
		HX_STACK_LINE(26)
		if (((g > (int)255))){
			HX_STACK_LINE(26)
			g = (int)255;
		}
	}
	HX_STACK_LINE(28)
	int b = ::Std_obj::_int(((((_from->b * t2) + (_to->b * t1))) * (int)255));		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(29)
	if (((b < (int)0))){
		HX_STACK_LINE(29)
		b = (int)0;
	}
	else{
		HX_STACK_LINE(30)
		if (((b > (int)255))){
			HX_STACK_LINE(30)
			b = (int)255;
		}
	}
	HX_STACK_LINE(32)
	return (int((int((int(r) << int((int)16))) | int((int(g) << int((int)8))))) | int(b));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(RgbX_obj,calc,return )

::tweenx909::rule::RgbX RgbX_obj::defaultFrom( int value,::tweenx909::rule::RgbX _to,::tweenx909::TweenX tween){
	HX_STACK_FRAME("tweenx909.rule.RgbX","defaultFrom",0x02517821,"tweenx909.rule.RgbX.defaultFrom","tweenx909/rule/RgbX.hx",35,0x551bf41a)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(_to,"_to")
	HX_STACK_ARG(tween,"tween")
	HX_STACK_LINE(35)
	return ::tweenx909::rule::RgbX_obj::of(value);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(RgbX_obj,defaultFrom,return )

::tweenx909::rule::RgbX RgbX_obj::of( int color){
	HX_STACK_FRAME("tweenx909.rule.RgbX","of",0xd6290a81,"tweenx909.rule.RgbX.of","tweenx909/rule/RgbX.hx",38,0x551bf41a)
	HX_STACK_ARG(color,"color")
	HX_STACK_LINE(38)
	return ::tweenx909::rule::RgbX_obj::__new((Float(((int((int(color) >> int((int)16))) & int((int)255)))) / Float((int)255)),(Float(((int((int(color) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(color) & int((int)255)))) / Float((int)255)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(RgbX_obj,of,return )


RgbX_obj::RgbX_obj()
{
}

Dynamic RgbX_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { return r; }
		if (HX_FIELD_EQ(inName,"g") ) { return g; }
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"of") ) { return of_dyn(); }
		break;
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

Dynamic RgbX_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"r") ) { r=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"g") ) { g=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"inputClass") ) { inputClass=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RgbX_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("r"));
	outFields->push(HX_CSTRING("g"));
	outFields->push(HX_CSTRING("b"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("inputClass"),
	HX_CSTRING("calc"),
	HX_CSTRING("defaultFrom"),
	HX_CSTRING("of"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(RgbX_obj,r),HX_CSTRING("r")},
	{hx::fsFloat,(int)offsetof(RgbX_obj,g),HX_CSTRING("g")},
	{hx::fsFloat,(int)offsetof(RgbX_obj,b),HX_CSTRING("b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("r"),
	HX_CSTRING("g"),
	HX_CSTRING("b"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RgbX_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(RgbX_obj::inputClass,"inputClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RgbX_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(RgbX_obj::inputClass,"inputClass");
};

#endif

Class RgbX_obj::__mClass;

void RgbX_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("tweenx909.rule.RgbX"), hx::TCanCast< RgbX_obj> ,sStaticFields,sMemberFields,
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

void RgbX_obj::__boot()
{
	inputClass= hx::ClassOf< ::tweenx909::rule::RgbX >();
}

} // end namespace tweenx909
} // end namespace rule
