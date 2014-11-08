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
#ifndef INCLUDED_tweenx909_advanced_GroupX
#include <tweenx909/advanced/GroupX.h>
#endif
#ifndef INCLUDED_tweenx909_advanced__GroupX_GroupTypeX
#include <tweenx909/advanced/_GroupX/GroupTypeX.h>
#endif
namespace tweenx909{
namespace advanced{

Void GroupX_obj::__construct(Dynamic source,::tweenx909::advanced::_GroupX::GroupTypeX type,::tweenx909::advanced::DefaultsX defaults)
{
HX_STACK_FRAME("tweenx909.advanced.GroupX","new",0x442d231e,"tweenx909.advanced.GroupX.new","tweenx909/advanced/GroupX.hx",6,0xedd3b632)
HX_STACK_THIS(this)
HX_STACK_ARG(source,"source")
HX_STACK_ARG(type,"type")
HX_STACK_ARG(defaults,"defaults")
{
	HX_STACK_LINE(7)
	this->current = (int)0;
	HX_STACK_LINE(14)
	this->source = source;
	HX_STACK_LINE(15)
	this->type = type;
	HX_STACK_LINE(16)
	if (((defaults != null()))){
		HX_STACK_LINE(16)
		::tweenx909::advanced::DefaultsX _g = defaults->clone();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(16)
		this->defaults = _g;
	}
}
;
	return null();
}

//GroupX_obj::~GroupX_obj() { }

Dynamic GroupX_obj::__CreateEmpty() { return  new GroupX_obj; }
hx::ObjectPtr< GroupX_obj > GroupX_obj::__new(Dynamic source,::tweenx909::advanced::_GroupX::GroupTypeX type,::tweenx909::advanced::DefaultsX defaults)
{  hx::ObjectPtr< GroupX_obj > result = new GroupX_obj();
	result->__construct(source,type,defaults);
	return result;}

Dynamic GroupX_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GroupX_obj > result = new GroupX_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}


GroupX_obj::GroupX_obj()
{
}

void GroupX_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GroupX);
	HX_MARK_MEMBER_NAME(current,"current");
	HX_MARK_MEMBER_NAME(tweens,"tweens");
	HX_MARK_MEMBER_NAME(source,"source");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(defaults,"defaults");
	HX_MARK_END_CLASS();
}

void GroupX_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(current,"current");
	HX_VISIT_MEMBER_NAME(tweens,"tweens");
	HX_VISIT_MEMBER_NAME(source,"source");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(defaults,"defaults");
}

Dynamic GroupX_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"tweens") ) { return tweens; }
		if (HX_FIELD_EQ(inName,"source") ) { return source; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { return current; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"defaults") ) { return defaults; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GroupX_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::tweenx909::advanced::_GroupX::GroupTypeX >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"tweens") ) { tweens=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"source") ) { source=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { current=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"defaults") ) { defaults=inValue.Cast< ::tweenx909::advanced::DefaultsX >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GroupX_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("current"));
	outFields->push(HX_CSTRING("tweens"));
	outFields->push(HX_CSTRING("source"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("defaults"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(GroupX_obj,current),HX_CSTRING("current")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(GroupX_obj,tweens),HX_CSTRING("tweens")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(GroupX_obj,source),HX_CSTRING("source")},
	{hx::fsObject /*::tweenx909::advanced::_GroupX::GroupTypeX*/ ,(int)offsetof(GroupX_obj,type),HX_CSTRING("type")},
	{hx::fsObject /*::tweenx909::advanced::DefaultsX*/ ,(int)offsetof(GroupX_obj,defaults),HX_CSTRING("defaults")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("current"),
	HX_CSTRING("tweens"),
	HX_CSTRING("source"),
	HX_CSTRING("type"),
	HX_CSTRING("defaults"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GroupX_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GroupX_obj::__mClass,"__mClass");
};

#endif

Class GroupX_obj::__mClass;

void GroupX_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("tweenx909.advanced.GroupX"), hx::TCanCast< GroupX_obj> ,sStaticFields,sMemberFields,
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

void GroupX_obj::__boot()
{
}

} // end namespace tweenx909
} // end namespace advanced
