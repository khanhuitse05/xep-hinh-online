#include <hxcpp.h>

#ifndef INCLUDED_game_gameobject_brick_Block
#include <game/gameobject/brick/Block.h>
#endif
#ifndef INCLUDED_game_gameobject_brick_Brick
#include <game/gameobject/brick/Brick.h>
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
namespace game{
namespace gameobject{
namespace brick{

Void Block_obj::__construct(int _x,int _y)
{
HX_STACK_FRAME("game.gameobject.brick.Block","new",0x8d58ba31,"game.gameobject.brick.Block.new","game/gameobject/brick/Block.hx",33,0xec50c500)
HX_STACK_THIS(this)
HX_STACK_ARG(_x,"_x")
HX_STACK_ARG(_y,"_y")
{
	HX_STACK_LINE(34)
	super::__construct();
	HX_STACK_LINE(35)
	this->setColumn(_x);
	HX_STACK_LINE(36)
	this->setRow(_y);
	HX_STACK_LINE(37)
	Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(37)
	this->mData = _g;
	HX_STACK_LINE(38)
	Array< int > _g1 = Array_obj< int >::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(38)
	this->mListDirect = _g1;
}
;
	return null();
}

//Block_obj::~Block_obj() { }

Dynamic Block_obj::__CreateEmpty() { return  new Block_obj; }
hx::ObjectPtr< Block_obj > Block_obj::__new(int _x,int _y)
{  hx::ObjectPtr< Block_obj > result = new Block_obj();
	result->__construct(_x,_y);
	return result;}

Dynamic Block_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Block_obj > result = new Block_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Block_obj::init( ){
{
		HX_STACK_FRAME("game.gameobject.brick.Block","init",0x1d02e81f,"game.gameobject.brick.Block.init","game/gameobject/brick/Block.hx",42,0xec50c500)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Block_obj,init,(void))

Void Block_obj::UpdateDirect( ){
{
		HX_STACK_FRAME("game.gameobject.brick.Block","UpdateDirect",0xfaa21241,"game.gameobject.brick.Block.UpdateDirect","game/gameobject/brick/Block.hx",48,0xec50c500)
		HX_STACK_THIS(this)
		HX_STACK_LINE(49)
		int _index = (int)0;		HX_STACK_VAR(_index,"_index");
		HX_STACK_LINE(50)
		{
			HX_STACK_LINE(50)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(50)
			int _g = this->mData->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(50)
			while((true)){
				HX_STACK_LINE(50)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(50)
					break;
				}
				HX_STACK_LINE(50)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(52)
				{
					HX_STACK_LINE(52)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(52)
					int _g2 = this->mData->__get((int)0).StaticCast< Array< int > >()->length;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(52)
					while((true)){
						HX_STACK_LINE(52)
						if ((!(((_g3 < _g2))))){
							HX_STACK_LINE(52)
							break;
						}
						HX_STACK_LINE(52)
						int j = (_g3)++;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(54)
						if (((this->mData->__get(i).StaticCast< Array< int > >()->__get(j) == (int)1))){
							HX_STACK_LINE(56)
							this->mListChild->__get(_index).StaticCast< ::game::gameobject::brick::Brick >()->set_x((j * (int)32));
							HX_STACK_LINE(57)
							this->mListChild->__get(_index).StaticCast< ::game::gameobject::brick::Brick >()->set_y(((int)0 - (((i + (int)1)) * (int)32)));
							HX_STACK_LINE(58)
							(_index)++;
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Block_obj,UpdateDirect,(void))

int Block_obj::MaxWidth( ){
	HX_STACK_FRAME("game.gameobject.brick.Block","MaxWidth",0xca56a571,"game.gameobject.brick.Block.MaxWidth","game/gameobject/brick/Block.hx",66,0xec50c500)
	HX_STACK_THIS(this)
	HX_STACK_LINE(66)
	return this->mData->__get((int)0).StaticCast< Array< int > >()->length;
}


HX_DEFINE_DYNAMIC_FUNC0(Block_obj,MaxWidth,return )

int Block_obj::getHoldColumn( int _column){
	HX_STACK_FRAME("game.gameobject.brick.Block","getHoldColumn",0x6b619abc,"game.gameobject.brick.Block.getHoldColumn","game/gameobject/brick/Block.hx",70,0xec50c500)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_column,"_column")
	HX_STACK_LINE(71)
	{
		HX_STACK_LINE(71)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(71)
		int _g = this->mData->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(71)
		while((true)){
			HX_STACK_LINE(71)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(71)
				break;
			}
			HX_STACK_LINE(71)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(73)
			if (((this->mData->__get(i).StaticCast< Array< int > >()->__get(_column) == (int)1))){
				HX_STACK_LINE(75)
				return (i + (int)1);
			}
		}
	}
	HX_STACK_LINE(78)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC1(Block_obj,getHoldColumn,return )

int Block_obj::getHeightColumn( int _column){
	HX_STACK_FRAME("game.gameobject.brick.Block","getHeightColumn",0xa4d86724,"game.gameobject.brick.Block.getHeightColumn","game/gameobject/brick/Block.hx",81,0xec50c500)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_column,"_column")
	HX_STACK_LINE(82)
	int _temp = (int)0;		HX_STACK_VAR(_temp,"_temp");
	HX_STACK_LINE(83)
	{
		HX_STACK_LINE(83)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(83)
		int _g = this->mData->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(83)
		while((true)){
			HX_STACK_LINE(83)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(83)
				break;
			}
			HX_STACK_LINE(83)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(85)
			if (((this->mData->__get(i).StaticCast< Array< int > >()->__get(_column) == (int)1))){
				HX_STACK_LINE(87)
				(_temp)++;
			}
		}
	}
	HX_STACK_LINE(90)
	return _temp;
}


HX_DEFINE_DYNAMIC_FUNC1(Block_obj,getHeightColumn,return )

Void Block_obj::onTap( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("game.gameobject.brick.Block","onTap",0xb9dfae95,"game.gameobject.brick.Block.onTap","game/gameobject/brick/Block.hx",94,0xec50c500)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(94)
		this->setDirect(hx::Mod(((this->mDirect + (int)1)),(int)4));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Block_obj,onTap,(void))

Void Block_obj::setDirect( int _direct){
{
		HX_STACK_FRAME("game.gameobject.brick.Block","setDirect",0x40315cfc,"game.gameobject.brick.Block.setDirect","game/gameobject/brick/Block.hx",98,0xec50c500)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_direct,"_direct")
		HX_STACK_LINE(98)
		this->mDirect = _direct;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Block_obj,setDirect,(void))

Void Block_obj::setColumn( int value){
{
		HX_STACK_FRAME("game.gameobject.brick.Block","setColumn",0x4a5260a9,"game.gameobject.brick.Block.setColumn","game/gameobject/brick/Block.hx",108,0xec50c500)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(108)
		this->column = value;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Block_obj,setColumn,(void))

int Block_obj::getColumn( ){
	HX_STACK_FRAME("game.gameobject.brick.Block","getColumn",0x6701749d,"game.gameobject.brick.Block.getColumn","game/gameobject/brick/Block.hx",112,0xec50c500)
	HX_STACK_THIS(this)
	HX_STACK_LINE(112)
	return this->column;
}


HX_DEFINE_DYNAMIC_FUNC0(Block_obj,getColumn,return )

Void Block_obj::setRow( int value){
{
		HX_STACK_FRAME("game.gameobject.brick.Block","setRow",0x69c6be67,"game.gameobject.brick.Block.setRow","game/gameobject/brick/Block.hx",121,0xec50c500)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(121)
		this->row = value;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Block_obj,setRow,(void))

int Block_obj::getRow( ){
	HX_STACK_FRAME("game.gameobject.brick.Block","getRow",0x9d7e69f3,"game.gameobject.brick.Block.getRow","game/gameobject/brick/Block.hx",125,0xec50c500)
	HX_STACK_THIS(this)
	HX_STACK_LINE(125)
	return this->row;
}


HX_DEFINE_DYNAMIC_FUNC0(Block_obj,getRow,return )

Void Block_obj::setTypeBrick( int _type){
{
		HX_STACK_FRAME("game.gameobject.brick.Block","setTypeBrick",0x18791e74,"game.gameobject.brick.Block.setTypeBrick","game/gameobject/brick/Block.hx",128,0xec50c500)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_type,"_type")
		HX_STACK_LINE(129)
		this->mTypeBrick = _type;
		HX_STACK_LINE(130)
		{
			HX_STACK_LINE(130)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(130)
			Array< ::Dynamic > _g1 = this->mListChild;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(130)
			while((true)){
				HX_STACK_LINE(130)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(130)
					break;
				}
				HX_STACK_LINE(130)
				::game::gameobject::brick::Brick i = _g1->__get(_g).StaticCast< ::game::gameobject::brick::Brick >();		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(130)
				++(_g);
				HX_STACK_LINE(132)
				i->mType = _type;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Block_obj,setTypeBrick,(void))

Float Block_obj::DURATION;


Block_obj::Block_obj()
{
}

void Block_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Block);
	HX_MARK_MEMBER_NAME(mType,"mType");
	HX_MARK_MEMBER_NAME(mTypeBrick,"mTypeBrick");
	HX_MARK_MEMBER_NAME(mDirect,"mDirect");
	HX_MARK_MEMBER_NAME(mCount,"mCount");
	HX_MARK_MEMBER_NAME(column,"column");
	HX_MARK_MEMBER_NAME(row,"row");
	HX_MARK_MEMBER_NAME(mData,"mData");
	HX_MARK_MEMBER_NAME(mListDirect,"mListDirect");
	HX_MARK_MEMBER_NAME(mListChild,"mListChild");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Block_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mType,"mType");
	HX_VISIT_MEMBER_NAME(mTypeBrick,"mTypeBrick");
	HX_VISIT_MEMBER_NAME(mDirect,"mDirect");
	HX_VISIT_MEMBER_NAME(mCount,"mCount");
	HX_VISIT_MEMBER_NAME(column,"column");
	HX_VISIT_MEMBER_NAME(row,"row");
	HX_VISIT_MEMBER_NAME(mData,"mData");
	HX_VISIT_MEMBER_NAME(mListDirect,"mListDirect");
	HX_VISIT_MEMBER_NAME(mListChild,"mListChild");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Block_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"row") ) { return row; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mType") ) { return mType; }
		if (HX_FIELD_EQ(inName,"mData") ) { return mData; }
		if (HX_FIELD_EQ(inName,"onTap") ) { return onTap_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mCount") ) { return mCount; }
		if (HX_FIELD_EQ(inName,"column") ) { return column; }
		if (HX_FIELD_EQ(inName,"setRow") ) { return setRow_dyn(); }
		if (HX_FIELD_EQ(inName,"getRow") ) { return getRow_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mDirect") ) { return mDirect; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"DURATION") ) { return DURATION; }
		if (HX_FIELD_EQ(inName,"MaxWidth") ) { return MaxWidth_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setDirect") ) { return setDirect_dyn(); }
		if (HX_FIELD_EQ(inName,"setColumn") ) { return setColumn_dyn(); }
		if (HX_FIELD_EQ(inName,"getColumn") ) { return getColumn_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mTypeBrick") ) { return mTypeBrick; }
		if (HX_FIELD_EQ(inName,"mListChild") ) { return mListChild; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mListDirect") ) { return mListDirect; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"UpdateDirect") ) { return UpdateDirect_dyn(); }
		if (HX_FIELD_EQ(inName,"setTypeBrick") ) { return setTypeBrick_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getHoldColumn") ) { return getHoldColumn_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getHeightColumn") ) { return getHeightColumn_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Block_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"row") ) { row=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mType") ) { mType=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mData") ) { mData=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mCount") ) { mCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"column") ) { column=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mDirect") ) { mDirect=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"DURATION") ) { DURATION=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mTypeBrick") ) { mTypeBrick=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mListChild") ) { mListChild=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mListDirect") ) { mListDirect=inValue.Cast< Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Block_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("mType"));
	outFields->push(HX_CSTRING("mTypeBrick"));
	outFields->push(HX_CSTRING("mDirect"));
	outFields->push(HX_CSTRING("mCount"));
	outFields->push(HX_CSTRING("column"));
	outFields->push(HX_CSTRING("row"));
	outFields->push(HX_CSTRING("mData"));
	outFields->push(HX_CSTRING("mListDirect"));
	outFields->push(HX_CSTRING("mListChild"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("DURATION"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Block_obj,mType),HX_CSTRING("mType")},
	{hx::fsInt,(int)offsetof(Block_obj,mTypeBrick),HX_CSTRING("mTypeBrick")},
	{hx::fsInt,(int)offsetof(Block_obj,mDirect),HX_CSTRING("mDirect")},
	{hx::fsInt,(int)offsetof(Block_obj,mCount),HX_CSTRING("mCount")},
	{hx::fsInt,(int)offsetof(Block_obj,column),HX_CSTRING("column")},
	{hx::fsInt,(int)offsetof(Block_obj,row),HX_CSTRING("row")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Block_obj,mData),HX_CSTRING("mData")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Block_obj,mListDirect),HX_CSTRING("mListDirect")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Block_obj,mListChild),HX_CSTRING("mListChild")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("mType"),
	HX_CSTRING("mTypeBrick"),
	HX_CSTRING("mDirect"),
	HX_CSTRING("mCount"),
	HX_CSTRING("column"),
	HX_CSTRING("row"),
	HX_CSTRING("mData"),
	HX_CSTRING("mListDirect"),
	HX_CSTRING("mListChild"),
	HX_CSTRING("init"),
	HX_CSTRING("UpdateDirect"),
	HX_CSTRING("MaxWidth"),
	HX_CSTRING("getHoldColumn"),
	HX_CSTRING("getHeightColumn"),
	HX_CSTRING("onTap"),
	HX_CSTRING("setDirect"),
	HX_CSTRING("setColumn"),
	HX_CSTRING("getColumn"),
	HX_CSTRING("setRow"),
	HX_CSTRING("getRow"),
	HX_CSTRING("setTypeBrick"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Block_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Block_obj::DURATION,"DURATION");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Block_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Block_obj::DURATION,"DURATION");
};

#endif

Class Block_obj::__mClass;

void Block_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("game.gameobject.brick.Block"), hx::TCanCast< Block_obj> ,sStaticFields,sMemberFields,
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

void Block_obj::__boot()
{
	DURATION= 0.4;
}

} // end namespace game
} // end namespace gameobject
} // end namespace brick
