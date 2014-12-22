package Connection;

import java.util.HashMap;

import org.jboss.netty.buffer.ChannelBuffer;
import org.jboss.netty.channel.ChannelHandlerContext;
import org.jboss.netty.channel.MessageEvent;
import org.jboss.netty.util.internal.ConcurrentHashMap;

import Player.Command;
import Player.Player;

public class ConnectionManager
{
	private static ConnectionManager					Instance	= new ConnectionManager();
	private static HashMap<Integer, Player>				UserOnline;
	private static HashMap<Integer, Player>				UserFindMatch;
	private static HashMap<Integer, Lobby>				CurrentLobby;
	public static ConcurrentHashMap<Integer, Player>	AllPlayers	= new ConcurrentHashMap();
	//private static MongoDBConnection M

	public static ConnectionManager GetInstance()
	{
		return Instance;
	}

	public ChannelBuffer PlayerLogin(ChannelBuffer channelBuffer,
			ChannelHandlerContext ctx, MessageEvent e)
	{
		ChannelBuffer temp = channelBuffer.copy();

		// read length
		short cmd = temp.readShort();
		// read cmd
		cmd = temp.readShort();
		
		System.out.println("PlayerLogin " + cmd);
		
		
		//channelBuffer.writeShort(cmd);		
		//cmd = channelBuffer.readShort();		
		//Integer strUserID = e.getChannel().getId();
		
		if (cmd != Command.CMD_LOGIN || cmd != Command.CMD_SIGNUP)
		{
			System.out.println(" Wrong !!! command: " + cmd);
			//return null;
		}

		Player newPlayer = new Player(e.getChannel());

		// Kiem tra la user cu hay moi
		if(cmd == Command.CMD_LOGIN)
		//if(cmd == Command.CMD_REQ_PVP_NEXT)
		{
			// Load data
			System.out.println(" Return reslogin");
			ChannelBuffer resLogin = newPlayer.HandleLoginRes(channelBuffer);
			
			ctx.setAttachment(newPlayer);
			AllPlayers.put(newPlayer.getPlayerID(), newPlayer);
			return resLogin;
		}
		else if(cmd == Command.CMD_SIGNUP)
		{
			// Create new data and save in server
			
		}
		
		
		ctx.setAttachment(newPlayer);
		AllPlayers.put(newPlayer.getPlayerID(), newPlayer);
		System.out.println( "number " + AllPlayers.size() + newPlayer.getPlayerID());
		return channelBuffer;
		//return newPlayer.ResLogin();
	}

	public void ControlData(Integer lobbyKey, Player sender, ChannelBuffer data)
	{
		CurrentLobby.get(lobbyKey).TranfferData(sender, data);
	}

	public void FindMatch(Player playerFindMatch)
	{
		UserFindMatch.put(playerFindMatch.getPlayerID(), playerFindMatch);

	}
}
