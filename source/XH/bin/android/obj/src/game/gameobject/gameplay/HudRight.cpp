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
#ifndef INCLUDED_game_gameobject_gameplay_HudRight
#include <game/gameobject/gameplay/HudRight.h>
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
#ifndef INCLUDED_openfl__v2_text_TextField
#include <openfl/_v2/text/TextField.h>
#endif
namespace game{
namespace gameobject{
namespace gameplay{

Void HudRight_obj::__construct()
{
HX_STACK_FRAME("game.gameobject.gameplay.HudRight","new",0x764937be,"game.gameobject.gameplay.HudRight.new","game/gameobject/gameplay/HudRight.hx",37,0x8596f4b1)
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

//HudRight_obj::~HudRight_obj() { }

Dynamic HudRight_obj::__CreateEmpty() { return  new HudRight_obj; }
hx::ObjectPtr< HudRight_obj > HudRight_obj::__new()
{  hx::ObjectPtr< HudRight_obj > result = new HudRight_obj();
	result->__construct();
	return result;}

Dynamic HudRight_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HudRight_obj > result = new HudRight_obj();
	result->__construct();
	return result;}

Void HudRight_obj::initValue( ){
{
		HX_STACK_FRAME("game.gameobject.gameplay.HudRight","initValue",0x90a8dc1f,"game.gameobject.gameplay.HudRight.initValue","game/gameobject/gameplay/HudRight.hx",44,0x8596f4b1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(45)
		this->mMaxStack = ::game::tnk::Game_obj::data->playerData->mDTgameplay->mMaxStack;
		HX_STACK_LINE(46)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(46)
		this->mStackBlock = _g;
		HX_STACK_LINE(47)
		this->mStackBlock = ::game::tnk::Game_obj::data->playerData->mDTgameplay->mStackBlock;
		HX_STACK_LINE(48)
		this->mX = ::game::tnk::Game_obj::data->playerData->mDTgameplay->mX;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(HudRight_obj,initValue,(void))

Void HudRight_obj::init( ){
{
		HX_STACK_FRAME("game.gameobject.gameplay.HudRight","init",0x068045f2,"game.gameobject.gameplay.HudRight.init","game/gameobject/gameplay/HudRight.hx",51,0x8596f4b1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(53)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(53)
		this->mListBlock = _g;
		HX_STACK_LINE(54)
		Array< ::Dynamic > _g1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(54)
		this->mListPlan = _g1;
		HX_STACK_LINE(55)
		{
			HX_STACK_LINE(55)
			int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(55)
			int _g2 = this->mMaxStack;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(55)
			while((true)){
				HX_STACK_LINE(55)
				if ((!(((_g11 < _g2))))){
					HX_STACK_LINE(55)
					break;
				}
				HX_STACK_LINE(55)
				int i = (_g11)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(58)
				::openfl::_v2::display::Sprite _plan = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_plan,"_plan");
				HX_STACK_LINE(59)
				::openfl::_v2::display::Sprite _g21 = ::game::tnk::Game_obj::resource->getSprite((int)24);		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(59)
				_plan = _g21;
				HX_STACK_LINE(60)
				_plan->set_x(::game::gameobject::gameplay::HudRight_obj::POS_X);
				HX_STACK_LINE(61)
				_plan->set_y((::game::gameobject::gameplay::HudRight_obj::POS_Y + (i * ::game::gameobject::gameplay::HudRight_obj::POS_OFFSET)));
				HX_STACK_LINE(62)
				this->mListPlan[i] = _plan;
				HX_STACK_LINE(63)
				this->addChild(this->mListPlan->__get(i).StaticCast< ::openfl::_v2::display::Sprite >());
				HX_STACK_LINE(65)
				::game::gameobject::board::CBlock _block = ::game::gameobject::board::CBlock_obj::__new(this->mStackBlock->__get(i).StaticCast< ::game::data::gameplay::InfoBlock >()->mType,this->mStackBlock->__get(i).StaticCast< ::game::data::gameplay::InfoBlock >()->mDirect);		HX_STACK_VAR(_block,"_block");
				HX_STACK_LINE(66)
				_block->set_scaleX(0.5);
				HX_STACK_LINE(67)
				_block->set_scaleY(0.5);
				HX_STACK_LINE(68)
				_block->set_x((::game::gameobject::gameplay::HudRight_obj::POS_X + ::game::gameobject::gameplay::HudRight_obj::BLOCK_OFFSET_X));
				HX_STACK_LINE(69)
				_block->set_y(((::game::gameobject::gameplay::HudRight_obj::POS_Y + (i * ::game::gameobject::gameplay::HudRight_obj::POS_OFFSET)) + ::game::gameobject::gameplay::HudRight_obj::BLOCK_OFFSET_Y));
				HX_STACK_LINE(70)
				this->mListBlock[i] = _block;
				HX_STACK_LINE(71)
				this->addChildForDel(this->mListBlock->__get(i).StaticCast< ::game::gameobject::board::CBlock >());
			}
		}
		HX_STACK_LINE(74)
		::openfl::_v2::display::Sprite _plan = ::game::tnk::Game_obj::resource->getSprite((int)24);		HX_STACK_VAR(_plan,"_plan");
		HX_STACK_LINE(75)
		_plan->set_x(::game::gameobject::gameplay::HudRight_obj::POS_X);
		HX_STACK_LINE(76)
		_plan->set_y((::game::gameobject::gameplay::HudRight_obj::POS_Y + (this->mMaxStack * ::game::gameobject::gameplay::HudRight_obj::POS_OFFSET)));
		HX_STACK_LINE(77)
		this->mListPlan[this->mMaxStack] = _plan;
		HX_STACK_LINE(78)
		this->addChild(this->mListPlan->__get(this->mMaxStack).StaticCast< ::openfl::_v2::display::Sprite >());
		HX_STACK_LINE(81)
		::core::display::ex::Lable _g3 = ::core::display::ex::Lable_obj::__new();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(81)
		this->mXExpText = _g3;
		HX_STACK_LINE(82)
		this->mXExpText->setFont((int)30,(int)16777215);
		HX_STACK_LINE(83)
		this->mXExpText->setSysTextInfo((::game::gameobject::gameplay::HudRight_obj::POS_X + (int)25),((::game::gameobject::gameplay::HudRight_obj::POS_Y + (this->mMaxStack * ::game::gameobject::gameplay::HudRight_obj::POS_OFFSET)) + (int)40),(HX_CSTRING("X") + this->mX));
		HX_STACK_LINE(84)
		this->addChild(this->mXExpText);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(HudRight_obj,init,(void))

Void HudRight_obj::gameLoop( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("game.gameobject.gameplay.HudRight","gameLoop",0xdd7ecb58,"game.gameobject.gameplay.HudRight.gameLoop","game/gameobject/gameplay/HudRight.hx",92,0x8596f4b1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(92)
		if (((::game::tnk::Game_obj::data->playerData->mDTingame->isUpdateStack == true))){
			HX_STACK_LINE(94)
			this->Update();
			HX_STACK_LINE(95)
			::game::tnk::Game_obj::data->playerData->mDTingame->isUpdateStack = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(HudRight_obj,gameLoop,(void))

Void HudRight_obj::Update( ){
{
		HX_STACK_FRAME("game.gameobject.gameplay.HudRight","Update",0xffe1018b,"game.gameobject.gameplay.HudRight.Update","game/gameobject/gameplay/HudRight.hx",99,0x8596f4b1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(100)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(100)
		this->mStackBlock = _g;
		HX_STACK_LINE(101)
		Array< ::Dynamic > _g1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(101)
		this->mListBlock = _g1;
		HX_STACK_LINE(102)
		this->mStackBlock = ::game::tnk::Game_obj::data->playerData->mDTgameplay->mStackBlock;
		HX_STACK_LINE(103)
		this->removeAllAndDelChild();
		HX_STACK_LINE(104)
		{
			HX_STACK_LINE(104)
			int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(104)
			int _g2 = this->mMaxStack;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(104)
			while((true)){
				HX_STACK_LINE(104)
				if ((!(((_g11 < _g2))))){
					HX_STACK_LINE(104)
					break;
				}
				HX_STACK_LINE(104)
				int i = (_g11)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(107)
				::game::gameobject::board::CBlock _block = ::game::gameobject::board::CBlock_obj::__new(this->mStackBlock->__get(i).StaticCast< ::game::data::gameplay::InfoBlock >()->mType,this->mStackBlock->__get(i).StaticCast< ::game::data::gameplay::InfoBlock >()->mDirect);		HX_STACK_VAR(_block,"_block");
				HX_STACK_LINE(108)
				_block->set_scaleX(0.5);
				HX_STACK_LINE(109)
				_block->set_scaleY(0.5);
				HX_STACK_LINE(110)
				_block->set_x((::game::gameobject::gameplay::HudRight_obj::POS_X + ::game::gameobject::gameplay::HudRight_obj::BLOCK_OFFSET_X));
				HX_STACK_LINE(111)
				_block->set_y(((::game::gameobject::gameplay::HudRight_obj::POS_Y + (i * ::game::gameobject::gameplay::HudRight_obj::POS_OFFSET)) + ::game::gameobject::gameplay::HudRight_obj::BLOCK_OFFSET_Y));
				HX_STACK_LINE(112)
				this->mListBlock[i] = _block;
				HX_STACK_LINE(113)
				this->addChildForDel(this->mListBlock->__get(i).StaticCast< ::game::gameobject::board::CBlock >());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(HudRight_obj,Update,(void))

int HudRight_obj::POS_X;

int HudRight_obj::POS_Y;

int HudRight_obj::POS_OFFSET;

int HudRight_obj::BLOCK_OFFSET_X;

int HudRight_obj::BLOCK_OFFSET_Y;


HudRight_obj::HudRight_obj()
{
}

void HudRight_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HudRight);
	HX_MARK_MEMBER_NAME(mStackBlock,"mStackBlock");
	HX_MARK_MEMBER_NAME(mMaxStack,"mMaxStack");
	HX_MARK_MEMBER_NAME(mX,"mX");
	HX_MARK_MEMBER_NAME(mListBlock,"mListBlock");
	HX_MARK_MEMBER_NAME(mListPlan,"mListPlan");
	HX_MARK_MEMBER_NAME(mXExpText,"mXExpText");
	::core::display::ex::ExSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HudRight_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mStackBlock,"mStackBlock");
	HX_VISIT_MEMBER_NAME(mMaxStack,"mMaxStack");
	HX_VISIT_MEMBER_NAME(mX,"mX");
	HX_VISIT_MEMBER_NAME(mListBlock,"mListBlock");
	HX_VISIT_MEMBER_NAME(mListPlan,"mListPlan");
	HX_VISIT_MEMBER_NAME(mXExpText,"mXExpText");
	::core::display::ex::ExSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic HudRight_obj::__Field(const ::String &inName,bool inCallProp)
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
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"Update") ) { return Update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"gameLoop") ) { return gameLoop_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mMaxStack") ) { return mMaxStack; }
		if (HX_FIELD_EQ(inName,"mListPlan") ) { return mListPlan; }
		if (HX_FIELD_EQ(inName,"mXExpText") ) { return mXExpText; }
		if (HX_FIELD_EQ(inName,"initValue") ) { return initValue_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"POS_OFFSET") ) { return POS_OFFSET; }
		if (HX_FIELD_EQ(inName,"mListBlock") ) { return mListBlock; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mStackBlock") ) { return mStackBlock; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"BLOCK_OFFSET_X") ) { return BLOCK_OFFSET_X; }
		if (HX_FIELD_EQ(inName,"BLOCK_OFFSET_Y") ) { return BLOCK_OFFSET_Y; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic HudRight_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"mX") ) { mX=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"POS_X") ) { POS_X=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"POS_Y") ) { POS_Y=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mMaxStack") ) { mMaxStack=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mListPlan") ) { mListPlan=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mXExpText") ) { mXExpText=inValue.Cast< ::core::display::ex::Lable >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"POS_OFFSET") ) { POS_OFFSET=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mListBlock") ) { mListBlock=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mStackBlock") ) { mStackBlock=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"BLOCK_OFFSET_X") ) { BLOCK_OFFSET_X=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BLOCK_OFFSET_Y") ) { BLOCK_OFFSET_Y=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HudRight_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("mStackBlock"));
	outFields->push(HX_CSTRING("mMaxStack"));
	outFields->push(HX_CSTRING("mX"));
	outFields->push(HX_CSTRING("mListBlock"));
	outFields->push(HX_CSTRING("mListPlan"));
	outFields->push(HX_CSTRING("mXExpText"));
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
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(HudRight_obj,mStackBlock),HX_CSTRING("mStackBlock")},
	{hx::fsInt,(int)offsetof(HudRight_obj,mMaxStack),HX_CSTRING("mMaxStack")},
	{hx::fsInt,(int)offsetof(HudRight_obj,mX),HX_CSTRING("mX")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(HudRight_obj,mListBlock),HX_CSTRING("mListBlock")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(HudRight_obj,mListPlan),HX_CSTRING("mListPlan")},
	{hx::fsObject /*::core::display::ex::Lable*/ ,(int)offsetof(HudRight_obj,mXExpText),HX_CSTRING("mXExpText")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("mStackBlock"),
	HX_CSTRING("mMaxStack"),
	HX_CSTRING("mX"),
	HX_CSTRING("mListBlock"),
	HX_CSTRING("mListPlan"),
	HX_CSTRING("mXExpText"),
	HX_CSTRING("initValue"),
	HX_CSTRING("init"),
	HX_CSTRING("gameLoop"),
	HX_CSTRING("Update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HudRight_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(HudRight_obj::POS_X,"POS_X");
	HX_MARK_MEMBER_NAME(HudRight_obj::POS_Y,"POS_Y");
	HX_MARK_MEMBER_NAME(HudRight_obj::POS_OFFSET,"POS_OFFSET");
	HX_MARK_MEMBER_NAME(HudRight_obj::BLOCK_OFFSET_X,"BLOCK_OFFSET_X");
	HX_MARK_MEMBER_NAME(HudRight_obj::BLOCK_OFFSET_Y,"BLOCK_OFFSET_Y");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HudRight_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(HudRight_obj::POS_X,"POS_X");
	HX_VISIT_MEMBER_NAME(HudRight_obj::POS_Y,"POS_Y");
	HX_VISIT_MEMBER_NAME(HudRight_obj::POS_OFFSET,"POS_OFFSET");
	HX_VISIT_MEMBER_NAME(HudRight_obj::BLOCK_OFFSET_X,"BLOCK_OFFSET_X");
	HX_VISIT_MEMBER_NAME(HudRight_obj::BLOCK_OFFSET_Y,"BLOCK_OFFSET_Y");
};

#endif

Class HudRight_obj::__mClass;

void HudRight_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("game.gameobject.gameplay.HudRight"), hx::TCanCast< HudRight_obj> ,sStaticFields,sMemberFields,
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

void HudRight_obj::__boot()
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
