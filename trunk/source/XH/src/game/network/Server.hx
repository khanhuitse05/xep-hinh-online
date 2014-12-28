package game.network;
import core.event.EventEx;
import core.util.ByteArrayEx;
import core.util.Log;
import game.network.packet.Command;
import game.network.packet.PacketHeader;
import game.network.packet.RequestPacket;
import game.network.packet.response.pvp.*;
import game.network.packet.response.user.*;
import game.network.packet.ResponsePacket;
import game.tnk.Game;
import openfl.errors.Error;
import openfl.events.Event;
import openfl.events.EventDispatcher;
import openfl.events.IOErrorEvent;
import openfl.events.ProgressEvent;
import openfl.events.SecurityErrorEvent;
import openfl.net.Socket;
import openfl.utils.ByteArray;
import openfl.utils.Endian;

/**
 * ...
 * @author KhanhTN
 */
class Server extends EventDispatcher
{

    static public var SERVER_DATA:String = "server_data";
    
    private var _socket : Socket;
    private var _responsedMapping:Map<Int, Class<Dynamic>> = new Map<Int, Class<Dynamic>>();    
    private var _currentHeader:PacketHeader = null;
        
    public function new() 
    {
        super();
        
        initPacketMapping();
        
        _socket = new Socket();
        _socket.endian = Endian.BIG_ENDIAN;
        
        _socket.addEventListener(Event.CLOSE, onDisconnected);
        _socket.addEventListener(IOErrorEvent.IO_ERROR, onIOError);
        _socket.addEventListener(SecurityErrorEvent.SECURITY_ERROR, onSecurityError);
        _socket.addEventListener(Event.CONNECT, onConnected);
        _socket.addEventListener(ProgressEvent.SOCKET_DATA, onDataReceived);
    }
    
    private function initPacketMapping()
    {
        _responsedMapping[Command.CMD_LOGIN]                       	= LoginResponse;
        _responsedMapping[Command.CMD_SIGNUP]                    	= LoginResponse;
        
        //PvP
        _responsedMapping[Command.CMD_PVP_ENTER]                   	= RespPvPEnter;
        _responsedMapping[Command.CMD_PVP_WIN]                     	= RespPvPWin;
        _responsedMapping[Command.CMD_PVP_LOSE]                    	= RespPvPLose;
        _responsedMapping[Command.CMD_PVP_FOUND]                 	= RespPvPFound;
        _responsedMapping[Command.CMD_PVP_NEXT]                		= RespPvPNext;
        _responsedMapping[Command.CMD_PVP_GROW]                    	= RespPvPGrow;
        _responsedMapping[Command.CMD_PVP_SEND]                    	= RespPvPSendGift;
        _responsedMapping[Command.CMD_PVP_HOLD]    		        	= RespPvPHold;
        _responsedMapping[Command.CMD_PVP_FALL]	        	    	= RespPvPFall;
		// Statistics
    }
    
    public function isConnected():Bool
    { 
        return _socket.connected;
    }
        
    private function onSecurityError(event:SecurityErrorEvent):Void
    {
        Log.error(event.text);
    }
    
    private function onDisconnected(event:Event):Void
    {
        Log.info("Server disconnected");
        Game.data.playerData.dataGame.online = false;
        this.dispatchEvent(event);
    }
    
    private function onIOError(event:IOErrorEvent):Void
    {
        Log.error("io error: " + event.text);
		Game.data.playerData.dataGame.online = false;
    }
    
    private function onDataReceived(event:ProgressEvent):Void    
    {
        try
        {
            readPacket();
        }
        catch(e:Error)
        {
            Log.error(e.getStackTrace());
        }
    }
    
    private function readPacket():Void
    {
		trace("Receive packet");
        if (_currentHeader == null) 
            _currentHeader = readHeader();
        if (_currentHeader != null && _socket.bytesAvailable >= _currentHeader.length)
        {
            var data:ByteArray = new ByteArrayEx();
            if(_currentHeader.length > 0)
                _socket.readBytes(data, 0, _currentHeader.length);
            var packetClass:Class<Dynamic> = _responsedMapping[_currentHeader.command];
            if (packetClass != null)
            {
                var packet:ResponsePacket = Type.createInstance(packetClass, []);
                packet.command = _currentHeader.command;
                packet.decode(data);
                dispatchEvent(new EventEx(SERVER_DATA, packet));
                
                Log.info("Receive packet ==>  command : " + _currentHeader.command + "  --  data length : " + _currentHeader.length);
            }
            else
            {
                Log.error(" unhandled packet command: " + _currentHeader.command);
            }
            _currentHeader = null;
            if (_socket.bytesAvailable > 0) 
                readPacket();
        }
    }
    
    private function readHeader():PacketHeader
    {
        var packetHeader:PacketHeader = null;
        //if (_socket.bytesAvailable >= 4)
        {
            packetHeader = new PacketHeader();
            packetHeader.length = _socket.readShort();
            packetHeader.command = _socket.readShort();
        }
        return packetHeader;
    }
    
    public function sendPacket(packet:RequestPacket):Void
    {
        if(_socket.connected)
        {
            
            var data:ByteArray = packet.encode();
            var header:ByteArray = new ByteArray();
            header.endian = Endian.BIG_ENDIAN;
            header.writeShort(data.length);
            header.writeShort(packet.getCommand());
            //_socket.writeByte(0);            //for server recognize this packet is not a request policy file of flash player 
            _socket.writeBytes(header);
            _socket.writeBytes(data);
            _socket.flush();
            
            Log.info("Send packet ==>  command : " + packet.getCommand() + "  --  data length : " + data.length);
            
        }
    }
    
    private function onConnected(event:Event):Void
    {
        
        Log.info("Server connected");
        Game.data.playerData.dataGame.online = true;
        dispatchEvent(event);
    }
    
    public function connect(IP:String, port:Int):Void
    {
        _socket.connect(IP, port);
        Game.data.playerData.dataGame.online = true;
        Log.info("Connect to server    " + IP + " : " + port);
    }
    
    public function disconnect():Void
    {
        if (isConnected())
        {
            Log.info("Close connect to server");
			Game.data.playerData.dataGame.online = false;			
            _socket.close();
        }
    }
}