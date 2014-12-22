package Connection;

import java.util.UUID;

import org.jboss.netty.buffer.ChannelBuffer;

import Player.Player;

public class Lobby
{
	private Player	Player1;
	private Player	Player2;
	private boolean	IsFull;
	private String	LobbyID;

	public String getLobbyID()
	{
		return LobbyID;
	}

	public Lobby()
	{
		IsFull = false;
		LobbyID = UUID.randomUUID().toString();
	}

	public boolean EnterLobby(Player player)
	{
		if (!IsFull)
		{
			if (Player1 == null)
			{
				Player1 = player;
				Player1.setLobbyID(LobbyID);
				return true;
			}
			else if (Player2 == null)
			{
				Player2 = player;
				Player2.setLobbyID(LobbyID);
				IsFull = true;
				return true;
			}
		}
		return false;
	}

	public void LeaveLobby(Player player)
	{
		if (Player1 == player)
		{
			Player1 = null;
			Player1.setLobbyID(null);
		}
		else if (Player2 == player)
		{
			Player2 = null;
			Player1.setLobbyID(null);
		}
		IsFull = false;
	}

	public boolean LoobyFull()
	{
		return IsFull;
	}

	public void TranfferData(Player sender, ChannelBuffer data)
	{
		System.out.println("Tranffer: lobbyID: " + LobbyID + " isFull:"
				+ IsFull);
		if (IsFull)
		{
			System.out.println("Full");
			if (sender == Player1)
			{
				System.out.println("Sender = Player1");
				Player2.TranfferDataToClient(data);
			}
			else if (sender == Player2)
			{
				System.out.println("Sender = Player2");
				Player1.TranfferDataToClient(data);
			}
		}
		System.out.println("Out tranfferData");
	}
}
