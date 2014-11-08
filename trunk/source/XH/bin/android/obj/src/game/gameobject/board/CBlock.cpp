#include <hxcpp.h>

#ifndef INCLUDED_game_gameobject_board_CBlock
#include <game/gameobject/board/CBlock.h>
#endif
#ifndef INCLUDED_game_gameobject_brick_Block
#include <game/gameobject/brick/Block.h>
#endif
#ifndef INCLUDED_game_gameobject_brick_BlockType
#include <game/gameobject/brick/BlockType.h>
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
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
namespace game{
namespace gameobject{
namespace board{

Void CBlock_obj::__construct(int _type,int _direct)
{
HX_STACK_FRAME("game.gameobject.board.CBlock","new",0xc4612725,"game.gameobject.board.CBlock.new","game/gameobject/board/CBlock.hx",25,0x0596222a)
HX_STACK_THIS(this)
HX_STACK_ARG(_type,"_type")
HX_STACK_ARG(_direct,"_direct")
{
	HX_STACK_LINE(26)
	super::__construct();
	HX_STACK_LINE(27)
	this->mParentX = (int)0;
	HX_STACK_LINE(28)
	this->mParentY = (int)0;
	HX_STACK_LINE(29)
	this->mType = _type;
	HX_STACK_LINE(30)
	this->mDirect = _direct;
	HX_STACK_LINE(31)
	int _switch_1 = (_type);
	if (  ( _switch_1==::game::gameobject::brick::BlockType_obj::I)){
		HX_STACK_LINE(34)
		::game::gameobject::brick::Iblock _g = ::game::gameobject::brick::Iblock_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(34)
		this->mBlock = _g;
	}
	else if (  ( _switch_1==::game::gameobject::brick::BlockType_obj::O)){
		HX_STACK_LINE(36)
		::game::gameobject::brick::Oblock _g1 = ::game::gameobject::brick::Oblock_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(36)
		this->mBlock = _g1;
	}
	else if (  ( _switch_1==::game::gameobject::brick::BlockType_obj::T)){
		HX_STACK_LINE(38)
		::game::gameobject::brick::Tblock _g2 = ::game::gameobject::brick::Tblock_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(38)
		this->mBlock = _g2;
	}
	else if (  ( _switch_1==::game::gameobject::brick::BlockType_obj::LL)){
		HX_STACK_LINE(40)
		::game::gameobject::brick::LLblock _g3 = ::game::gameobject::brick::LLblock_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(40)
		this->mBlock = _g3;
	}
	else if (  ( _switch_1==::game::gameobject::brick::BlockType_obj::LR)){
		HX_STACK_LINE(42)
		::game::gameobject::brick::LRblock _g4 = ::game::gameobject::brick::LRblock_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(42)
		this->mBlock = _g4;
	}
	else if (  ( _switch_1==::game::gameobject::brick::BlockType_obj::ZL)){
		HX_STACK_LINE(44)
		::game::gameobject::brick::ZLblock _g5 = ::game::gameobject::brick::ZLblock_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(44)
		this->mBlock = _g5;
	}
	else if (  ( _switch_1==::game::gameobject::brick::BlockType_obj::ZR)){
		HX_STACK_LINE(46)
		::game::gameobject::brick::ZRblock _g6 = ::game::gameobject::brick::ZRblock_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(46)
		this->mBlock = _g6;
	}
	else  {
	}
;
;
	HX_STACK_LINE(49)
	this->mBlock->setDirect(this->mDirect);
	HX_STACK_LINE(50)
	this->addChild(this->mBlock);
}
;
	return null();
}

//CBlock_obj::~CBlock_obj() { }

Dynamic CBlock_obj::__CreateEmpty() { return  new CBlock_obj; }
hx::ObjectPtr< CBlock_obj > CBlock_obj::__new(int _type,int _direct)
{  hx::ObjectPtr< CBlock_obj > result = new CBlock_obj();
	result->__construct(_type,_direct);
	return result;}

Dynamic CBlock_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CBlock_obj > result = new CBlock_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void CBlock_obj::setParentPos( int _pX,int _pY){
{
		HX_STACK_FRAME("game.gameobject.board.CBlock","setParentPos",0x73890f23,"game.gameobject.board.CBlock.setParentPos","game/gameobject/board/CBlock.hx",59,0x0596222a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_pX,"_pX")
		HX_STACK_ARG(_pY,"_pY")
		HX_STACK_LINE(60)
		this->mParentX = _pX;
		HX_STACK_LINE(61)
		this->mParentY = _pY;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(CBlock_obj,setParentPos,(void))

Void CBlock_obj::setGrid( int _column,int _row){
{
		HX_STACK_FRAME("game.gameobject.board.CBlock","setGrid",0x3c50b4cd,"game.gameobject.board.CBlock.setGrid","game/gameobject/board/CBlock.hx",69,0x0596222a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_column,"_column")
		HX_STACK_ARG(_row,"_row")
		HX_STACK_LINE(70)
		this->mColumn = _column;
		HX_STACK_LINE(71)
		this->mRow = _row;
		HX_STACK_LINE(72)
		this->set_x(((this->mColumn * (int)32) + this->mParentX));
		HX_STACK_LINE(73)
		this->set_y(((((int)704 - (this->mRow * (int)32)) + this->mParentY) - (int)32));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(CBlock_obj,setGrid,(void))


CBlock_obj::CBlock_obj()
{
}

void CBlock_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CBlock);
	HX_MARK_MEMBER_NAME(mType,"mType");
	HX_MARK_MEMBER_NAME(mDirect,"mDirect");
	HX_MARK_MEMBER_NAME(mBlock,"mBlock");
	HX_MARK_MEMBER_NAME(mParentX,"mParentX");
	HX_MARK_MEMBER_NAME(mParentY,"mParentY");
	HX_MARK_MEMBER_NAME(mColumn,"mColumn");
	HX_MARK_MEMBER_NAME(mRow,"mRow");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CBlock_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mType,"mType");
	HX_VISIT_MEMBER_NAME(mDirect,"mDirect");
	HX_VISIT_MEMBER_NAME(mBlock,"mBlock");
	HX_VISIT_MEMBER_NAME(mParentX,"mParentX");
	HX_VISIT_MEMBER_NAME(mParentY,"mParentY");
	HX_VISIT_MEMBER_NAME(mColumn,"mColumn");
	HX_VISIT_MEMBER_NAME(mRow,"mRow");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic CBlock_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mRow") ) { return mRow; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mType") ) { return mType; }
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
		if (HX_FIELD_EQ(inName,"mParentX") ) { return mParentX; }
		if (HX_FIELD_EQ(inName,"mParentY") ) { return mParentY; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setParentPos") ) { return setParentPos_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CBlock_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
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
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mParentX") ) { mParentX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mParentY") ) { mParentY=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CBlock_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("mType"));
	outFields->push(HX_CSTRING("mDirect"));
	outFields->push(HX_CSTRING("mBlock"));
	outFields->push(HX_CSTRING("mParentX"));
	outFields->push(HX_CSTRING("mParentY"));
	outFields->push(HX_CSTRING("mColumn"));
	outFields->push(HX_CSTRING("mRow"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(CBlock_obj,mType),HX_CSTRING("mType")},
	{hx::fsInt,(int)offsetof(CBlock_obj,mDirect),HX_CSTRING("mDirect")},
	{hx::fsObject /*::game::gameobject::brick::Block*/ ,(int)offsetof(CBlock_obj,mBlock),HX_CSTRING("mBlock")},
	{hx::fsInt,(int)offsetof(CBlock_obj,mParentX),HX_CSTRING("mParentX")},
	{hx::fsInt,(int)offsetof(CBlock_obj,mParentY),HX_CSTRING("mParentY")},
	{hx::fsInt,(int)offsetof(CBlock_obj,mColumn),HX_CSTRING("mColumn")},
	{hx::fsInt,(int)offsetof(CBlock_obj,mRow),HX_CSTRING("mRow")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("mType"),
	HX_CSTRING("mDirect"),
	HX_CSTRING("mBlock"),
	HX_CSTRING("mParentX"),
	HX_CSTRING("mParentY"),
	HX_CSTRING("mColumn"),
	HX_CSTRING("mRow"),
	HX_CSTRING("setParentPos"),
	HX_CSTRING("setGrid"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CBlock_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CBlock_obj::__mClass,"__mClass");
};

#endif

Class CBlock_obj::__mClass;

void CBlock_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("game.gameobject.board.CBlock"), hx::TCanCast< CBlock_obj> ,sStaticFields,sMemberFields,
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

void CBlock_obj::__boot()
{
}

} // end namespace game
} // end namespace gameobject
} // end namespace board
