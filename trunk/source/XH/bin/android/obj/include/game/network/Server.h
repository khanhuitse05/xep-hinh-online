#ifndef INCLUDED_game_network_Server
#define INCLUDED_game_network_Server

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/events/EventDispatcher.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(game,network,Server)
HX_DECLARE_CLASS3(game,network,packet,PacketHeader)
HX_DECLARE_CLASS3(game,network,packet,RequestPacket)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS3(openfl,_v2,events,Event)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,ErrorEvent)
HX_DECLARE_CLASS2(openfl,events,IOErrorEvent)
HX_DECLARE_CLASS2(openfl,events,ProgressEvent)
HX_DECLARE_CLASS2(openfl,events,SecurityErrorEvent)
HX_DECLARE_CLASS2(openfl,events,TextEvent)
HX_DECLARE_CLASS2(openfl,net,Socket)
namespace game{
namespace network{


class HXCPP_CLASS_ATTRIBUTES  Server_obj : public ::openfl::_v2::events::EventDispatcher_obj{
	public:
		typedef ::openfl::_v2::events::EventDispatcher_obj super;
		typedef Server_obj OBJ_;
		Server_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Server_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Server_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Server"); }

		::openfl::net::Socket _socket;
		::haxe::ds::IntMap _responsedMapping;
		::game::network::packet::PacketHeader _currentHeader;
		virtual Void initPacketMapping( );
		Dynamic initPacketMapping_dyn();

		virtual bool isConnected( );
		Dynamic isConnected_dyn();

		virtual Void onSecurityError( ::openfl::events::SecurityErrorEvent event);
		Dynamic onSecurityError_dyn();

		virtual Void onDisconnected( ::openfl::_v2::events::Event event);
		Dynamic onDisconnected_dyn();

		virtual Void onIOError( ::openfl::events::IOErrorEvent event);
		Dynamic onIOError_dyn();

		virtual Void onDataReceived( ::openfl::events::ProgressEvent event);
		Dynamic onDataReceived_dyn();

		virtual Void readPacket( );
		Dynamic readPacket_dyn();

		virtual ::game::network::packet::PacketHeader readHeader( );
		Dynamic readHeader_dyn();

		virtual Void sendPacket( ::game::network::packet::RequestPacket packet);
		Dynamic sendPacket_dyn();

		virtual Void onConnected( ::openfl::_v2::events::Event event);
		Dynamic onConnected_dyn();

		virtual Void connect( ::String IP,int port);
		Dynamic connect_dyn();

		virtual Void disconnect( );
		Dynamic disconnect_dyn();

		static ::String SERVER_DATA;
};

} // end namespace game
} // end namespace network

#endif /* INCLUDED_game_network_Server */ 
