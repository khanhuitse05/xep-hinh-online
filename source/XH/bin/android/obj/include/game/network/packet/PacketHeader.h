#ifndef INCLUDED_game_network_packet_PacketHeader
#define INCLUDED_game_network_packet_PacketHeader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(game,network,packet,PacketHeader)
namespace game{
namespace network{
namespace packet{


class HXCPP_CLASS_ATTRIBUTES  PacketHeader_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PacketHeader_obj OBJ_;
		PacketHeader_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PacketHeader_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PacketHeader_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("PacketHeader"); }

		int command;
		int length;
};

} // end namespace game
} // end namespace network
} // end namespace packet

#endif /* INCLUDED_game_network_packet_PacketHeader */ 
