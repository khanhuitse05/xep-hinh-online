package Player;

import java.nio.charset.StandardCharsets;
import java.util.UUID;

import org.jboss.netty.buffer.ChannelBuffer;
import org.jboss.netty.buffer.ChannelBuffers;
import org.jboss.netty.channel.Channel;

import Connection.ConnectionManager;
import Database.MongoDBConnection;

public class Player
{
	private final short			LOGIN_BUFFER_SIZE		= 200;
	private final short			SIGNUP_BUFFER_SIZE		= 150;
	private final short			SIGNUP_DEFAULT_ELO		= 1000;
	private final short			FINDMATCH_BUFFER_SIZE	= 200;

	private Channel				ChannelPlayer;
	private Integer				PlayerID;
	private String				LobbyID;
	private PlayerInformation	Information;

	public PlayerInformation getInformation()
	{
		return Information;
	}

	public Player(Channel channel)
	{
		ChannelPlayer = channel;
		PlayerID = ChannelPlayer.getId();
	}

	public Integer getPlayerID()
	{
		return PlayerID;
	}

	public String getLobbyID()
	{
		return LobbyID;
	}

	public void setLobbyID(String lobbyID)
	{
		LobbyID = lobbyID;
	}

	public void HandleBuffer(ChannelBuffer buffer)
	{
		ChannelBuffer tempBuffer = buffer.copy();
		int length = tempBuffer.readShort();
		int command = tempBuffer.readShort();
		//int textLength = tempBuffer.readShort();
		// System.out.println("Sring: length"
		// + textLength
		// + "--index"
		// + tempBuffer.readerIndex()
		// + "--"
		// + tempBuffer.toString(tempBuffer.readerIndex() + 2, textLength,
		// StandardCharsets.UTF_8));
		//tempBuffer.readerIndex(buffer.readerIndex());

		System.out.println("command " + command + "-" + buffer.capacity());

		switch (command)
		{
		case 0:
			// Login
			break;
		case Command.CMD_FINDING_PVP:
			// find match
			ConnectionManager.GetInstance().FindMatch(this);
			break;
		case 2:
			// cancel findmatch
			break;
		case 3:
			// accept match
			break;
		case 4:
			// defuse match
			break;
		case 5:
			// data in game
			// ConnectionManager.GetInstance().ControlData(LobbyIndex, this,
			// buffer);
			break;
		case Command.CMD_REQ_PVP_NEXT:
		case Command.CMD_REQ_PVP_FALL:
		case Command.CMD_PVP_GROW:
		case Command.CMD_PVP_HOLD:
		case Command.CMD_FOUND_PVP:
		case Command.CMD_PVP_ENTER:
			// Set back to the sender
			// HandleIngameNextRes(buffer);

			// test send login
			// WriteToClient(HandleLoginRes(buffer));

			// Test Send to the opponent
			ConnectionManager.GetInstance().CurrentLobby.get(LobbyID)
					.TranfferData(this, buffer);
			break;
		}
	}

	public void TranfferDataToClient(ChannelBuffer data)
	{
		ChannelPlayer.write(data);
	}

	public void FindMatch(boolean find)
	{
		if (find)
		{

		}
		else
		{

		}
	}

	public ChannelBuffer ResLogin()
	{
		Short temp = 5;
		ChannelBuffer bufferOut = ChannelBuffers.buffer(50);
		bufferOut.writeShort(temp);
		//bufferOut.writeShort(arg0);
		return bufferOut;
	}

	public void WriteToClient(ChannelBuffer buffer)
	{
		if (buffer != null)
		{
			ChannelPlayer.write(buffer);
		}
	}

	public void HandleIngameNextRes(ChannelBuffer buffer)
	{
		// System.out.println("Handle ingame request  - SEND BACK ...");
		WriteToClient(buffer);
		System.out.println("SEND BACK ...");
	}

	// Hanle login request
	public ChannelBuffer HandleLoginRes(ChannelBuffer buffer)
	{
		ChannelBuffer tempBuffer = buffer.copy();
		short len = tempBuffer.readShort();
		short cmd = tempBuffer.readShort();
		short lenId = tempBuffer.readShort();
		String id = tempBuffer.toString(tempBuffer.readerIndex() + 2, lenId,
		StandardCharsets.UTF_8);

		// ID only for testing
		//String id = "e6b32074-de6e-42a4-a6a8-64a4a4c993a1";

		// Get data from DB
		// Pass data to playerInformation
		PlayerInformation info = MongoDBConnection.GetInstance().Query(id);

		// Information
		Information = info;
		int idStringSize = info.getIDPlayer().getBytes(StandardCharsets.UTF_8).length;

		System.out.println("name: " + Information.getName() + " elo:"
				+ Information.getElo());

		// Return data
		ChannelBuffer resLogin = ChannelBuffers.buffer(LOGIN_BUFFER_SIZE);

		// Write length of data - include lenght of id(short 2) and id and 2bytes for ELo
		// (string.length)
		resLogin.writeShort(idStringSize + 4);
		resLogin.writeShort(Command.CMD_LOGIN);

		// Write ID length
		resLogin.writeShort(idStringSize);
		// Writeplayer ID
		resLogin.writeBytes(info.getIDPlayer().getBytes(StandardCharsets.UTF_8));
		// Write elo
		resLogin.writeShort(info.getElo());
		return resLogin;
	}

	// Handle sign up request
	public ChannelBuffer HandleSignUpRes(ChannelBuffer buffer)
	{
		ChannelBuffer tempBuffer = buffer.copy();

		// Read length and command
		short len = tempBuffer.readShort();
		short cmd = tempBuffer.readShort();

		// Generate a new ID for new user
		String newPlayerID = UUID.randomUUID().toString();
		int idStringSize = newPlayerID.getBytes(StandardCharsets.UTF_8).length;

		// Use PlayerInformation to store data
		PlayerInformation playerInfo = new PlayerInformation();
		playerInfo.setIDPlayer(newPlayerID);
		playerInfo.setElo(SIGNUP_DEFAULT_ELO);

		// Information
		Information = playerInfo;

		// Update to server
		MongoDBConnection.GetInstance().Insert(playerInfo);

		// Generate response for client
		ChannelBuffer resSignUp = ChannelBuffers.buffer(SIGNUP_BUFFER_SIZE);
		
		// Write header
		// Write length of data - include lenght of id(short 2) and id and 2bytes for ELo
		resSignUp.writeShort(idStringSize + 4);
		resSignUp.writeShort(Command.CMD_LOGIN);
		resSignUp.writeShort(idStringSize);
		resSignUp.writeBytes(newPlayerID.getBytes(StandardCharsets.UTF_8));
		resSignUp.writeShort(playerInfo.getElo());
		
//		System.out.println("SEND BACK ... ID: " + newPlayerID + "-" +playerInfo.getElo() 
//				+"idStringSize:" + idStringSize + "zxx" + newPlayerID.getBytes(StandardCharsets.UTF_8).length +"--" +resSignUp.readableBytes());
		return resSignUp;
	}

	public void HandleStartGame()
	{
		ChannelBuffer resFoundMatch = ChannelBuffers
				.buffer(FINDMATCH_BUFFER_SIZE);
		resFoundMatch.writeShort(0);
		resFoundMatch.writeShort(Command.CMD_FOUND_PVP);

		WriteToClient(resFoundMatch);
	}
}
