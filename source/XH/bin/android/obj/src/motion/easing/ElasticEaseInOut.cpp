#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_motion_easing_ElasticEaseInOut
#include <motion/easing/ElasticEaseInOut.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
namespace motion{
namespace easing{

Void ElasticEaseInOut_obj::__construct(Float a,Float p)
{
HX_STACK_FRAME("motion.easing.ElasticEaseInOut","new",0x6a75d0c3,"motion.easing.ElasticEaseInOut.new","motion/easing/Elastic.hx",101,0x73ac9cf4)
HX_STACK_THIS(this)
HX_STACK_ARG(a,"a")
HX_STACK_ARG(p,"p")
{
	HX_STACK_LINE(103)
	this->a = a;
	HX_STACK_LINE(104)
	this->p = p;
}
;
	return null();
}

//ElasticEaseInOut_obj::~ElasticEaseInOut_obj() { }

Dynamic ElasticEaseInOut_obj::__CreateEmpty() { return  new ElasticEaseInOut_obj; }
hx::ObjectPtr< ElasticEaseInOut_obj > ElasticEaseInOut_obj::__new(Float a,Float p)
{  hx::ObjectPtr< ElasticEaseInOut_obj > result = new ElasticEaseInOut_obj();
	result->__construct(a,p);
	return result;}

Dynamic ElasticEaseInOut_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ElasticEaseInOut_obj > result = new ElasticEaseInOut_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *ElasticEaseInOut_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

Float ElasticEaseInOut_obj::calculate( Float k){
	HX_STACK_FRAME("motion.easing.ElasticEaseInOut","calculate",0xc9d98209,"motion.easing.ElasticEaseInOut.calculate","motion/easing/Elastic.hx",108,0x73ac9cf4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(110)
	if (((k == (int)0))){
		HX_STACK_LINE(111)
		return (int)0;
	}
	HX_STACK_LINE(113)
	Float _g = hx::DivEq(k,0.5);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(113)
	if (((_g == (int)2))){
		HX_STACK_LINE(114)
		return (int)1;
	}
	HX_STACK_LINE(117)
	Float p = 0.44999999999999996;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(118)
	Float a = (int)1;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(119)
	Float s = (Float(p) / Float((int)4));		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(121)
	if (((k < (int)1))){
		HX_STACK_LINE(122)
		Float _g1 = hx::SubEq(k,(int)1);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(122)
		Float _g2 = ((int)10 * _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(122)
		Float _g3 = ::Math_obj::pow((int)2,_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(122)
		Float _g4 = ::Math_obj::sin((Float((((k - s)) * (((int)2 * ::Math_obj::PI)))) / Float(p)));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(122)
		Float _g5 = (_g3 * _g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(122)
		return (-0.5 * _g5);
	}
	HX_STACK_LINE(124)
	Float _g6 = hx::SubEq(k,(int)1);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(124)
	Float _g7 = ((int)-10 * _g6);		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(124)
	Float _g8 = ::Math_obj::pow((int)2,_g7);		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(124)
	Float _g9 = ::Math_obj::sin((Float((((k - s)) * (((int)2 * ::Math_obj::PI)))) / Float(p)));		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(124)
	Float _g10 = (_g8 * _g9);		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(124)
	Float _g11 = (_g10 * 0.5);		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(124)
	return (_g11 + (int)1);
}


HX_DEFINE_DYNAMIC_FUNC1(ElasticEaseInOut_obj,calculate,return )

Float ElasticEaseInOut_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_FRAME("motion.easing.ElasticEaseInOut","ease",0xb6aae22b,"motion.easing.ElasticEaseInOut.ease","motion/easing/Elastic.hx",129,0x73ac9cf4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(131)
	if (((t == (int)0))){
		HX_STACK_LINE(132)
		return b;
	}
	HX_STACK_LINE(134)
	Float _g = hx::DivEq(t,(Float(d) / Float((int)2)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(134)
	if (((_g == (int)2))){
		HX_STACK_LINE(135)
		return (b + c);
	}
	HX_STACK_LINE(137)
	Float s;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(138)
	Float _g1 = ::Math_obj::abs(c);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(138)
	if (((this->a < _g1))){
		HX_STACK_LINE(139)
		this->a = c;
		HX_STACK_LINE(140)
		s = (Float(this->p) / Float((int)4));
	}
	else{
		HX_STACK_LINE(143)
		Float _g2 = ::Math_obj::asin((Float(c) / Float(this->a)));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(143)
		Float _g3 = ((Float(this->p) / Float((((int)2 * ::Math_obj::PI)))) * _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(143)
		s = _g3;
	}
	HX_STACK_LINE(145)
	if (((t < (int)1))){
		HX_STACK_LINE(146)
		Float _g4 = hx::SubEq(t,(int)1);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(146)
		Float _g5 = ((int)10 * _g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(146)
		Float _g6 = ::Math_obj::pow((int)2,_g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(146)
		Float _g7 = (this->a * _g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(146)
		Float _g8 = ::Math_obj::sin((Float(((((t * d) - s)) * (((int)2 * ::Math_obj::PI)))) / Float(this->p)));		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(146)
		Float _g9 = (_g7 * _g8);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(146)
		Float _g10 = (-0.5 * _g9);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(146)
		return (_g10 + b);
	}
	HX_STACK_LINE(148)
	Float _g11 = hx::SubEq(t,(int)1);		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(148)
	Float _g12 = ((int)-10 * _g11);		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(148)
	Float _g13 = ::Math_obj::pow((int)2,_g12);		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(148)
	Float _g14 = (this->a * _g13);		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(148)
	Float _g15 = ::Math_obj::sin((Float(((((t * d) - s)) * (((int)2 * ::Math_obj::PI)))) / Float(this->p)));		HX_STACK_VAR(_g15,"_g15");
	HX_STACK_LINE(148)
	Float _g16 = (_g14 * _g15);		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(148)
	Float _g17 = (_g16 * 0.5);		HX_STACK_VAR(_g17,"_g17");
	HX_STACK_LINE(148)
	Float _g18 = (_g17 + c);		HX_STACK_VAR(_g18,"_g18");
	HX_STACK_LINE(148)
	return (_g18 + b);
}


HX_DEFINE_DYNAMIC_FUNC4(ElasticEaseInOut_obj,ease,return )


ElasticEaseInOut_obj::ElasticEaseInOut_obj()
{
}

Dynamic ElasticEaseInOut_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { return a; }
		if (HX_FIELD_EQ(inName,"p") ) { return p; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ease") ) { return ease_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"calculate") ) { return calculate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ElasticEaseInOut_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"p") ) { p=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ElasticEaseInOut_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("a"));
	outFields->push(HX_CSTRING("p"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(ElasticEaseInOut_obj,a),HX_CSTRING("a")},
	{hx::fsFloat,(int)offsetof(ElasticEaseInOut_obj,p),HX_CSTRING("p")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("a"),
	HX_CSTRING("p"),
	HX_CSTRING("calculate"),
	HX_CSTRING("ease"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ElasticEaseInOut_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ElasticEaseInOut_obj::__mClass,"__mClass");
};

#endif

Class ElasticEaseInOut_obj::__mClass;

void ElasticEaseInOut_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("motion.easing.ElasticEaseInOut"), hx::TCanCast< ElasticEaseInOut_obj> ,sStaticFields,sMemberFields,
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

void ElasticEaseInOut_obj::__boot()
{
}

} // end namespace motion
} // end namespace easing
