#include <hxcpp.h>

#ifndef INCLUDED_core_util_Log
#include <core/util/Log.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
namespace core{
namespace util{

Void Log_obj::__construct()
{
HX_STACK_FRAME("core.util.Log","new",0x6ce8fb59,"core.util.Log.new","core/util/Log.hx",17,0xc9f45697)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//Log_obj::~Log_obj() { }

Dynamic Log_obj::__CreateEmpty() { return  new Log_obj; }
hx::ObjectPtr< Log_obj > Log_obj::__new()
{  hx::ObjectPtr< Log_obj > result = new Log_obj();
	result->__construct();
	return result;}

Dynamic Log_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Log_obj > result = new Log_obj();
	result->__construct();
	return result;}

::String Log_obj::INFO;

::String Log_obj::ERROR;

Void Log_obj::info( ::String message){
{
		HX_STACK_FRAME("core.util.Log","info",0xdbaba755,"core.util.Log.info","core/util/Log.hx",27,0xc9f45697)
		HX_STACK_ARG(message,"message")
		HX_STACK_LINE(27)
		::haxe::Log_obj::trace((::core::util::Log_obj::INFO + message),hx::SourceInfo(HX_CSTRING("Log.hx"),27,HX_CSTRING("core.util.Log"),HX_CSTRING("info")));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Log_obj,info,(void))

Void Log_obj::error( ::String message){
{
		HX_STACK_FRAME("core.util.Log","error",0x0f9a6701,"core.util.Log.error","core/util/Log.hx",37,0xc9f45697)
		HX_STACK_ARG(message,"message")
		HX_STACK_LINE(37)
		::haxe::Log_obj::trace((::core::util::Log_obj::ERROR + message),hx::SourceInfo(HX_CSTRING("Log.hx"),37,HX_CSTRING("core.util.Log"),HX_CSTRING("error")));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Log_obj,error,(void))


Log_obj::Log_obj()
{
}

Dynamic Log_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"INFO") ) { return INFO; }
		if (HX_FIELD_EQ(inName,"info") ) { return info_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ERROR") ) { return ERROR; }
		if (HX_FIELD_EQ(inName,"error") ) { return error_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Log_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"INFO") ) { INFO=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"ERROR") ) { ERROR=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Log_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("INFO"),
	HX_CSTRING("ERROR"),
	HX_CSTRING("info"),
	HX_CSTRING("error"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Log_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Log_obj::INFO,"INFO");
	HX_MARK_MEMBER_NAME(Log_obj::ERROR,"ERROR");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Log_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Log_obj::INFO,"INFO");
	HX_VISIT_MEMBER_NAME(Log_obj::ERROR,"ERROR");
};

#endif

Class Log_obj::__mClass;

void Log_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("core.util.Log"), hx::TCanCast< Log_obj> ,sStaticFields,sMemberFields,
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

void Log_obj::__boot()
{
	INFO= HX_CSTRING("=== INFO === : ");
	ERROR= HX_CSTRING("=== ERROR === : ");
}

} // end namespace core
} // end namespace util
