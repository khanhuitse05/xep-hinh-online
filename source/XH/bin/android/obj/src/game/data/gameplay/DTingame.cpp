#include <hxcpp.h>

#ifndef INCLUDED_game_data_gameplay_DTingame
#include <game/data/gameplay/DTingame.h>
#endif
#ifndef INCLUDED_game_data_gameplay_InfoBlock
#include <game/data/gameplay/InfoBlock.h>
#endif
namespace game{
namespace data{
namespace gameplay{

Void DTingame_obj::__construct()
{
HX_STACK_FRAME("game.data.gameplay.DTingame","new",0x0a2fee99,"game.data.gameplay.DTingame.new","game/data/gameplay/DTingame.hx",23,0xf85de0f6)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//DTingame_obj::~DTingame_obj() { }

Dynamic DTingame_obj::__CreateEmpty() { return  new DTingame_obj; }
hx::ObjectPtr< DTingame_obj > DTingame_obj::__new()
{  hx::ObjectPtr< DTingame_obj > result = new DTingame_obj();
	result->__construct();
	return result;}

Dynamic DTingame_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DTingame_obj > result = new DTingame_obj();
	result->__construct();
	return result;}

Void DTingame_obj::onClickVirtual( ::game::data::gameplay::InfoBlock _info){
{
		HX_STACK_FRAME("game.data.gameplay.DTingame","onClickVirtual",0x11474cc9,"game.data.gameplay.DTingame.onClickVirtual","game/data/gameplay/DTingame.hx",31,0xf85de0f6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_info,"_info")
		HX_STACK_LINE(32)
		this->isChose = true;
		HX_STACK_LINE(33)
		this->infoChose = _info;
		HX_STACK_LINE(34)
		this->isCycle = false;
		HX_STACK_LINE(35)
		this->isUpdateStack = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DTingame_obj,onClickVirtual,(void))

Void DTingame_obj::onClickHold( ::game::data::gameplay::InfoBlock _info,int _i){
{
		HX_STACK_FRAME("game.data.gameplay.DTingame","onClickHold",0xce3f97c1,"game.data.gameplay.DTingame.onClickHold","game/data/gameplay/DTingame.hx",39,0xf85de0f6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_info,"_info")
		HX_STACK_ARG(_i,"_i")
		HX_STACK_LINE(40)
		this->isHolding = true;
		HX_STACK_LINE(41)
		this->indexHold = _i;
		HX_STACK_LINE(42)
		this->infoHold = _info;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DTingame_obj,onClickHold,(void))


DTingame_obj::DTingame_obj()
{
}

void DTingame_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DTingame);
	HX_MARK_MEMBER_NAME(isPlay,"isPlay");
	HX_MARK_MEMBER_NAME(isChose,"isChose");
	HX_MARK_MEMBER_NAME(infoChose,"infoChose");
	HX_MARK_MEMBER_NAME(isCycle,"isCycle");
	HX_MARK_MEMBER_NAME(isUpdateStack,"isUpdateStack");
	HX_MARK_MEMBER_NAME(isHolding,"isHolding");
	HX_MARK_MEMBER_NAME(isHolded,"isHolded");
	HX_MARK_MEMBER_NAME(indexHold,"indexHold");
	HX_MARK_MEMBER_NAME(infoHold,"infoHold");
	HX_MARK_END_CLASS();
}

void DTingame_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(isPlay,"isPlay");
	HX_VISIT_MEMBER_NAME(isChose,"isChose");
	HX_VISIT_MEMBER_NAME(infoChose,"infoChose");
	HX_VISIT_MEMBER_NAME(isCycle,"isCycle");
	HX_VISIT_MEMBER_NAME(isUpdateStack,"isUpdateStack");
	HX_VISIT_MEMBER_NAME(isHolding,"isHolding");
	HX_VISIT_MEMBER_NAME(isHolded,"isHolded");
	HX_VISIT_MEMBER_NAME(indexHold,"indexHold");
	HX_VISIT_MEMBER_NAME(infoHold,"infoHold");
}

Dynamic DTingame_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"isPlay") ) { return isPlay; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isChose") ) { return isChose; }
		if (HX_FIELD_EQ(inName,"isCycle") ) { return isCycle; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isHolded") ) { return isHolded; }
		if (HX_FIELD_EQ(inName,"infoHold") ) { return infoHold; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"infoChose") ) { return infoChose; }
		if (HX_FIELD_EQ(inName,"isHolding") ) { return isHolding; }
		if (HX_FIELD_EQ(inName,"indexHold") ) { return indexHold; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onClickHold") ) { return onClickHold_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"isUpdateStack") ) { return isUpdateStack; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onClickVirtual") ) { return onClickVirtual_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DTingame_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"isPlay") ) { isPlay=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isChose") ) { isChose=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isCycle") ) { isCycle=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isHolded") ) { isHolded=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"infoHold") ) { infoHold=inValue.Cast< ::game::data::gameplay::InfoBlock >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"infoChose") ) { infoChose=inValue.Cast< ::game::data::gameplay::InfoBlock >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isHolding") ) { isHolding=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"indexHold") ) { indexHold=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"isUpdateStack") ) { isUpdateStack=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DTingame_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("isPlay"));
	outFields->push(HX_CSTRING("isChose"));
	outFields->push(HX_CSTRING("infoChose"));
	outFields->push(HX_CSTRING("isCycle"));
	outFields->push(HX_CSTRING("isUpdateStack"));
	outFields->push(HX_CSTRING("isHolding"));
	outFields->push(HX_CSTRING("isHolded"));
	outFields->push(HX_CSTRING("indexHold"));
	outFields->push(HX_CSTRING("infoHold"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(DTingame_obj,isPlay),HX_CSTRING("isPlay")},
	{hx::fsBool,(int)offsetof(DTingame_obj,isChose),HX_CSTRING("isChose")},
	{hx::fsObject /*::game::data::gameplay::InfoBlock*/ ,(int)offsetof(DTingame_obj,infoChose),HX_CSTRING("infoChose")},
	{hx::fsBool,(int)offsetof(DTingame_obj,isCycle),HX_CSTRING("isCycle")},
	{hx::fsBool,(int)offsetof(DTingame_obj,isUpdateStack),HX_CSTRING("isUpdateStack")},
	{hx::fsBool,(int)offsetof(DTingame_obj,isHolding),HX_CSTRING("isHolding")},
	{hx::fsBool,(int)offsetof(DTingame_obj,isHolded),HX_CSTRING("isHolded")},
	{hx::fsInt,(int)offsetof(DTingame_obj,indexHold),HX_CSTRING("indexHold")},
	{hx::fsObject /*::game::data::gameplay::InfoBlock*/ ,(int)offsetof(DTingame_obj,infoHold),HX_CSTRING("infoHold")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("isPlay"),
	HX_CSTRING("isChose"),
	HX_CSTRING("infoChose"),
	HX_CSTRING("isCycle"),
	HX_CSTRING("isUpdateStack"),
	HX_CSTRING("isHolding"),
	HX_CSTRING("isHolded"),
	HX_CSTRING("indexHold"),
	HX_CSTRING("infoHold"),
	HX_CSTRING("onClickVirtual"),
	HX_CSTRING("onClickHold"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DTingame_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DTingame_obj::__mClass,"__mClass");
};

#endif

Class DTingame_obj::__mClass;

void DTingame_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("game.data.gameplay.DTingame"), hx::TCanCast< DTingame_obj> ,sStaticFields,sMemberFields,
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

void DTingame_obj::__boot()
{
}

} // end namespace game
} // end namespace data
} // end namespace gameplay
