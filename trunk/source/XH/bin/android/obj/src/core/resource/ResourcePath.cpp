#include <hxcpp.h>

#ifndef INCLUDED_core_resource_ResourcePath
#include <core/resource/ResourcePath.h>
#endif
namespace core{
namespace resource{

Void ResourcePath_obj::__construct()
{
	return null();
}

//ResourcePath_obj::~ResourcePath_obj() { }

Dynamic ResourcePath_obj::__CreateEmpty() { return  new ResourcePath_obj; }
hx::ObjectPtr< ResourcePath_obj > ResourcePath_obj::__new()
{  hx::ObjectPtr< ResourcePath_obj > result = new ResourcePath_obj();
	result->__construct();
	return result;}

Dynamic ResourcePath_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ResourcePath_obj > result = new ResourcePath_obj();
	result->__construct();
	return result;}

::String ResourcePath_obj::GFX_LOADING_ANIM;

::String ResourcePath_obj::GFX_LOADING_BG;

::String ResourcePath_obj::GFX_HOME_BG;

::String ResourcePath_obj::GFX_BATTLES_BG;

::String ResourcePath_obj::GFX_MISSION_BG;

::String ResourcePath_obj::GFX_P_SIGLE_BG;

::String ResourcePath_obj::GFX_P_FRIEND_BG;

::String ResourcePath_obj::GFX_BTN_SINGLE;

::String ResourcePath_obj::GFX_BTN_BATTLES;

::String ResourcePath_obj::GFX_BTN_FRIEND;

::String ResourcePath_obj::GFX_BTN_MISSION;

::String ResourcePath_obj::GFX_BTN_BACK;


ResourcePath_obj::ResourcePath_obj()
{
}

Dynamic ResourcePath_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic ResourcePath_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ResourcePath_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("GFX_LOADING_ANIM"),
	HX_CSTRING("GFX_LOADING_BG"),
	HX_CSTRING("GFX_HOME_BG"),
	HX_CSTRING("GFX_BATTLES_BG"),
	HX_CSTRING("GFX_MISSION_BG"),
	HX_CSTRING("GFX_P_SIGLE_BG"),
	HX_CSTRING("GFX_P_FRIEND_BG"),
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
	HX_MARK_MEMBER_NAME(ResourcePath_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ResourcePath_obj::GFX_LOADING_ANIM,"GFX_LOADING_ANIM");
	HX_MARK_MEMBER_NAME(ResourcePath_obj::GFX_LOADING_BG,"GFX_LOADING_BG");
	HX_MARK_MEMBER_NAME(ResourcePath_obj::GFX_HOME_BG,"GFX_HOME_BG");
	HX_MARK_MEMBER_NAME(ResourcePath_obj::GFX_BATTLES_BG,"GFX_BATTLES_BG");
	HX_MARK_MEMBER_NAME(ResourcePath_obj::GFX_MISSION_BG,"GFX_MISSION_BG");
	HX_MARK_MEMBER_NAME(ResourcePath_obj::GFX_P_SIGLE_BG,"GFX_P_SIGLE_BG");
	HX_MARK_MEMBER_NAME(ResourcePath_obj::GFX_P_FRIEND_BG,"GFX_P_FRIEND_BG");
	HX_MARK_MEMBER_NAME(ResourcePath_obj::GFX_BTN_SINGLE,"GFX_BTN_SINGLE");
	HX_MARK_MEMBER_NAME(ResourcePath_obj::GFX_BTN_BATTLES,"GFX_BTN_BATTLES");
	HX_MARK_MEMBER_NAME(ResourcePath_obj::GFX_BTN_FRIEND,"GFX_BTN_FRIEND");
	HX_MARK_MEMBER_NAME(ResourcePath_obj::GFX_BTN_MISSION,"GFX_BTN_MISSION");
	HX_MARK_MEMBER_NAME(ResourcePath_obj::GFX_BTN_BACK,"GFX_BTN_BACK");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ResourcePath_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ResourcePath_obj::GFX_LOADING_ANIM,"GFX_LOADING_ANIM");
	HX_VISIT_MEMBER_NAME(ResourcePath_obj::GFX_LOADING_BG,"GFX_LOADING_BG");
	HX_VISIT_MEMBER_NAME(ResourcePath_obj::GFX_HOME_BG,"GFX_HOME_BG");
	HX_VISIT_MEMBER_NAME(ResourcePath_obj::GFX_BATTLES_BG,"GFX_BATTLES_BG");
	HX_VISIT_MEMBER_NAME(ResourcePath_obj::GFX_MISSION_BG,"GFX_MISSION_BG");
	HX_VISIT_MEMBER_NAME(ResourcePath_obj::GFX_P_SIGLE_BG,"GFX_P_SIGLE_BG");
	HX_VISIT_MEMBER_NAME(ResourcePath_obj::GFX_P_FRIEND_BG,"GFX_P_FRIEND_BG");
	HX_VISIT_MEMBER_NAME(ResourcePath_obj::GFX_BTN_SINGLE,"GFX_BTN_SINGLE");
	HX_VISIT_MEMBER_NAME(ResourcePath_obj::GFX_BTN_BATTLES,"GFX_BTN_BATTLES");
	HX_VISIT_MEMBER_NAME(ResourcePath_obj::GFX_BTN_FRIEND,"GFX_BTN_FRIEND");
	HX_VISIT_MEMBER_NAME(ResourcePath_obj::GFX_BTN_MISSION,"GFX_BTN_MISSION");
	HX_VISIT_MEMBER_NAME(ResourcePath_obj::GFX_BTN_BACK,"GFX_BTN_BACK");
};

#endif

Class ResourcePath_obj::__mClass;

void ResourcePath_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("core.resource.ResourcePath"), hx::TCanCast< ResourcePath_obj> ,sStaticFields,sMemberFields,
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

void ResourcePath_obj::__boot()
{
	GFX_LOADING_ANIM= HX_CSTRING("img/animloading.png");
	GFX_LOADING_BG= HX_CSTRING("img/bghome.png");
	GFX_HOME_BG= HX_CSTRING("img/bghome.png");
	GFX_BATTLES_BG= HX_CSTRING("img/BattlesBackground.png");
	GFX_MISSION_BG= HX_CSTRING("img/MissionBackground.png");
	GFX_P_SIGLE_BG= HX_CSTRING("img/SinglePlayer background.png");
	GFX_P_FRIEND_BG= HX_CSTRING("img/WithfriendBackground.png");
	GFX_BTN_SINGLE= HX_CSTRING("img/Single player.png");
	GFX_BTN_BATTLES= HX_CSTRING("img/Battles.png");
	GFX_BTN_FRIEND= HX_CSTRING("img/With friend.png");
	GFX_BTN_MISSION= HX_CSTRING("img/Mission.png");
	GFX_BTN_BACK= HX_CSTRING("img/btnback.png");
}

} // end namespace core
} // end namespace resource
