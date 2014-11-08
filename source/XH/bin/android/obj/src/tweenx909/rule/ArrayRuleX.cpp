#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_tweenx909_TweenX
#include <tweenx909/TweenX.h>
#endif
#ifndef INCLUDED_tweenx909_advanced_CommandX
#include <tweenx909/advanced/CommandX.h>
#endif
#ifndef INCLUDED_tweenx909_rule_ArrayRuleX
#include <tweenx909/rule/ArrayRuleX.h>
#endif
namespace tweenx909{
namespace rule{

Void ArrayRuleX_obj::__construct()
{
	return null();
}

//ArrayRuleX_obj::~ArrayRuleX_obj() { }

Dynamic ArrayRuleX_obj::__CreateEmpty() { return  new ArrayRuleX_obj; }
hx::ObjectPtr< ArrayRuleX_obj > ArrayRuleX_obj::__new()
{  hx::ObjectPtr< ArrayRuleX_obj > result = new ArrayRuleX_obj();
	result->__construct();
	return result;}

Dynamic ArrayRuleX_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ArrayRuleX_obj > result = new ArrayRuleX_obj();
	result->__construct();
	return result;}

Dynamic ArrayRuleX_obj::inputClass;

Dynamic ArrayRuleX_obj::calc( Dynamic _from,Dynamic _to,Float t1,Float t2,::tweenx909::TweenX tween){
	HX_STACK_FRAME("tweenx909.rule.ArrayRuleX","calc",0x511825e7,"tweenx909.rule.ArrayRuleX.calc","tweenx909/rule/ArrayRuleX.hx",6,0x41a47782)
	HX_STACK_ARG(_from,"_from")
	HX_STACK_ARG(_to,"_to")
	HX_STACK_ARG(t1,"t1")
	HX_STACK_ARG(t2,"t2")
	HX_STACK_ARG(tween,"tween")
	HX_STACK_LINE(7)
	Dynamic fi = _from->__Field(HX_CSTRING("iterator"),true)();		HX_STACK_VAR(fi,"fi");
	HX_STACK_LINE(8)
	Dynamic arr = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(arr,"arr");
	HX_STACK_LINE(9)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(_to->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
		Dynamic t = __it->next();
		{
			HX_STACK_LINE(10)
			Dynamic f = fi->__Field(HX_CSTRING("next"),true)();		HX_STACK_VAR(f,"f");
			HX_STACK_LINE(11)
			Dynamic _g5;		HX_STACK_VAR(_g5,"_g5");
			struct _Function_2_1{
				inline static Dynamic Block( Float &t1,::tweenx909::TweenX &tween,Dynamic &t,Float &t2,Dynamic &f){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","tweenx909/rule/ArrayRuleX.hx",11,0x41a47782)
					{
						HX_STACK_LINE(11)
						Dynamic result = null();		HX_STACK_VAR(result,"result");
						HX_STACK_LINE(11)
						bool ok = false;		HX_STACK_VAR(ok,"ok");
						HX_STACK_LINE(11)
						for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(::tweenx909::TweenX_obj::get_rules()->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
							Dynamic r = __it->next();
							if ((::Std_obj::is(t,r->__Field(HX_CSTRING("inputClass"),true)))){
								HX_STACK_LINE(11)
								ok = true;
								HX_STACK_LINE(11)
								Dynamic _g = r->__Field(HX_CSTRING("calc"),true)(f,t,t1,t2,tween);		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(11)
								result = _g;
								HX_STACK_LINE(11)
								break;
							}
;
						}
						HX_STACK_LINE(11)
						if ((!(ok))){
							HX_STACK_LINE(11)
							Dynamic eh = tween;		HX_STACK_VAR(eh,"eh");
							HX_STACK_LINE(11)
							::Class _g1 = ::Type_obj::getClass(t);		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(11)
							::String _g2 = ::Type_obj::getClassName(_g1);		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(11)
							::String _g3 = (HX_CSTRING("The tween rule for ") + _g2);		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(11)
							::String _g4 = (_g3 + HX_CSTRING(" is not defined"));		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(11)
							HX_STACK_DO_THROW(eh->__Field(HX_CSTRING("error"),true)(_g4));
						}
						HX_STACK_LINE(11)
						return result;
					}
					return null();
				}
			};
			HX_STACK_LINE(11)
			_g5 = (  ((::Std_obj::is(t,hx::ClassOf< ::Float >()))) ? Float(((f * t2) + (t * t1))) : Float(_Function_2_1::Block(t1,tween,t,t2,f)) );
			HX_STACK_LINE(11)
			arr->__Field(HX_CSTRING("push"),true)(_g5);
		}
;
	}
	HX_STACK_LINE(13)
	return arr;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ArrayRuleX_obj,calc,return )

Dynamic ArrayRuleX_obj::_calc( Dynamic _from,Dynamic _to,Float t1,Float t2,::tweenx909::TweenX tween){
	HX_STACK_FRAME("tweenx909.rule.ArrayRuleX","_calc",0x57b8cee2,"tweenx909.rule.ArrayRuleX._calc","tweenx909/rule/ArrayRuleX.hx",16,0x41a47782)
	HX_STACK_ARG(_from,"_from")
	HX_STACK_ARG(_to,"_to")
	HX_STACK_ARG(t1,"t1")
	HX_STACK_ARG(t2,"t2")
	HX_STACK_ARG(tween,"tween")
	HX_STACK_LINE(16)
	if ((::Std_obj::is(_to,hx::ClassOf< ::Float >()))){
		HX_STACK_LINE(17)
		return ((_from * t2) + (_to * t1));
	}
	else{
		HX_STACK_LINE(19)
		Dynamic result = null();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(19)
		bool ok = false;		HX_STACK_VAR(ok,"ok");
		HX_STACK_LINE(20)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(::tweenx909::TweenX_obj::get_rules()->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
			Dynamic r = __it->next();
			if ((::Std_obj::is(_to,r->__Field(HX_CSTRING("inputClass"),true)))){
				HX_STACK_LINE(22)
				ok = true;
				HX_STACK_LINE(23)
				Dynamic _g = r->__Field(HX_CSTRING("calc"),true)(_from,_to,t1,t2,tween);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(23)
				result = _g;
				HX_STACK_LINE(24)
				break;
			}
;
		}
		HX_STACK_LINE(27)
		if ((!(ok))){
			HX_STACK_LINE(28)
			Dynamic eh = tween;		HX_STACK_VAR(eh,"eh");
			HX_STACK_LINE(29)
			::Class _g1 = ::Type_obj::getClass(_to);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(29)
			::String _g2 = ::Type_obj::getClassName(_g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(29)
			::String _g3 = (HX_CSTRING("The tween rule for ") + _g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(29)
			::String _g4 = (_g3 + HX_CSTRING(" is not defined"));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(29)
			HX_STACK_DO_THROW(eh->__Field(HX_CSTRING("error"),true)(_g4));
		}
		HX_STACK_LINE(31)
		return result;
	}
	HX_STACK_LINE(16)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ArrayRuleX_obj,_calc,return )

Dynamic ArrayRuleX_obj::defaultFrom( Dynamic value,Dynamic _to,::tweenx909::TweenX tween){
	HX_STACK_FRAME("tweenx909.rule.ArrayRuleX","defaultFrom",0xafd7bfb9,"tweenx909.rule.ArrayRuleX.defaultFrom","tweenx909/rule/ArrayRuleX.hx",35,0x41a47782)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(_to,"_to")
	HX_STACK_ARG(tween,"tween")
	HX_STACK_LINE(36)
	Dynamic eh = tween;		HX_STACK_VAR(eh,"eh");
	HX_STACK_LINE(37)
	if (((value != null()))){
		HX_STACK_LINE(38)
		Dynamic arr = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(arr,"arr");
		HX_STACK_LINE(39)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(_to->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
			Dynamic t = __it->next();
			arr->__Field(HX_CSTRING("push"),true)(null());
		}
	}
	else{
		HX_STACK_LINE(40)
		int _g = ::Lambda_obj::count(value,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(40)
		int _g1 = ::Lambda_obj::count(_to,null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(40)
		if (((_g != _g1))){
			HX_STACK_LINE(41)
			HX_STACK_DO_THROW(eh->__Field(HX_CSTRING("error"),true)(HX_CSTRING("The array length must be same with start.")));
		}
	}
	HX_STACK_LINE(44)
	Dynamic result = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(45)
	Dynamic it = _to->__Field(HX_CSTRING("iterator"),true)();		HX_STACK_VAR(it,"it");
	HX_STACK_LINE(46)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(value->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
		Dynamic v = __it->next();
		{
			HX_STACK_LINE(47)
			Dynamic t = it->__Field(HX_CSTRING("next"),true)();		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(48)
			Dynamic _g2 = ::tweenx909::rule::ArrayRuleX_obj::_defaultFrom(v,t,tween);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(48)
			result->__Field(HX_CSTRING("push"),true)(_g2);
		}
;
	}
	HX_STACK_LINE(50)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ArrayRuleX_obj,defaultFrom,return )

Dynamic ArrayRuleX_obj::_defaultFrom( Dynamic value,Dynamic _to,::tweenx909::TweenX tween){
	HX_STACK_FRAME("tweenx909.rule.ArrayRuleX","_defaultFrom",0xec91fc1e,"tweenx909.rule.ArrayRuleX._defaultFrom","tweenx909/rule/ArrayRuleX.hx",53,0x41a47782)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(_to,"_to")
	HX_STACK_ARG(tween,"tween")
	HX_STACK_LINE(54)
	if ((::Std_obj::is(_to,hx::ClassOf< ::Float >()))){
		HX_STACK_LINE(54)
		return value;
	}
	HX_STACK_LINE(55)
	for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(::tweenx909::TweenX_obj::get_rules()->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
		Dynamic r = __it->next();
		if ((::Std_obj::is(_to,r->__Field(HX_CSTRING("inputClass"),true)))){
			HX_STACK_LINE(57)
			return r->__Field(HX_CSTRING("defaultFrom"),true)(value,_to,tween);
		}
;
	}
	HX_STACK_LINE(60)
	Dynamic eh = tween;		HX_STACK_VAR(eh,"eh");
	HX_STACK_LINE(61)
	::Class _g = ::Type_obj::getClass(_to);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(61)
	::String _g1 = ::Type_obj::getClassName(_g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(61)
	::String _g2 = (HX_CSTRING("The tween rule for ") + _g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(61)
	::String _g3 = (_g2 + HX_CSTRING(" is not defined"));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(61)
	HX_STACK_DO_THROW(eh->__Field(HX_CSTRING("error"),true)(_g3));
	HX_STACK_LINE(62)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ArrayRuleX_obj,_defaultFrom,return )


ArrayRuleX_obj::ArrayRuleX_obj()
{
}

Dynamic ArrayRuleX_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"calc") ) { return calc_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_calc") ) { return _calc_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"inputClass") ) { return inputClass; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultFrom") ) { return defaultFrom_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_defaultFrom") ) { return _defaultFrom_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ArrayRuleX_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"inputClass") ) { inputClass=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ArrayRuleX_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("inputClass"),
	HX_CSTRING("calc"),
	HX_CSTRING("_calc"),
	HX_CSTRING("defaultFrom"),
	HX_CSTRING("_defaultFrom"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ArrayRuleX_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ArrayRuleX_obj::inputClass,"inputClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ArrayRuleX_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ArrayRuleX_obj::inputClass,"inputClass");
};

#endif

Class ArrayRuleX_obj::__mClass;

void ArrayRuleX_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("tweenx909.rule.ArrayRuleX"), hx::TCanCast< ArrayRuleX_obj> ,sStaticFields,sMemberFields,
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

void ArrayRuleX_obj::__boot()
{
	inputClass= hx::ClassOf< Array<int> >();
}

} // end namespace tweenx909
} // end namespace rule
