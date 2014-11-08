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
#ifndef INCLUDED_tweenx909_rule_AhsvX
#include <tweenx909/rule/AhsvX.h>
#endif
namespace tweenx909{
namespace rule{

Void AhsvX_obj::__construct(Float alpha,Float hue,Float saturation,Float value)
{
HX_STACK_FRAME("tweenx909.rule.AhsvX","new",0x77118507,"tweenx909.rule.AhsvX.new","tweenx909/rule/AhsvX.hx",14,0xae42f4a9)
HX_STACK_THIS(this)
HX_STACK_ARG(alpha,"alpha")
HX_STACK_ARG(hue,"hue")
HX_STACK_ARG(saturation,"saturation")
HX_STACK_ARG(value,"value")
{
	HX_STACK_LINE(15)
	this->a = alpha;
	HX_STACK_LINE(16)
	this->h = hue;
	HX_STACK_LINE(17)
	this->s = saturation;
	HX_STACK_LINE(18)
	this->v = value;
}
;
	return null();
}

//AhsvX_obj::~AhsvX_obj() { }

Dynamic AhsvX_obj::__CreateEmpty() { return  new AhsvX_obj; }
hx::ObjectPtr< AhsvX_obj > AhsvX_obj::__new(Float alpha,Float hue,Float saturation,Float value)
{  hx::ObjectPtr< AhsvX_obj > result = new AhsvX_obj();
	result->__construct(alpha,hue,saturation,value);
	return result;}

Dynamic AhsvX_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AhsvX_obj > result = new AhsvX_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Dynamic AhsvX_obj::inputClass;

int AhsvX_obj::calc( ::tweenx909::rule::AhsvX _from,::tweenx909::rule::AhsvX _to,Float t1,Float t2,::tweenx909::TweenX tween){
	HX_STACK_FRAME("tweenx909.rule.AhsvX","calc",0xb0fa760e,"tweenx909.rule.AhsvX.calc","tweenx909/rule/AhsvX.hx",22,0xae42f4a9)
	HX_STACK_ARG(_from,"_from")
	HX_STACK_ARG(_to,"_to")
	HX_STACK_ARG(t1,"t1")
	HX_STACK_ARG(t2,"t2")
	HX_STACK_ARG(tween,"tween")
	HX_STACK_LINE(23)
	Float a = ((_from->a * t2) + (_to->a * t1));		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(24)
	if (((a > (int)1))){
		HX_STACK_LINE(24)
		a = (int)1;
	}
	HX_STACK_LINE(25)
	if (((a < (int)0))){
		HX_STACK_LINE(25)
		a = (int)0;
	}
	HX_STACK_LINE(27)
	Float h = ((_from->h * t2) + (_to->h * t1));		HX_STACK_VAR(h,"h");
	HX_STACK_LINE(28)
	Float s = ((_from->s * t2) + (_to->s * t1));		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(29)
	Float v = ((_from->v * t2) + (_to->v * t1));		HX_STACK_VAR(v,"v");
	HX_STACK_LINE(31)
	int _g = ::Math_obj::floor(h);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(31)
	Float _g1 = (h - _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(31)
	Float _g2 = (_g1 * (int)6);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(31)
	h = _g2;
	HX_STACK_LINE(32)
	int hi = ::Math_obj::floor(h);		HX_STACK_VAR(hi,"hi");
	HX_STACK_LINE(33)
	if (((s > (int)1))){
		HX_STACK_LINE(33)
		s = (int)1;
	}
	HX_STACK_LINE(34)
	if (((s < (int)0))){
		HX_STACK_LINE(34)
		s = (int)0;
	}
	HX_STACK_LINE(35)
	if (((v > (int)1))){
		HX_STACK_LINE(35)
		v = (int)1;
	}
	HX_STACK_LINE(36)
	if (((v < (int)0))){
		HX_STACK_LINE(36)
		v = (int)0;
	}
	HX_STACK_LINE(39)
	Float m = (v * (((int)1 - s)));		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(40)
	Float f = (h - hi);		HX_STACK_VAR(f,"f");
	HX_STACK_LINE(42)
	Float r = .0;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(42)
	Float g = .0;		HX_STACK_VAR(g,"g");
	HX_STACK_LINE(42)
	Float b = .0;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(43)
	switch( (int)(hi)){
		case (int)0: {
			HX_STACK_LINE(44)
			r = v;
			HX_STACK_LINE(44)
			g = (v * (((int)1 - (s * (((int)1 - f))))));
			HX_STACK_LINE(44)
			b = m;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(45)
			r = (v * (((int)1 - (s * f))));
			HX_STACK_LINE(45)
			g = v;
			HX_STACK_LINE(45)
			b = m;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(46)
			r = m;
			HX_STACK_LINE(46)
			g = v;
			HX_STACK_LINE(46)
			b = (v * (((int)1 - (s * (((int)1 - f))))));
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(47)
			r = m;
			HX_STACK_LINE(47)
			g = (v * (((int)1 - (s * f))));
			HX_STACK_LINE(47)
			b = v;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(48)
			r = (v * (((int)1 - (s * (((int)1 - f))))));
			HX_STACK_LINE(48)
			g = m;
			HX_STACK_LINE(48)
			b = v;
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(49)
			r = v;
			HX_STACK_LINE(49)
			g = m;
			HX_STACK_LINE(49)
			b = (v * (((int)1 - (s * f))));
		}
		;break;
	}
	HX_STACK_LINE(52)
	int _g3 = ::Std_obj::_int((a * (int)255));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(52)
	int _g4 = (int(_g3) << int((int)24));		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(52)
	int _g5 = ::Std_obj::_int((r * (int)255));		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(52)
	int _g6 = (int(_g5) << int((int)16));		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(52)
	int _g7 = (int(_g4) | int(_g6));		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(52)
	int _g8 = ::Std_obj::_int((g * (int)255));		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(52)
	int _g9 = (int(_g8) << int((int)8));		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(52)
	int _g10 = (int(_g7) | int(_g9));		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(52)
	int _g11 = ::Std_obj::_int((b * (int)255));		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(52)
	return (int(_g10) | int(_g11));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(AhsvX_obj,calc,return )

::tweenx909::rule::AhsvX AhsvX_obj::defaultFrom( int value,::tweenx909::rule::AhsvX _to,::tweenx909::TweenX tween){
	HX_STACK_FRAME("tweenx909.rule.AhsvX","defaultFrom",0x6a8ed272,"tweenx909.rule.AhsvX.defaultFrom","tweenx909/rule/AhsvX.hx",55,0xae42f4a9)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(_to,"_to")
	HX_STACK_ARG(tween,"tween")
	HX_STACK_LINE(55)
	return ::tweenx909::rule::AhsvX_obj::of(value,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(AhsvX_obj,defaultFrom,return )

::tweenx909::rule::AhsvX AhsvX_obj::of( int color,hx::Null< int >  __o_hueIndex){
int hueIndex = __o_hueIndex.Default(0);
	HX_STACK_FRAME("tweenx909.rule.AhsvX","of",0x18a43e50,"tweenx909.rule.AhsvX.of","tweenx909/rule/AhsvX.hx",58,0xae42f4a9)
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(hueIndex,"hueIndex")
{
		HX_STACK_LINE(59)
		Float a = (Float(((int(hx::UShr(color,(int)24)) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(60)
		Float r = (Float(((int((int(color) >> int((int)16))) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(61)
		Float g = (Float(((int((int(color) >> int((int)8))) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(62)
		Float b = (Float(((int(color) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(64)
		Float max;		HX_STACK_VAR(max,"max");
		HX_STACK_LINE(64)
		Float min;		HX_STACK_VAR(min,"min");
		HX_STACK_LINE(64)
		Float diff;		HX_STACK_VAR(diff,"diff");
		HX_STACK_LINE(64)
		Float h;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(65)
		if (((r < g))){
			HX_STACK_LINE(66)
			if (((g < b))){
				HX_STACK_LINE(67)
				max = b;
				HX_STACK_LINE(68)
				min = r;
				HX_STACK_LINE(69)
				Float _g = diff = (max - min);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(69)
				Float _g1 = (Float(((r - g))) / Float(_g));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(69)
				Float _g2 = ((int)4 + _g1);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(69)
				Float _g3 = (Float(_g2) / Float((int)6));		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(69)
				h = _g3;
			}
			else{
				HX_STACK_LINE(71)
				max = g;
				HX_STACK_LINE(72)
				if (((r < b))){
					HX_STACK_LINE(72)
					min = r;
				}
				else{
					HX_STACK_LINE(72)
					min = b;
				}
				HX_STACK_LINE(73)
				Float _g4 = diff = (max - min);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(73)
				Float _g5 = (Float(((b - r))) / Float(_g4));		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(73)
				Float _g6 = ((int)2 + _g5);		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(73)
				Float _g7 = (Float(_g6) / Float((int)6));		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(73)
				h = _g7;
			}
		}
		else{
			HX_STACK_LINE(76)
			if (((r < b))){
				HX_STACK_LINE(77)
				max = b;
				HX_STACK_LINE(78)
				min = g;
				HX_STACK_LINE(79)
				Float _g8 = diff = (max - min);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(79)
				Float _g9 = (Float(((r - g))) / Float(_g8));		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(79)
				Float _g10 = ((int)4 + _g9);		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(79)
				Float _g11 = (Float(_g10) / Float((int)6));		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(79)
				h = _g11;
			}
			else{
				HX_STACK_LINE(81)
				max = r;
				HX_STACK_LINE(82)
				if (((g < b))){
					HX_STACK_LINE(82)
					min = g;
				}
				else{
					HX_STACK_LINE(82)
					min = b;
				}
				HX_STACK_LINE(83)
				Float _g12 = diff = (max - min);		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(83)
				Float _g13 = (Float(((g - b))) / Float(_g12));		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(83)
				Float _g14 = (Float(_g13) / Float((int)6));		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(83)
				h = _g14;
			}
		}
		HX_STACK_LINE(87)
		if (((h < (int)0))){
			HX_STACK_LINE(87)
			hx::AddEq(h,(int)1);
		}
		HX_STACK_LINE(88)
		Float s = (Float(diff) / Float(max));		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(89)
		return ::tweenx909::rule::AhsvX_obj::__new(a,(h + hueIndex),s,max);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AhsvX_obj,of,return )


AhsvX_obj::AhsvX_obj()
{
}

Dynamic AhsvX_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { return a; }
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

Dynamic AhsvX_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"h") ) { h=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s") ) { s=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"v") ) { v=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"inputClass") ) { inputClass=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AhsvX_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("a"));
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
	{hx::fsFloat,(int)offsetof(AhsvX_obj,a),HX_CSTRING("a")},
	{hx::fsFloat,(int)offsetof(AhsvX_obj,h),HX_CSTRING("h")},
	{hx::fsFloat,(int)offsetof(AhsvX_obj,s),HX_CSTRING("s")},
	{hx::fsFloat,(int)offsetof(AhsvX_obj,v),HX_CSTRING("v")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("a"),
	HX_CSTRING("h"),
	HX_CSTRING("s"),
	HX_CSTRING("v"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AhsvX_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AhsvX_obj::inputClass,"inputClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AhsvX_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AhsvX_obj::inputClass,"inputClass");
};

#endif

Class AhsvX_obj::__mClass;

void AhsvX_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("tweenx909.rule.AhsvX"), hx::TCanCast< AhsvX_obj> ,sStaticFields,sMemberFields,
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

void AhsvX_obj::__boot()
{
	inputClass= hx::ClassOf< ::tweenx909::rule::AhsvX >();
}

} // end namespace tweenx909
} // end namespace rule
