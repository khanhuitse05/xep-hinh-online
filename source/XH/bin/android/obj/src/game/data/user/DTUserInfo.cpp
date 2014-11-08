#include <hxcpp.h>

#ifndef INCLUDED_game_data_InventoryData
#include <game/data/InventoryData.h>
#endif
#ifndef INCLUDED_game_data_user_DTUserInfo
#include <game/data/user/DTUserInfo.h>
#endif
namespace game{
namespace data{
namespace user{

Void DTUserInfo_obj::__construct()
{
HX_STACK_FRAME("game.data.user.DTUserInfo","new",0xd22117f6,"game.data.user.DTUserInfo.new","game/data/user/DTUserInfo.hx",7,0xdd5fdff9)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(14)
	this->inventory = ::game::data::InventoryData_obj::__new();
	HX_STACK_LINE(10)
	this->playerName = HX_CSTRING("NoName");
}
;
	return null();
}

//DTUserInfo_obj::~DTUserInfo_obj() { }

Dynamic DTUserInfo_obj::__CreateEmpty() { return  new DTUserInfo_obj; }
hx::ObjectPtr< DTUserInfo_obj > DTUserInfo_obj::__new()
{  hx::ObjectPtr< DTUserInfo_obj > result = new DTUserInfo_obj();
	result->__construct();
	return result;}

Dynamic DTUserInfo_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DTUserInfo_obj > result = new DTUserInfo_obj();
	result->__construct();
	return result;}


DTUserInfo_obj::DTUserInfo_obj()
{
}

void DTUserInfo_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DTUserInfo);
	HX_MARK_MEMBER_NAME(playerName,"playerName");
	HX_MARK_MEMBER_NAME(level,"level");
	HX_MARK_MEMBER_NAME(scores,"scores");
	HX_MARK_MEMBER_NAME(gold,"gold");
	HX_MARK_MEMBER_NAME(inventory,"inventory");
	HX_MARK_END_CLASS();
}

void DTUserInfo_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(playerName,"playerName");
	HX_VISIT_MEMBER_NAME(level,"level");
	HX_VISIT_MEMBER_NAME(scores,"scores");
	HX_VISIT_MEMBER_NAME(gold,"gold");
	HX_VISIT_MEMBER_NAME(inventory,"inventory");
}

Dynamic DTUserInfo_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"gold") ) { return gold; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"level") ) { return level; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scores") ) { return scores; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"inventory") ) { return inventory; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"playerName") ) { return playerName; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DTUserInfo_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"gold") ) { gold=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"level") ) { level=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scores") ) { scores=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"inventory") ) { inventory=inValue.Cast< ::game::data::InventoryData >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"playerName") ) { playerName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DTUserInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("playerName"));
	outFields->push(HX_CSTRING("level"));
	outFields->push(HX_CSTRING("scores"));
	outFields->push(HX_CSTRING("gold"));
	outFields->push(HX_CSTRING("inventory"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(DTUserInfo_obj,playerName),HX_CSTRING("playerName")},
	{hx::fsInt,(int)offsetof(DTUserInfo_obj,level),HX_CSTRING("level")},
	{hx::fsInt,(int)offsetof(DTUserInfo_obj,scores),HX_CSTRING("scores")},
	{hx::fsInt,(int)offsetof(DTUserInfo_obj,gold),HX_CSTRING("gold")},
	{hx::fsObject /*::game::data::InventoryData*/ ,(int)offsetof(DTUserInfo_obj,inventory),HX_CSTRING("inventory")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("playerName"),
	HX_CSTRING("level"),
	HX_CSTRING("scores"),
	HX_CSTRING("gold"),
	HX_CSTRING("inventory"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DTUserInfo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DTUserInfo_obj::__mClass,"__mClass");
};

#endif

Class DTUserInfo_obj::__mClass;

void DTUserInfo_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("game.data.user.DTUserInfo"), hx::TCanCast< DTUserInfo_obj> ,sStaticFields,sMemberFields,
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

void DTUserInfo_obj::__boot()
{
}

} // end namespace game
} // end namespace data
} // end namespace user
