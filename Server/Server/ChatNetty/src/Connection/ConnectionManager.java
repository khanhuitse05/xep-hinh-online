package Connection;

import java.util.HashMap;

import org.jboss.netty.buffer.ChannelBuffer;
import org.jboss.netty.channel.ChannelHandlerContext;
import org.jboss.netty.channel.MessageEvent;
import org.jboss.netty.util.internal.ConcurrentHashMap;

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

		short cmd = temp.readShort();
		System.out.println("PlayerLogin " + cmd);
		
		/*
		channelBuffer.writeShort(cmd);		
		cmd = channelBuffer.readShort();		
		Integer strUserID = e.getChannel().getId();
		
		if (cmd != 0)
		{
			System.out.println(" 0 ");
			return null;
		}
		*/

		Player newPlayer = new Player(e.getChannel());
		ctx.setAttachment(newPlayer);
		
		AllPlayers.put(newPlayer.getPlayerID(), newPlayer);
		//return channelBuffer;
		return newPlayer.ResLogin();
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
