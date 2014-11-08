#include <hxcpp.h>

#ifndef INCLUDED_game_gameobject_brick_BlockType
#include <game/gameobject/brick/BlockType.h>
#endif
namespace game{
namespace gameobject{
namespace brick{

Void BlockType_obj::__construct()
{
	return null();
}

//BlockType_obj::~BlockType_obj() { }

Dynamic BlockType_obj::__CreateEmpty() { return  new BlockType_obj; }
hx::ObjectPtr< BlockType_obj > BlockType_obj::__new()
{  hx::ObjectPtr< BlockType_obj > result = new BlockType_obj();
	result->__construct();
	return result;}

Dynamic BlockType_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BlockType_obj > result = new BlockType_obj();
	result->__construct();
	return result;}

int BlockType_obj::I;

int BlockType_obj::O;

int BlockType_obj::T;

int BlockType_obj::LL;

int BlockType_obj::LR;

int BlockType_obj::ZL;

int BlockType_obj::ZR;


BlockType_obj::BlockType_obj()
{
}

Dynamic BlockType_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"I") ) { return I; }
		if (HX_FIELD_EQ(inName,"O") ) { return O; }
		if (HX_FIELD_EQ(inName,"T") ) { return T; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"LL") ) { return LL; }
		if (HX_FIELD_EQ(inName,"LR") ) { return LR; }
		if (HX_FIELD_EQ(inName,"ZL") ) { return ZL; }
		if (HX_FIELD_EQ(inName,"ZR") ) { return ZR; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BlockType_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"I") ) { I=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"O") ) { O=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"T") ) { T=inValue.Cast< int >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"LL") ) { LL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LR") ) { LR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ZL") ) { ZL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ZR") ) { ZR=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BlockType_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("I"),
	HX_CSTRING("O"),
	HX_CSTRING("T"),
	HX_CSTRING("LL"),
	HX_CSTRING("LR"),
	HX_CSTRING("ZL"),
	HX_CSTRING("ZR"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BlockType_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BlockType_obj::I,"I");
	HX_MARK_MEMBER_NAME(BlockType_obj::O,"O");
	HX_MARK_MEMBER_NAME(BlockType_obj::T,"T");
	HX_MARK_MEMBER_NAME(BlockType_obj::LL,"LL");
	HX_MARK_MEMBER_NAME(BlockType_obj::LR,"LR");
	HX_MARK_MEMBER_NAME(BlockType_obj::ZL,"ZL");
	HX_MARK_MEMBER_NAME(BlockType_obj::ZR,"ZR");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BlockType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BlockType_obj::I,"I");
	HX_VISIT_MEMBER_NAME(BlockType_obj::O,"O");
	HX_VISIT_MEMBER_NAME(BlockType_obj::T,"T");
	HX_VISIT_MEMBER_NAME(BlockType_obj::LL,"LL");
	HX_VISIT_MEMBER_NAME(BlockType_obj::LR,"LR");
	HX_VISIT_MEMBER_NAME(BlockType_obj::ZL,"ZL");
	HX_VISIT_MEMBER_NAME(BlockType_obj::ZR,"ZR");
};

#endif

Class BlockType_obj::__mClass;

void BlockType_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("game.gameobject.brick.BlockType"), hx::TCanCast< BlockType_obj> ,sStaticFields,sMemberFields,
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

void BlockType_obj::__boot()
{
	I= (int)1;
	O= (int)2;
	T= (int)3;
	LL= (int)4;
	LR= (int)5;
	ZL= (int)6;
	ZR= (int)7;
}

} // end namespace game
} // end namespace gameobject
} // end namespace brick
