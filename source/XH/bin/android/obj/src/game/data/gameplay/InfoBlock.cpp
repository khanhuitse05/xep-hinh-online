#include <hxcpp.h>

#ifndef INCLUDED_game_data_gameplay_InfoBlock
#include <game/data/gameplay/InfoBlock.h>
#endif
namespace game{
namespace data{
namespace gameplay{

Void InfoBlock_obj::__construct(int _type,int _direct)
{
HX_STACK_FRAME("game.data.gameplay.InfoBlock","new",0x9b891211,"game.data.gameplay.InfoBlock.new","game/data/gameplay/InfoBlock.hx",15,0x9e5e1fa0)
HX_STACK_THIS(this)
HX_STACK_ARG(_type,"_type")
HX_STACK_ARG(_direct,"_direct")
{
	HX_STACK_LINE(16)
	this->mType = _type;
	HX_STACK_LINE(17)
	this->mDirect = _direct;
}
;
	return null();
}

//InfoBlock_obj::~InfoBlock_obj() { }

Dynamic InfoBlock_obj::__CreateEmpty() { return  new InfoBlock_obj; }
hx::ObjectPtr< InfoBlock_obj > InfoBlock_obj::__new(int _type,int _direct)
{  hx::ObjectPtr< InfoBlock_obj > result = new InfoBlock_obj();
	result->__construct(_type,_direct);
	return result;}

Dynamic InfoBlock_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InfoBlock_obj > result = new InfoBlock_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


InfoBlock_obj::InfoBlock_obj()
{
}

Dynamic InfoBlock_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mRow") ) { return mRow; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mType") ) { return mType; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mDirect") ) { return mDirect; }
		if (HX_FIELD_EQ(inName,"mColumn") ) { return mColumn; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic InfoBlock_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mRow") ) { mRow=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mType") ) { mType=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mDirect") ) { mDirect=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mColumn") ) { mColumn=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void InfoBlock_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("mType"));
	outFields->push(HX_CSTRING("mDirect"));
	outFields->push(HX_CSTRING("mColumn"));
	outFields->push(HX_CSTRING("mRow"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(InfoBlock_obj,mType),HX_CSTRING("mType")},
	{hx::fsInt,(int)offsetof(InfoBlock_obj,mDirect),HX_CSTRING("mDirect")},
	{hx::fsInt,(int)offsetof(InfoBlock_obj,mColumn),HX_CSTRING("mColumn")},
	{hx::fsInt,(int)offsetof(InfoBlock_obj,mRow),HX_CSTRING("mRow")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("mType"),
	HX_CSTRING("mDirect"),
	HX_CSTRING("mColumn"),
	HX_CSTRING("mRow"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InfoBlock_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InfoBlock_obj::__mClass,"__mClass");
};

#endif

Class InfoBlock_obj::__mClass;

void InfoBlock_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("game.data.gameplay.InfoBlock"), hx::TCanCast< InfoBlock_obj> ,sStaticFields,sMemberFields,
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

void InfoBlock_obj::__boot()
{
}

} // end namespace game
} // end namespace data
} // end namespace gameplay
