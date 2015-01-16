package Connection;

import java.util.Random;
import java.util.UUID;

import org.jboss.netty.buffer.ChannelBuffer;

import GamePlay.GamePlayVariables;
import Player.Player;
import Player.PlayerStatus;

public class Lobby
{	
	private Player	Player1;
	private Player	Player2;
	private boolean	IsFull;
	private String	LobbyID;
	private int CurrentEloRange;
	private String LobbyPassword;

	public String getLobbyID()
	{
		return LobbyID;
	}

	public Lobby()
	{
		IsFull = false;
		LobbyID = UUID.randomUUID().toString();
		CurrentEloRange = GamePlayVariables.FINDMATCH_ELO_RANGE;
		LobbyPassword = null;
	}

	public boolean EnterLobbyWithElo(Player player, String password)
	{		
		if (!IsFull)
		{
			if(password == null)
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
						new java.util.Timer().schedule( 
						        new java.util.TimerTask() 
						        {
						            @Override
						            public void run() {
						            	// Lenh them elo sau khi tim kiem qua lau
						            	if(!IsFull)
						            	{
						            		CurrentEloRange+= GamePlayVariables.FINDMATCH_ELO_ADD_TO_FIND;
						            	}         	
						            }
						        }, 
						        GamePlayVariables.FINDMATCH_ELO_TIME_CHANGE
						);
						return true;
					}
					else
					{					
						int player1Elo = player.getInformation().getElo();
						int player2Elo = Player2.getInformation().getElo();
						if(player1Elo >= (player2Elo - CurrentEloRange) && player1Elo <= (player2Elo + CurrentEloRange))
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
					if(player2Elo >= (player1Elo - CurrentEloRange) && player2Elo <= (player1Elo + CurrentEloRange))
					{
						System.out.println("=>>PASSWORD    join 2:  ELO IN RANGE 2" + player2Elo + " - " + player1Elo);
						Player2 = player;
						Player2.setLobbyID(LobbyID);
						IsFull = true;
						StartGame(IsFull);
						System.out.println("=>>PASSWORD   join 2:  ROOMID " + LobbyID);
						return true;
					}
					else
					{
						System.out.println("=>>PASSWORD   ELO OUT OF RANGE 2");
						IsFull = false;
						return false;
					}
				}
			}
			else
			{
				if (Player1 == null)
				{
					if(Player2 == null)
					{
						System.out.println("=>>PASSWORD  join 1: ELO IN RANGE 2 EMPTY" + player.getInformation().getElo());
						Player1 = player;
						LobbyPassword = password;
						Player1.setLobbyID(LobbyID);
						IsFull = false;
						System.out.println("=>>PASSWORD  join 1:  ROOMID " + LobbyID);
						return true;
					}
					else
					{		
						if(password.equals(LobbyPassword))
						{
							Player1 = player;
							Player1.setLobbyID(LobbyID);
							IsFull = true;
							StartGame(IsFull);
							System.out.println("=>>PASSWORD join 1:  ROOMID " + LobbyID);
							return true;
						}
						else
						{
							System.out.println("=>>PASSWORD WRONG PASSWORD");
							IsFull = false;
							return false;
						}
					}
					
				}
				else if (Player2 == null)
				{
					if(password.equals(LobbyPassword))
					{
						Player2 = player;
						Player2.setLobbyID(LobbyID);
						IsFull = true;
						StartGame(IsFull);
						System.out.println("=>>PASSWORD  join 2:  ROOMID " + LobbyID);
						return true;
					}
					else
					{
						System.out.println("=>>PASSWORD WRONG PASSWORD");
						IsFull = false;
						return false;
					}
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
		if(Player1 == null && Player2 == null)
		{
	    	ConnectionManager.CurrentLobby.remove(LobbyID);
			System.out.println("@@@@@@@@@@@ Remove lobby");
		}
	}

	public boolean LoobyFull()
	{
		return IsFull;
	}

	public void TranfferData(Player sender, ChannelBuffer data)
	{
		if (IsFull)
		{
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
			
			new java.util.Timer().schedule( 
			        new java.util.TimerTask() 
			        {
			            @Override
			            public void run() {
			            	// Lenh end game
			            	if(Player1 != null && Player2 !=null)
			            	{
			            		if(Player1.getStatus() == PlayerStatus.PLAYER_PLAYING 
				            			&& Player2.getStatus() == PlayerStatus.PLAYER_PLAYING
				            			&& Player1.getLobbyID() == LobbyID
				            			&& Player2.getLobbyID() == LobbyID)
			            		{
									System.out.println("@@@@@@@@@@@ End game");
					            	HandleEndGame();
			            		}
			            		else
			            		{
									System.out.println("@@@@@@@@@@@ cancel end game");
			            		}
			            	}else
		            		{
								System.out.println("@@@@@@@@@@@ cancel end game 2");
		            		}
			            	
			            }
			        }, 
			        GamePlayVariables.GAMEPLAY_GAME_TIME
			);
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
	
	public synchronized void HandleEndGame()
	{
		System.out.println("Player1.getNumOfSentBrick()" + Player1.getNumOfSentBrick() 
				+ "  2 " + Player2.getNumOfSentBrick());
		boolean isPractice = (LobbyPassword == null) ? false:true;
		if(Player1.getNumOfSentBrick() > Player2.getNumOfSentBrick())
		{
			// Player 1 win
			Player1.HandleResultGame(GamePlayVariables.GAMEPLAY_PVP_WIN, false, isPractice, Player2.getNumOfSentBrick());
			Player2.HandleResultGame(GamePlayVariables.GAMEPLAY_PVP_LOSE,false, isPractice, Player1.getNumOfSentBrick());
		}
		else if(Player1.getNumOfSentBrick() < Player2.getNumOfSentBrick())
		{
			// Player 2 win
			Player1.HandleResultGame(GamePlayVariables.GAMEPLAY_PVP_LOSE, false, isPractice, Player2.getNumOfSentBrick());
			Player2.HandleResultGame(GamePlayVariables.GAMEPLAY_PVP_WIN, false, isPractice, Player1.getNumOfSentBrick());
		}
		else
		{
			// Draw
			Player1.HandleResultGame(GamePlayVariables.GAMEPLAY_PVP_DRAW, false, isPractice, Player2.getNumOfSentBrick());
			Player2.HandleResultGame(GamePlayVariables.GAMEPLAY_PVP_DRAW, false, isPractice, Player1.getNumOfSentBrick());
			
		}

    	ConnectionManager.CurrentLobby.remove(LobbyID);
		System.out.println("@@@@@@@@@@@ Remove lobby");
	}

	public synchronized void FindingDisconect(Player player)
	{
		if(player == Player1)
		{
			IsFull = false;
			Player1 = Player2;
			Player2 = null;
		}
		else if(player == Player2)
		{
			IsFull = false;
			Player2 = null;
		}
		else
		{
			System.out.println("&*^&*%&^^(*&^*&^(**)*&^^^^");
		}
		LobbyPassword = null;
	}

	public synchronized void PlayingDisconect(Player player)
	{
		boolean isPractice = (LobbyPassword == null) ? false:true;
		if(player == Player1)
		{
			Player2.HandleResultGame(GamePlayVariables.GAMEPLAY_PVP_WIN, true, isPractice, Player1.getNumOfSentBrick());
			Player1.HandleResultDisconnectGame();
		}
		else if(player == Player2)
		{
			Player1.HandleResultGame(GamePlayVariables.GAMEPLAY_PVP_WIN, true, isPractice, Player2.getNumOfSentBrick());
			Player2.HandleResultDisconnectGame();
		}
		else
		{
			System.out.println("222222222222&*^&*%&^^(*&^*&^(**)*&^^^^");
		}
		System.out.println("Playing DC");
		Player1 = null;
		Player2 = null;
		IsFull = false;
    	ConnectionManager.CurrentLobby.remove(LobbyID);
	}
}
