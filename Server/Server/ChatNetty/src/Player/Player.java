package Player;

import java.nio.charset.StandardCharsets;
import java.util.UUID;

import org.jboss.netty.buffer.ChannelBuffer;
import org.jboss.netty.buffer.ChannelBuffers;
import org.jboss.netty.channel.Channel;

import Connection.ConnectionManager;

public class Player
{
	private final short			LOGIN_BUFFER_SIZE	= 200;

	private Channel				ChannelPlayer;
	private Integer				PlayerID;
	private Integer				LobbyIndex;
	private PlayerInformation	Information;

	public Player(Channel channel)
	{
		ChannelPlayer = channel;
		PlayerID = ChannelPlayer.getId();
	}

	public Integer getPlayerID()
	{
		return PlayerID;
	}

	public void HandleBuffer(ChannelBuffer buffer)
	{
		ChannelBuffer tempBuffer = buffer.copy();
		int length = tempBuffer.readShort();
		int command = tempBuffer.readShort();
		int textLength = tempBuffer.readShort();
		System.out.println("Sring: length"
				+ textLength
				+ "--index"
				+ tempBuffer.readerIndex()
				+ "--"
				+ tempBuffer.toString(tempBuffer.readerIndex() + 2, textLength,
						StandardCharsets.UTF_8));
		tempBuffer.readerIndex(buffer.readerIndex());

		System.out.println("command " + command + "-" + buffer.capacity());

		switch (command)
		{
		case 0:
			// Login
			break;
		case 1:
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
			ConnectionManager.GetInstance().ControlData(LobbyIndex, this,
					buffer);
			break;
		case Command.CMD_REQ_PVP_NEXT:
		case Command.CMD_REQ_PVP_FALL:
		case Command.CMD_PVP_GROW:
		case Command.CMD_PVP_HOLD:
			HandleIngameNextRes(buffer);

			// test send login
			// WriteToClient(HandleLoginRes(buffer));
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
		System.out.println("Handle ingame request  - SEND BACK ...");
		WriteToClient(buffer);
		System.out.println("SEND BACK ...");
	}

	public ChannelBuffer HandleLoginRes(ChannelBuffer buffer)
	{
		ChannelBuffer tempBuffer = buffer.copy();
		short len = tempBuffer.readShort();
		short cmd = tempBuffer.readShort();
		// short lenId = tempBuffer.readShort();
		// String id = tempBuffer.toString(tempBuffer.readerIndex() + 2, lenId,
		// StandardCharsets.UTF_8);

		// PlayerInformation info = MongoDBConnection.GetInstance().Query(id);
		ChannelBuffer resLogin = ChannelBuffers.buffer(LOGIN_BUFFER_SIZE);

		String randomID = UUID.randomUUID().toString();
		int idStringSize = randomID.getBytes(StandardCharsets.UTF_8).length;

		resLogin.writeShort(idStringSize + 2);
		resLogin.writeShort(Command.CMD_LOGIN);

		resLogin.writeShort(idStringSize);
		// resLogin.writeBytes(info.getIDPlayer().getBytes(StandardCharsets.UTF_8));
		resLogin.writeBytes(randomID.getBytes(StandardCharsets.UTF_8));

		System.out.println("readable byte: " + resLogin.readableBytes()
				+ "capacity" + resLogin.capacity() + "ID:" + randomID + "=LEN="
				+ randomID.getBytes(StandardCharsets.UTF_8).length + "=="
				+ idStringSize);

		// Information = info;
		return resLogin;
	}
}
