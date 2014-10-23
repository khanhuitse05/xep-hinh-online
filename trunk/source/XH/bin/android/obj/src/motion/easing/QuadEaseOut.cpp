#include <hxcpp.h>

#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
#ifndef INCLUDED_motion_easing_QuadEaseOut
#include <motion/easing/QuadEaseOut.h>
#endif
namespace motion{
namespace easing{

Void QuadEaseOut_obj::__construct()
{
HX_STACK_FRAME("motion.easing.QuadEaseOut","new",0x1ecade00,"motion.easing.QuadEaseOut.new","motion/easing/Quad.hx",106,0xc538468c)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//QuadEaseOut_obj::~QuadEaseOut_obj() { }

Dynamic QuadEaseOut_obj::__CreateEmpty() { return  new QuadEaseOut_obj; }
hx::ObjectPtr< QuadEaseOut_obj > QuadEaseOut_obj::__new()
{  hx::ObjectPtr< QuadEaseOut_obj > result = new QuadEaseOut_obj();
	result->__construct();
	return result;}

Dynamic QuadEaseOut_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< QuadEaseOut_obj > result = new QuadEaseOut_obj();
	result->__construct();
	return result;}

hx::Object *QuadEaseOut_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

Float QuadEaseOut_obj::calculate( Float k){
	HX_STACK_FRAME("motion.easing.QuadEaseOut","calculate",0x6b939b06,"motion.easing.QuadEaseOut.calculate","motion/easing/Quad.hx",115,0xc538468c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(115)
	return (-(k) * ((k - (int)2)));
}


HX_DEFINE_DYNAMIC_FUNC1(QuadEaseOut_obj,calculate,return )

Float QuadEaseOut_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_FRAME("motion.easing.QuadEaseOut","ease",0xccc16a4e,"motion.easing.QuadEaseOut.ease","motion/easing/Quad.hx",120,0xc538468c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(122)
	Float _g = hx::DivEq(t,d);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(122)
	Float _g1 = (-(c) * _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(122)
	Float _g2 = (_g1 * ((t - (int)2)));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(122)
	return (_g2 + b);
}


HX_DEFINE_DYNAMIC_FUNC4(QuadEaseOut_obj,ease,return )


QuadEaseOut_obj::QuadEaseOut_obj()
{
}

Dynamic QuadEaseOut_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ease") ) { return ease_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"calculate") ) { return calculate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic QuadEaseOut_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void QuadEaseOut_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("calculate"),
	HX_CSTRING("ease"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(QuadEaseOut_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(QuadEaseOut_obj::__mClass,"__mClass");
};

#endif

Class QuadEaseOut_obj::__mClass;

void QuadEaseOut_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("motion.easing.QuadEaseOut"), hx::TCanCast< QuadEaseOut_obj> ,sStaticFields,sMemberFields,
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

void QuadEaseOut_obj::__boot()
{
}

} // end namespace motion
} // end namespace easing
