#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_tweenx909_EaseX
#include <tweenx909/EaseX.h>
#endif
namespace tweenx909{

Void EaseX_obj::__construct()
{
	return null();
}

//EaseX_obj::~EaseX_obj() { }

Dynamic EaseX_obj::__CreateEmpty() { return  new EaseX_obj; }
hx::ObjectPtr< EaseX_obj > EaseX_obj::__new()
{  hx::ObjectPtr< EaseX_obj > result = new EaseX_obj();
	result->__construct();
	return result;}

Dynamic EaseX_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EaseX_obj > result = new EaseX_obj();
	result->__construct();
	return result;}

Float EaseX_obj::PI;

Float EaseX_obj::PI_H;

Float EaseX_obj::linear( Float t){
	HX_STACK_FRAME("tweenx909.EaseX","linear",0x17b8f062,"tweenx909.EaseX.linear","tweenx909/EaseX.hx",13,0xcbe0200e)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(13)
	return t;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EaseX_obj,linear,return )

Float EaseX_obj::sineIn( Float t){
	HX_STACK_FRAME("tweenx909.EaseX","sineIn",0xe438620f,"tweenx909.EaseX.sineIn","tweenx909/EaseX.hx",20,0xcbe0200e)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(21)
	if (((t == (int)0))){
		HX_STACK_LINE(21)
		return (int)0;
	}
	else{
		HX_STACK_LINE(22)
		if (((t == (int)1))){
			HX_STACK_LINE(22)
			return (int)1;
		}
		else{
			HX_STACK_LINE(23)
			Float _g = ::Math_obj::cos((t * 1.5707963267948966));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(23)
			return ((int)1 - _g);
		}
	}
	HX_STACK_LINE(21)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EaseX_obj,sineIn,return )

Float EaseX_obj::sineOut( Float t){
	HX_STACK_FRAME("tweenx909.EaseX","sineOut",0xcd21ff24,"tweenx909.EaseX.sineOut","tweenx909/EaseX.hx",27,0xcbe0200e)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(28)
	if (((t == (int)0))){
		HX_STACK_LINE(28)
		return (int)0;
	}
	else{
		HX_STACK_LINE(29)
		if (((t == (int)1))){
			HX_STACK_LINE(29)
			return (int)1;
		}
		else{
			HX_STACK_LINE(30)
			return ::Math_obj::sin((t * 1.5707963267948966));
		}
	}
	HX_STACK_LINE(28)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EaseX_obj,sineOut,return )

Float EaseX_obj::sineInOut( Float t){
	HX_STACK_FRAME("tweenx909.EaseX","sineInOut",0x5fd769bf,"tweenx909.EaseX.sineInOut","tweenx909/EaseX.hx",34,0xcbe0200e)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(35)
	if (((t == (int)0))){
		HX_STACK_LINE(35)
		return (int)0;
	}
	else{
		HX_STACK_LINE(36)
		if (((t == (int)1))){
			HX_STACK_LINE(36)
			return (int)1;
		}
		else{
			HX_STACK_LINE(37)
			Float _g = ::Math_obj::cos((::Math_obj::PI * t));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(37)
			Float _g1 = (_g - (int)1);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(37)
			return (-0.5 * _g1);
		}
	}
	HX_STACK_LINE(35)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EaseX_obj,sineInOut,return )

Float EaseX_obj::sineOutIn( Float t){
	HX_STACK_FRAME("tweenx909.EaseX","sineOutIn",0xd8fb5029,"tweenx909.EaseX.sineOutIn","tweenx909/EaseX.hx",41,0xcbe0200e)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(42)
	if (((t == (int)0))){
		HX_STACK_LINE(42)
		return (int)0;
	}
	else{
		HX_STACK_LINE(43)
		if (((t == (int)1))){
			HX_STACK_LINE(43)
			return (int)1;
		}
		else{
			HX_STACK_LINE(44)
			if (((t < 0.5))){
				HX_STACK_LINE(45)
				Float _g = ::Math_obj::sin(((t * (int)2) * 1.5707963267948966));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(45)
				return (0.5 * _g);
			}
			else{
				HX_STACK_LINE(47)
				Float _g1 = ::Math_obj::cos(((((t * (int)2) - (int)1)) * 1.5707963267948966));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(47)
				Float _g2 = (-0.5 * _g1);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(47)
				return (_g2 + (int)1);
			}
		}
	}
	HX_STACK_LINE(42)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EaseX_obj,sineOutIn,return )

Float EaseX_obj::quadIn( Float t){
	HX_STACK_FRAME("tweenx909.EaseX","quadIn",0xf7b81709,"tweenx909.EaseX.quadIn","tweenx909/EaseX.hx",54,0xcbe0200e)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(54)
	return (t * t);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EaseX_obj,quadIn,return )

