#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_game_data_gameplay_DTgameplay
#include <game/data/gameplay/DTgameplay.h>
#endif
#ifndef INCLUDED_game_data_gameplay_InfoBlock
#include <game/data/gameplay/InfoBlock.h>
#endif
#ifndef INCLUDED_game_gameobject_brick_BlockDirect
#include <game/gameobject/brick/BlockDirect.h>
#endif
namespace game{
namespace data{
namespace gameplay{

Void DTgameplay_obj::__construct()
{
HX_STACK_FRAME("game.data.gameplay.DTgameplay","new",0x0b9dd2a8,"game.data.gameplay.DTgameplay.new","game/data/gameplay/DTgameplay.hx",36,0xf6f23187)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(38)
	this->mMaxHold = (int)2;
	HX_STACK_LINE(39)
	this->mMaxStack = (int)2;
	HX_STACK_LINE(41)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(41)
	this->mStackBlock = _g;
	HX_STACK_LINE(42)
	{
		HX_STACK_LINE(42)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(42)
		while((true)){
			HX_STACK_LINE(42)
			if ((!(((_g1 < (int)4))))){
				HX_STACK_LINE(42)
				break;
			}
			HX_STACK_LINE(42)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(44)
			int _g11 = ::Std_obj::random((int)7);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(44)
			int _g2 = (_g11 + (int)1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(44)
			int _g3 = ::Std_obj::random((int)4);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(44)
			::game::data::gameplay::InfoBlock _iblock = ::game::data::gameplay::InfoBlock_obj::__new(_g2,_g3);		HX_STACK_VAR(_iblock,"_iblock");
			HX_STACK_LINE(45)
			this->mStackBlock[i] = _iblock;
		}
	}
	HX_STACK_LINE(48)
	int _g4 = ::Std_obj::random((int)7);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(48)
	int _g5 = (_g4 + (int)1);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(48)
	int _g6 = ::Std_obj::random((int)4);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(48)
	::game::data::gameplay::InfoBlock _g7 = ::game::data::gameplay::InfoBlock_obj::__new(_g5,_g6);		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(48)
	this->mcurrentBlock = _g7;
	HX_STACK_LINE(50)
	Array< ::Dynamic > _g8 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(50)
	this->mHoldBlock = _g8;
	HX_STACK_LINE(52)
	this->mScore = (int)0;
	HX_STACK_LINE(53)
	this->mTimeTotal = (int)120;
	HX_STACK_LINE(54)
	this->mTimeCurrent = (int)120;
	HX_STACK_LINE(55)
	this->mX = (int)1;
	HX_STACK_LINE(56)
	Array< int > _g9 = Array_obj< int >::__new();		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(56)
	this->mSkillCurrent = _g9;
	HX_STACK_LINE(57)
	Array< int > _g10 = Array_obj< int >::__new();		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(57)
	this->mListSkill = _g10;
}
;
	return null();
}

//DTgameplay_obj::~DTgameplay_obj() { }

Dynamic DTgameplay_obj::__CreateEmpty() { return  new DTgameplay_obj; }
hx::ObjectPtr< DTgameplay_obj > DTgameplay_obj::__new()
{  hx::ObjectPtr< DTgameplay_obj > result = new DTgameplay_obj();
	result->__construct();
	return result;}

Dynamic DTgameplay_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DTgameplay_obj > result = new DTgameplay_obj();
	result->__construct();
	return result;}

Void DTgameplay_obj::RefreshBlock( ){
{
		HX_STACK_FRAME("game.data.gameplay.DTgameplay","RefreshBlock",0x75e8324a,"game.data.gameplay.DTgameplay.RefreshBlock","game/data/gameplay/DTgameplay.hx",62,0xf6f23187)
		HX_STACK_THIS(this)
		HX_STACK_LINE(64)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(64)
		this->mStackBlock = _g;
		HX_STACK_LINE(65)
		{
			HX_STACK_LINE(65)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(65)
			while((true)){
				HX_STACK_LINE(65)
				if ((!(((_g1 < (int)4))))){
					HX_STACK_LINE(65)
					break;
				}
				HX_STACK_LINE(65)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(67)
				int _g11 = ::Std_obj::random((int)7);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(67)
				int _g2 = (_g11 + (int)1);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(67)
				::game::data::gameplay::InfoBlock _iblock = ::game::data::gameplay::InfoBlock_obj::__new(_g2,::game::gameobject::brick::BlockDirect_obj::TOP);		HX_STACK_VAR(_iblock,"_iblock");
				HX_STACK_LINE(68)
				this->mStackBlock[i] = _iblock;
			}
		}
		HX_STACK_LINE(71)
		int _g3 = ::Std_obj::random((int)7);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(71)
		int _g4 = (_g3 + (int)1);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(71)
		::game::data::gameplay::InfoBlock _g5 = ::game::data::gameplay::InfoBlock_obj::__new(_g4,::game::gameobject::brick::BlockDirect_obj::TOP);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(71)
		this->mcurrentBlock = _g5;
		HX_STACK_LINE(73)
		Array< ::Dynamic > _g6 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(73)
		this->mHoldBlock = _g6;
		HX_STACK_LINE(75)
		this->mScore = (int)0;
		HX_STACK_LINE(76)
		this->mTimeTotal = (int)120;
		HX_STACK_LINE(77)
		this->mTimeCurrent = (int)120;
		HX_STACK_LINE(78)
		this->mX = (int)1;
		HX_STACK_LINE(79)
		Array< int > _g7 = Array_obj< int >::__new();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(79)
		this->mSkillCurrent = _g7;
		HX_STACK_LINE(80)
		Array< int > _g8 = Array_obj< int >::__new();		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(80)
		this->mListSkill = _g8;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DTgameplay_obj,RefreshBlock,(void))

Void DTgameplay_obj::NextBlock( ){
{
		HX_STACK_FRAME("game.data.gameplay.DTgameplay","NextBlock",0x79d55782,"game.data.gameplay.DTgameplay.NextBlock","game/data/gameplay/DTgameplay.hx",83,0xf6f23187)
		HX_STACK_THIS(this)
		HX_STACK_LINE(84)
		this->mcurrentBlock->mType = this->mStackBlock->__get((int)0).StaticCast< ::game::data::gameplay::InfoBlock >()->mType;
		HX_STACK_LINE(85)
		{
			HX_STACK_LINE(85)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(85)
			while((true)){
				HX_STACK_LINE(85)
				if ((!(((_g < (int)3))))){
					HX_STACK_LINE(85)
					break;
				}
				HX_STACK_LINE(85)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(87)
				this->mStackBlock->__get(i).StaticCast< ::game::data::gameplay::InfoBlock >()->mType = this->mStackBlock->__get((i + (int)1)).StaticCast< ::game::data::gameplay::InfoBlock >()->mType;
			}
		}
		HX_STACK_LINE(89)
		int _g = ::Std_obj::random((int)7);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(89)
		int _g1 = (_g + (int)1);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(89)
		this->mStackBlock->__get((int)3).StaticCast< ::game::data::gameplay::InfoBlock >()->mType = _g1;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DTgameplay_obj,NextBlock,(void))

Void DTgameplay_obj::HoldBlock( int _index){
{
		HX_STACK_FRAME("game.data.gameplay.DTgameplay","HoldBlock",0x6b6dffb6,"game.data.gameplay.DTgameplay.HoldBlock","game/data/gameplay/DTgameplay.hx",93,0xf6f23187)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_index,"_index")
		HX_STACK_LINE(93)
		if (((this->mHoldBlock->__get(_index).StaticCast< ::game::data::gameplay::InfoBlock >() == null()))){
			HX_STACK_LINE(95)
			this->mHoldBlock[_index] = this->mcurrentBlock;
			HX_STACK_LINE(96)
			this->NextBlock();
		}
		else{
			HX_STACK_LINE(99)
			::game::data::gameplay::InfoBlock _iblock = this->mHoldBlock->__get(_index).StaticCast< ::game::data::gameplay::InfoBlock >();		HX_STACK_VAR(_iblock,"_iblock");
			HX_STACK_LINE(100)
			this->mHoldBlock[_index] = this->mcurrentBlock;
			HX_STACK_LINE(101)
			this->mcurrentBlock = _iblock;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DTgameplay_obj,HoldBlock,(void))


DTgameplay_obj::DTgameplay_obj()
{
}

void DTgameplay_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DTgameplay);
	HX_MARK_MEMBER_NAME(mStackBlock,"mStackBlock");
	HX_MARK_MEMBER_NAME(mcurrentBlock,"mcurrentBlock");
	HX_MARK_MEMBER_NAME(mHoldBlock,"mHoldBlock");
	HX_MARK_MEMBER_NAME(mMaxStack,"mMaxStack");
	HX_MARK_MEMBER_NAME(mMaxHold,"mMaxHold");
	HX_MARK_MEMBER_NAME(mScore,"mScore");
	HX_MARK_MEMBER_NAME(mTimeTotal,"mTimeTotal");
	HX_MARK_MEMBER_NAME(mTimeCurrent,"mTimeCurrent");
	HX_MARK_MEMBER_NAME(mX,"mX");
	HX_MARK_MEMBER_NAME(mSkillCurrent,"mSkillCurrent");
	HX_MARK_MEMBER_NAME(mListSkill,"mListSkill");
	HX_MARK_END_CLASS();
}

void DTgameplay_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mStackBlock,"mStackBlock");
	HX_VISIT_MEMBER_NAME(mcurrentBlock,"mcurrentBlock");
	HX_VISIT_MEMBER_NAME(mHoldBlock,"mHoldBlock");
	HX_VISIT_MEMBER_NAME(mMaxStack,"mMaxStack");
	HX_VISIT_MEMBER_NAME(mMaxHold,"mMaxHold");
	HX_VISIT_MEMBER_NAME(mScore,"mScore");
	HX_VISIT_MEMBER_NAME(mTimeTotal,"mTimeTotal");
	HX_VISIT_MEMBER_NAME(mTimeCurrent,"mTimeCurrent");
	HX_VISIT_MEMBER_NAME(mX,"mX");
	HX_VISIT_MEMBER_NAME(mSkillCurrent,"mSkillCurrent");
	HX_VISIT_MEMBER_NAME(mListSkill,"mListSkill");
}

Dynamic DTgameplay_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"mX") ) { return mX; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mScore") ) { return mScore; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mMaxHold") ) { return mMaxHold; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mMaxStack") ) { return mMaxStack; }
		if (HX_FIELD_EQ(inName,"NextBlock") ) { return NextBlock_dyn(); }
		if (HX_FIELD_EQ(inName,"HoldBlock") ) { return HoldBlock_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mHoldBlock") ) { return mHoldBlock; }
		if (HX_FIELD_EQ(inName,"mTimeTotal") ) { return mTimeTotal; }
		if (HX_FIELD_EQ(inName,"mListSkill") ) { return mListSkill; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mStackBlock") ) { return mStackBlock; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mTimeCurrent") ) { return mTimeCurrent; }
		if (HX_FIELD_EQ(inName,"RefreshBlock") ) { return RefreshBlock_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mcurrentBlock") ) { return mcurrentBlock; }
		if (HX_FIELD_EQ(inName,"mSkillCurrent") ) { return mSkillCurrent; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DTgameplay_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"mX") ) { mX=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mScore") ) { mScore=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mMaxHold") ) { mMaxHold=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mMaxStack") ) { mMaxStack=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mHoldBlock") ) { mHoldBlock=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mTimeTotal") ) { mTimeTotal=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mListSkill") ) { mListSkill=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mStackBlock") ) { mStackBlock=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mTimeCurrent") ) { mTimeCurrent=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mcurrentBlock") ) { mcurrentBlock=inValue.Cast< ::game::data::gameplay::InfoBlock >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mSkillCurrent") ) { mSkillCurrent=inValue.Cast< Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DTgameplay_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("mStackBlock"));
	outFields->push(HX_CSTRING("mcurrentBlock"));
	outFields->push(HX_CSTRING("mHoldBlock"));
	outFields->push(HX_CSTRING("mMaxStack"));
	outFields->push(HX_CSTRING("mMaxHold"));
	outFields->push(HX_CSTRING("mScore"));
	outFields->push(HX_CSTRING("mTimeTotal"));
	outFields->push(HX_CSTRING("mTimeCurrent"));
	outFields->push(HX_CSTRING("mX"));
	outFields->push(HX_CSTRING("mSkillCurrent"));
	outFields->push(HX_CSTRING("mListSkill"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DTgameplay_obj,mStackBlock),HX_CSTRING("mStackBlock")},
	{hx::fsObject /*::game::data::gameplay::InfoBlock*/ ,(int)offsetof(DTgameplay_obj,mcurrentBlock),HX_CSTRING("mcurrentBlock")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DTgameplay_obj,mHoldBlock),HX_CSTRING("mHoldBlock")},
	{hx::fsInt,(int)offsetof(DTgameplay_obj,mMaxStack),HX_CSTRING("mMaxStack")},
	{hx::fsInt,(int)offsetof(DTgameplay_obj,mMaxHold),HX_CSTRING("mMaxHold")},
	{hx::fsInt,(int)offsetof(DTgameplay_obj,mScore),HX_CSTRING("mScore")},
	{hx::fsInt,(int)offsetof(DTgameplay_obj,mTimeTotal),HX_CSTRING("mTimeTotal")},
	{hx::fsInt,(int)offsetof(DTgameplay_obj,mTimeCurrent),HX_CSTRING("mTimeCurrent")},
	{hx::fsInt,(int)offsetof(DTgameplay_obj,mX),HX_CSTRING("mX")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(DTgameplay_obj,mSkillCurrent),HX_CSTRING("mSkillCurrent")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(DTgameplay_obj,mListSkill),HX_CSTRING("mListSkill")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("mStackBlock"),
	HX_CSTRING("mcurrentBlock"),
	HX_CSTRING("mHoldBlock"),
	HX_CSTRING("mMaxStack"),
	HX_CSTRING("mMaxHold"),
	HX_CSTRING("mScore"),
	HX_CSTRING("mTimeTotal"),
	HX_CSTRING("mTimeCurrent"),
	HX_CSTRING("mX"),
	HX_CSTRING("mSkillCurrent"),
	HX_CSTRING("mListSkill"),
	HX_CSTRING("RefreshBlock"),
	HX_CSTRING("NextBlock"),
	HX_CSTRING("HoldBlock"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DTgameplay_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DTgameplay_obj::__mClass,"__mClass");
};

#endif

Class DTgameplay_obj::__mClass;

void DTgameplay_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("game.data.gameplay.DTgameplay"), hx::TCanCast< DTgameplay_obj> ,sStaticFields,sMemberFields,
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

void DTgameplay_obj::__boot()
{
}

} // end namespace game
} // end namespace data
} // end namespace gameplay
