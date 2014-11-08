#include <hxcpp.h>

#ifndef INCLUDED_tweenx909_advanced_CommandTypeX
#include <tweenx909/advanced/CommandTypeX.h>
#endif
#ifndef INCLUDED_tweenx909_advanced_CommandX
#include <tweenx909/advanced/CommandX.h>
#endif
namespace tweenx909{
namespace advanced{

Void CommandX_obj::__construct(::tweenx909::advanced::CommandTypeX command,Dynamic posInfos)
{
HX_STACK_FRAME("tweenx909.advanced.CommandX","new",0xe3507c52,"tweenx909.advanced.CommandX.new","tweenx909/advanced/CommandX.hx",9,0x87f3c77e)
HX_STACK_THIS(this)
HX_STACK_ARG(command,"command")
HX_STACK_ARG(posInfos,"posInfos")
{
	HX_STACK_LINE(10)
	this->command = command;
	HX_STACK_LINE(10)
	this->definedPosInfos = posInfos;
}
;
	return null();
}

//CommandX_obj::~CommandX_obj() { }

Dynamic CommandX_obj::__CreateEmpty() { return  new CommandX_obj; }
hx::ObjectPtr< CommandX_obj > CommandX_obj::__new(::tweenx909::advanced::CommandTypeX command,Dynamic posInfos)
{  hx::ObjectPtr< CommandX_obj > result = new CommandX_obj();
	result->__construct(command,posInfos);
	return result;}

Dynamic CommandX_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CommandX_obj > result = new CommandX_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


CommandX_obj::CommandX_obj()
{
}

void CommandX_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CommandX);
	HX_MARK_MEMBER_NAME(command,"command");
	HX_MARK_MEMBER_NAME(definedPosInfos,"definedPosInfos");
	HX_MARK_END_CLASS();
}

void CommandX_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(command,"command");
	HX_VISIT_MEMBER_NAME(definedPosInfos,"definedPosInfos");
}

Dynamic CommandX_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"command") ) { return command; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"definedPosInfos") ) { return definedPosInfos; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CommandX_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"command") ) { command=inValue.Cast< ::tweenx909::advanced::CommandTypeX >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"definedPosInfos") ) { definedPosInfos=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CommandX_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("command"));
	outFields->push(HX_CSTRING("definedPosInfos"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::tweenx909::advanced::CommandTypeX*/ ,(int)offsetof(CommandX_obj,command),HX_CSTRING("command")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(CommandX_obj,definedPosInfos),HX_CSTRING("definedPosInfos")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("command"),
	HX_CSTRING("definedPosInfos"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CommandX_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CommandX_obj::__mClass,"__mClass");
};

#endif

Class CommandX_obj::__mClass;

void CommandX_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("tweenx909.advanced.CommandX"), hx::TCanCast< CommandX_obj> ,sStaticFields,sMemberFields,
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

void CommandX_obj::__boot()
{
}

} // end namespace tweenx909
} // end namespace advanced