Float EaseX_obj::quadOut( Float t){
	HX_STACK_FRAME("tweenx909.EaseX","quadOut",0xc960a4ea,"tweenx909.EaseX.quadOut","tweenx909/EaseX.hx",58,0xcbe0200e)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(58)
	return (-(t) * ((t - (int)2)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EaseX_obj,quadOut,return )

Float EaseX_obj::quadInOut( Float t){
	HX_STACK_FRAME("tweenx909.EaseX","quadInOut",0xe55f8d05,"tweenx909.EaseX.quadInOut","tweenx909/EaseX.hx",61,0xcbe0200e)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(61)
	if (((t < 0.5))){
		HX_STACK_LINE(62)
		return (((int)2 * t) * t);
	}
	else{
		HX_STACK_LINE(64)
		Float _g = hx::SubEq(t,(int)1);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(64)
		Float _g1 = (_g * t);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(64)
		Float _g2 = ((int)-2 * _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(64)
		return (_g2 + (int)1);
	}
	HX_STACK_LINE(61)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EaseX_obj,quadInOut,return )

Float EaseX_obj::quadOutIn( Float t){
	HX_STACK_FRAME("tweenx909.EaseX","quadOutIn",0x5e83736f,"tweenx909.EaseX.quadOutIn","tweenx909/EaseX.hx",67,0xcbe0200e)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(67)
	if (((t < 0.5))){
		HX_STACK_LINE(68)
		Float _g = t = (t * (int)2);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(68)
		Float _g1 = (-0.5 * _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(68)
		return (_g1 * ((t - (int)2)));
	}
	else{
		HX_STACK_LINE(70)
		Float _g2 = t = ((t * (int)2) - (int)1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(70)
		Float _g3 = (0.5 * _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(70)
		Float _g4 = (_g3 * t);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(70)
		return (_g4 + 0.5);
	}
	HX_STACK_LINE(67)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EaseX_obj,quadOutIn,return )

Float EaseX_obj::cubicIn( Float t){
	HX_STACK_FRAME("tweenx909.EaseX","cubicIn",0x19f7d2b2,"tweenx909.EaseX.cubicIn","tweenx909/EaseX.hx",78,0xcbe0200e)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(78)
	return ((t * t) * t);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EaseX_obj,cubicIn,return )

Float EaseX_obj::cubicOut( Float t){
	HX_STACK_FRAME("tweenx909.EaseX","cubicOut",0x9ee51d21,"tweenx909.EaseX.cubicOut","tweenx909/EaseX.hx",80,0xcbe0200e)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(81)
	Float _g = t = (t - (int)1);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(81)
	Float _g1 = (_g * t);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(81)
	Float _g2 = (_g1 * t);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(81)
	return (_g2 + (int)1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EaseX_obj,cubicOut,return )

Float EaseX_obj::cubicInOut( Float t){
	HX_STACK_FRAME("tweenx909.EaseX","cubicInOut",0x7f1bc0fc,"tweenx909.EaseX.cubicInOut","tweenx909/EaseX.hx",83,0xcbe0200e)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(84)
	Float _g = hx::MultEq(t,(int)2);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(84)
	if (((_g < (int)1))){
		HX_STACK_LINE(85)
		return (((0.5 * t) * t) * t);
	}
	else{
		HX_STACK_LINE(86)
		Float _g1 = hx::SubEq(t,(int)2);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(86)
		Float _g2 = (_g1 * t);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(86)
		Float _g3 = (_g2 * t);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(86)
		Float _g4 = (_g3 + (int)2);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(86)
		return (0.5 * _g4);
	}
	HX_STACK_LINE(84)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EaseX_obj,cubicInOut,return )

Float EaseX_obj::cubicOutIn( Float t){
	HX_STACK_FRAME("tweenx909.EaseX","cubicOutIn",0xf83fa766,"tweenx909.EaseX.cubicOutIn","tweenx909/EaseX.hx",88,0xcbe0200e)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(89)
	Float _g = t = ((t * (int)2) - (int)1);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(89)
	Float _g1 = (_g * t);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(89)
	Float _g2 = (_g1 * t);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(89)
	Float _g3 = (_g2 + (int)1);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(89)
	return (0.5 * _g3);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EaseX_obj,cubicOutIn,return )

Float EaseX_obj::quartIn( Float t){
	HX_STACK_FRAME("tweenx909.EaseX","quartIn",0xd2bd8ea7,"tweenx909.EaseX.quartIn","tweenx909/EaseX.hx",98,0xcbe0200e)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(98)
	return (((t * t) * t) * t);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EaseX_obj,quartIn,return )

Float EaseX_obj::quartOut( Float t){
	HX_STACK_FRAME("tweenx909.EaseX","quartOut",0x9323d78c,"tweenx909.EaseX.quartOut","tweenx909/EaseX.hx",101,0xcbe0200e)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(102)
	Float _g = t = (t - (int)1);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(102)
	Float _g1 = (_g * t);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(102)
	Float _g2 = t = _g1;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(102)
	Float _g3 = (_g2 * t);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(102)
	return ((int)1 - _g3);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EaseX_obj,quartOut,return )

Float EaseX_obj::quartInOut( Float t){
	HX_STACK_FRAME("tweenx909.EaseX","quartInOut",0x0c4e2c27,"tweenx909.EaseX.quartInOut","tweenx909/EaseX.hx",105,0xcbe0200e)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(106)
	Float _g = hx::MultEq(t,(int)2);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(106)
	if (((_g < (int)1))){
		HX_STACK_LINE(107)
		return ((((0.5 * t) * t) * t) * t);
	}
	else{
		HX_STACK_LINE(109)
		Float _g1 = hx::SubEq(t,(int)2);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(109)
		Float _g2 = (_g1 * t);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(109)
		Float _g3 = (_g2 * t);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(109)
		Float _g4 = (_g3 * t);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(109)
		Float _g5 = (_g4 - (int)2);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(109)
		return (-0.5 * _g5);
	}
	HX_STACK_LINE(106)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EaseX_obj,quartInOut,return )

Float EaseX_obj::quartOutIn( Float t){
	HX_STACK_FRAME("tweenx909.EaseX","quartOutIn",0x85721291,"tweenx909.EaseX.quartOutIn","tweenx909/EaseX.hx",113,0xcbe0200e)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(113)
	if (((t < 0.5))){
		HX_STACK_LINE(114)
		Float _g = t = ((t * (int)2) - (int)1);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(114)
		Float _g1 = (-0.5 * _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(114)
		Float _g2 = (_g1 * t);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(114)
		Float _g3 = (_g2 * t);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(114)
		Float _g4 = (_g3 * t);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(114)
		return (_g4 + 0.5);
	}
	else{
		HX_STACK_LINE(116)
		Float _g5 = t = ((t * (int)2) - (int)1);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(116)
		Float _g6 = (0.5 * _g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(116)
		Float _g7 = (_g6 * t);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(116)
		Float _g8 = (_g7 * t);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(116)
		Float _g9 = (_g8 * t);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(116)
		return (_g9 + 0.5);
	}
	HX_STACK_LINE(113)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EaseX_obj,quartOutIn,return )

Float EaseX_obj::quintIn( Float t){
	HX_STACK_FRAME("tweenx909.EaseX","quintIn",0x6b4d5833,"tweenx909.EaseX.quintIn","tweenx909/EaseX.hx",124,0xcbe0200e)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(124)
	return ((((t * t) * t) * t) * t);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EaseX_obj,quintIn,return )

Float EaseX_obj::quintOut( Float t){
	HX_STACK_FRAME("tweenx909.EaseX","quintOut",0x78646880,"tweenx909.EaseX.quintOut","tweenx909/EaseX.hx",126,0xcbe0200e)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(127)
	Float _g = t = (t - (int)1);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(127)
	Float _g1 = (_g * t);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(127)
	Float _g2 = (_g1 * t);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(127)
	Float _g3 = (_g2 * t);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(127)
	Float _g4 = (_g3 * t);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(127)
	return (_g4 + (int)1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EaseX_obj,quintOut,return )

Float EaseX_obj::quintInOut( Float t){
	HX_STACK_FRAME("tweenx909.EaseX","quintInOut",0x2f8be21b,"tweenx909.EaseX.quintInOut","tweenx909/EaseX.hx",129,0xcbe0200e)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(130)
	Float _g = hx::MultEq(t,(int)2);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(130)
	if (((_g < (int)1))){
		HX_STACK_LINE(131)
		return (((((0.5 * t) * t) * t) * t) * t);
	}
	else{
		HX_STACK_LINE(133)
		Float _g1 = hx::SubEq(t,(int)2);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(133)
		Float _g2 = (0.5 * _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(133)
		Float _g3 = (_g2 * t);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(133)
		Float _g4 = (_g3 * t);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(133)
		Float _g5 = (_g4 * t);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(133)
		Float _g6 = (_g5 * t);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(133)
		return (_g6 + (int)1);
	}
	HX_STACK_LINE(130)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EaseX_obj,quintInOut,return )

Float EaseX_obj::quintOutIn( Float t){
	HX_STACK_FRAME("tweenx909.EaseX","quintOutIn",0xa8afc885,"tweenx909.EaseX.quintOutIn","tweenx909/EaseX.hx",135,0xcbe0200e)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(136)
	Float _g = t = ((t * (int)2) - (int)1);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(136)
	Float _g1 = (_g * t);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(136)
	Float _g2 = (_g1 * t);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(136)
	Float _g3 = (_g2 * t);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(136)
	Float _g4 = (_g3 * t);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(136)
	Float _g5 = (_g4 + (int)1);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(136)
	return (0.5 * _g5);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EaseX_obj,quintOutIn,return )

Float EaseX_obj::expoIn( Float t){
	HX_STACK_FRAME("tweenx909.EaseX","expoIn",0xef960c34,"tweenx909.EaseX.expoIn","tweenx909/EaseX.hx",144,0xcbe0200e)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(144)
	if (((t == (int)0))){
		HX_STACK_LINE(144)
		return (int)0;
	}
	else{
		HX_STACK_LINE(144)
		return ::Math_obj::pow((int)2,((int)10 * ((t - (int)1))));
	}
	HX_STACK_LINE(144)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EaseX_obj,expoIn,return )

Float EaseX_obj::expoOut( Float t){
	HX_STACK_FRAME("tweenx909.EaseX","expoOut",0xb3b9355f,"tweenx909.EaseX.expoOut","tweenx909/EaseX.hx",147,0xcbe0200e)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(147)
	if (((t == (int)1))){
		HX_STACK_LINE(147)
		return (int)1;
	}
	else{
		HX_STACK_LINE(147)
		Float _g = ::Math_obj::pow((int)2,((int)-10 * t));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(147)
		return ((int)1 - _g);
	}
	HX_STACK_LINE(147)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EaseX_obj,expoOut,return )

Float EaseX_obj::expoInOut( Float t){
	HX_STACK_FRAME("tweenx909.EaseX","expoInOut",0x8354e4ba,"tweenx909.EaseX.expoInOut","tweenx909/EaseX.hx",150,0xcbe0200e)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(150)
	if (((t == (int)0))){
		HX_STACK_LINE(150)
		return (int)0;
	}
	else{
		HX_STACK_LINE(151)
		if (((t == (int)1))){
			HX_STACK_LINE(151)
			return (int)1;
		}
		else{
			HX_STACK_LINE(152)
			Float _g = hx::MultEq(t,(int)2);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(152)
			if (((_g < (int)1))){
				HX_STACK_LINE(153)
				Float _g1 = ::Math_obj::pow((int)2,((int)10 * ((t - (int)1))));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(153)
				return (0.5 * _g1);
			}
			else{
				HX_STACK_LINE(154)
				Float _g2 = --(t);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(154)
				Float _g3 = ((int)-10 * _g2);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(154)
				Float _g4 = ::Math_obj::pow((int)2,_g3);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(154)
				Float _g5 = ((int)2 - _g4);		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(154)
				return (0.5 * _g5);
			}
		}
	}
	HX_STACK_LINE(150)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EaseX_obj,expoInOut,return )

Float EaseX_obj::expoOutIn( Float t){
	HX_STACK_FRAME("tweenx909.EaseX","expoOutIn",0xfc78cb24,"tweenx909.EaseX.expoOutIn","tweenx909/EaseX.hx",157,0xcbe0200e)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(157)
	if (((t < 0.5))){
		HX_STACK_LINE(158)
		Float _g = ::Math_obj::pow((int)2,((int)-20 * t));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(158)
		Float _g1 = ((int)1 - _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(158)
		return (0.5 * _g1);
	}
	else{
		HX_STACK_LINE(159)
		if (((t == 0.5))){
			HX_STACK_LINE(160)
			return 0.5;
		}
		else{
			HX_STACK_LINE(161)
			Float _g2 = ::Math_obj::pow((int)2,((int)20 * ((t - (int)1))));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(161)
			Float _g3 = (_g2 + (int)1);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(161)
			return (0.5 * _g3);
		}
	}
	HX_STACK_LINE(157)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EaseX_obj,expoOutIn,return )

Float EaseX_obj::circIn( Float t){
	HX_STACK_FRAME("tweenx909.EaseX","circIn",0x8125f219,"tweenx909.EaseX.circIn","tweenx909/EaseX.hx",167,0xcbe0200e)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(168)
	Float _g = ::Math_obj::sqrt(((int)1 - (t * t)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(168)
	return ((int)1 - _g);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EaseX_obj,circIn,return )

Float EaseX_obj::circOut( Float t){
	HX_STACK_FRAME("tweenx909.EaseX","circOut",0x801277da,"tweenx909.EaseX.circOut","tweenx909/EaseX.hx",171,0xcbe0200e)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(171)
	return ::Math_obj::sqrt((t * (((int)2 - t))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EaseX_obj,circOut,return )

Float EaseX_obj::circInOut( Float t){
	HX_STACK_FRAME("tweenx909.EaseX","circInOut",0x0a5ffbf5,"tweenx909.EaseX.circInOut","tweenx909/EaseX.hx",173,0xcbe0200e)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(174)
	Float _g = hx::MultEq(t,(int)2);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(174)
	if (((_g < (int)1))){
		HX_STACK_LINE(175)
		Float _g1 = ::Math_obj::sqrt(((int)1 - (t * t)));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(175)
		Float _g2 = (_g1 - (int)1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(175)
		return (-0.5 * _g2);
	}
	else{
		HX_STACK_LINE(177)
		Float _g3 = hx::SubEq(t,(int)2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(177)
		Float _g4 = (_g3 * t);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(177)
		Float _g5 = ((int)1 - _g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(177)
		Float _g6 = ::Math_obj::sqrt(_g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(177)
		Float _g7 = (_g6 + (int)1);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(177)
		return (0.5 * _g7);
	}
	HX_STACK_LINE(174)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EaseX_obj,circInOut,return )

Float EaseX_obj::circOutIn( Float t){
	HX_STACK_FRAME("tweenx909.EaseX","circOutIn",0x8383e25f,"tweenx909.EaseX.circOutIn","tweenx909/EaseX.hx",180,0xcbe0200e)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(180)
	if (((t < 0.5))){
		HX_STACK_LINE(181)
		Float _g = t = ((t * (int)2) - (int)1);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(181)
		Float _g1 = (_g * t);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(181)
		Float _g2 = ((int)1 - _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(181)
		Float _g3 = ::Math_obj::sqrt(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(181)
		return (0.5 * _g3);
	}
	else{
		HX_STACK_LINE(183)
		Float _g4 = t = ((t * (int)2) - (int)1);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(183)
		Float _g5 = (_g4 * t);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(183)
		Float _g6 = ((int)1 - _g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(183)
		Float _g7 = ::Math_obj::sqrt(_g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(183)
		Float _g8 = (_g7 - (int)1);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(183)
		Float _g9 = (_g8 - (int)1);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(183)
		return (-0.5 * _g9);
	}
	HX_STACK_LINE(180)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EaseX_obj,circOutIn,return )

Float EaseX_obj::bounceIn( Float t){
	HX_STACK_FRAME("tweenx909.EaseX","bounceIn",0xe60b2f4a,"tweenx909.EaseX.bounceIn","tweenx909/EaseX.hx",190,0xcbe0200e)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(191)
	Float _g = t = ((int)1 - t);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(191)
	if (((_g < 0.36363636363636365))){
		HX_STACK_LINE(191)
		return ((int)1 - ((7.5625 * t) * t));
	}
	HX_STACK_LINE(192)
	if (((t < 0.72727272727272729))){
		HX_STACK_LINE(192)
		Float _g1 = hx::SubEq(t,0.54545454545454541);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(192)
		Float _g2 = (7.5625 * _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(192)
		Float _g3 = (_g2 * t);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(192)
		Float _g4 = (_g3 + 0.75);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(192)
		return ((int)1 - _g4);
	}
	HX_STACK_LINE(193)
	if (((t < 0.90909090909090906))){
		HX_STACK_LINE(193)
		Float _g5 = hx::SubEq(t,0.81818181818181823);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(193)
		Float _g6 = (7.5625 * _g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(193)
		Float _g7 = (_g6 * t);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(193)
		Float _g8 = (_g7 + 0.9375);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(193)
		return ((int)1 - _g8);
	}
	HX_STACK_LINE(194)
	Float _g9 = hx::SubEq(t,0.95454545454545459);		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(194)
	Float _g10 = (7.5625 * _g9);		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(194)
	Float _g11 = (_g10 * t);		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(194)
	Float _g12 = (_g11 + 0.984375);		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(194)
	return ((int)1 - _g12);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EaseX_obj,bounceIn,return )

Float EaseX_obj::bounceOut( Float t){
	HX_STACK_FRAME("tweenx909.EaseX","bounceOut",0x63c2c589,"tweenx909.EaseX.bounceOut","tweenx909/EaseX.hx",196,0xcbe0200e)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(197)
	if (((t < 0.36363636363636365))){
		HX_STACK_LINE(197)
		return ((7.5625 * t) * t);
	}
	HX_STACK_LINE(198)
	if (((t < 0.72727272727272729))){
		HX_STACK_LINE(198)
		Float _g = hx::SubEq(t,0.54545454545454541);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(198)
		Float _g1 = (7.5625 * _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(198)
		Float _g2 = (_g1 * t);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(198)
		return (_g2 + 0.75);
	}
	HX_STACK_LINE(199)
	if (((t < 0.90909090909090906))){
		HX_STACK_LINE(199)
		Float _g3 = hx::SubEq(t,0.81818181818181823);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(199)
		Float _g4 = (7.5625 * _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(199)
		Float _g5 = (_g4 * t);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(199)
		return (_g5 + 0.9375);
	}
	HX_STACK_LINE(200)
	Float _g6 = hx::SubEq(t,0.95454545454545459);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(200)
	Float _g7 = (7.5625 * _g6);		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(200)
	Float _g8 = (_g7 * t);		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(200)
	return (_g8 + 0.984375);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EaseX_obj,bounceOut,return )

Float EaseX_obj::bounceInOut( Float t){
	HX_STACK_FRAME("tweenx909.EaseX","bounceInOut",0x75025364,"tweenx909.EaseX.bounceInOut","tweenx909/EaseX.hx",203,0xcbe0200e)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(203)
	if (((t < 0.5))){
		HX_STACK_LINE(204)
		Float _g = t = ((int)1 - (t * (int)2));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(204)
		if (((_g < 0.36363636363636365))){
			HX_STACK_LINE(204)
			return ((((int)1 - ((7.5625 * t) * t))) * 0.5);
		}
		HX_STACK_LINE(205)
		if (((t < 0.72727272727272729))){
			HX_STACK_LINE(205)
			Float _g1 = hx::SubEq(t,0.54545454545454541);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(205)
			Float _g2 = (7.5625 * _g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(205)
			Float _g3 = (_g2 * t);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(205)
			Float _g4 = (_g3 + 0.75);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(205)
			Float _g5 = ((int)1 - _g4);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(205)
			return (_g5 * 0.5);
		}
		HX_STACK_LINE(206)
		if (((t < 0.90909090909090906))){
			HX_STACK_LINE(206)
			Float _g6 = hx::SubEq(t,0.81818181818181823);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(206)
			Float _g7 = (7.5625 * _g6);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(206)
			Float _g8 = (_g7 * t);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(206)
			Float _g9 = (_g8 + 0.9375);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(206)
			Float _g10 = ((int)1 - _g9);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(206)
			return (_g10 * 0.5);
		}
		HX_STACK_LINE(207)
		Float _g11 = hx::SubEq(t,0.95454545454545459);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(207)
		Float _g12 = (7.5625 * _g11);		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(207)
		Float _g13 = (_g12 * t);		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(207)
		Float _g14 = (_g13 + 0.984375);		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(207)
		Float _g15 = ((int)1 - _g14);		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(207)
		return (_g15 * 0.5);
	}
	else{
		HX_STACK_LINE(209)
		Float _g16 = t = ((t * (int)2) - (int)1);		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(209)
		if (((_g16 < 0.36363636363636365))){
			HX_STACK_LINE(209)
			return ((((7.5625 * t) * t) * 0.5) + 0.5);
		}
		HX_STACK_LINE(210)
		if (((t < 0.72727272727272729))){
			HX_STACK_LINE(210)
			Float _g17 = hx::SubEq(t,0.54545454545454541);		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(210)
			Float _g18 = (7.5625 * _g17);		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(210)
			Float _g19 = (_g18 * t);		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(210)
			Float _g20 = (_g19 + 0.75);		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(210)
			Float _g21 = (_g20 * 0.5);		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(210)
			return (_g21 + 0.5);
		}
		HX_STACK_LINE(211)
		if (((t < 0.90909090909090906))){
			HX_STACK_LINE(211)
			Float _g22 = hx::SubEq(t,0.81818181818181823);		HX_STACK_VAR(_g22,"_g22");
			HX_STACK_LINE(211)
			Float _g23 = (7.5625 * _g22);		HX_STACK_VAR(_g23,"_g23");
			HX_STACK_LINE(211)
			Float _g24 = (_g23 * t);		HX_STACK_VAR(_g24,"_g24");
			HX_STACK_LINE(211)
			Float _g25 = (_g24 + 0.9375);		HX_STACK_VAR(_g25,"_g25");
			HX_STACK_LINE(211)
			Float _g26 = (_g25 * 0.5);		HX_STACK_VAR(_g26,"_g26");
			HX_STACK_LINE(211)
			return (_g26 + 0.5);
		}
		HX_STACK_LINE(212)
		Float _g27 = hx::SubEq(t,0.95454545454545459);		HX_STACK_VAR(_g27,"_g27");
		HX_STACK_LINE(212)
		Float _g28 = (7.5625 * _g27);		HX_STACK_VAR(_g28,"_g28");
		HX_STACK_LINE(212)
		Float _g29 = (_g28 * t);		HX_STACK_VAR(_g29,"_g29");
		HX_STACK_LINE(212)
		Float _g30 = (_g29 + 0.984375);		HX_STACK_VAR(_g30,"_g30");
		HX_STACK_LINE(212)
		Float _g31 = (_g30 * 0.5);		HX_STACK_VAR(_g31,"_g31");
		HX_STACK_LINE(212)
		return (_g31 + 0.5);
	}
	HX_STACK_LINE(203)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EaseX_obj,bounceInOut,return )

Float EaseX_obj::bounceOutIn( Float t){
	HX_STACK_FRAME("tweenx909.EaseX","bounceOutIn",0xee2639ce,"tweenx909.EaseX.bounceOutIn","tweenx909/EaseX.hx",216,0xcbe0200e)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(216)
	if (((t < 0.5))){
		HX_STACK_LINE(217)
		Float _g = t = (t * (int)2);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(217)
		if (((_g < 0.36363636363636365))){
			HX_STACK_LINE(217)
			return (0.5 * (((7.5625 * t) * t)));
		}
		HX_STACK_LINE(218)
		if (((t < 0.72727272727272729))){
			HX_STACK_LINE(218)
			Float _g1 = hx::SubEq(t,0.54545454545454541);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(218)
			Float _g2 = (7.5625 * _g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(218)
			Float _g3 = (_g2 * t);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(218)
			Float _g4 = (_g3 + 0.75);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(218)
			return (0.5 * _g4);
		}
		HX_STACK_LINE(219)
		if (((t < 0.90909090909090906))){
			HX_STACK_LINE(219)
			Float _g5 = hx::SubEq(t,0.81818181818181823);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(219)
			Float _g6 = (7.5625 * _g5);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(219)
			Float _g7 = (_g6 * t);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(219)
			Float _g8 = (_g7 + 0.9375);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(219)
			return (0.5 * _g8);
		}
		HX_STACK_LINE(220)
		Float _g9 = hx::SubEq(t,0.95454545454545459);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(220)
		Float _g10 = (7.5625 * _g9);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(220)
		Float _g11 = (_g10 * t);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(220)
		Float _g12 = (_g11 + 0.984375);		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(220)
		return (0.5 * _g12);
	}
	else{
		HX_STACK_LINE(222)
		Float _g13 = t = ((int)1 - (((t * (int)2) - (int)1)));		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(222)
		if (((_g13 < 0.36363636363636365))){
			HX_STACK_LINE(222)
			return ((0.5 - (0.5 * (((7.5625 * t) * t)))) + 0.5);
		}
		HX_STACK_LINE(223)
		if (((t < 0.72727272727272729))){
			HX_STACK_LINE(223)
			Float _g14 = hx::SubEq(t,0.54545454545454541);		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(223)
			Float _g15 = (7.5625 * _g14);		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(223)
			Float _g16 = (_g15 * t);		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(223)
			Float _g17 = (_g16 + 0.75);		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(223)
			Float _g18 = (0.5 * _g17);		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(223)
			Float _g19 = (0.5 - _g18);		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(223)
			return (_g19 + 0.5);
		}
		HX_STACK_LINE(224)
		if (((t < 0.90909090909090906))){
			HX_STACK_LINE(224)
			Float _g20 = hx::SubEq(t,0.81818181818181823);		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(224)
			Float _g21 = (7.5625 * _g20);		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(224)
			Float _g22 = (_g21 * t);		HX_STACK_VAR(_g22,"_g22");
			HX_STACK_LINE(224)
			Float _g23 = (_g22 + 0.9375);		HX_STACK_VAR(_g23,"_g23");
			HX_STACK_LINE(224)
			Float _g24 = (0.5 * _g23);		HX_STACK_VAR(_g24,"_g24");
			HX_STACK_LINE(224)
			Float _g25 = (0.5 - _g24);		HX_STACK_VAR(_g25,"_g25");
			HX_STACK_LINE(224)
			return (_g25 + 0.5);
		}
		HX_STACK_LINE(225)
		Float _g26 = hx::SubEq(t,0.95454545454545459);		HX_STACK_VAR(_g26,"_g26");
		HX_STACK_LINE(225)
		Float _g27 = (7.5625 * _g26);		HX_STACK_VAR(_g27,"_g27");
		HX_STACK_LINE(225)
		Float _g28 = (_g27 * t);		HX_STACK_VAR(_g28,"_g28");
		HX_STACK_LINE(225)
		Float _g29 = (_g28 + 0.984375);		HX_STACK_VAR(_g29,"_g29");
		HX_STACK_LINE(225)
		Float _g30 = (0.5 * _g29);		HX_STACK_VAR(_g30,"_g30");
		HX_STACK_LINE(225)
		Float _g31 = (0.5 - _g30);		HX_STACK_VAR(_g31,"_g31");
		HX_STACK_LINE(225)
		return (_g31 + 0.5);
	}
	HX_STACK_LINE(216)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EaseX_obj,bounceOutIn,return )

Float EaseX_obj::overshoot;

Float EaseX_obj::backIn( Float t){
	HX_STACK_FRAME("tweenx909.EaseX","backIn",0x75b1d069,"tweenx909.EaseX.backIn","tweenx909/EaseX.hx",234,0xcbe0200e)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(235)
	if (((t == (int)0))){
		HX_STACK_LINE(235)
		return (int)0;
	}
	HX_STACK_LINE(236)
	if (((t == (int)1))){
		HX_STACK_LINE(236)
		return (int)1;
	}
	HX_STACK_LINE(237)
	return ((t * t) * (((2.70158 * t) - 1.70158)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EaseX_obj,backIn,return )

Float EaseX_obj::backOut( Float t){
	HX_STACK_FRAME("tweenx909.EaseX","backOut",0x85e91f8a,"tweenx909.EaseX.backOut","tweenx909/EaseX.hx",240,0xcbe0200e)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(241)
	if (((t == (int)0))){
		HX_STACK_LINE(241)
		return (int)0;
	}
	HX_STACK_LINE(242)
	if (((t == (int)1))){
		HX_STACK_LINE(242)
		return (int)1;
	}
	HX_STACK_LINE(243)
	Float _g = t = (t - (int)1);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(243)
	Float _g1 = (_g * t);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(243)
	Float _g2 = (_g1 * (((2.70158 * t) + 1.70158)));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(243)
	return (_g2 + (int)1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EaseX_obj,backOut,return )

Float EaseX_obj::backInOut( Float t){
	HX_STACK_FRAME("tweenx909.EaseX","backInOut",0x30f3efa5,"tweenx909.EaseX.backInOut","tweenx909/EaseX.hx",246,0xcbe0200e)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(247)
	if (((t == (int)0))){
		HX_STACK_LINE(247)
		return (int)0;
	}
	HX_STACK_LINE(248)
	if (((t == (int)1))){
		HX_STACK_LINE(248)
		return (int)1;
	}
	HX_STACK_LINE(249)
	Float _g = hx::MultEq(t,(int)2);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(249)
	if (((_g < (int)1))){
		HX_STACK_LINE(249)
		return (0.5 * (((t * t) * (((3.5949095 * t) - 2.5949095)))));
	}
	HX_STACK_LINE(250)
	Float _g1 = hx::SubEq(t,(int)2);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(250)
	Float _g2 = (_g1 * t);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(250)
	Float _g3 = (_g2 * (((3.5949095 * t) + 2.5949095)));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(250)
	Float _g4 = (_g3 + (int)2);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(250)
	return (0.5 * _g4);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EaseX_obj,backInOut,return )

Float EaseX_obj::backOutIn( Float t){
	HX_STACK_FRAME("tweenx909.EaseX","backOutIn",0xaa17d60f,"tweenx909.EaseX.backOutIn","tweenx909/EaseX.hx",253,0xcbe0200e)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(254)
	if (((t == (int)0))){
		HX_STACK_LINE(254)
		return (int)0;
	}
	HX_STACK_LINE(255)
	if (((t == (int)1))){
		HX_STACK_LINE(255)
		return (int)1;
	}
	HX_STACK_LINE(256)
	if (((t < 0.5))){
		HX_STACK_LINE(256)
		Float _g = t = ((t * (int)2) - (int)1);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(256)
		Float _g1 = (_g * t);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(256)
		Float _g2 = (_g1 * (((2.70158 * t) + 1.70158)));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(256)
		Float _g3 = (_g2 + (int)1);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(256)
		return (0.5 * _g3);
	}
	HX_STACK_LINE(257)
	Float _g4 = t = ((t * (int)2) - (int)1);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(257)
	Float _g5 = (0.5 * _g4);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(257)
	Float _g6 = (_g5 * t);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(257)
	Float _g7 = (_g6 * (((2.70158 * t) - 1.70158)));		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(257)
	return (_g7 + 0.5);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EaseX_obj,backOutIn,return )

Float EaseX_obj::amplitude;

Float EaseX_obj::period;

Float EaseX_obj::elasticIn( Float t){
	HX_STACK_FRAME("tweenx909.EaseX","elasticIn",0xbd9eeebd,"tweenx909.EaseX.elasticIn","tweenx909/EaseX.hx",266,0xcbe0200e)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(267)
	if (((t == (int)0))){
		HX_STACK_LINE(267)
		return (int)0;
	}
	HX_STACK_LINE(268)
	if (((t == (int)1))){
		HX_STACK_LINE(268)
		return (int)1;
	}
	HX_STACK_LINE(270)
	Float s = 7.5e-005;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(271)
	Float _g = hx::SubEq(t,(int)1);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(271)
	Float _g1 = ((int)10 * _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(271)
	Float _g2 = ::Math_obj::pow((int)2,_g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(271)
	Float _g3 = ((int)1 * _g2);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(271)
	Float _g4 = ::Math_obj::sin((Float(((((t * 0.001) - s)) * (((int)2 * ::Math_obj::PI)))) / Float(0.0003)));		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(271)
	return -(((_g3 * _g4)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EaseX_obj,elasticIn,return )

Float EaseX_obj::elasticOut( Float t){
	HX_STACK_FRAME("tweenx909.EaseX","elasticOut",0x2d768ab6,"tweenx909.EaseX.elasticOut","tweenx909/EaseX.hx",274,0xcbe0200e)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(275)
	if (((t == (int)0))){
		HX_STACK_LINE(275)
		return (int)0;
	}
	HX_STACK_LINE(276)
	if (((t == (int)1))){
		HX_STACK_LINE(276)
		return (int)1;
	}
	HX_STACK_LINE(278)
	Float s = 7.5e-005;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(279)
	Float _g = ::Math_obj::pow((int)2,((int)-10 * t));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(279)
	Float _g1 = ::Math_obj::sin((Float(((((t * 0.001) - s)) * (((int)2 * ::Math_obj::PI)))) / Float(0.0003)));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(279)
	Float _g2 = (_g * _g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(279)
	return (_g2 + (int)1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EaseX_obj,elasticOut,return )

Float EaseX_obj::elasticInOut( Float t){
	HX_STACK_FRAME("tweenx909.EaseX","elasticInOut",0xe7137dd1,"tweenx909.EaseX.elasticInOut","tweenx909/EaseX.hx",282,0xcbe0200e)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(283)
	if (((t == (int)0))){
		HX_STACK_LINE(283)
		return (int)0;
	}
	HX_STACK_LINE(284)
	if (((t == (int)1))){
		HX_STACK_LINE(284)
		return (int)1;
	}
	HX_STACK_LINE(286)
	Float s = 7.5e-005;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(288)
	Float _g = hx::MultEq(t,(int)2);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(288)
	if (((_g < (int)1))){
		HX_STACK_LINE(289)
		Float _g1 = hx::SubEq(t,(int)1);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(289)
		Float _g2 = ((int)10 * _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(289)
		Float _g3 = ::Math_obj::pow((int)2,_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(289)
		Float _g4 = ((int)1 * _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(289)
		Float _g5 = ::Math_obj::sin((Float(((((t * 0.001) - s)) * (((int)2 * ::Math_obj::PI)))) / Float(0.0003)));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(289)
		Float _g6 = (_g4 * _g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(289)
		return (-0.5 * _g6);
	}
	else{
		HX_STACK_LINE(291)
		Float _g7 = hx::SubEq(t,(int)1);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(291)
		Float _g8 = ((int)-10 * _g7);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(291)
		Float _g9 = ::Math_obj::pow((int)2,_g8);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(291)
		Float _g10 = ((int)1 * _g9);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(291)
		Float _g11 = ::Math_obj::sin((Float(((((t * 0.001) - s)) * (((int)2 * ::Math_obj::PI)))) / Float(0.0003)));		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(291)
		Float _g12 = (_g10 * _g11);		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(291)
		Float _g13 = (_g12 * 0.5);		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(291)
		return (_g13 + (int)1);
	}
	HX_STACK_LINE(288)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EaseX_obj,elasticInOut,return )

Float EaseX_obj::elasticOutIn( Float t){
	HX_STACK_FRAME("tweenx909.EaseX","elasticOutIn",0x6037643b,"tweenx909.EaseX.elasticOutIn","tweenx909/EaseX.hx",295,0xcbe0200e)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(295)
	if (((t < 0.5))){
		HX_STACK_LINE(296)
		Float _g = hx::MultEq(t,(int)2);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(296)
		if (((_g == (int)0))){
			HX_STACK_LINE(296)
			return (int)0;
		}
		HX_STACK_LINE(297)
		Float s = 7.5e-005;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(298)
		Float _g1 = ::Math_obj::pow((int)2,((int)-10 * t));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(298)
		Float _g2 = ((Float((int)1) / Float((int)2)) * _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(298)
		Float _g3 = ::Math_obj::sin((Float(((((t * 0.001) - s)) * (((int)2 * ::Math_obj::PI)))) / Float(0.0003)));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(298)
		Float _g4 = (_g2 * _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(298)
		return (_g4 + 0.5);
	}
	else{
		HX_STACK_LINE(300)
		if (((t == 0.5))){
			HX_STACK_LINE(300)
			return 0.5;
		}
		HX_STACK_LINE(301)
		if (((t == (int)1))){
			HX_STACK_LINE(301)
			return (int)1;
		}
		HX_STACK_LINE(302)
		t = ((t * (int)2) - (int)1);
		HX_STACK_LINE(303)
		Float s = 7.5e-005;		HX_STACK_VAR(s,"s");
		HX_STACK_LINE(304)
		Float _g5 = hx::SubEq(t,(int)1);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(304)
		Float _g6 = ((int)10 * _g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(304)
		Float _g7 = ::Math_obj::pow((int)2,_g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(304)
		Float _g8 = ((Float((int)1) / Float((int)2)) * _g7);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(304)
		Float _g9 = ::Math_obj::sin((Float(((((t * 0.001) - s)) * (((int)2 * ::Math_obj::PI)))) / Float(0.0003)));		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(304)
		Float _g10 = -(((_g8 * _g9)));		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(304)
		return (_g10 + 0.5);
	}
	HX_STACK_LINE(295)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(EaseX_obj,elasticOutIn,return )


EaseX_obj::EaseX_obj()
{
}

Dynamic EaseX_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"linear") ) { return linear_dyn(); }
		if (HX_FIELD_EQ(inName,"sineIn") ) { return sineIn_dyn(); }
		if (HX_FIELD_EQ(inName,"quadIn") ) { return quadIn_dyn(); }
		if (HX_FIELD_EQ(inName,"expoIn") ) { return expoIn_dyn(); }
		if (HX_FIELD_EQ(inName,"circIn") ) { return circIn_dyn(); }
		if (HX_FIELD_EQ(inName,"backIn") ) { return backIn_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"sineOut") ) { return sineOut_dyn(); }
		if (HX_FIELD_EQ(inName,"quadOut") ) { return quadOut_dyn(); }
		if (HX_FIELD_EQ(inName,"cubicIn") ) { return cubicIn_dyn(); }
		if (HX_FIELD_EQ(inName,"quartIn") ) { return quartIn_dyn(); }
		if (HX_FIELD_EQ(inName,"quintIn") ) { return quintIn_dyn(); }
		if (HX_FIELD_EQ(inName,"expoOut") ) { return expoOut_dyn(); }
		if (HX_FIELD_EQ(inName,"circOut") ) { return circOut_dyn(); }
		if (HX_FIELD_EQ(inName,"backOut") ) { return backOut_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"cubicOut") ) { return cubicOut_dyn(); }
		if (HX_FIELD_EQ(inName,"quartOut") ) { return quartOut_dyn(); }
		if (HX_FIELD_EQ(inName,"quintOut") ) { return quintOut_dyn(); }
		if (HX_FIELD_EQ(inName,"bounceIn") ) { return bounceIn_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"sineInOut") ) { return sineInOut_dyn(); }
		if (HX_FIELD_EQ(inName,"sineOutIn") ) { return sineOutIn_dyn(); }
		if (HX_FIELD_EQ(inName,"quadInOut") ) { return quadInOut_dyn(); }
		if (HX_FIELD_EQ(inName,"quadOutIn") ) { return quadOutIn_dyn(); }
		if (HX_FIELD_EQ(inName,"expoInOut") ) { return expoInOut_dyn(); }
		if (HX_FIELD_EQ(inName,"expoOutIn") ) { return expoOutIn_dyn(); }
		if (HX_FIELD_EQ(inName,"circInOut") ) { return circInOut_dyn(); }
		if (HX_FIELD_EQ(inName,"circOutIn") ) { return circOutIn_dyn(); }
		if (HX_FIELD_EQ(inName,"bounceOut") ) { return bounceOut_dyn(); }
		if (HX_FIELD_EQ(inName,"backInOut") ) { return backInOut_dyn(); }
		if (HX_FIELD_EQ(inName,"backOutIn") ) { return backOutIn_dyn(); }
		if (HX_FIELD_EQ(inName,"elasticIn") ) { return elasticIn_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"cubicInOut") ) { return cubicInOut_dyn(); }
		if (HX_FIELD_EQ(inName,"cubicOutIn") ) { return cubicOutIn_dyn(); }
		if (HX_FIELD_EQ(inName,"quartInOut") ) { return quartInOut_dyn(); }
		if (HX_FIELD_EQ(inName,"quartOutIn") ) { return quartOutIn_dyn(); }
		if (HX_FIELD_EQ(inName,"quintInOut") ) { return quintInOut_dyn(); }
		if (HX_FIELD_EQ(inName,"quintOutIn") ) { return quintOutIn_dyn(); }
		if (HX_FIELD_EQ(inName,"elasticOut") ) { return elasticOut_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bounceInOut") ) { return bounceInOut_dyn(); }
		if (HX_FIELD_EQ(inName,"bounceOutIn") ) { return bounceOutIn_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"elasticInOut") ) { return elasticInOut_dyn(); }
		if (HX_FIELD_EQ(inName,"elasticOutIn") ) { return elasticOutIn_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EaseX_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void EaseX_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("PI"),
	HX_CSTRING("PI_H"),
	HX_CSTRING("linear"),
	HX_CSTRING("sineIn"),
	HX_CSTRING("sineOut"),
	HX_CSTRING("sineInOut"),
	HX_CSTRING("sineOutIn"),
	HX_CSTRING("quadIn"),
	HX_CSTRING("quadOut"),
	HX_CSTRING("quadInOut"),
	HX_CSTRING("quadOutIn"),
	HX_CSTRING("cubicIn"),
	HX_CSTRING("cubicOut"),
	HX_CSTRING("cubicInOut"),
	HX_CSTRING("cubicOutIn"),
	HX_CSTRING("quartIn"),
	HX_CSTRING("quartOut"),
	HX_CSTRING("quartInOut"),
	HX_CSTRING("quartOutIn"),
	HX_CSTRING("quintIn"),
	HX_CSTRING("quintOut"),
	HX_CSTRING("quintInOut"),
	HX_CSTRING("quintOutIn"),
	HX_CSTRING("expoIn"),
	HX_CSTRING("expoOut"),
	HX_CSTRING("expoInOut"),
	HX_CSTRING("expoOutIn"),
	HX_CSTRING("circIn"),
	HX_CSTRING("circOut"),
	HX_CSTRING("circInOut"),
	HX_CSTRING("circOutIn"),
	HX_CSTRING("bounceIn"),
	HX_CSTRING("bounceOut"),
	HX_CSTRING("bounceInOut"),
	HX_CSTRING("bounceOutIn"),
	HX_CSTRING("overshoot"),
	HX_CSTRING("backIn"),
	HX_CSTRING("backOut"),
	HX_CSTRING("backInOut"),
	HX_CSTRING("backOutIn"),
	HX_CSTRING("amplitude"),
	HX_CSTRING("period"),
	HX_CSTRING("elasticIn"),
	HX_CSTRING("elasticOut"),
	HX_CSTRING("elasticInOut"),
	HX_CSTRING("elasticOutIn"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EaseX_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(EaseX_obj::PI,"PI");
	HX_MARK_MEMBER_NAME(EaseX_obj::PI_H,"PI_H");
	HX_MARK_MEMBER_NAME(EaseX_obj::overshoot,"overshoot");
	HX_MARK_MEMBER_NAME(EaseX_obj::amplitude,"amplitude");
	HX_MARK_MEMBER_NAME(EaseX_obj::period,"period");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EaseX_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(EaseX_obj::PI,"PI");
	HX_VISIT_MEMBER_NAME(EaseX_obj::PI_H,"PI_H");
	HX_VISIT_MEMBER_NAME(EaseX_obj::overshoot,"overshoot");
	HX_VISIT_MEMBER_NAME(EaseX_obj::amplitude,"amplitude");
	HX_VISIT_MEMBER_NAME(EaseX_obj::period,"period");
};

#endif

Class EaseX_obj::__mClass;

void EaseX_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("tweenx909.EaseX"), hx::TCanCast< EaseX_obj> ,sStaticFields,sMemberFields,
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

void EaseX_obj::__boot()
{
	PI= 3.1415926535897932384626433832795;
	PI_H= 1.5707963267948966;
	overshoot= 1.70158;
	amplitude= (int)1;
	period= 0.0003;
}

} // end namespace tweenx909
