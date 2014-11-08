#include <hxcpp.h>

#ifndef INCLUDED_game_gameobject_brick_BlockDirect
#include <game/gameobject/brick/BlockDirect.h>
#endif
namespace game{
namespace gameobject{
namespace brick{

Void BlockDirect_obj::__construct()
{
	return null();
}

//BlockDirect_obj::~BlockDirect_obj() { }

Dynamic BlockDirect_obj::__CreateEmpty() { return  new BlockDirect_obj; }
hx::ObjectPtr< BlockDirect_obj > BlockDirect_obj::__new()
{  hx::ObjectPtr< BlockDirect_obj > result = new BlockDirect_obj();
	result->__construct();
	return result;}

Dynamic BlockDirect_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BlockDirect_obj > result = new BlockDirect_obj();
	result->__construct();
	return result;}

int BlockDirect_obj::LEFT;

int BlockDirect_obj::TOP;

int BlockDirect_obj::RIGHT;

int BlockDirect_obj::BOTTOM;


BlockDirect_obj::BlockDirect_obj()
{
}

Dynamic BlockDirect_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"TOP") ) { return TOP; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"LEFT") ) { return LEFT; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"RIGHT") ) { return RIGHT; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"BOTTOM") ) { return BOTTOM; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BlockDirect_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"TOP") ) { TOP=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"LEFT") ) { LEFT=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"RIGHT") ) { RIGHT=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"BOTTOM") ) { BOTTOM=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BlockDirect_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("LEFT"),
	HX_CSTRING("TOP"),
	HX_CSTRING("RIGHT"),
	HX_CSTRING("BOTTOM"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BlockDirect_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BlockDirect_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(BlockDirect_obj::TOP,"TOP");
	HX_MARK_MEMBER_NAME(BlockDirect_obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(BlockDirect_obj::BOTTOM,"BOTTOM");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BlockDirect_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BlockDirect_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(BlockDirect_obj::TOP,"TOP");
	HX_VISIT_MEMBER_NAME(BlockDirect_obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(BlockDirect_obj::BOTTOM,"BOTTOM");
};

#endif

Class BlockDirect_obj::__mClass;

void BlockDirect_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("game.gameobject.brick.BlockDirect"), hx::TCanCast< BlockDirect_obj> ,sStaticFields,sMemberFields,
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

void BlockDirect_obj::__boot()
{
	LEFT= (int)0;
	TOP= (int)1;
	RIGHT= (int)2;
	BOTTOM= (int)3;
}

} // end namespace game
} // end namespace gameobject
} // end namespace brick
