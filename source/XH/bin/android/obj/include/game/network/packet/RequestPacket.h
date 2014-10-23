#ifndef INCLUDED_game_network_packet_RequestPacket
#define INCLUDED_game_network_packet_RequestPacket

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(game,network,packet,RequestPacket)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(openfl,_v2,utils,ByteArray)
HX_DECLARE_CLASS3(openfl,_v2,utils,IDataInput)
HX_DECLARE_CLASS3(openfl,_v2,utils,IDataOutput)
HX_DECLARE_CLASS3(openfl,_v2,utils,IMemoryRange)
namespace game{
namespace network{
namespace packet{


class HXCPP_CLASS_ATTRIBUTES  RequestPacket_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef RequestPacket_obj OBJ_;
		RequestPacket_obj();
		Void __construct(int command);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< RequestPacket_obj > __new(int command);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RequestPacket_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("RequestPacket"); }

		int _command;
		virtual ::openfl::_v2::utils::ByteArray encode( );
		Dynamic encode_dyn();

		virtual int getCommand( );
		Dynamic getCommand_dyn();

};

} // end namespace game
} // end namespace network
} // end namespace packet

#endif /* INCLUDED_game_network_packet_RequestPacket */ 
