#include <hxcpp.h>

#ifndef INCLUDED_game_network_packet_PacketHeader
#include <game/network/packet/PacketHeader.h>
#endif
namespace game{
namespace network{
namespace packet{

Void PacketHeader_obj::__construct()
{
HX_STACK_FRAME("game.network.packet.PacketHeader","new",0xa6ca9a31,"game.network.packet.PacketHeader.new","game/network/packet/PacketHeader.hx",13,0x761f5a00)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//PacketHeader_obj::~PacketHeader_obj() { }

Dynamic PacketHeader_obj::__CreateEmpty() { return  new PacketHeader_obj; }
hx::ObjectPtr< PacketHeader_obj > PacketHeader_obj::__new()
{  hx::ObjectPtr< PacketHeader_obj > result = new PacketHeader_obj();
	result->__construct();
	return result;}

Dynamic PacketHeader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PacketHeader_obj > result = new PacketHeader_obj();
	result->__construct();
	return result;}


PacketHeader_obj::PacketHeader_obj()
{
}

Dynamic PacketHeader_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return length; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"command") ) { return command; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PacketHeader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"command") ) { command=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PacketHeader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("command"));
	outFields->push(HX_CSTRING("length"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(PacketHeader_obj,command),HX_CSTRING("command")},
	{hx::fsInt,(int)offsetof(PacketHeader_obj,length),HX_CSTRING("length")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("command"),
	HX_CSTRING("length"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PacketHeader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PacketHeader_obj::__mClass,"__mClass");
};

#endif

Class PacketHeader_obj::__mClass;

void PacketHeader_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("game.network.packet.PacketHeader"), hx::TCanCast< PacketHeader_obj> ,sStaticFields,sMemberFields,
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

void PacketHeader_obj::__boot()
{
}

} // end namespace game
} // end namespace network
} // end namespace packet
