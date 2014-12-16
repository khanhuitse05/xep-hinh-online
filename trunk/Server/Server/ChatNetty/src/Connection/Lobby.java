package Connection;

import org.jboss.netty.buffer.ChannelBuffer;

import Player.Player;

public class Lobby
{
	private Player Player1;
	private Player Player2;
	private boolean IsFull;
	
	
	public Lobby()
	{
		IsFull = false;
	}
	
	public void EnterLobby(Player player)
	{
		if(!IsFull)
		{
			if(Player1 == null)
			{
				Player1 = player;
			}
			else if(Player2 == null)
			{
				Player2 = player;
				IsFull = true;
			}
		}
	}
	
	public boolean LoobyFull()
	{
		return IsFull;
	}
	
	public void TranfferData(Player sender, ChannelBuffer data)
	{
		if(sender == Player1)
		{
			Player2.TranfferDataToClient(data);
		}
		else if(sender == Player2)
		{
			Player1.TranfferDataToClient(data);
		}
	}	
	
}
