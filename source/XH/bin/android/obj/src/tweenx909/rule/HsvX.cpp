#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_tweenx909_TweenX
#include <tweenx909/TweenX.h>
#endif
#ifndef INCLUDED_tweenx909_advanced_CommandX
#include <tweenx909/advanced/CommandX.h>
#endif
#ifndef INCLUDED_tweenx909_rule_HsvX
#include <tweenx909/rule/HsvX.h>
#endif
namespace tweenx909{
namespace rule{

Void HsvX_obj::__construct(Float hue,Float saturation,Float value)
{
HX_STACK_FRAME("tweenx909.rule.HsvX","new",0x43ebb6f8,"tweenx909.rule.HsvX.new","tweenx909/rule/HsvX.hx",14,0x05913f18)
HX_STACK_THIS(this)
HX_STACK_ARG(hue,"hue")
HX_STACK_ARG(saturation,"saturation")
HX_STACK_ARG(value,"value")
{
	HX_STACK_LINE(15)
	this->h = hue;
	HX_STACK_LINE(16)
	this->s = saturation;
	HX_STACK_LINE(17)
	this->v = value;
}
;
	return null();
}

//HsvX_obj::~HsvX_obj() { }

Dynamic HsvX_obj::__CreateEmpty() { return  new HsvX_obj; }
hx::ObjectPtr< HsvX_obj > HsvX_obj::__new(Float hue,Float saturation,Float value)
{  hx::ObjectPtr< HsvX_obj > result = new HsvX_obj();
	result->__construct(hue,saturation,value);
	return result;}

Dynamic HsvX_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HsvX_obj > result = new HsvX_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Dynamic HsvX_obj::inputClass;

int HsvX_obj::calc( ::tweenx909::rule::HsvX _from,::tweenx909::rule::HsvX _to,Float t1,Float t2,::tweenx909::TweenX tween){
	HX_STACK_FRAME("tweenx909.rule.HsvX","calc",0x230bf6fd,"tweenx909.rule.HsvX.calc","tweenx909/rule/HsvX.hx",21,0x05913f18)
	HX_STACK_ARG(_from,"_from")
	HX_STACK_ARG(_to,"_to")
	HX_STACK_ARG(t1,"t1")
	HX_STACK_ARG(t2,"t2")
	HX_STACK_ARG(tween,"tween")
	HX_STACK_LINE(22)
	Float h = ((_from->h * t2) + (_to->h * t1));		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(23)
	Float s = ((_from->s * t2) + (_to->s * t1));		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(24)
	Float v = ((_from->v * t2) + (_to->v * t1));		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(26)
	int _g = ::Math_obj::floor(h);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(26)
	Float _g1 = (h - _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(26)
	Float _g2 = (_g1 * (int)6);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(26)
	h = _g2;
	HX_STACK_LINE(27)
	int hi = ::Math_obj::floor(h);		HX_STACK_VAR(hi,"hi");
	HX_STACK_LINE(28)
	if (((s > (int)1))){
		HX_STACK_LINE(28)
		s = (int)1;
	}
	HX_STACK_LINE(29)
	if (((s < (int)0))){
		HX_STACK_LINE(29)
		s = (int)0;
	}
	HX_STACK_LINE(30)
	if (((v > (int)1))){
		HX_STACK_LINE(30)
		v = (int)1;
	}
	HX_STACK_LINE(31)
	if (((v < (int)0))){
		HX_STACK_LINE(31)
		v = (int)0;
	}
	HX_STACK_LINE(34)
	Float m = (v * (((int)1 - s)));		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(35)
	Float f = (h - hi);		HX_STACK_VAR(f,"f");
	HX_STACK_LINE(37)
	Float r = .0;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(37)
	Float g = .0;		HX_STACK_VAR(g,"g");
	HX_STACK_LINE(37)
	Float b = .0;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(38)
	switch( (int)(hi)){
		case (int)0: {
			HX_STACK_LINE(39)
			r = v;
			HX_STACK_LINE(39)
			g = (v * (((int)1 - (s * (((int)1 - f))))));
			HX_STACK_LINE(39)
			b = m;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(40)
			r = (v * (((int)1 - (s * f))));
			HX_STACK_LINE(40)
			g = v;
			HX_STACK_LINE(40)
			b = m;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(41)
			r = m;
			HX_STACK_LINE(41)
			g = v;
			HX_STACK_LINE(41)
			b = (v * (((int)1 - (s * (((int)1 - f))))));
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(42)
			r = m;
			HX_STACK_LINE(42)
			g = (v * (((int)1 - (s * f))));
			HX_STACK_LINE(42)
			b = v;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(43)
			r = (v * (((int)1 - (s * (((int)1 - f))))));
			HX_STACK_LINE(43)
			g = m;
			HX_STACK_LINE(43)
			b = v;
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(44)
			r = v;
			HX_STACK_LINE(44)
			g = m;
			HX_STACK_LINE(44)
			b = (v * (((int)1 - (s * f))));
		}
		;break;
	}
	HX_STACK_LINE(47)
	int _g3 = ::Std_obj::_int((r * (int)255));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(47)
	int _g4 = (int(_g3) << int((int)16));		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(47)
	int _g5 = ::Std_obj::_int((g * (int)255));		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(47)
	int _g6 = (int(_g5) << int((int)8));		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(47)
	int _g7 = (int(_g4) | int(_g6));		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(47)
	int _g8 = ::Std_obj::_int((b * (int)255));		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(47)
	return (int(_g7) | int(_g8));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(HsvX_obj,calc,return )

::tweenx909::rule::HsvX HsvX_obj::defaultFrom( int value,::tweenx909::rule::HsvX _to,::tweenx909::TweenX tween){
	HX_STACK_FRAME("tweenx909.rule.HsvX","defaultFrom",0x6bc5dd63,"tweenx909.rule.HsvX.defaultFrom","tweenx909/rule/HsvX.hx",51,0x05913f18)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(_to,"_to")
	HX_STACK_ARG(tween,"tween")
	HX_STACK_LINE(51)
	return ::tweenx909::rule::HsvX_obj::of(value,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HsvX_obj,defaultFrom,return )

::tweenx909::rule::HsvX HsvX_obj::of( int color,hx::Null< int >  __o_hueIndex){
int hueIndex = __o_hueIndex.Default(0);
	HX_STACK_FRAME("tweenx909.rule.HsvX","of",0x869e557f,"tweenx909.rule.HsvX.of","tweenx909/rule/HsvX.hx",54,0x05913f18)
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(hueIndex,"hueIndex")
{
		HX_STACK_LINE(55)
		Float r = (Float(((int((int(color) >> int((int)16))) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(56)
		Float g = (Float(((int((int(color) >> int((int)8))) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(57)
		Float b = (Float(((int(color) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(59)
		Float max;		HX_STACK_VAR(max,"max");
		HX_STACK_LINE(59)
		Float min;		HX_STACK_VAR(min,"min");
		HX_STACK_LINE(59)
		Float diff;		HX_STACK_VAR(diff,"diff");
		HX_STACK_LINE(59)
		Float h;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(60)
		if (((r < g))){
			HX_STACK_LINE(61)
			if (((g < b))){
				HX_STACK_LINE(62)
				max = b;
				HX_STACK_LINE(63)
				min = r;
				HX_STACK_LINE(64)
				Float _g = diff = (max - min);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(64)
				Float _g1 = (Float(((r - g))) / Float(_g));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(64)
				Float _g2 = ((int)4 + _g1);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(64)
				Float _g3 = (Float(_g2) / Float((int)6));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(64)
				h = _g3;
			}
			else{
				HX_STACK_LINE(66)
				max = g;
				HX_STACK_LINE(67)
				if (((r < b))){
					HX_STACK_LINE(67)
					min = r;
				}
				else{
					HX_STACK_LINE(67)
					min = b;
				}
				HX_STACK_LINE(68)
				Float _g4 = diff = (max - min);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(68)
				Float _g5 = (Float(((b - r))) / Float(_g4));		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(68)
				Float _g6 = ((int)2 + _g5);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(68)
				Float _g7 = (Float(_g6) / Float((int)6));		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(68)
				h = _g7;
			}
		}
		else{
			HX_STACK_LINE(71)
			if (((r < b))){
				HX_STACK_LINE(72)
				max = b;
				HX_STACK_LINE(73)
				min = g;
				HX_STACK_LINE(74)
				Float _g8 = diff = (max - min);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(74)
				Float _g9 = (Float(((r - g))) / Float(_g8));		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(74)
				Float _g10 = ((int)4 + _g9);		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(74)
				Float _g11 = (Float(_g10) / Float((int)6));		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(74)
				h = _g11;
			}
			else{
				HX_STACK_LINE(76)
				max = r;
				HX_STACK_LINE(77)
				if (((g < b))){
					HX_STACK_LINE(77)
					min = g;
				}
				else{
					HX_STACK_LINE(77)
					min = b;
				}
				HX_STACK_LINE(78)
				Float _g12 = diff = (max - min);		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(78)
				Float _g13 = (Float(((g - b))) / Float(_g12));		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(78)
				Float _g14 = (Float(_g13) / Float((int)6));		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(78)
				h = _g14;
			}
		}
		HX_STACK_LINE(82)
		if (((h < (int)0))){
			HX_STACK_LINE(82)
			hx::AddEq(h,(int)1);
		}
		HX_STACK_LINE(83)
		Float s = (Float(diff) / Float(max));		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(84)
		return ::tweenx909::rule::HsvX_obj::__new((h + hueIndex),s,max);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HsvX_obj,of,return )


HsvX_obj::HsvX_obj()
{
}

Dynamic HsvX_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"h") ) { return h; }
		if (HX_FIELD_EQ(inName,"s") ) { return s; }
		if (HX_FIELD_EQ(inName,"v") ) { return v; }
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

Dynamic HsvX_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"h") ) { h=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s") ) { s=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"v") ) { v=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"inputClass") ) { inputClass=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HsvX_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("h"));
	outFields->push(HX_CSTRING("s"));
	outFields->push(HX_CSTRING("v"));
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
	{hx::fsFloat,(int)offsetof(HsvX_obj,h),HX_CSTRING("h")},
	{hx::fsFloat,(int)offsetof(HsvX_obj,s),HX_CSTRING("s")},
	{hx::fsFloat,(int)offsetof(HsvX_obj,v),HX_CSTRING("v")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("h"),
	HX_CSTRING("s"),
	HX_CSTRING("v"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HsvX_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(HsvX_obj::inputClass,"inputClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HsvX_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(HsvX_obj::inputClass,"inputClass");
};

#endif

Class HsvX_obj::__mClass;

void HsvX_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("tweenx909.rule.HsvX"), hx::TCanCast< HsvX_obj> ,sStaticFields,sMemberFields,
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

void HsvX_obj::__boot()
{
	inputClass= hx::ClassOf< ::tweenx909::rule::HsvX >();
}

} // end namespace tweenx909
} // end namespace rule
