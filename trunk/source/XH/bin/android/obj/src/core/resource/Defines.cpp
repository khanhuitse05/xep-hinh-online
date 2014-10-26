#include <hxcpp.h>

#ifndef INCLUDED_core_resource_Defines
#include <core/resource/Defines.h>
#endif
namespace core{
namespace resource{

Void Defines_obj::__construct()
{
	return null();
}

//Defines_obj::~Defines_obj() { }

Dynamic Defines_obj::__CreateEmpty() { return  new Defines_obj; }
hx::ObjectPtr< Defines_obj > Defines_obj::__new()
{  hx::ObjectPtr< Defines_obj > result = new Defines_obj();
	result->__construct();
	return result;}

Dynamic Defines_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Defines_obj > result = new Defines_obj();
	result->__construct();
	return result;}

int Defines_obj::GFX_LOADING_ANIM;

int Defines_obj::GFX_LOADING_BG;

int Defines_obj::GFX_HOME_BG;

int Defines_obj::GFX_P_SIGLE_BG;

int Defines_obj::GFX_BATTLES_BG;

int Defines_obj::GFX_P_FRIEND_BG;

int Defines_obj::GFX_MISSION_BG;

int Defines_obj::GFX_BTN_SINGLE;

int Defines_obj::GFX_BTN_BATTLES;

int Defines_obj::GFX_BTN_FRIEND;

int Defines_obj::GFX_BTN_MISSION;

int Defines_obj::GFX_BTN_BACK;


Defines_obj::Defines_obj()
{
}

Dynamic Defines_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic Defines_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Defines_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("GFX_LOADING_ANIM"),
	HX_CSTRING("GFX_LOADING_BG"),
	HX_CSTRING("GFX_HOME_BG"),
	HX_CSTRING("GFX_P_SIGLE_BG"),
	HX_CSTRING("GFX_BATTLES_BG"),
	HX_CSTRING("GFX_P_FRIEND_BG"),
	HX_CSTRING("GFX_MISSION_BG"),
	HX_CSTRING("GFX_BTN_SINGLE"),
	HX_CSTRING("GFX_BTN_BATTLES"),
	HX_CSTRING("GFX_BTN_FRIEND"),
	HX_CSTRING("GFX_BTN_MISSION"),
	HX_CSTRING("GFX_BTN_BACK"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Defines_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Defines_obj::GFX_LOADING_ANIM,"GFX_LOADING_ANIM");
	HX_MARK_MEMBER_NAME(Defines_obj::GFX_LOADING_BG,"GFX_LOADING_BG");
	HX_MARK_MEMBER_NAME(Defines_obj::GFX_HOME_BG,"GFX_HOME_BG");
	HX_MARK_MEMBER_NAME(Defines_obj::GFX_P_SIGLE_BG,"GFX_P_SIGLE_BG");
	HX_MARK_MEMBER_NAME(Defines_obj::GFX_BATTLES_BG,"GFX_BATTLES_BG");
	HX_MARK_MEMBER_NAME(Defines_obj::GFX_P_FRIEND_BG,"GFX_P_FRIEND_BG");
	HX_MARK_MEMBER_NAME(Defines_obj::GFX_MISSION_BG,"GFX_MISSION_BG");
	HX_MARK_MEMBER_NAME(Defines_obj::GFX_BTN_SINGLE,"GFX_BTN_SINGLE");
	HX_MARK_MEMBER_NAME(Defines_obj::GFX_BTN_BATTLES,"GFX_BTN_BATTLES");
	HX_MARK_MEMBER_NAME(Defines_obj::GFX_BTN_FRIEND,"GFX_BTN_FRIEND");
	HX_MARK_MEMBER_NAME(Defines_obj::GFX_BTN_MISSION,"GFX_BTN_MISSION");
	HX_MARK_MEMBER_NAME(Defines_obj::GFX_BTN_BACK,"GFX_BTN_BACK");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Defines_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Defines_obj::GFX_LOADING_ANIM,"GFX_LOADING_ANIM");
	HX_VISIT_MEMBER_NAME(Defines_obj::GFX_LOADING_BG,"GFX_LOADING_BG");
	HX_VISIT_MEMBER_NAME(Defines_obj::GFX_HOME_BG,"GFX_HOME_BG");
	HX_VISIT_MEMBER_NAME(Defines_obj::GFX_P_SIGLE_BG,"GFX_P_SIGLE_BG");
	HX_VISIT_MEMBER_NAME(Defines_obj::GFX_BATTLES_BG,"GFX_BATTLES_BG");
	HX_VISIT_MEMBER_NAME(Defines_obj::GFX_P_FRIEND_BG,"GFX_P_FRIEND_BG");
	HX_VISIT_MEMBER_NAME(Defines_obj::GFX_MISSION_BG,"GFX_MISSION_BG");
	HX_VISIT_MEMBER_NAME(Defines_obj::GFX_BTN_SINGLE,"GFX_BTN_SINGLE");
	HX_VISIT_MEMBER_NAME(Defines_obj::GFX_BTN_BATTLES,"GFX_BTN_BATTLES");
	HX_VISIT_MEMBER_NAME(Defines_obj::GFX_BTN_FRIEND,"GFX_BTN_FRIEND");
	HX_VISIT_MEMBER_NAME(Defines_obj::GFX_BTN_MISSION,"GFX_BTN_MISSION");
	HX_VISIT_MEMBER_NAME(Defines_obj::GFX_BTN_BACK,"GFX_BTN_BACK");
};

#endif

Class Defines_obj::__mClass;

void Defines_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("core.resource.Defines"), hx::TCanCast< Defines_obj> ,sStaticFields,sMemberFields,
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

void Defines_obj::__boot()
{
	GFX_LOADING_ANIM= (int)1;
	GFX_LOADING_BG= (int)2;
	GFX_HOME_BG= (int)3;
	GFX_P_SIGLE_BG= (int)4;
	GFX_BATTLES_BG= (int)5;
	GFX_P_FRIEND_BG= (int)6;
	GFX_MISSION_BG= (int)7;
	GFX_BTN_SINGLE= (int)8;
	GFX_BTN_BATTLES= (int)9;
	GFX_BTN_FRIEND= (int)10;
	GFX_BTN_MISSION= (int)11;
	GFX_BTN_BACK= (int)12;
}

} // end namespace core
} // end namespace resource
