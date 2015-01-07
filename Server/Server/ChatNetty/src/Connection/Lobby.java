package Connection;

import java.util.Random;
import java.util.UUID;

import org.jboss.netty.buffer.ChannelBuffer;

import GamePlay.GamePlayVariables;
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

	public boolean EnterLobbyWithElo(Player player)
	{
		if (!IsFull)
		{
			if (Player1 == null)
			{
				if(Player2 == null)
				{
					System.out.println("=>> join 1: ELO IN RANGE 2 EMPTY" + player.getInformation().getElo());
					Player1 = player;
					Player1.setLobbyID(LobbyID);
					IsFull = false;
					System.out.println("=>> join 1:  ROOMID " + LobbyID);
					return true;
				}
				else
				{					
					int player1Elo = player.getInformation().getElo();
					int player2Elo = Player2.getInformation().getElo();
					if(player1Elo >= (player2Elo - GamePlayVariables.FINDMATCH_ELO_RANGE) && player1Elo <= (player2Elo + GamePlayVariables.FINDMATCH_ELO_RANGE))
					{
						System.out.println("=>> join 1:  ELO IN RANGE " + player1Elo);
						Player1 = player;
						Player1.setLobbyID(LobbyID);
						IsFull = true;
						StartGame(IsFull);
						System.out.println("=>> join 1:  ROOMID " + LobbyID);
						return true;
					}
					else
					{
						System.out.println("=>> ELO OUT OF RANGE");
						IsFull = false;
						return false;
					}
				}
				
			}
			else if (Player2 == null)
			{
				int player1Elo = Player1.getInformation().getElo();
				int player2Elo = player.getInformation().getElo();
				if(player2Elo >= (player1Elo - GamePlayVariables.FINDMATCH_ELO_RANGE) && player2Elo <= (player1Elo + GamePlayVariables.FINDMATCH_ELO_RANGE))
				{
					System.out.println("=>>  join 2:  ELO IN RANGE 2" + player2Elo + " - " + player1Elo);
					Player2 = player;
					Player2.setLobbyID(LobbyID);
					IsFull = true;
					StartGame(IsFull);
					System.out.println("=>> join 2:  ROOMID " + LobbyID);
					return true;
				}
				else
				{
					System.out.println("=>> ELO OUT OF RANGE 2");
					IsFull = false;
					return false;
				}
			}
		}
		return false;
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
			Player1.setLobbyID(null);
			Player1 = null;
			System.out.println("Leave Player 1");
		}
		else if (Player2 == player)
		{
			Player2.setLobbyID(null);
			Player2 = null;
			System.out.println("Leave Player 2");
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
	
	public void StartGame(boolean isFull)
	{
		if(isFull)
		{
			int[] newListBrick = ListBrick();
			if(Player1 != null)
			{				
				Player1.HandleStartGame(newListBrick);
				System.out.println("=> Start player 1");
			}
			
			if(Player2 != null)
			{
				Player2.HandleStartGame(newListBrick);
				System.out.println("=> Start player 2");
			}
		}
	}
	
	public int[] ListBrick()
	{ 
		
		int[] listBrick = new int[GamePlayVariables.GAMEPLAY_MAX_NUM_BRICK];
		Random rand = new Random();
		for(int i = 0; i < GamePlayVariables.GAMEPLAY_MAX_NUM_BRICK; i++)
		{
			listBrick[i] = rand.nextInt(GamePlayVariables.GAMEPLAY_MAX_VALUE_BRICK);
		}
		return listBrick;
	}
}
