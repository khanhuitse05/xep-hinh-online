#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_tweenx909_TweenX
#include <tweenx909/TweenX.h>
#endif
#ifndef INCLUDED_tweenx909_advanced_CommandX
#include <tweenx909/advanced/CommandX.h>
#endif
#ifndef INCLUDED_tweenx909_rule_TimelineX
#include <tweenx909/rule/TimelineX.h>
#endif
namespace tweenx909{
namespace rule{

Void TimelineX_obj::__construct(Dynamic data,Dynamic intervals)
{
HX_STACK_FRAME("tweenx909.rule.TimelineX","new",0xba327ff0,"tweenx909.rule.TimelineX.new","tweenx909/rule/TimelineX.hx",12,0xa70a39e0)
HX_STACK_THIS(this)
HX_STACK_ARG(data,"data")
HX_STACK_ARG(intervals,"intervals")
{
	HX_STACK_LINE(13)
	Dynamic _g = ::Lambda_obj::array(data);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(13)
	this->data = _g;
	HX_STACK_LINE(15)
	if (((intervals == null()))){
		HX_STACK_LINE(16)
		Array< Float > arr = Array_obj< Float >::__new();		HX_STACK_VAR(arr,"arr");
		HX_STACK_LINE(17)
		{
			HX_STACK_LINE(17)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(17)
			int _g2 = this->data->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(17)
			while((true)){
				HX_STACK_LINE(17)
				if ((!(((_g1 < _g2))))){
					HX_STACK_LINE(17)
					break;
				}
				HX_STACK_LINE(17)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(17)
				arr->push(i);
			}
		}
		HX_STACK_LINE(18)
		this->timeline = arr;
	}
	else{
		HX_STACK_LINE(20)
		Array< Float > arr = Array_obj< Float >::__new();		HX_STACK_VAR(arr,"arr");
		HX_STACK_LINE(21)
		Float n = (int)0;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(22)
		for(::cpp::FastIterator_obj< Float > *__it = ::cpp::CreateFastIterator< Float >(intervals->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
			Float i = __it->next();
			{
				HX_STACK_LINE(22)
				Float _g1 = hx::AddEq(n,i);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(22)
				arr->push(_g1);
			}
;
		}
		HX_STACK_LINE(23)
		this->timeline = arr;
	}
	HX_STACK_LINE(26)
	if (((this->timeline->length != this->data->__Field(HX_CSTRING("length"),true)))){
		HX_STACK_LINE(26)
		HX_STACK_DO_THROW(HX_CSTRING("times length must be same with data length."));
	}
	HX_STACK_LINE(27)
	this->length = (this->timeline->__get((this->timeline->length - (int)1)) + (int)1);
}
;
	return null();
}

//TimelineX_obj::~TimelineX_obj() { }

Dynamic TimelineX_obj::__CreateEmpty() { return  new TimelineX_obj; }
hx::ObjectPtr< TimelineX_obj > TimelineX_obj::__new(Dynamic data,Dynamic intervals)
{  hx::ObjectPtr< TimelineX_obj > result = new TimelineX_obj();
	result->__construct(data,intervals);
	return result;}

Dynamic TimelineX_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TimelineX_obj > result = new TimelineX_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Dynamic TimelineX_obj::inputClass;

Dynamic TimelineX_obj::calc( ::tweenx909::rule::TimelineX _from,::tweenx909::rule::TimelineX _to,Float t1,Float t2,::tweenx909::TweenX tween){
	HX_STACK_FRAME("tweenx909.rule.TimelineX","calc",0x2ab50705,"tweenx909.rule.TimelineX.calc","tweenx909/rule/TimelineX.hx",32,0xa70a39e0)
	HX_STACK_ARG(_from,"_from")
	HX_STACK_ARG(_to,"_to")
	HX_STACK_ARG(t1,"t1")
	HX_STACK_ARG(t2,"t2")
	HX_STACK_ARG(tween,"tween")
	HX_STACK_LINE(33)
	Float t = (t1 * _to->length);		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(34)
	Array< Float > ts = _to->timeline;		HX_STACK_VAR(ts,"ts");
	HX_STACK_LINE(35)
	int l = ts->length;		HX_STACK_VAR(l,"l");
	HX_STACK_LINE(36)
	int min = (int)0;		HX_STACK_VAR(min,"min");
	HX_STACK_LINE(37)
	int max = l;		HX_STACK_VAR(max,"max");
	HX_STACK_LINE(38)
	int n = (int(max) >> int((int)1));		HX_STACK_VAR(n,"n");
	HX_STACK_LINE(40)
	while((true)){
		HX_STACK_LINE(40)
		if ((!((((max - min) > (int)1))))){
			HX_STACK_LINE(40)
			break;
		}
		HX_STACK_LINE(41)
		Float val = ts->__get(n);		HX_STACK_VAR(val,"val");
		HX_STACK_LINE(42)
		if (((t < val))){
			HX_STACK_LINE(42)
			max = n;
		}
		else{
			HX_STACK_LINE(43)
			min = n;
		}
		HX_STACK_LINE(44)
		n = (min + ((int((max - min)) >> int((int)1))));
	}
	HX_STACK_LINE(47)
	return _to->data->__GetItem(min);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(TimelineX_obj,calc,return )

Dynamic TimelineX_obj::defaultFrom( Dynamic value,::tweenx909::rule::TimelineX _to,::tweenx909::TweenX tween){
	HX_STACK_FRAME("tweenx909.rule.TimelineX","defaultFrom",0x8bf25e5b,"tweenx909.rule.TimelineX.defaultFrom","tweenx909/rule/TimelineX.hx",50,0xa70a39e0)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(_to,"_to")
	HX_STACK_ARG(tween,"tween")
	HX_STACK_LINE(50)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(TimelineX_obj,defaultFrom,return )


TimelineX_obj::TimelineX_obj()
{
}

void TimelineX_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TimelineX);
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(timeline,"timeline");
	HX_MARK_END_CLASS();
}

void TimelineX_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(timeline,"timeline");
}

Dynamic TimelineX_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"calc") ) { return calc_dyn(); }
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"timeline") ) { return timeline; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"inputClass") ) { return inputClass; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultFrom") ) { return defaultFrom_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TimelineX_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"timeline") ) { timeline=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"inputClass") ) { inputClass=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TimelineX_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("length"));
	outFields->push(HX_CSTRING("data"));
	outFields->push(HX_CSTRING("timeline"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("inputClass"),
	HX_CSTRING("calc"),
	HX_CSTRING("defaultFrom"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(TimelineX_obj,length),HX_CSTRING("length")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TimelineX_obj,data),HX_CSTRING("data")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(TimelineX_obj,timeline),HX_CSTRING("timeline")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("length"),
	HX_CSTRING("data"),
	HX_CSTRING("timeline"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TimelineX_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TimelineX_obj::inputClass,"inputClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TimelineX_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TimelineX_obj::inputClass,"inputClass");
};

#endif

Class TimelineX_obj::__mClass;

void TimelineX_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("tweenx909.rule.TimelineX"), hx::TCanCast< TimelineX_obj> ,sStaticFields,sMemberFields,
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

void TimelineX_obj::__boot()
{
	inputClass= hx::ClassOf< ::tweenx909::rule::TimelineX >();
}

} // end namespace tweenx909
} // end namespace rule
