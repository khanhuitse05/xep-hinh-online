#include <hxcpp.h>

#ifndef INCLUDED_core_display_ex_ExSprite
#include <core/display/ex/ExSprite.h>
#endif
#ifndef INCLUDED_core_display_ex_Lable
#include <core/display/ex/Lable.h>
#endif
#ifndef INCLUDED_core_resource_ResourceManager
#include <core/resource/ResourceManager.h>
#endif
#ifndef INCLUDED_game_data_DataCenter
#include <game/data/DataCenter.h>
#endif
#ifndef INCLUDED_game_data_PlayerData
#include <game/data/PlayerData.h>
#endif
#ifndef INCLUDED_game_data_gameplay_DTgameplay
#include <game/data/gameplay/DTgameplay.h>
#endif
#ifndef INCLUDED_game_data_gameplay_DTingame
#include <game/data/gameplay/DTingame.h>
#endif
#ifndef INCLUDED_game_data_gameplay_InfoBlock
#include <game/data/gameplay/InfoBlock.h>
#endif
#ifndef INCLUDED_game_gameobject_board_CBlock
#include <game/gameobject/board/CBlock.h>
#endif
#ifndef INCLUDED_game_gameobject_brick_Block
#include <game/gameobject/brick/Block.h>
#endif
#ifndef INCLUDED_game_gameobject_brick_BlockDirect
#include <game/gameobject/brick/BlockDirect.h>
#endif
#ifndef INCLUDED_game_gameobject_gameplay_HudLeft
#include <game/gameobject/gameplay/HudLeft.h>
#endif
#ifndef INCLUDED_game_tnk_Game
#include <game/tnk/Game.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObjectContainer
#include <openfl/_v2/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_events_Event
#include <openfl/_v2/events/Event.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_MouseEvent
#include <openfl/_v2/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl__v2_text_TextField
#include <openfl/_v2/text/TextField.h>
#endif
namespace game{
namespace gameobject{
namespace gameplay{

Void HudLeft_obj::__construct()
{
HX_STACK_FRAME("game.gameobject.gameplay.HudLeft","new",0x59ae3989,"game.gameobject.gameplay.HudLeft.new","game/gameobject/gameplay/HudLeft.hx",37,0x00fd0ba8)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(38)
	super::__construct();
	HX_STACK_LINE(39)
	this->initValue();
	HX_STACK_LINE(40)
	this->init();
	HX_STACK_LINE(41)
	this->addEventListener(::openfl::_v2::events::Event_obj::ENTER_FRAME,this->gameLoop_dyn(),null(),null(),null());
}
;
	return null();
}

//HudLeft_obj::~HudLeft_obj() { }

Dynamic HudLeft_obj::__CreateEmpty() { return  new HudLeft_obj; }
hx::ObjectPtr< HudLeft_obj > HudLeft_obj::__new()
{  hx::ObjectPtr< HudLeft_obj > result = new HudLeft_obj();
	result->__construct();
	return result;}

Dynamic HudLeft_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HudLeft_obj > result = new HudLeft_obj();
	result->__construct();
	return result;}

Void HudLeft_obj::initValue( ){
{
		HX_STACK_FRAME("game.gameobject.gameplay.HudLeft","initValue",0x1cc9c82a,"game.gameobject.gameplay.HudLeft.initValue","game/gameobject/gameplay/HudLeft.hx",44,0x00fd0ba8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(45)
		this->mMaxHold = ::game::tnk::Game_obj::data->playerData->mDTgameplay->mMaxHold;
		HX_STACK_LINE(46)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(46)
		this->mHoldBlock = _g;
		HX_STACK_LINE(47)
		this->mHoldBlock = ::game::tnk::Game_obj::data->playerData->mDTgameplay->mHoldBlock;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(HudLeft_obj,initValue,(void))

Void HudLeft_obj::init( ){
{
		HX_STACK_FRAME("game.gameobject.gameplay.HudLeft","init",0x1b7cd5c7,"game.gameobject.gameplay.HudLeft.init","game/gameobject/gameplay/HudLeft.hx",50,0x00fd0ba8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(52)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(52)
		this->mListBlock = _g;
		HX_STACK_LINE(53)
		Array< ::Dynamic > _g1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(53)
		this->mListPlan = _g1;
		HX_STACK_LINE(54)
		{
			HX_STACK_LINE(54)
			int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(54)
			int _g2 = this->mMaxHold;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(54)
			while((true)){
				HX_STACK_LINE(54)
				if ((!(((_g11 < _g2))))){
					HX_STACK_LINE(54)
					break;
				}
				HX_STACK_LINE(54)
				int i = (_g11)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(57)
				::core::display::ex::ExSprite _plan = ::core::display::ex::ExSprite_obj::__new();		HX_STACK_VAR(_plan,"_plan");
				HX_STACK_LINE(58)
				::openfl::_v2::display::Sprite _g21 = ::game::tnk::Game_obj::resource->getSprite((int)23);		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(58)
				_plan->addChild(_g21);
				HX_STACK_LINE(59)
				_plan->set_x(::game::gameobject::gameplay::HudLeft_obj::POS_X);
				HX_STACK_LINE(60)
				_plan->set_y((::game::gameobject::gameplay::HudLeft_obj::POS_Y + (i * ::game::gameobject::gameplay::HudLeft_obj::POS_OFFSET)));
				HX_STACK_LINE(61)
				this->mListPlan[i] = _plan;
				HX_STACK_LINE(62)
				this->addChild(this->mListPlan->__get(i).StaticCast< ::core::display::ex::ExSprite >());
				HX_STACK_LINE(64)
				::core::display::ex::Lable _lable = ::core::display::ex::Lable_obj::__new();		HX_STACK_VAR(_lable,"_lable");
				HX_STACK_LINE(65)
				_lable->setFont((int)30,(int)16777215);
				HX_STACK_LINE(66)
				_lable->setSysTextInfo(::game::gameobject::gameplay::HudLeft_obj::POS_X,(::game::gameobject::gameplay::HudLeft_obj::POS_Y + (int)150),HX_CSTRING("HOLD"));
				HX_STACK_LINE(67)
				this->addChild(_lable);
			}
		}
		HX_STACK_LINE(69)
		if (((this->mMaxHold == (int)2))){
			HX_STACK_LINE(71)
			this->mListPlan->__get((int)1).StaticCast< ::core::display::ex::ExSprite >()->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_DOWN,this->onTap2_dyn(),null(),null(),null());
		}
		HX_STACK_LINE(73)
		this->mListPlan->__get((int)0).StaticCast< ::core::display::ex::ExSprite >()->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_DOWN,this->onTap_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(HudLeft_obj,init,(void))

Void HudLeft_obj::gameLoop( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("game.gameobject.gameplay.HudLeft","gameLoop",0x11c869ad,"game.gameobject.gameplay.HudLeft.gameLoop","game/gameobject/gameplay/HudLeft.hx",82,0x00fd0ba8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(82)
		if (((::game::tnk::Game_obj::data->playerData->mDTingame->isHolded == true))){
			HX_STACK_LINE(84)
			::game::tnk::Game_obj::data->playerData->mDTingame->isHolded = false;
			HX_STACK_LINE(85)
			::game::gameobject::board::CBlock _block = ::game::gameobject::board::CBlock_obj::__new(::game::tnk::Game_obj::data->playerData->mDTingame->infoHold->mType,::game::gameobject::brick::BlockDirect_obj::TOP);		HX_STACK_VAR(_block,"_block");
			HX_STACK_LINE(86)
			_block->set_x((::game::gameobject::gameplay::HudLeft_obj::POS_X + (int)30));
			HX_STACK_LINE(87)
			_block->set_y((::game::gameobject::gameplay::HudLeft_obj::POS_Y + (int)80));
			HX_STACK_LINE(88)
			_block->set_scaleX(0.5);
			HX_STACK_LINE(89)
			_block->set_scaleY(0.5);
			HX_STACK_LINE(90)
			if (((::game::tnk::Game_obj::data->playerData->mDTingame->indexHold == (int)0))){
				HX_STACK_LINE(92)
				this->mListBlock[(int)0] = _block;
				HX_STACK_LINE(93)
				this->mListPlan->__get((int)0).StaticCast< ::core::display::ex::ExSprite >()->removeAllAndDelChild();
				HX_STACK_LINE(94)
				this->mListPlan->__get((int)0).StaticCast< ::core::display::ex::ExSprite >()->addChildForDel(_block);
			}
			else{
				HX_STACK_LINE(97)
				this->mListBlock[(int)1] = _block;
				HX_STACK_LINE(98)
				this->mListPlan->__get((int)1).StaticCast< ::core::display::ex::ExSprite >()->removeAllAndDelChild();
				HX_STACK_LINE(99)
				this->mListPlan->__get((int)1).StaticCast< ::core::display::ex::ExSprite >()->addChildForDel(_block);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HudLeft_obj,gameLoop,(void))

Void HudLeft_obj::onTap( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("game.gameobject.gameplay.HudLeft","onTap",0x6615b3ed,"game.gameobject.gameplay.HudLeft.onTap","game/gameobject/gameplay/HudLeft.hx",109,0x00fd0ba8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(109)
		if (((this->mListBlock->length == (int)0))){
			HX_STACK_LINE(111)
			::game::tnk::Game_obj::data->playerData->mDTingame->onClickHold(null(),(int)0);
		}
		else{
			HX_STACK_LINE(114)
			::game::data::gameplay::InfoBlock _info = ::game::data::gameplay::InfoBlock_obj::__new(this->mListBlock->__get((int)0).StaticCast< ::game::gameobject::board::CBlock >()->mBlock->mType,this->mListBlock->__get((int)0).StaticCast< ::game::gameobject::board::CBlock >()->mBlock->mDirect);		HX_STACK_VAR(_info,"_info");
			HX_STACK_LINE(115)
			::game::tnk::Game_obj::data->playerData->mDTingame->onClickHold(_info,(int)0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HudLeft_obj,onTap,(void))

Void HudLeft_obj::onTap2( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("game.gameobject.gameplay.HudLeft","onTap2",0xece7bba5,"game.gameobject.gameplay.HudLeft.onTap2","game/gameobject/gameplay/HudLeft.hx",120,0x00fd0ba8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(120)
		if (((this->mListBlock->length == (int)0))){
			HX_STACK_LINE(122)
			::game::tnk::Game_obj::data->playerData->mDTingame->onClickHold(null(),(int)0);
		}
		else{
			HX_STACK_LINE(124)
			if (((this->mListBlock->length == (int)1))){
				HX_STACK_LINE(126)
				::game::tnk::Game_obj::data->playerData->mDTingame->onClickHold(null(),(int)1);
			}
			else{
				HX_STACK_LINE(129)
				::game::data::gameplay::InfoBlock _info = ::game::data::gameplay::InfoBlock_obj::__new(this->mListBlock->__get((int)1).StaticCast< ::game::gameobject::board::CBlock >()->mBlock->mType,this->mListBlock->__get((int)1).StaticCast< ::game::gameobject::board::CBlock >()->mBlock->mDirect);		HX_STACK_VAR(_info,"_info");
				HX_STACK_LINE(130)
				::game::tnk::Game_obj::data->playerData->mDTingame->onClickHold(_info,(int)1);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HudLeft_obj,onTap2,(void))

int HudLeft_obj::POS_X;

int HudLeft_obj::POS_Y;

int HudLeft_obj::POS_OFFSET;

int HudLeft_obj::BLOCK_OFFSET_X;

int HudLeft_obj::BLOCK_OFFSET_Y;


HudLeft_obj::HudLeft_obj()
{
}

void HudLeft_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HudLeft);
	HX_MARK_MEMBER_NAME(mHoldBlock,"mHoldBlock");
	HX_MARK_MEMBER_NAME(mMaxHold,"mMaxHold");
	HX_MARK_MEMBER_NAME(mX,"mX");
	HX_MARK_MEMBER_NAME(mListBlock,"mListBlock");
	HX_MARK_MEMBER_NAME(mListPlan,"mListPlan");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HudLeft_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mHoldBlock,"mHoldBlock");
	HX_VISIT_MEMBER_NAME(mMaxHold,"mMaxHold");
	HX_VISIT_MEMBER_NAME(mX,"mX");
	HX_VISIT_MEMBER_NAME(mListBlock,"mListBlock");
	HX_VISIT_MEMBER_NAME(mListPlan,"mListPlan");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic HudLeft_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"mX") ) { return mX; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"POS_X") ) { return POS_X; }
		if (HX_FIELD_EQ(inName,"POS_Y") ) { return POS_Y; }
		if (HX_FIELD_EQ(inName,"onTap") ) { return onTap_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onTap2") ) { return onTap2_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mMaxHold") ) { return mMaxHold; }
		if (HX_FIELD_EQ(inName,"gameLoop") ) { return gameLoop_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mListPlan") ) { return mListPlan; }
		if (HX_FIELD_EQ(inName,"initValue") ) { return initValue_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"POS_OFFSET") ) { return POS_OFFSET; }
		if (HX_FIELD_EQ(inName,"mHoldBlock") ) { return mHoldBlock; }
		if (HX_FIELD_EQ(inName,"mListBlock") ) { return mListBlock; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"BLOCK_OFFSET_X") ) { return BLOCK_OFFSET_X; }
		if (HX_FIELD_EQ(inName,"BLOCK_OFFSET_Y") ) { return BLOCK_OFFSET_Y; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic HudLeft_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"mX") ) { mX=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"POS_X") ) { POS_X=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"POS_Y") ) { POS_Y=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mMaxHold") ) { mMaxHold=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mListPlan") ) { mListPlan=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"POS_OFFSET") ) { POS_OFFSET=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mHoldBlock") ) { mHoldBlock=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mListBlock") ) { mListBlock=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"BLOCK_OFFSET_X") ) { BLOCK_OFFSET_X=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BLOCK_OFFSET_Y") ) { BLOCK_OFFSET_Y=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HudLeft_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("mHoldBlock"));
	outFields->push(HX_CSTRING("mMaxHold"));
	outFields->push(HX_CSTRING("mX"));
	outFields->push(HX_CSTRING("mListBlock"));
	outFields->push(HX_CSTRING("mListPlan"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("POS_X"),
	HX_CSTRING("POS_Y"),
	HX_CSTRING("POS_OFFSET"),
	HX_CSTRING("BLOCK_OFFSET_X"),
	HX_CSTRING("BLOCK_OFFSET_Y"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(HudLeft_obj,mHoldBlock),HX_CSTRING("mHoldBlock")},
	{hx::fsInt,(int)offsetof(HudLeft_obj,mMaxHold),HX_CSTRING("mMaxHold")},
	{hx::fsInt,(int)offsetof(HudLeft_obj,mX),HX_CSTRING("mX")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(HudLeft_obj,mListBlock),HX_CSTRING("mListBlock")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(HudLeft_obj,mListPlan),HX_CSTRING("mListPlan")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("mHoldBlock"),
	HX_CSTRING("mMaxHold"),
	HX_CSTRING("mX"),
	HX_CSTRING("mListBlock"),
	HX_CSTRING("mListPlan"),
	HX_CSTRING("initValue"),
	HX_CSTRING("init"),
	HX_CSTRING("gameLoop"),
	HX_CSTRING("onTap"),
	HX_CSTRING("onTap2"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HudLeft_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(HudLeft_obj::POS_X,"POS_X");
	HX_MARK_MEMBER_NAME(HudLeft_obj::POS_Y,"POS_Y");
	HX_MARK_MEMBER_NAME(HudLeft_obj::POS_OFFSET,"POS_OFFSET");
	HX_MARK_MEMBER_NAME(HudLeft_obj::BLOCK_OFFSET_X,"BLOCK_OFFSET_X");
	HX_MARK_MEMBER_NAME(HudLeft_obj::BLOCK_OFFSET_Y,"BLOCK_OFFSET_Y");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HudLeft_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(HudLeft_obj::POS_X,"POS_X");
	HX_VISIT_MEMBER_NAME(HudLeft_obj::POS_Y,"POS_Y");
	HX_VISIT_MEMBER_NAME(HudLeft_obj::POS_OFFSET,"POS_OFFSET");
	HX_VISIT_MEMBER_NAME(HudLeft_obj::BLOCK_OFFSET_X,"BLOCK_OFFSET_X");
	HX_VISIT_MEMBER_NAME(HudLeft_obj::BLOCK_OFFSET_Y,"BLOCK_OFFSET_Y");
};

#endif

Class HudLeft_obj::__mClass;

void HudLeft_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("game.gameobject.gameplay.HudLeft"), hx::TCanCast< HudLeft_obj> ,sStaticFields,sMemberFields,
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

void HudLeft_obj::__boot()
{
	POS_X= (int)0;
	POS_Y= (int)0;
	POS_OFFSET= (int)180;
	BLOCK_OFFSET_X= (int)15;
	BLOCK_OFFSET_Y= (int)70;
}

} // end namespace game
} // end namespace gameobject
} // end namespace gameplay
