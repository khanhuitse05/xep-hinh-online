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
#ifndef INCLUDED_tweenx909_rule_ArgbX
#include <tweenx909/rule/ArgbX.h>
#endif
namespace tweenx909{
namespace rule{

Void ArgbX_obj::__construct(Float alpha,Float red,Float green,Float blue)
{
HX_STACK_FRAME("tweenx909.rule.ArgbX","new",0xc0e531c5,"tweenx909.rule.ArgbX.new","tweenx909/rule/ArgbX.hx",14,0xfdcda9ab)
HX_STACK_THIS(this)
HX_STACK_ARG(alpha,"alpha")
HX_STACK_ARG(red,"red")
HX_STACK_ARG(green,"green")
HX_STACK_ARG(blue,"blue")
{
	HX_STACK_LINE(15)
	this->a = alpha;
	HX_STACK_LINE(16)
	this->r = red;
	HX_STACK_LINE(17)
	this->g = green;
	HX_STACK_LINE(18)
	this->b = blue;
}
;
	return null();
}

//ArgbX_obj::~ArgbX_obj() { }

Dynamic ArgbX_obj::__CreateEmpty() { return  new ArgbX_obj; }
hx::ObjectPtr< ArgbX_obj > ArgbX_obj::__new(Float alpha,Float red,Float green,Float blue)
{  hx::ObjectPtr< ArgbX_obj > result = new ArgbX_obj();
	result->__construct(alpha,red,green,blue);
	return result;}

Dynamic ArgbX_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ArgbX_obj > result = new ArgbX_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Dynamic ArgbX_obj::inputClass;

int ArgbX_obj::calc( ::tweenx909::rule::ArgbX _from,::tweenx909::rule::ArgbX _to,Float t1,Float t2,::tweenx909::TweenX tween){
	HX_STACK_FRAME("tweenx909.rule.ArgbX","calc",0x005def90,"tweenx909.rule.ArgbX.calc","tweenx909/rule/ArgbX.hx",22,0xfdcda9ab)
	HX_STACK_ARG(_from,"_from")
	HX_STACK_ARG(_to,"_to")
	HX_STACK_ARG(t1,"t1")
	HX_STACK_ARG(t2,"t2")
	HX_STACK_ARG(tween,"tween")
	HX_STACK_LINE(23)
	int a = ::Std_obj::_int(((((_from->a * t2) + (_to->a * t1))) * (int)255));		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(24)
	if (((a < (int)0))){
		HX_STACK_LINE(24)
		a = (int)0;
	}
	else{
		HX_STACK_LINE(25)
		if (((a > (int)255))){
			HX_STACK_LINE(25)
			a = (int)255;
		}
	}
	HX_STACK_LINE(27)
	int r = ::Std_obj::_int(((((_from->r * t2) + (_to->r * t1))) * (int)255));		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(28)
	if (((r < (int)0))){
		HX_STACK_LINE(28)
		r = (int)0;
	}
	else{
		HX_STACK_LINE(29)
		if (((r > (int)255))){
			HX_STACK_LINE(29)
			r = (int)255;
		}
	}
	HX_STACK_LINE(31)
	int g = ::Std_obj::_int(((((_from->g * t2) + (_to->g * t1))) * (int)255));		HX_STACK_VAR(g,"g");
	HX_STACK_LINE(32)
	if (((g < (int)0))){
		HX_STACK_LINE(32)
		g = (int)0;
	}
	else{
		HX_STACK_LINE(33)
		if (((g > (int)255))){
			HX_STACK_LINE(33)
			g = (int)255;
		}
	}
	HX_STACK_LINE(35)
	int b = ::Std_obj::_int(((((_from->b * t2) + (_to->b * t1))) * (int)255));		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(36)
	if (((b < (int)0))){
		HX_STACK_LINE(36)
		b = (int)0;
	}
	else{
		HX_STACK_LINE(37)
		if (((b > (int)255))){
			HX_STACK_LINE(37)
			b = (int)255;
		}
	}
	HX_STACK_LINE(39)
	return (int((int((int((int(a) << int((int)24))) | int((int(r) << int((int)16))))) | int((int(g) << int((int)8))))) | int(b));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ArgbX_obj,calc,return )

::tweenx909::rule::ArgbX ArgbX_obj::defaultFrom( int value,::tweenx909::rule::ArgbX _to,::tweenx909::TweenX tween){
	HX_STACK_FRAME("tweenx909.rule.ArgbX","defaultFrom",0x011a6d30,"tweenx909.rule.ArgbX.defaultFrom","tweenx909/rule/ArgbX.hx",42,0xfdcda9ab)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(_to,"_to")
	HX_STACK_ARG(tween,"tween")
	HX_STACK_LINE(42)
	return ::tweenx909::rule::ArgbX_obj::of(value);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ArgbX_obj,defaultFrom,return )

::tweenx909::rule::ArgbX ArgbX_obj::of( int color){
	HX_STACK_FRAME("tweenx909.rule.ArgbX","of",0x682ef352,"tweenx909.rule.ArgbX.of","tweenx909/rule/ArgbX.hx",46,0xfdcda9ab)
	HX_STACK_ARG(color,"color")
	HX_STACK_LINE(46)
	return ::tweenx909::rule::ArgbX_obj::__new((Float(((int(hx::UShr(color,(int)24)) & int((int)255)))) / Float((int)255)),(Float(((int((int(color) >> int((int)16))) & int((int)255)))) / Float((int)255)),(Float(((int((int(color) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(color) & int((int)255)))) / Float((int)255)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ArgbX_obj,of,return )


ArgbX_obj::ArgbX_obj()
{
}

Dynamic ArgbX_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { return a; }
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

Dynamic ArgbX_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"r") ) { r=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"g") ) { g=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"inputClass") ) { inputClass=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ArgbX_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("a"));
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
	{hx::fsFloat,(int)offsetof(ArgbX_obj,a),HX_CSTRING("a")},
	{hx::fsFloat,(int)offsetof(ArgbX_obj,r),HX_CSTRING("r")},
	{hx::fsFloat,(int)offsetof(ArgbX_obj,g),HX_CSTRING("g")},
	{hx::fsFloat,(int)offsetof(ArgbX_obj,b),HX_CSTRING("b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("a"),
	HX_CSTRING("r"),
	HX_CSTRING("g"),
	HX_CSTRING("b"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ArgbX_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ArgbX_obj::inputClass,"inputClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ArgbX_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ArgbX_obj::inputClass,"inputClass");
};

#endif

Class ArgbX_obj::__mClass;

void ArgbX_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("tweenx909.rule.ArgbX"), hx::TCanCast< ArgbX_obj> ,sStaticFields,sMemberFields,
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

void ArgbX_obj::__boot()
{
	inputClass= hx::ClassOf< ::tweenx909::rule::ArgbX >();
}

} // end namespace tweenx909
} // end namespace rule
