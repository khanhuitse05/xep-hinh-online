package Player;

import org.jboss.netty.buffer.ChannelBuffer;
import org.jboss.netty.buffer.ChannelBuffers;
import org.jboss.netty.channel.Channel;

import Connection.ConnectionManager;

public class Player
{
	private Channel	ChannelPlayer;
	private Integer	PlayerID;
	private Integer	LobbyIndex;

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
		System.out.println("command " + command);

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
			HandleIngameNextRes(buffer);
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
}
