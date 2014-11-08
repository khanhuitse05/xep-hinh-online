#include <hxcpp.h>

#ifndef INCLUDED_game_gameobject_brick_Block
#include <game/gameobject/brick/Block.h>
#endif
#ifndef INCLUDED_game_gameobject_brick_BlockDirect
#include <game/gameobject/brick/BlockDirect.h>
#endif
#ifndef INCLUDED_game_gameobject_brick_BlockType
#include <game/gameobject/brick/BlockType.h>
#endif
#ifndef INCLUDED_game_gameobject_brick_Brick
#include <game/gameobject/brick/Brick.h>
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
namespace brick{

Void ZRblock_obj::__construct(int _x,int _y)
{
HX_STACK_FRAME("game.gameobject.brick.ZRblock","new",0xf318fd19,"game.gameobject.brick.ZRblock.new","game/gameobject/brick/ZRblock.hx",12,0x7e620158)
HX_STACK_THIS(this)
HX_STACK_ARG(_x,"_x")
HX_STACK_ARG(_y,"_y")
{
	HX_STACK_LINE(13)
	super::__construct(_x,_y);
	HX_STACK_LINE(14)
	this->mType = ::game::gameobject::brick::BlockType_obj::ZR;
	HX_STACK_LINE(15)
	this->mDirect = ::game::gameobject::brick::BlockDirect_obj::TOP;
	HX_STACK_LINE(16)
	Array< int > _g = Array_obj< int >::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(16)
	this->mListDirect = _g;
	HX_STACK_LINE(17)
	this->mListDirect[(int)0] = ::game::gameobject::brick::BlockDirect_obj::LEFT;
	HX_STACK_LINE(18)
	this->mListDirect[(int)1] = ::game::gameobject::brick::BlockDirect_obj::TOP;
	HX_STACK_LINE(20)
	this->mData = Array_obj< ::Dynamic >::__new().Add(Array_obj< int >::__new().Add((int)0).Add((int)1)).Add(Array_obj< int >::__new().Add((int)1).Add((int)1)).Add(Array_obj< int >::__new().Add((int)1).Add((int)0));
	HX_STACK_LINE(26)
	Array< ::Dynamic > _g1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(26)
	this->mListChild = _g1;
	HX_STACK_LINE(27)
	int _index = (int)0;		HX_STACK_VAR(_index,"_index");
	HX_STACK_LINE(28)
	{
		HX_STACK_LINE(28)
		int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(28)
		int _g2 = this->mData->length;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(28)
		while((true)){
			HX_STACK_LINE(28)
			if ((!(((_g11 < _g2))))){
				HX_STACK_LINE(28)
				break;
			}
			HX_STACK_LINE(28)
			int i = (_g11)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(30)
			{
				HX_STACK_LINE(30)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(30)
				int _g21 = this->mData->__get((int)0).StaticCast< Array< int > >()->length;		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(30)
				while((true)){
					HX_STACK_LINE(30)
					if ((!(((_g3 < _g21))))){
						HX_STACK_LINE(30)
						break;
					}
					HX_STACK_LINE(30)
					int j = (_g3)++;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(32)
					if (((this->mData->__get(i).StaticCast< Array< int > >()->__get(j) == (int)1))){
						HX_STACK_LINE(34)
						::game::gameobject::brick::Brick _brick = ::game::gameobject::brick::Brick_obj::__new();		HX_STACK_VAR(_brick,"_brick");
						HX_STACK_LINE(35)
						_brick->setValue((j * (int)32),((int)0 - (((i + (int)1)) * (int)32)),this->mType);
						HX_STACK_LINE(36)
						this->mListChild->push(_brick);
						HX_STACK_LINE(37)
						this->addChild(_brick);
						HX_STACK_LINE(38)
						(_index)++;
					}
				}
			}
		}
	}
}
;
	return null();
}

//ZRblock_obj::~ZRblock_obj() { }

Dynamic ZRblock_obj::__CreateEmpty() { return  new ZRblock_obj; }
hx::ObjectPtr< ZRblock_obj > ZRblock_obj::__new(int _x,int _y)
{  hx::ObjectPtr< ZRblock_obj > result = new ZRblock_obj();
	result->__construct(_x,_y);
	return result;}

Dynamic ZRblock_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ZRblock_obj > result = new ZRblock_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void ZRblock_obj::setDirect( int _direct){
{
		HX_STACK_FRAME("game.gameobject.brick.ZRblock","setDirect",0xae02bde4,"game.gameobject.brick.ZRblock.setDirect","game/gameobject/brick/ZRblock.hx",45,0x7e620158)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_direct,"_direct")
		HX_STACK_LINE(45)
		int _switch_1 = (_direct);
		if (  ( _switch_1==::game::gameobject::brick::BlockDirect_obj::LEFT)){
			HX_STACK_LINE(48)
			if (((this->mDirect != ::game::gameobject::brick::BlockDirect_obj::RIGHT))){
				HX_STACK_LINE(50)
				this->mData = Array_obj< ::Dynamic >::__new().Add(Array_obj< int >::__new().Add((int)1).Add((int)1).Add((int)0)).Add(Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)1));
				HX_STACK_LINE(55)
				this->UpdateDirect();
			}
			HX_STACK_LINE(58)
			this->mDirect = ::game::gameobject::brick::BlockDirect_obj::LEFT;
		}
		else if (  ( _switch_1==::game::gameobject::brick::BlockDirect_obj::RIGHT)){
			HX_STACK_LINE(60)
			if (((this->mDirect != ::game::gameobject::brick::BlockDirect_obj::LEFT))){
				HX_STACK_LINE(62)
				this->mData = Array_obj< ::Dynamic >::__new().Add(Array_obj< int >::__new().Add((int)1).Add((int)1).Add((int)0)).Add(Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)1));
				HX_STACK_LINE(67)
				this->UpdateDirect();
			}
			HX_STACK_LINE(69)
			this->mDirect = ::game::gameobject::brick::BlockDirect_obj::RIGHT;
		}
		else if (  ( _switch_1==::game::gameobject::brick::BlockDirect_obj::TOP)){
			HX_STACK_LINE(71)
			if (((this->mDirect != ::game::gameobject::brick::BlockDirect_obj::BOTTOM))){
				HX_STACK_LINE(73)
				this->mData = Array_obj< ::Dynamic >::__new().Add(Array_obj< int >::__new().Add((int)0).Add((int)1)).Add(Array_obj< int >::__new().Add((int)1).Add((int)1)).Add(Array_obj< int >::__new().Add((int)1).Add((int)0));
				HX_STACK_LINE(79)
				this->UpdateDirect();
			}
			HX_STACK_LINE(82)
			this->mDirect = ::game::gameobject::brick::BlockDirect_obj::TOP;
		}
		else if (  ( _switch_1==::game::gameobject::brick::BlockDirect_obj::BOTTOM)){
			HX_STACK_LINE(84)
			if (((this->mDirect != ::game::gameobject::brick::BlockDirect_obj::TOP))){
				HX_STACK_LINE(86)
				this->mData = Array_obj< ::Dynamic >::__new().Add(Array_obj< int >::__new().Add((int)0).Add((int)1)).Add(Array_obj< int >::__new().Add((int)1).Add((int)1)).Add(Array_obj< int >::__new().Add((int)1).Add((int)0));
				HX_STACK_LINE(92)
				this->UpdateDirect();
			}
			HX_STACK_LINE(94)
			this->mDirect = ::game::gameobject::brick::BlockDirect_obj::BOTTOM;
		}
		else  {
		}
;
;
	}
return null();
}



ZRblock_obj::ZRblock_obj()
{
}

Dynamic ZRblock_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"setDirect") ) { return setDirect_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ZRblock_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ZRblock_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("setDirect"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ZRblock_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ZRblock_obj::__mClass,"__mClass");
};

#endif

Class ZRblock_obj::__mClass;

void ZRblock_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("game.gameobject.brick.ZRblock"), hx::TCanCast< ZRblock_obj> ,sStaticFields,sMemberFields,
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

void ZRblock_obj::__boot()
{
}

} // end namespace game
} // end namespace gameobject
} // end namespace brick
