#include <hxcpp.h>

#ifndef INCLUDED_game_data_DataCenter
#include <game/data/DataCenter.h>
#endif
#ifndef INCLUDED_game_data_PlayerData
#include <game/data/PlayerData.h>
#endif
#ifndef INCLUDED_game_data_gameplay_DTingame
#include <game/data/gameplay/DTingame.h>
#endif
#ifndef INCLUDED_game_data_gameplay_InfoBlock
#include <game/data/gameplay/InfoBlock.h>
#endif
#ifndef INCLUDED_game_gameobject_board_VirtualBlock
#include <game/gameobject/board/VirtualBlock.h>
#endif
#ifndef INCLUDED_game_gameobject_brick_Block
#include <game/gameobject/brick/Block.h>
#endif
#ifndef INCLUDED_game_gameobject_brick_BlockType
#include <game/gameobject/brick/BlockType.h>
#endif
#ifndef INCLUDED_game_gameobject_brick_BrickType
#include <game/gameobject/brick/BrickType.h>
#endif
#ifndef INCLUDED_game_gameobject_brick_Iblock
#include <game/gameobject/brick/Iblock.h>
#endif
#ifndef INCLUDED_game_gameobject_brick_LLblock
#include <game/gameobject/brick/LLblock.h>
#endif
#ifndef INCLUDED_game_gameobject_brick_LRblock
#include <game/gameobject/brick/LRblock.h>
#endif
#ifndef INCLUDED_game_gameobject_brick_Oblock
#include <game/gameobject/brick/Oblock.h>
#endif
#ifndef INCLUDED_game_gameobject_brick_Tblock
#include <game/gameobject/brick/Tblock.h>
#endif
#ifndef INCLUDED_game_gameobject_brick_ZLblock
#include <game/gameobject/brick/ZLblock.h>
#endif
#ifndef INCLUDED_game_gameobject_brick_ZRblock
#include <game/gameobject/brick/ZRblock.h>
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
namespace game{
namespace gameobject{
namespace board{

Void VirtualBlock_obj::__construct(int _type,int _direct)
{
HX_STACK_FRAME("game.gameobject.board.VirtualBlock","new",0x6d83b13d,"game.gameobject.board.VirtualBlock.new","game/gameobject/board/VirtualBlock.hx",24,0x848f1c52)
HX_STACK_THIS(this)
HX_STACK_ARG(_type,"_type")
HX_STACK_ARG(_direct,"_direct")
{
	HX_STACK_LINE(25)
	super::__construct();
	HX_STACK_LINE(26)
	this->mType = _type;
	HX_STACK_LINE(27)
	this->mDirect = _direct;
	HX_STACK_LINE(28)
	int _switch_1 = (_type);
	if (  ( _switch_1==::game::gameobject::brick::BlockType_obj::I)){
		HX_STACK_LINE(31)
		::game::gameobject::brick::Iblock _g = ::game::gameobject::brick::Iblock_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(31)
		this->mBlock = _g;
	}
	else if (  ( _switch_1==::game::gameobject::brick::BlockType_obj::O)){
		HX_STACK_LINE(33)
		::game::gameobject::brick::Oblock _g1 = ::game::gameobject::brick::Oblock_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(33)
		this->mBlock = _g1;
	}
	else if (  ( _switch_1==::game::gameobject::brick::BlockType_obj::T)){
		HX_STACK_LINE(35)
		::game::gameobject::brick::Tblock _g2 = ::game::gameobject::brick::Tblock_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(35)
		this->mBlock = _g2;
	}
	else if (  ( _switch_1==::game::gameobject::brick::BlockType_obj::LL)){
		HX_STACK_LINE(37)
		::game::gameobject::brick::LLblock _g3 = ::game::gameobject::brick::LLblock_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(37)
		this->mBlock = _g3;
	}
	else if (  ( _switch_1==::game::gameobject::brick::BlockType_obj::LR)){
		HX_STACK_LINE(39)
		::game::gameobject::brick::LRblock _g4 = ::game::gameobject::brick::LRblock_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(39)
		this->mBlock = _g4;
	}
	else if (  ( _switch_1==::game::gameobject::brick::BlockType_obj::ZL)){
		HX_STACK_LINE(41)
		::game::gameobject::brick::ZLblock _g5 = ::game::gameobject::brick::ZLblock_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(41)
		this->mBlock = _g5;
	}
	else if (  ( _switch_1==::game::gameobject::brick::BlockType_obj::ZR)){
		HX_STACK_LINE(43)
		::game::gameobject::brick::ZRblock _g6 = ::game::gameobject::brick::ZRblock_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(43)
		this->mBlock = _g6;
	}
	else  {
	}
;
;
	HX_STACK_LINE(46)
	this->mBlock->setDirect(this->mDirect);
	HX_STACK_LINE(47)
	this->addChild(this->mBlock);
	HX_STACK_LINE(48)
	this->mBlock->setTypeBrick(::game::gameobject::brick::BrickType_obj::NON);
	HX_STACK_LINE(49)
	this->addEventListener(::openfl::_v2::events::Event_obj::ENTER_FRAME,this->gameLoop_dyn(),null(),null(),null());
	HX_STACK_LINE(50)
	this->addEventListener(::openfl::_v2::events::MouseEvent_obj::MOUSE_DOWN,this->onTap_dyn(),null(),null(),null());
}
;
	return null();
}

//VirtualBlock_obj::~VirtualBlock_obj() { }

Dynamic VirtualBlock_obj::__CreateEmpty() { return  new VirtualBlock_obj; }
hx::ObjectPtr< VirtualBlock_obj > VirtualBlock_obj::__new(int _type,int _direct)
{  hx::ObjectPtr< VirtualBlock_obj > result = new VirtualBlock_obj();
	result->__construct(_type,_direct);
	return result;}

Dynamic VirtualBlock_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VirtualBlock_obj > result = new VirtualBlock_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void VirtualBlock_obj::gameLoop( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("game.gameobject.board.VirtualBlock","gameLoop",0x6a008579,"game.gameobject.board.VirtualBlock.gameLoop","game/gameobject/board/VirtualBlock.hx",59,0x848f1c52)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VirtualBlock_obj,gameLoop,(void))

Void VirtualBlock_obj::onTap( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("game.gameobject.board.VirtualBlock","onTap",0x33ff80a1,"game.gameobject.board.VirtualBlock.onTap","game/gameobject/board/VirtualBlock.hx",63,0x848f1c52)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(64)
		::game::data::gameplay::InfoBlock _info = ::game::data::gameplay::InfoBlock_obj::__new(this->mType,this->mDirect);		HX_STACK_VAR(_info,"_info");
		HX_STACK_LINE(65)
		_info->mColumn = this->mColumn;
		HX_STACK_LINE(66)
		_info->mRow = this->mRow;
		HX_STACK_LINE(67)
		::game::tnk::Game_obj::data->playerData->mDTingame->onClickVirtual(_info);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VirtualBlock_obj,onTap,(void))

Void VirtualBlock_obj::setGrid( int _column,int _row){
{
		HX_STACK_FRAME("game.gameobject.board.VirtualBlock","setGrid",0x3c1e2ae5,"game.gameobject.board.VirtualBlock.setGrid","game/gameobject/board/VirtualBlock.hx",75,0x848f1c52)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_column,"_column")
		HX_STACK_ARG(_row,"_row")
		HX_STACK_LINE(76)
		this->mColumn = _column;
		HX_STACK_LINE(77)
		this->mRow = _row;
		HX_STACK_LINE(78)
		this->set_x((this->mColumn * (int)32));
		HX_STACK_LINE(79)
		this->set_y((((int)704 - (this->mRow * (int)32)) - (int)32));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(VirtualBlock_obj,setGrid,(void))


VirtualBlock_obj::VirtualBlock_obj()
{
}

void VirtualBlock_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VirtualBlock);
	HX_MARK_MEMBER_NAME(mType,"mType");
	HX_MARK_MEMBER_NAME(mDirect,"mDirect");
	HX_MARK_MEMBER_NAME(mBlock,"mBlock");
	HX_MARK_MEMBER_NAME(mColumn,"mColumn");
	HX_MARK_MEMBER_NAME(mRow,"mRow");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void VirtualBlock_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mType,"mType");
	HX_VISIT_MEMBER_NAME(mDirect,"mDirect");
	HX_VISIT_MEMBER_NAME(mBlock,"mBlock");
	HX_VISIT_MEMBER_NAME(mColumn,"mColumn");
	HX_VISIT_MEMBER_NAME(mRow,"mRow");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic VirtualBlock_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mRow") ) { return mRow; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mType") ) { return mType; }
		if (HX_FIELD_EQ(inName,"onTap") ) { return onTap_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mBlock") ) { return mBlock; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mDirect") ) { return mDirect; }
		if (HX_FIELD_EQ(inName,"mColumn") ) { return mColumn; }
		if (HX_FIELD_EQ(inName,"setGrid") ) { return setGrid_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"gameLoop") ) { return gameLoop_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic VirtualBlock_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mRow") ) { mRow=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mType") ) { mType=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mBlock") ) { mBlock=inValue.Cast< ::game::gameobject::brick::Block >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mDirect") ) { mDirect=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mColumn") ) { mColumn=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VirtualBlock_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("mType"));
	outFields->push(HX_CSTRING("mDirect"));
	outFields->push(HX_CSTRING("mBlock"));
	outFields->push(HX_CSTRING("mColumn"));
	outFields->push(HX_CSTRING("mRow"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(VirtualBlock_obj,mType),HX_CSTRING("mType")},
	{hx::fsInt,(int)offsetof(VirtualBlock_obj,mDirect),HX_CSTRING("mDirect")},
	{hx::fsObject /*::game::gameobject::brick::Block*/ ,(int)offsetof(VirtualBlock_obj,mBlock),HX_CSTRING("mBlock")},
	{hx::fsInt,(int)offsetof(VirtualBlock_obj,mColumn),HX_CSTRING("mColumn")},
	{hx::fsInt,(int)offsetof(VirtualBlock_obj,mRow),HX_CSTRING("mRow")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("mType"),
	HX_CSTRING("mDirect"),
	HX_CSTRING("mBlock"),
	HX_CSTRING("mColumn"),
	HX_CSTRING("mRow"),
	HX_CSTRING("gameLoop"),
	HX_CSTRING("onTap"),
	HX_CSTRING("setGrid"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VirtualBlock_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VirtualBlock_obj::__mClass,"__mClass");
};

#endif

Class VirtualBlock_obj::__mClass;

void VirtualBlock_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("game.gameobject.board.VirtualBlock"), hx::TCanCast< VirtualBlock_obj> ,sStaticFields,sMemberFields,
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

void VirtualBlock_obj::__boot()
{
}

} // end namespace game
} // end namespace gameobject
} // end namespace board
