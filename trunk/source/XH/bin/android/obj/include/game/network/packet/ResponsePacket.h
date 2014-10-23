#ifndef INCLUDED_game_network_packet_ResponsePacket
#define INCLUDED_game_network_packet_ResponsePacket

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(game,network,packet,ResponsePacket)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(openfl,_v2,utils,ByteArray)
HX_DECLARE_CLASS3(openfl,_v2,utils,IDataInput)
HX_DECLARE_CLASS3(openfl,_v2,utils,IDataOutput)
HX_DECLARE_CLASS3(openfl,_v2,utils,IMemoryRange)
namespace game{
namespace network{
namespace packet{


class HXCPP_CLASS_ATTRIBUTES  ResponsePacket_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ResponsePacket_obj OBJ_;
		ResponsePacket_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ResponsePacket_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ResponsePacket_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("ResponsePacket"); }

		int command;
		virtual Void decode( ::openfl::_v2::utils::ByteArray data);
		Dynamic decode_dyn();

};

} // end namespace game
} // end namespace network
} // end namespace packet

#endif /* INCLUDED_game_network_packet_ResponsePacket */ 
