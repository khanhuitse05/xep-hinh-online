#include <hxcpp.h>

#ifndef INCLUDED_game_data_DTItem
#include <game/data/DTItem.h>
#endif
#ifndef INCLUDED_game_data_InventoryData
#include <game/data/InventoryData.h>
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

Void InventoryData_obj::__construct()
{
HX_STACK_FRAME("game.data.InventoryData","new",0xf79cb470,"game.data.InventoryData.new","game/data/InventoryData.hx",13,0x57ddc560)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//InventoryData_obj::~InventoryData_obj() { }

Dynamic InventoryData_obj::__CreateEmpty() { return  new InventoryData_obj; }
hx::ObjectPtr< InventoryData_obj > InventoryData_obj::__new()
{  hx::ObjectPtr< InventoryData_obj > result = new InventoryData_obj();
	result->__construct();
	return result;}

Dynamic InventoryData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< InventoryData_obj > result = new InventoryData_obj();
	result->__construct();
	return result;}

Void InventoryData_obj::readItem( ::openfl::_v2::utils::ByteArray data){
{
		HX_STACK_FRAME("game.data.InventoryData","readItem",0xd56a0179,"game.data.InventoryData.readItem","game/data/InventoryData.hx",18,0x57ddc560)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(19)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(19)
		this->pItems = _g;
		HX_STACK_LINE(20)
		int length = data->readShort();		HX_STACK_VAR(length,"length");
		HX_STACK_LINE(21)
		{
			HX_STACK_LINE(21)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(21)
			while((true)){
				HX_STACK_LINE(21)
				if ((!(((_g1 < length))))){
					HX_STACK_LINE(21)
					break;
				}
				HX_STACK_LINE(21)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(23)
				::game::data::DTItem pItem = ::game::data::DTItem_obj::__new();		HX_STACK_VAR(pItem,"pItem");
				HX_STACK_LINE(24)
				pItem->read(data);
				HX_STACK_LINE(26)
				this->pItems->push(pItem);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(InventoryData_obj,readItem,(void))


InventoryData_obj::InventoryData_obj()
{
}

void InventoryData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(InventoryData);
	HX_MARK_MEMBER_NAME(pItems,"pItems");
	HX_MARK_END_CLASS();
}

void InventoryData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pItems,"pItems");
}

Dynamic InventoryData_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"pItems") ) { return pItems; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readItem") ) { return readItem_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic InventoryData_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"pItems") ) { pItems=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void InventoryData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("pItems"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(InventoryData_obj,pItems),HX_CSTRING("pItems")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("pItems"),
	HX_CSTRING("readItem"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(InventoryData_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(InventoryData_obj::__mClass,"__mClass");
};

#endif

Class InventoryData_obj::__mClass;

void InventoryData_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("game.data.InventoryData"), hx::TCanCast< InventoryData_obj> ,sStaticFields,sMemberFields,
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

void InventoryData_obj::__boot()
{
}

} // end namespace game
} // end namespace data
