#include <hxcpp.h>

#ifndef INCLUDED_game_data_DTItem
#include <game/data/DTItem.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_ByteArray
#include <openfl/_v2/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_IDataInput
#include <openfl/_v2/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_IDataOutput
#include <openfl/_v2/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_IMemoryRange
#include <openfl/_v2/utils/IMemoryRange.h>
#endif
namespace game{
namespace data{

Void DTItem_obj::__construct()
{
HX_STACK_FRAME("game.data.DTItem","new",0xbe177a7d,"game.data.DTItem.new","game/data/DTItem.hx",16,0x91d23b33)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//DTItem_obj::~DTItem_obj() { }

Dynamic DTItem_obj::__CreateEmpty() { return  new DTItem_obj; }
hx::ObjectPtr< DTItem_obj > DTItem_obj::__new()
{  hx::ObjectPtr< DTItem_obj > result = new DTItem_obj();
	result->__construct();
	return result;}

Dynamic DTItem_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DTItem_obj > result = new DTItem_obj();
	result->__construct();
	return result;}

Void DTItem_obj::read( ::openfl::_v2::utils::ByteArray data){
{
		HX_STACK_FRAME("game.data.DTItem","read",0x99187a99,"game.data.DTItem.read","game/data/DTItem.hx",25,0x91d23b33)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(26)
		int _g = data->readInt();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(26)
		this->nID = _g;
		HX_STACK_LINE(27)
		int _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(27)
		{
			HX_STACK_LINE(27)
			int value;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(27)
			if (((data->position < data->length))){
				HX_STACK_LINE(27)
				int pos = (data->position)++;		HX_STACK_VAR(pos,"pos");
				HX_STACK_LINE(27)
				value = data->b->__get(pos);
			}
			else{
				HX_STACK_LINE(27)
				value = data->__throwEOFi();
			}
			HX_STACK_LINE(27)
			if (((((int(value) & int((int)128))) != (int)0))){
				HX_STACK_LINE(27)
				_g1 = (value - (int)256);
			}
			else{
				HX_STACK_LINE(27)
				_g1 = value;
			}
		}
		HX_STACK_LINE(27)
		this->nStorageStatus = _g1;
		HX_STACK_LINE(28)
		int _g2 = data->readInt();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(28)
		this->nExpiredTime = _g2;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DTItem_obj,read,(void))


DTItem_obj::DTItem_obj()
{
}

Dynamic DTItem_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"nID") ) { return nID; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"read") ) { return read_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"nExpiredTime") ) { return nExpiredTime; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"nStorageStatus") ) { return nStorageStatus; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DTItem_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"nID") ) { nID=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"nExpiredTime") ) { nExpiredTime=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"nStorageStatus") ) { nStorageStatus=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DTItem_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("nID"));
	outFields->push(HX_CSTRING("nStorageStatus"));
	outFields->push(HX_CSTRING("nExpiredTime"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(DTItem_obj,nID),HX_CSTRING("nID")},
	{hx::fsInt,(int)offsetof(DTItem_obj,nStorageStatus),HX_CSTRING("nStorageStatus")},
	{hx::fsInt,(int)offsetof(DTItem_obj,nExpiredTime),HX_CSTRING("nExpiredTime")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("nID"),
	HX_CSTRING("nStorageStatus"),
	HX_CSTRING("nExpiredTime"),
	HX_CSTRING("read"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DTItem_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DTItem_obj::__mClass,"__mClass");
};

#endif

Class DTItem_obj::__mClass;

void DTItem_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("game.data.DTItem"), hx::TCanCast< DTItem_obj> ,sStaticFields,sMemberFields,
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

void DTItem_obj::__boot()
{
}

} // end namespace game
} // end namespace data
