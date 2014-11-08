#include <hxcpp.h>

#ifndef INCLUDED_game_gameobject_brick_BrickType
#include <game/gameobject/brick/BrickType.h>
#endif
namespace game{
namespace gameobject{
namespace brick{

Void BrickType_obj::__construct()
{
	return null();
}

//BrickType_obj::~BrickType_obj() { }

Dynamic BrickType_obj::__CreateEmpty() { return  new BrickType_obj; }
hx::ObjectPtr< BrickType_obj > BrickType_obj::__new()
{  hx::ObjectPtr< BrickType_obj > result = new BrickType_obj();
	result->__construct();
	return result;}

Dynamic BrickType_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BrickType_obj > result = new BrickType_obj();
	result->__construct();
	return result;}

int BrickType_obj::I;

int BrickType_obj::O;

int BrickType_obj::T;

int BrickType_obj::LL;

int BrickType_obj::LR;

int BrickType_obj::ZL;

int BrickType_obj::ZR;

int BrickType_obj::OTHER;

int BrickType_obj::NON;


BrickType_obj::BrickType_obj()
{
}

Dynamic BrickType_obj::__Field(const ::String &inName,bool inCallProp)
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
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"NON") ) { return NON; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"OTHER") ) { return OTHER; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BrickType_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
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
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"NON") ) { NON=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"OTHER") ) { OTHER=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BrickType_obj::__GetFields(Array< ::String> &outFields)
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
	HX_CSTRING("OTHER"),
	HX_CSTRING("NON"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BrickType_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BrickType_obj::I,"I");
	HX_MARK_MEMBER_NAME(BrickType_obj::O,"O");
	HX_MARK_MEMBER_NAME(BrickType_obj::T,"T");
	HX_MARK_MEMBER_NAME(BrickType_obj::LL,"LL");
	HX_MARK_MEMBER_NAME(BrickType_obj::LR,"LR");
	HX_MARK_MEMBER_NAME(BrickType_obj::ZL,"ZL");
	HX_MARK_MEMBER_NAME(BrickType_obj::ZR,"ZR");
	HX_MARK_MEMBER_NAME(BrickType_obj::OTHER,"OTHER");
	HX_MARK_MEMBER_NAME(BrickType_obj::NON,"NON");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BrickType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BrickType_obj::I,"I");
	HX_VISIT_MEMBER_NAME(BrickType_obj::O,"O");
	HX_VISIT_MEMBER_NAME(BrickType_obj::T,"T");
	HX_VISIT_MEMBER_NAME(BrickType_obj::LL,"LL");
	HX_VISIT_MEMBER_NAME(BrickType_obj::LR,"LR");
	HX_VISIT_MEMBER_NAME(BrickType_obj::ZL,"ZL");
	HX_VISIT_MEMBER_NAME(BrickType_obj::ZR,"ZR");
	HX_VISIT_MEMBER_NAME(BrickType_obj::OTHER,"OTHER");
	HX_VISIT_MEMBER_NAME(BrickType_obj::NON,"NON");
};

#endif

Class BrickType_obj::__mClass;

void BrickType_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("game.gameobject.brick.BrickType"), hx::TCanCast< BrickType_obj> ,sStaticFields,sMemberFields,
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

void BrickType_obj::__boot()
{
	I= (int)1;
	O= (int)2;
	T= (int)3;
	LL= (int)4;
	LR= (int)5;
	ZL= (int)6;
	ZR= (int)7;
	OTHER= (int)8;
	NON= (int)9;
}

} // end namespace game
} // end namespace gameobject
} // end namespace brick
