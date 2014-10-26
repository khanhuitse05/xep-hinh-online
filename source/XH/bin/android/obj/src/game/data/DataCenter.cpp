#include <hxcpp.h>

#ifndef INCLUDED_game_data_DataCenter
#include <game/data/DataCenter.h>
#endif
#ifndef INCLUDED_game_data_PlayerData
#include <game/data/PlayerData.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
namespace game{
namespace data{

Void DataCenter_obj::__construct()
{
HX_STACK_FRAME("game.data.DataCenter","new",0x5947a779,"game.data.DataCenter.new","game/data/DataCenter.hx",12,0x59ec11b7)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(13)
	::game::data::PlayerData _g = ::game::data::PlayerData_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(13)
	this->playerData = _g;
}
;
	return null();
}

//DataCenter_obj::~DataCenter_obj() { }

Dynamic DataCenter_obj::__CreateEmpty() { return  new DataCenter_obj; }
hx::ObjectPtr< DataCenter_obj > DataCenter_obj::__new()
{  hx::ObjectPtr< DataCenter_obj > result = new DataCenter_obj();
	result->__construct();
	return result;}

Dynamic DataCenter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DataCenter_obj > result = new DataCenter_obj();
	result->__construct();
	return result;}


DataCenter_obj::DataCenter_obj()
{
}

void DataCenter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DataCenter);
	HX_MARK_MEMBER_NAME(playerData,"playerData");
	HX_MARK_END_CLASS();
}

void DataCenter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(playerData,"playerData");
}

Dynamic DataCenter_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"playerData") ) { return playerData; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DataCenter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"playerData") ) { playerData=inValue.Cast< ::game::data::PlayerData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DataCenter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("playerData"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::game::data::PlayerData*/ ,(int)offsetof(DataCenter_obj,playerData),HX_CSTRING("playerData")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("playerData"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DataCenter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DataCenter_obj::__mClass,"__mClass");
};

#endif

Class DataCenter_obj::__mClass;

void DataCenter_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("game.data.DataCenter"), hx::TCanCast< DataCenter_obj> ,sStaticFields,sMemberFields,
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

void DataCenter_obj::__boot()
{
}

} // end namespace game
} // end namespace data
