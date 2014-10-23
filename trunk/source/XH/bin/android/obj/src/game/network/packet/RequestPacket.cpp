#include <hxcpp.h>

#ifndef INCLUDED_core_util_ByteArrayEx
#include <core/util/ByteArrayEx.h>
#endif
#ifndef INCLUDED_game_network_packet_RequestPacket
#include <game/network/packet/RequestPacket.h>
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

Void RequestPacket_obj::__construct(int command)
{
HX_STACK_FRAME("game.network.packet.RequestPacket","new",0xfd7c21df,"game.network.packet.RequestPacket.new","game/network/packet/RequestPacket.hx",15,0x533047b0)
HX_STACK_THIS(this)
HX_STACK_ARG(command,"command")
{
	HX_STACK_LINE(15)
	this->_command = command;
}
;
	return null();
}

//RequestPacket_obj::~RequestPacket_obj() { }

Dynamic RequestPacket_obj::__CreateEmpty() { return  new RequestPacket_obj; }
hx::ObjectPtr< RequestPacket_obj > RequestPacket_obj::__new(int command)
{  hx::ObjectPtr< RequestPacket_obj > result = new RequestPacket_obj();
	result->__construct(command);
	return result;}

Dynamic RequestPacket_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RequestPacket_obj > result = new RequestPacket_obj();
	result->__construct(inArgs[0]);
	return result;}

::openfl::_v2::utils::ByteArray RequestPacket_obj::encode( ){
	HX_STACK_FRAME("game.network.packet.RequestPacket","encode",0x83f659f7,"game.network.packet.RequestPacket.encode","game/network/packet/RequestPacket.hx",20,0x533047b0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(20)
	return ::core::util::ByteArrayEx_obj::__new();
}


HX_DEFINE_DYNAMIC_FUNC0(RequestPacket_obj,encode,return )

int RequestPacket_obj::getCommand( ){
	HX_STACK_FRAME("game.network.packet.RequestPacket","getCommand",0x9ec963b6,"game.network.packet.RequestPacket.getCommand","game/network/packet/RequestPacket.hx",25,0x533047b0)
	HX_STACK_THIS(this)
	HX_STACK_LINE(25)
	return this->_command;
}


HX_DEFINE_DYNAMIC_FUNC0(RequestPacket_obj,getCommand,return )


RequestPacket_obj::RequestPacket_obj()
{
}

Dynamic RequestPacket_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"encode") ) { return encode_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_command") ) { return _command; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getCommand") ) { return getCommand_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RequestPacket_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_command") ) { _command=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RequestPacket_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_command"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(RequestPacket_obj,_command),HX_CSTRING("_command")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_command"),
	HX_CSTRING("encode"),
	HX_CSTRING("getCommand"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RequestPacket_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RequestPacket_obj::__mClass,"__mClass");
};

#endif

Class RequestPacket_obj::__mClass;

void RequestPacket_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("game.network.packet.RequestPacket"), hx::TCanCast< RequestPacket_obj> ,sStaticFields,sMemberFields,
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

void RequestPacket_obj::__boot()
{
}

} // end namespace game
} // end namespace network
} // end namespace packet
