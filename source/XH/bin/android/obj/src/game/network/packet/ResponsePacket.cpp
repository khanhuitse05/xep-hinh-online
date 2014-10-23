#include <hxcpp.h>

#ifndef INCLUDED_game_network_packet_ResponsePacket
#include <game/network/packet/ResponsePacket.h>
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
namespace network{
namespace packet{

Void ResponsePacket_obj::__construct()
{
	return null();
}

//ResponsePacket_obj::~ResponsePacket_obj() { }

Dynamic ResponsePacket_obj::__CreateEmpty() { return  new ResponsePacket_obj; }
hx::ObjectPtr< ResponsePacket_obj > ResponsePacket_obj::__new()
{  hx::ObjectPtr< ResponsePacket_obj > result = new ResponsePacket_obj();
	result->__construct();
	return result;}

Dynamic ResponsePacket_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ResponsePacket_obj > result = new ResponsePacket_obj();
	result->__construct();
	return result;}

Void ResponsePacket_obj::decode( ::openfl::_v2::utils::ByteArray data){
{
		HX_STACK_FRAME("game.network.packet.ResponsePacket","decode",0x0bf39e49,"game.network.packet.ResponsePacket.decode","game/network/packet/ResponsePacket.hx",14,0xb9ca008c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(data,"data")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ResponsePacket_obj,decode,(void))


ResponsePacket_obj::ResponsePacket_obj()
{
}

Dynamic ResponsePacket_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"decode") ) { return decode_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"command") ) { return command; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ResponsePacket_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"command") ) { command=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ResponsePacket_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("command"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ResponsePacket_obj,command),HX_CSTRING("command")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("command"),
	HX_CSTRING("decode"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ResponsePacket_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ResponsePacket_obj::__mClass,"__mClass");
};

#endif

Class ResponsePacket_obj::__mClass;

void ResponsePacket_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("game.network.packet.ResponsePacket"), hx::TCanCast< ResponsePacket_obj> ,sStaticFields,sMemberFields,
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

void ResponsePacket_obj::__boot()
{
}

} // end namespace game
} // end namespace network
} // end namespace packet
