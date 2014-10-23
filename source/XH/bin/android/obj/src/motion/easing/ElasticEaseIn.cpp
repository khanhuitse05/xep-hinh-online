#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_motion_easing_ElasticEaseIn
#include <motion/easing/ElasticEaseIn.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
namespace motion{
namespace easing{

Void ElasticEaseIn_obj::__construct(Float a,Float p)
{
HX_STACK_FRAME("motion.easing.ElasticEaseIn","new",0x30f7ccaf,"motion.easing.ElasticEaseIn.new","motion/easing/Elastic.hx",51,0x73ac9cf4)
HX_STACK_THIS(this)
HX_STACK_ARG(a,"a")
HX_STACK_ARG(p,"p")
{
	HX_STACK_LINE(53)
	this->a = a;
	HX_STACK_LINE(54)
	this->p = p;
}
;
	return null();
}

//ElasticEaseIn_obj::~ElasticEaseIn_obj() { }

Dynamic ElasticEaseIn_obj::__CreateEmpty() { return  new ElasticEaseIn_obj; }
hx::ObjectPtr< ElasticEaseIn_obj > ElasticEaseIn_obj::__new(Float a,Float p)
{  hx::ObjectPtr< ElasticEaseIn_obj > result = new ElasticEaseIn_obj();
	result->__construct(a,p);
	return result;}

Dynamic ElasticEaseIn_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ElasticEaseIn_obj > result = new ElasticEaseIn_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

hx::Object *ElasticEaseIn_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

Float ElasticEaseIn_obj::calculate( Float k){
	HX_STACK_FRAME("motion.easing.ElasticEaseIn","calculate",0xc85336f5,"motion.easing.ElasticEaseIn.calculate","motion/easing/Elastic.hx",59,0x73ac9cf4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(61)
	if (((k == (int)0))){
		HX_STACK_LINE(61)
		return (int)0;
	}
	HX_STACK_LINE(61)
	if (((k == (int)1))){
		HX_STACK_LINE(61)
		return (int)1;
	}
	HX_STACK_LINE(62)
	Float s;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(63)
	if (((this->a < (int)1))){
		HX_STACK_LINE(63)
		this->a = (int)1;
		HX_STACK_LINE(63)
		s = (Float(this->p) / Float((int)4));
	}
	else{
		HX_STACK_LINE(64)
		Float _g = ::Math_obj::asin((Float((int)1) / Float(this->a)));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(64)
		Float _g1 = ((Float(this->p) / Float((((int)2 * ::Math_obj::PI)))) * _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(64)
		s = _g1;
	}
	HX_STACK_LINE(65)
	Float _g2 = hx::SubEq(k,(int)1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(65)
	Float _g3 = ((int)10 * _g2);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(65)
	Float _g4 = ::Math_obj::pow((int)2,_g3);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(65)
	Float _g5 = (this->a * _g4);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(65)
	Float _g6 = ::Math_obj::sin((Float((((k - s)) * (((int)2 * ::Math_obj::PI)))) / Float(this->p)));		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(65)
	return -(((_g5 * _g6)));
}


HX_DEFINE_DYNAMIC_FUNC1(ElasticEaseIn_obj,calculate,return )

Float ElasticEaseIn_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_FRAME("motion.easing.ElasticEaseIn","ease",0xa1e554bf,"motion.easing.ElasticEaseIn.ease","motion/easing/Elastic.hx",70,0x73ac9cf4)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(72)
	if (((t == (int)0))){
		HX_STACK_LINE(73)
		return b;
	}
	HX_STACK_LINE(75)
	Float _g = hx::DivEq(t,d);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(75)
	if (((_g == (int)1))){
		HX_STACK_LINE(76)
		return (b + c);
	}
	HX_STACK_LINE(78)
	Float s;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(79)
	Float _g1 = ::Math_obj::abs(c);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(79)
	if (((this->a < _g1))){
		HX_STACK_LINE(80)
		this->a = c;
		HX_STACK_LINE(81)
		s = (Float(this->p) / Float((int)4));
	}
	else{
		HX_STACK_LINE(84)
		Float _g2 = ::Math_obj::asin((Float(c) / Float(this->a)));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(84)
		Float _g3 = ((Float(this->p) / Float((((int)2 * ::Math_obj::PI)))) * _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(84)
		s = _g3;
	}
	HX_STACK_LINE(86)
	Float _g4 = hx::SubEq(t,(int)1);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(86)
	Float _g5 = ((int)10 * _g4);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(86)
	Float _g6 = ::Math_obj::pow((int)2,_g5);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(86)
	Float _g7 = (this->a * _g6);		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(86)
	Float _g8 = ::Math_obj::sin((Float(((((t * d) - s)) * (((int)2 * ::Math_obj::PI)))) / Float(this->p)));		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(86)
	Float _g9 = -(((_g7 * _g8)));		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(86)
	return (_g9 + b);
}


HX_DEFINE_DYNAMIC_FUNC4(ElasticEaseIn_obj,ease,return )


ElasticEaseIn_obj::ElasticEaseIn_obj()
{
}

Dynamic ElasticEaseIn_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic ElasticEaseIn_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"p") ) { p=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ElasticEaseIn_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("a"));
	outFields->push(HX_CSTRING("p"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(ElasticEaseIn_obj,a),HX_CSTRING("a")},
	{hx::fsFloat,(int)offsetof(ElasticEaseIn_obj,p),HX_CSTRING("p")},
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
	HX_MARK_MEMBER_NAME(ElasticEaseIn_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ElasticEaseIn_obj::__mClass,"__mClass");
};

#endif

Class ElasticEaseIn_obj::__mClass;

void ElasticEaseIn_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("motion.easing.ElasticEaseIn"), hx::TCanCast< ElasticEaseIn_obj> ,sStaticFields,sMemberFields,
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

void ElasticEaseIn_obj::__boot()
{
}

} // end namespace motion
} // end namespace easing
