#include <hxcpp.h>

#ifndef INCLUDED_tweenx909_TweenX
#include <tweenx909/TweenX.h>
#endif
#ifndef INCLUDED_tweenx909_advanced_CommandX
#include <tweenx909/advanced/CommandX.h>
#endif
#ifndef INCLUDED_tweenx909_advanced_DefaultsX
#include <tweenx909/advanced/DefaultsX.h>
#endif
namespace tweenx909{
namespace advanced{

Void DefaultsX_obj::__construct()
{
HX_STACK_FRAME("tweenx909.advanced.DefaultsX","new",0x9fcee7e5,"tweenx909.advanced.DefaultsX.new","tweenx909/advanced/DefaultsX.hx",8,0xb2f4230b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(16)
	this->_autoPlay = true;
	HX_STACK_LINE(15)
	this->_zigzag = false;
	HX_STACK_LINE(14)
	this->_yoyo = false;
	HX_STACK_LINE(13)
	this->_repeat = (int)1;
	HX_STACK_LINE(12)
	this->_interval = (int)0;
	HX_STACK_LINE(11)
	this->_delay = (int)0;
	HX_STACK_LINE(10)
	this->_time = 0.3;
	HX_STACK_LINE(20)
	this->_ease = ::tweenx909::TweenX_obj::DEFAULT_EASE_dyn();
}
;
	return null();
}

//DefaultsX_obj::~DefaultsX_obj() { }

Dynamic DefaultsX_obj::__CreateEmpty() { return  new DefaultsX_obj; }
hx::ObjectPtr< DefaultsX_obj > DefaultsX_obj::__new()
{  hx::ObjectPtr< DefaultsX_obj > result = new DefaultsX_obj();
	result->__construct();
	return result;}

Dynamic DefaultsX_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DefaultsX_obj > result = new DefaultsX_obj();
	result->__construct();
	return result;}

::tweenx909::advanced::DefaultsX DefaultsX_obj::dump( ){
	HX_STACK_FRAME("tweenx909.advanced.DefaultsX","dump",0x2eabfa0f,"tweenx909.advanced.DefaultsX.dump","tweenx909/advanced/DefaultsX.hx",23,0xb2f4230b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(24)
	this->_time = ::tweenx909::TweenX_obj::defaultTime;
	HX_STACK_LINE(25)
	this->_ease = ::tweenx909::TweenX_obj::defaultEase_dyn();
	HX_STACK_LINE(26)
	this->_delay = ::tweenx909::TweenX_obj::defaultDelay;
	HX_STACK_LINE(27)
	this->_interval = ::tweenx909::TweenX_obj::defaultInterval;
	HX_STACK_LINE(28)
	this->_repeat = ::tweenx909::TweenX_obj::defaultRepeat;
	HX_STACK_LINE(29)
	this->_yoyo = ::tweenx909::TweenX_obj::defaultYoyo;
	HX_STACK_LINE(30)
	this->_zigzag = ::tweenx909::TweenX_obj::defaultZigZag;
	HX_STACK_LINE(31)
	this->_autoPlay = ::tweenx909::TweenX_obj::defaultAutoPlay;
	HX_STACK_LINE(33)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(DefaultsX_obj,dump,return )

Void DefaultsX_obj::apply( ){
{
		HX_STACK_FRAME("tweenx909.advanced.DefaultsX","apply",0xea4f4833,"tweenx909.advanced.DefaultsX.apply","tweenx909/advanced/DefaultsX.hx",36,0xb2f4230b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(37)
		::tweenx909::TweenX_obj::defaultTime = this->_time;
		HX_STACK_LINE(38)
		::tweenx909::TweenX_obj::defaultEase = this->_ease_dyn();
		HX_STACK_LINE(39)
		::tweenx909::TweenX_obj::defaultDelay = this->_delay;
		HX_STACK_LINE(40)
		::tweenx909::TweenX_obj::defaultInterval = this->_interval;
		HX_STACK_LINE(41)
		::tweenx909::TweenX_obj::defaultRepeat = this->_repeat;
		HX_STACK_LINE(42)
		::tweenx909::TweenX_obj::defaultYoyo = this->_yoyo;
		HX_STACK_LINE(43)
		::tweenx909::TweenX_obj::defaultZigZag = this->_zigzag;
		HX_STACK_LINE(44)
		::tweenx909::TweenX_obj::defaultAutoPlay = this->_autoPlay;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DefaultsX_obj,apply,(void))

::tweenx909::advanced::DefaultsX DefaultsX_obj::clone( ){
	HX_STACK_FRAME("tweenx909.advanced.DefaultsX","clone",0x0e76d622,"tweenx909.advanced.DefaultsX.clone","tweenx909/advanced/DefaultsX.hx",48,0xb2f4230b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(49)
	::tweenx909::advanced::DefaultsX child = ::tweenx909::advanced::DefaultsX_obj::__new();		HX_STACK_VAR(child,"child");
	HX_STACK_LINE(51)
	child->_time = this->_time;
	HX_STACK_LINE(52)
	child->_ease = this->_ease_dyn();
	HX_STACK_LINE(53)
	child->_delay = this->_delay;
	HX_STACK_LINE(54)
	child->_interval = this->_interval;
	HX_STACK_LINE(55)
	child->_repeat = this->_repeat;
	HX_STACK_LINE(56)
	child->_yoyo = this->_yoyo;
	HX_STACK_LINE(57)
	child->_zigzag = this->_zigzag;
	HX_STACK_LINE(58)
	child->_autoPlay = this->_autoPlay;
	HX_STACK_LINE(61)
	return child;
}


HX_DEFINE_DYNAMIC_FUNC0(DefaultsX_obj,clone,return )

::tweenx909::advanced::DefaultsX DefaultsX_obj::time( Float value){
	HX_STACK_FRAME("tweenx909.advanced.DefaultsX","time",0x393648e8,"tweenx909.advanced.DefaultsX.time","tweenx909/advanced/DefaultsX.hx",64,0xb2f4230b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(65)
	this->_time = value;
	HX_STACK_LINE(66)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(DefaultsX_obj,time,return )

::tweenx909::advanced::DefaultsX DefaultsX_obj::ease( Dynamic value){
	HX_STACK_FRAME("tweenx909.advanced.DefaultsX","ease",0x2f4608c9,"tweenx909.advanced.DefaultsX.ease","tweenx909/advanced/DefaultsX.hx",68,0xb2f4230b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(69)
	this->_ease = value;
	HX_STACK_LINE(70)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(DefaultsX_obj,ease,return )

::tweenx909::advanced::DefaultsX DefaultsX_obj::delay( Float value){
	HX_STACK_FRAME("tweenx909.advanced.DefaultsX","delay",0x9d3a9a48,"tweenx909.advanced.DefaultsX.delay","tweenx909/advanced/DefaultsX.hx",72,0xb2f4230b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(73)
	this->_delay = value;
	HX_STACK_LINE(74)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(DefaultsX_obj,delay,return )

::tweenx909::advanced::DefaultsX DefaultsX_obj::interval( Float value){
	HX_STACK_FRAME("tweenx909.advanced.DefaultsX","interval",0xede4ffa0,"tweenx909.advanced.DefaultsX.interval","tweenx909/advanced/DefaultsX.hx",76,0xb2f4230b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(77)
	this->_interval = value;
	HX_STACK_LINE(78)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(DefaultsX_obj,interval,return )

::tweenx909::advanced::DefaultsX DefaultsX_obj::repeat( hx::Null< int >  __o_value){
int value = __o_value.Default(0);
	HX_STACK_FRAME("tweenx909.advanced.DefaultsX","repeat",0x91b340f6,"tweenx909.advanced.DefaultsX.repeat","tweenx909/advanced/DefaultsX.hx",80,0xb2f4230b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
{
		HX_STACK_LINE(81)
		this->_repeat = value;
		HX_STACK_LINE(82)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC1(DefaultsX_obj,repeat,return )

::tweenx909::advanced::DefaultsX DefaultsX_obj::yoyo( hx::Null< bool >  __o_value){
bool value = __o_value.Default(true);
	HX_STACK_FRAME("tweenx909.advanced.DefaultsX","yoyo",0x3c88f207,"tweenx909.advanced.DefaultsX.yoyo","tweenx909/advanced/DefaultsX.hx",84,0xb2f4230b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
{
		HX_STACK_LINE(85)
		this->_yoyo = value;
		HX_STACK_LINE(86)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC1(DefaultsX_obj,yoyo,return )

::tweenx909::advanced::DefaultsX DefaultsX_obj::zigzag( hx::Null< bool >  __o_value){
bool value = __o_value.Default(true);
	HX_STACK_FRAME("tweenx909.advanced.DefaultsX","zigzag",0x0c4579a3,"tweenx909.advanced.DefaultsX.zigzag","tweenx909/advanced/DefaultsX.hx",88,0xb2f4230b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
{
		HX_STACK_LINE(89)
		this->_zigzag = value;
		HX_STACK_LINE(90)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC1(DefaultsX_obj,zigzag,return )

::tweenx909::advanced::DefaultsX DefaultsX_obj::autoPlay( hx::Null< bool >  __o_value){
bool value = __o_value.Default(true);
	HX_STACK_FRAME("tweenx909.advanced.DefaultsX","autoPlay",0xf2e8a35e,"tweenx909.advanced.DefaultsX.autoPlay","tweenx909/advanced/DefaultsX.hx",92,0xb2f4230b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
{
		HX_STACK_LINE(93)
		this->_autoPlay = value;
		HX_STACK_LINE(94)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC1(DefaultsX_obj,autoPlay,return )


DefaultsX_obj::DefaultsX_obj()
{
}

void DefaultsX_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DefaultsX);
	HX_MARK_MEMBER_NAME(_ease,"_ease");
	HX_MARK_MEMBER_NAME(_time,"_time");
	HX_MARK_MEMBER_NAME(_delay,"_delay");
	HX_MARK_MEMBER_NAME(_interval,"_interval");
	HX_MARK_MEMBER_NAME(_repeat,"_repeat");
	HX_MARK_MEMBER_NAME(_yoyo,"_yoyo");
	HX_MARK_MEMBER_NAME(_zigzag,"_zigzag");
	HX_MARK_MEMBER_NAME(_autoPlay,"_autoPlay");
	HX_MARK_END_CLASS();
}

void DefaultsX_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_ease,"_ease");
	HX_VISIT_MEMBER_NAME(_time,"_time");
	HX_VISIT_MEMBER_NAME(_delay,"_delay");
	HX_VISIT_MEMBER_NAME(_interval,"_interval");
	HX_VISIT_MEMBER_NAME(_repeat,"_repeat");
	HX_VISIT_MEMBER_NAME(_yoyo,"_yoyo");
	HX_VISIT_MEMBER_NAME(_zigzag,"_zigzag");
	HX_VISIT_MEMBER_NAME(_autoPlay,"_autoPlay");
}

Dynamic DefaultsX_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"dump") ) { return dump_dyn(); }
		if (HX_FIELD_EQ(inName,"time") ) { return time_dyn(); }
		if (HX_FIELD_EQ(inName,"ease") ) { return ease_dyn(); }
		if (HX_FIELD_EQ(inName,"yoyo") ) { return yoyo_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_ease") ) { return _ease; }
		if (HX_FIELD_EQ(inName,"_time") ) { return _time; }
		if (HX_FIELD_EQ(inName,"_yoyo") ) { return _yoyo; }
		if (HX_FIELD_EQ(inName,"apply") ) { return apply_dyn(); }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"delay") ) { return delay_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_delay") ) { return _delay; }
		if (HX_FIELD_EQ(inName,"repeat") ) { return repeat_dyn(); }
		if (HX_FIELD_EQ(inName,"zigzag") ) { return zigzag_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_repeat") ) { return _repeat; }
		if (HX_FIELD_EQ(inName,"_zigzag") ) { return _zigzag; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"interval") ) { return interval_dyn(); }
		if (HX_FIELD_EQ(inName,"autoPlay") ) { return autoPlay_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_interval") ) { return _interval; }
		if (HX_FIELD_EQ(inName,"_autoPlay") ) { return _autoPlay; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DefaultsX_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_ease") ) { _ease=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_time") ) { _time=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_yoyo") ) { _yoyo=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_delay") ) { _delay=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_repeat") ) { _repeat=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_zigzag") ) { _zigzag=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_interval") ) { _interval=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_autoPlay") ) { _autoPlay=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DefaultsX_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_time"));
	outFields->push(HX_CSTRING("_delay"));
	outFields->push(HX_CSTRING("_interval"));
	outFields->push(HX_CSTRING("_repeat"));
	outFields->push(HX_CSTRING("_yoyo"));
	outFields->push(HX_CSTRING("_zigzag"));
	outFields->push(HX_CSTRING("_autoPlay"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(DefaultsX_obj,_ease),HX_CSTRING("_ease")},
	{hx::fsFloat,(int)offsetof(DefaultsX_obj,_time),HX_CSTRING("_time")},
	{hx::fsFloat,(int)offsetof(DefaultsX_obj,_delay),HX_CSTRING("_delay")},
	{hx::fsFloat,(int)offsetof(DefaultsX_obj,_interval),HX_CSTRING("_interval")},
	{hx::fsInt,(int)offsetof(DefaultsX_obj,_repeat),HX_CSTRING("_repeat")},
	{hx::fsBool,(int)offsetof(DefaultsX_obj,_yoyo),HX_CSTRING("_yoyo")},
	{hx::fsBool,(int)offsetof(DefaultsX_obj,_zigzag),HX_CSTRING("_zigzag")},
	{hx::fsBool,(int)offsetof(DefaultsX_obj,_autoPlay),HX_CSTRING("_autoPlay")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_ease"),
	HX_CSTRING("_time"),
	HX_CSTRING("_delay"),
	HX_CSTRING("_interval"),
	HX_CSTRING("_repeat"),
	HX_CSTRING("_yoyo"),
	HX_CSTRING("_zigzag"),
	HX_CSTRING("_autoPlay"),
	HX_CSTRING("dump"),
	HX_CSTRING("apply"),
	HX_CSTRING("clone"),
	HX_CSTRING("time"),
	HX_CSTRING("ease"),
	HX_CSTRING("delay"),
	HX_CSTRING("interval"),
	HX_CSTRING("repeat"),
	HX_CSTRING("yoyo"),
	HX_CSTRING("zigzag"),
	HX_CSTRING("autoPlay"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DefaultsX_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DefaultsX_obj::__mClass,"__mClass");
};

#endif

Class DefaultsX_obj::__mClass;

void DefaultsX_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("tweenx909.advanced.DefaultsX"), hx::TCanCast< DefaultsX_obj> ,sStaticFields,sMemberFields,
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

void DefaultsX_obj::__boot()
{
}

} // end namespace tweenx909
} // end namespace advanced
