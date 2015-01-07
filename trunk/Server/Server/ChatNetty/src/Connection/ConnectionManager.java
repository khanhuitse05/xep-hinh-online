package Connection;

import java.util.HashMap;
import java.util.Map.Entry;

import org.jboss.netty.buffer.ChannelBuffer;
import org.jboss.netty.channel.ChannelHandlerContext;
import org.jboss.netty.channel.MessageEvent;
import org.jboss.netty.util.internal.ConcurrentHashMap;

import GamePlay.Command;
import Player.Player;

public class ConnectionManager
{
	private static ConnectionManager					Instance		= new ConnectionManager();
	private static HashMap<Integer, Player>				UserOnline;
	private static ConcurrentHashMap<Integer, Player>	UserFindMatch	= new ConcurrentHashMap<Integer, Player>();
	public static ConcurrentHashMap<String, Lobby>		CurrentLobby	= new ConcurrentHashMap<String, Lobby>();
	public static ConcurrentHashMap<Integer, Player>	AllPlayers		= new ConcurrentHashMap();

	// private static MongoDBConnection M

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

		// channelBuffer.writeShort(cmd);
		// cmd = channelBuffer.readShort();
		// Integer strUserID = e.getChannel().getId();

		if (cmd != Command.CMD_LOGIN || cmd != Command.CMD_SIGNUP)
		{
			System.out.println(" Wrong !!! command: " + cmd);
		}

		Player newPlayer = new Player(e.getChannel());

		// Kiem tra la user cu hay moi
		if (cmd == Command.CMD_LOGIN)
		// if(cmd == Command.CMD_REQ_PVP_NEXT)
		{
			// Load data
			System.out.println(" Return reslogin");
			ChannelBuffer resLogin = newPlayer.HandleLoginRes(channelBuffer);

			ctx.setAttachment(newPlayer);
			AllPlayers.put(newPlayer.getPlayerID(), newPlayer);

			// only for testing
			// test send data between 2 device - delete after test
			// JoinLobby(newPlayer);

			return resLogin;
		}
		else if (cmd == Command.CMD_SIGNUP)
		{
			// Create new data and save in server
			System.out.println(" Handle sign up");
			ChannelBuffer resSignUp = newPlayer.HandleSignUpRes(channelBuffer);

			ctx.setAttachment(newPlayer);
			AllPlayers.put(newPlayer.getPlayerID(), newPlayer);
			return resSignUp;
		}

		ctx.setAttachment(newPlayer);
		AllPlayers.put(newPlayer.getPlayerID(), newPlayer);
		System.out.println("number " + AllPlayers.size()
				+ newPlayer.getPlayerID());
		return channelBuffer;
		// return newPlayer.ResLogin();
	}

	public void ControlData(Integer lobbyKey, Player sender, ChannelBuffer data)
	{
		CurrentLobby.get(lobbyKey).TranfferData(sender, data);
	}

	public void FindMatch(Player playerFindMatch)
	{
		// Put user in a list
		UserFindMatch.put(playerFindMatch.getPlayerID(), playerFindMatch);
		
		// Find match
		JoinLobby(playerFindMatch);
	}

	// Player join lobby
	public void JoinLobby(Player player)
	{
		final StackTraceElement[] ste = Thread.currentThread().getStackTrace();
		
		System.out.print("=> Current thread : " + ste[ste.length - 1].getMethodName());
		
		boolean isJoined = false;
		// Loop in current lobby for searching empty slot
		for (Entry<String, Lobby> entry : CurrentLobby.entrySet())
		{
			Lobby tempLobby = entry.getValue();
			// Lobby is full
			System.out.print("Lobby id = " + tempLobby.getLobbyID() + " isFull = " + tempLobby.LoobyFull());
			if (tempLobby.LoobyFull())
			{
				System.out.print("Full");
				continue;
			}
			else
			{
				// Join
				// if(tempLobby.EnterLobby(player))
				// For testing join with elo
				if (tempLobby.EnterLobbyWithElo(player))
				{
					System.out.print("Enter");
					isJoined = true;
					return;
				}
				System.out.print("CAN NOT ENTER");
			}
		}

		// All rooms are full -> create new lobby
		if (!isJoined)
		{
			Lobby lobby = new Lobby();
			// Join new lobby
			// lobby.EnterLobby(player);
			// For testing join with elo
			lobby.EnterLobbyWithElo(player);
			isJoined = true;
			// Put new lobby in CurrentLobby
			CurrentLobby.put(lobby.getLobbyID(), lobby);
			System.out.print("Joning: isJoined = " + isJoined);
		}
	}
}
