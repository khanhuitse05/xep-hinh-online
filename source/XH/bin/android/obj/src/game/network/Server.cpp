#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_core_event_EventEx
#include <core/event/EventEx.h>
#endif
#ifndef INCLUDED_core_util_ByteArrayEx
#include <core/util/ByteArrayEx.h>
#endif
#ifndef INCLUDED_core_util_Log
#include <core/util/Log.h>
#endif
#ifndef INCLUDED_game_network_Server
#include <game/network/Server.h>
#endif
#ifndef INCLUDED_game_network_packet_PacketHeader
#include <game/network/packet/PacketHeader.h>
#endif
#ifndef INCLUDED_game_network_packet_RequestPacket
#include <game/network/packet/RequestPacket.h>
#endif
#ifndef INCLUDED_game_network_packet_ResponsePacket
#include <game/network/packet/ResponsePacket.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__v2_events_Event
#include <openfl/_v2/events/Event.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
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
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_IOErrorEvent
#include <openfl/events/IOErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_ProgressEvent
#include <openfl/events/ProgressEvent.h>
#endif
#ifndef INCLUDED_openfl_events_SecurityErrorEvent
#include <openfl/events/SecurityErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
#ifndef INCLUDED_openfl_net_Socket
#include <openfl/net/Socket.h>
#endif
namespace game{
namespace network{

Void Server_obj::__construct()
{
HX_STACK_FRAME("game.network.Server","new",0x731bc011,"game.network.Server.new","game/network/Server.hx",23,0xeb4e133d)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(30)
	this->_currentHeader = null();
	HX_STACK_LINE(29)
	this->_responsedMapping = ::haxe::ds::IntMap_obj::__new();
	HX_STACK_LINE(34)
	super::__construct(null());
	HX_STACK_LINE(36)
	this->initPacketMapping();
	HX_STACK_LINE(38)
	::openfl::net::Socket _g = ::openfl::net::Socket_obj::__new(null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(38)
	this->_socket = _g;
	HX_STACK_LINE(39)
	this->_socket->set_endian(HX_CSTRING("bigEndian"));
	HX_STACK_LINE(41)
	this->_socket->addEventListener(::openfl::_v2::events::Event_obj::CLOSE,this->onDisconnected_dyn(),null(),null(),null());
	HX_STACK_LINE(42)
	this->_socket->addEventListener(::openfl::events::IOErrorEvent_obj::IO_ERROR,this->onIOError_dyn(),null(),null(),null());
	HX_STACK_LINE(43)
	this->_socket->addEventListener(::openfl::events::SecurityErrorEvent_obj::SECURITY_ERROR,this->onSecurityError_dyn(),null(),null(),null());
	HX_STACK_LINE(44)
	this->_socket->addEventListener(::openfl::_v2::events::Event_obj::CONNECT,this->onConnected_dyn(),null(),null(),null());
	HX_STACK_LINE(45)
	this->_socket->addEventListener(::openfl::events::ProgressEvent_obj::SOCKET_DATA,this->onDataReceived_dyn(),null(),null(),null());
}
;
	return null();
}

//Server_obj::~Server_obj() { }

Dynamic Server_obj::__CreateEmpty() { return  new Server_obj; }
hx::ObjectPtr< Server_obj > Server_obj::__new()
{  hx::ObjectPtr< Server_obj > result = new Server_obj();
	result->__construct();
	return result;}

Dynamic Server_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Server_obj > result = new Server_obj();
	result->__construct();
	return result;}

Void Server_obj::initPacketMapping( ){
{
		HX_STACK_FRAME("game.network.Server","initPacketMapping",0xcc4fdaa7,"game.network.Server.initPacketMapping","game/network/Server.hx",49,0xeb4e133d)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Server_obj,initPacketMapping,(void))

bool Server_obj::isConnected( ){
	HX_STACK_FRAME("game.network.Server","isConnected",0xcd302230,"game.network.Server.isConnected","game/network/Server.hx",55,0xeb4e133d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(55)
	return this->_socket->get_connected();
}


HX_DEFINE_DYNAMIC_FUNC0(Server_obj,isConnected,return )

Void Server_obj::onSecurityError( ::openfl::events::SecurityErrorEvent event){
{
		HX_STACK_FRAME("game.network.Server","onSecurityError",0x1a89c57a,"game.network.Server.onSecurityError","game/network/Server.hx",60,0xeb4e133d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(60)
		::core::util::Log_obj::error(event->text);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Server_obj,onSecurityError,(void))

Void Server_obj::onDisconnected( ::openfl::_v2::events::Event event){
{
		HX_STACK_FRAME("game.network.Server","onDisconnected",0xe9a62769,"game.network.Server.onDisconnected","game/network/Server.hx",64,0xeb4e133d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(65)
		::core::util::Log_obj::info(HX_CSTRING("Server disconnected"));
		HX_STACK_LINE(66)
		this->dispatchEvent(event);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Server_obj,onDisconnected,(void))

Void Server_obj::onIOError( ::openfl::events::IOErrorEvent event){
{
		HX_STACK_FRAME("game.network.Server","onIOError",0x0ebd7534,"game.network.Server.onIOError","game/network/Server.hx",71,0xeb4e133d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(71)
		::core::util::Log_obj::error((HX_CSTRING("io error: ") + event->text));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Server_obj,onIOError,(void))

Void Server_obj::onDataReceived( ::openfl::events::ProgressEvent event){
{
		HX_STACK_FRAME("game.network.Server","onDataReceived",0xaa2e2d19,"game.network.Server.onDataReceived","game/network/Server.hx",76,0xeb4e133d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(76)
		try
		{
		HX_STACK_CATCHABLE(::openfl::errors::Error, 0);
		{
			HX_STACK_LINE(78)
			this->readPacket();
		}
		}
		catch(Dynamic __e){
			if (__e.IsClass< ::openfl::errors::Error >() ){
				HX_STACK_BEGIN_CATCH
				::openfl::errors::Error e = __e;{
					HX_STACK_LINE(82)
					::String _g = e->getStackTrace();		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(82)
					::core::util::Log_obj::error(_g);
				}
			}
			else {
			    HX_STACK_DO_THROW(__e);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Server_obj,onDataReceived,(void))

Void Server_obj::readPacket( ){
{
		HX_STACK_FRAME("game.network.Server","readPacket",0x059913ed,"game.network.Server.readPacket","game/network/Server.hx",87,0xeb4e133d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(88)
		if (((this->_currentHeader == null()))){
			HX_STACK_LINE(89)
			::game::network::packet::PacketHeader _g = this->readHeader();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(89)
			this->_currentHeader = _g;
		}
		struct _Function_1_1{
			inline static bool Block( hx::ObjectPtr< ::game::network::Server_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","game/network/Server.hx",90,0xeb4e133d)
				{
					HX_STACK_LINE(90)
					int a = __this->_socket->get_bytesAvailable();		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(90)
					int b = __this->_currentHeader->length;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(90)
					bool aNeg = (a < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
					HX_STACK_LINE(90)
					bool bNeg = (b < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
					HX_STACK_LINE(90)
					return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((a >= b)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(90)
		if (((  (((this->_currentHeader != null()))) ? bool(_Function_1_1::Block(this)) : bool(false) ))){
			HX_STACK_LINE(92)
			::openfl::_v2::utils::ByteArray data = ::core::util::ByteArrayEx_obj::__new();		HX_STACK_VAR(data,"data");
			struct _Function_2_1{
				inline static bool Block( hx::ObjectPtr< ::game::network::Server_obj > __this){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","game/network/Server.hx",93,0xeb4e133d)
					{
						HX_STACK_LINE(93)
						int a = __this->_currentHeader->length;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(93)
						bool aNeg = (a < (int)0);		HX_STACK_VAR(aNeg,"aNeg");
						HX_STACK_LINE(93)
						bool bNeg = ((int)0 < (int)0);		HX_STACK_VAR(bNeg,"bNeg");
						HX_STACK_LINE(93)
						return (  (((aNeg != bNeg))) ? bool(aNeg) : bool((a > (int)0)) );
					}
					return null();
				}
			};
			HX_STACK_LINE(93)
			if ((_Function_2_1::Block(this))){
				HX_STACK_LINE(94)
				this->_socket->readBytes(data,(int)0,this->_currentHeader->length);
			}
			HX_STACK_LINE(95)
			::Class packetClass = this->_responsedMapping->get(this->_currentHeader->command);		HX_STACK_VAR(packetClass,"packetClass");
			HX_STACK_LINE(96)
			if (((packetClass != null()))){
				HX_STACK_LINE(98)
				::game::network::packet::ResponsePacket packet = ::Type_obj::createInstance(packetClass,Dynamic( Array_obj<Dynamic>::__new()));		HX_STACK_VAR(packet,"packet");
				HX_STACK_LINE(99)
				packet->command = this->_currentHeader->command;
				HX_STACK_LINE(100)
				packet->decode(data);
				HX_STACK_LINE(101)
				::core::event::EventEx _g1 = ::core::event::EventEx_obj::__new(::game::network::Server_obj::SERVER_DATA,packet,null(),null());		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(101)
				this->dispatchEvent(_g1);
				struct _Function_3_1{
					inline static Float Block( hx::ObjectPtr< ::game::network::Server_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","game/network/Server.hx",103,0xeb4e133d)
						{
							HX_STACK_LINE(103)
							int _int = __this->_currentHeader->length;		HX_STACK_VAR(_int,"int");
							HX_STACK_LINE(103)
							return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
						}
						return null();
					}
				};
				HX_STACK_LINE(103)
				::String _g2 = ::Std_obj::string(_Function_3_1::Block(this));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(103)
				::String _g3 = (((HX_CSTRING("Receive packet ==>  command : ") + this->_currentHeader->command) + HX_CSTRING("  --  data length : ")) + _g2);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(103)
				::core::util::Log_obj::info(_g3);
			}
			else{
				HX_STACK_LINE(107)
				::core::util::Log_obj::error((HX_CSTRING(" unhandled packet command: ") + this->_currentHeader->command));
			}
			HX_STACK_LINE(109)
			this->_currentHeader = null();
			HX_STACK_LINE(110)
			int _g4 = this->_socket->get_bytesAvailable();		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(110)
			if (((_g4 > (int)0))){
				HX_STACK_LINE(111)
				this->readPacket();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Server_obj,readPacket,(void))

::game::network::packet::PacketHeader Server_obj::readHeader( ){
	HX_STACK_FRAME("game.network.Server","readHeader",0x1f00c5f2,"game.network.Server.readHeader","game/network/Server.hx",116,0xeb4e133d)
	HX_STACK_THIS(this)
	HX_STACK_LINE(117)
	::game::network::packet::PacketHeader packetHeader = null();		HX_STACK_VAR(packetHeader,"packetHeader");
	HX_STACK_LINE(118)
	int _g = this->_socket->get_bytesAvailable();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(118)
	if (((_g >= (int)4))){
		HX_STACK_LINE(120)
		::game::network::packet::PacketHeader _g1 = ::game::network::packet::PacketHeader_obj::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(120)
		packetHeader = _g1;
		HX_STACK_LINE(123)
		int _g2 = this->_socket->readShort();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(123)
		packetHeader->length = _g2;
		HX_STACK_LINE(124)
		int _g3 = this->_socket->readShort();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(124)
		packetHeader->command = _g3;
	}
	HX_STACK_LINE(127)
	return packetHeader;
}


HX_DEFINE_DYNAMIC_FUNC0(Server_obj,readHeader,return )

Void Server_obj::sendPacket( ::game::network::packet::RequestPacket packet){
{
		HX_STACK_FRAME("game.network.Server","sendPacket",0xad73575f,"game.network.Server.sendPacket","game/network/Server.hx",132,0xeb4e133d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(packet,"packet")
		HX_STACK_LINE(132)
		if ((this->_socket->get_connected())){
			HX_STACK_LINE(135)
			::openfl::_v2::utils::ByteArray data = packet->encode();		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(136)
			::openfl::_v2::utils::ByteArray header = ::openfl::_v2::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(header,"header");
			HX_STACK_LINE(137)
			header->set_endian(HX_CSTRING("bigEndian"));
			HX_STACK_LINE(138)
			header->writeShort(data->length);
			HX_STACK_LINE(139)
			int _g = packet->getCommand();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(139)
			header->writeShort(_g);
			HX_STACK_LINE(140)
			this->_socket->writeByte((int)0);
			HX_STACK_LINE(141)
			this->_socket->writeBytes(header,null(),null());
			HX_STACK_LINE(142)
			this->_socket->writeBytes(data,null(),null());
			HX_STACK_LINE(143)
			this->_socket->flush();
			HX_STACK_LINE(145)
			int _g1 = packet->getCommand();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(145)
			::String _g2 = (HX_CSTRING("Send packet ==>  command : ") + _g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(145)
			::String _g3 = (_g2 + HX_CSTRING("  --  data length : "));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(145)
			::String _g4 = (_g3 + data->length);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(145)
			::core::util::Log_obj::info(_g4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Server_obj,sendPacket,(void))

Void Server_obj::onConnected( ::openfl::_v2::events::Event event){
{
		HX_STACK_FRAME("game.network.Server","onConnected",0x10f24e5b,"game.network.Server.onConnected","game/network/Server.hx",151,0xeb4e133d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(153)
		::core::util::Log_obj::info(HX_CSTRING("Server connected"));
		HX_STACK_LINE(158)
		this->dispatchEvent(event);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Server_obj,onConnected,(void))

Void Server_obj::connect( ::String IP,int port){
{
		HX_STACK_FRAME("game.network.Server","connect",0xa658581b,"game.network.Server.connect","game/network/Server.hx",162,0xeb4e133d)
		HX_STACK_THIS(this)
		HX_STACK_ARG(IP,"IP")
		HX_STACK_ARG(port,"port")
		HX_STACK_LINE(163)
		this->_socket->connect(IP,port);
		HX_STACK_LINE(165)
		::core::util::Log_obj::info((((HX_CSTRING("Connect to server    ") + IP) + HX_CSTRING(" : ")) + port));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Server_obj,connect,(void))

Void Server_obj::disconnect( ){
{
		HX_STACK_FRAME("game.network.Server","disconnect",0x91c93ccb,"game.network.Server.disconnect","game/network/Server.hx",170,0xeb4e133d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(170)
		if ((this->isConnected())){
			HX_STACK_LINE(172)
			::core::util::Log_obj::info(HX_CSTRING("Close connect to server"));
			HX_STACK_LINE(173)
			this->_socket->close();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Server_obj,disconnect,(void))

::String Server_obj::SERVER_DATA;


Server_obj::Server_obj()
{
}

void Server_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Server);
	HX_MARK_MEMBER_NAME(_socket,"_socket");
	HX_MARK_MEMBER_NAME(_responsedMapping,"_responsedMapping");
	HX_MARK_MEMBER_NAME(_currentHeader,"_currentHeader");
	::openfl::_v2::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Server_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_socket,"_socket");
	HX_VISIT_MEMBER_NAME(_responsedMapping,"_responsedMapping");
	HX_VISIT_MEMBER_NAME(_currentHeader,"_currentHeader");
	::openfl::_v2::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Server_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_socket") ) { return _socket; }
		if (HX_FIELD_EQ(inName,"connect") ) { return connect_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onIOError") ) { return onIOError_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"readPacket") ) { return readPacket_dyn(); }
		if (HX_FIELD_EQ(inName,"readHeader") ) { return readHeader_dyn(); }
		if (HX_FIELD_EQ(inName,"sendPacket") ) { return sendPacket_dyn(); }
		if (HX_FIELD_EQ(inName,"disconnect") ) { return disconnect_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"SERVER_DATA") ) { return SERVER_DATA; }
		if (HX_FIELD_EQ(inName,"isConnected") ) { return isConnected_dyn(); }
		if (HX_FIELD_EQ(inName,"onConnected") ) { return onConnected_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_currentHeader") ) { return _currentHeader; }
		if (HX_FIELD_EQ(inName,"onDisconnected") ) { return onDisconnected_dyn(); }
		if (HX_FIELD_EQ(inName,"onDataReceived") ) { return onDataReceived_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onSecurityError") ) { return onSecurityError_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_responsedMapping") ) { return _responsedMapping; }
		if (HX_FIELD_EQ(inName,"initPacketMapping") ) { return initPacketMapping_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Server_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_socket") ) { _socket=inValue.Cast< ::openfl::net::Socket >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"SERVER_DATA") ) { SERVER_DATA=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_currentHeader") ) { _currentHeader=inValue.Cast< ::game::network::packet::PacketHeader >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_responsedMapping") ) { _responsedMapping=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Server_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_socket"));
	outFields->push(HX_CSTRING("_responsedMapping"));
	outFields->push(HX_CSTRING("_currentHeader"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("SERVER_DATA"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::net::Socket*/ ,(int)offsetof(Server_obj,_socket),HX_CSTRING("_socket")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Server_obj,_responsedMapping),HX_CSTRING("_responsedMapping")},
	{hx::fsObject /*::game::network::packet::PacketHeader*/ ,(int)offsetof(Server_obj,_currentHeader),HX_CSTRING("_currentHeader")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_socket"),
	HX_CSTRING("_responsedMapping"),
	HX_CSTRING("_currentHeader"),
	HX_CSTRING("initPacketMapping"),
	HX_CSTRING("isConnected"),
	HX_CSTRING("onSecurityError"),
	HX_CSTRING("onDisconnected"),
	HX_CSTRING("onIOError"),
	HX_CSTRING("onDataReceived"),
	HX_CSTRING("readPacket"),
	HX_CSTRING("readHeader"),
	HX_CSTRING("sendPacket"),
	HX_CSTRING("onConnected"),
	HX_CSTRING("connect"),
	HX_CSTRING("disconnect"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Server_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Server_obj::SERVER_DATA,"SERVER_DATA");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Server_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Server_obj::SERVER_DATA,"SERVER_DATA");
};

#endif

Class Server_obj::__mClass;

void Server_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("game.network.Server"), hx::TCanCast< Server_obj> ,sStaticFields,sMemberFields,
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

void Server_obj::__boot()
{
	SERVER_DATA= HX_CSTRING("server_data");
}

} // end namespace game
} // end namespace network
