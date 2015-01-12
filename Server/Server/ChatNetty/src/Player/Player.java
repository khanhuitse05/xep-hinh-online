package Player;

import java.nio.charset.StandardCharsets;
import java.util.Date;
import java.util.LinkedHashMap;
import java.util.Map.Entry;
import java.util.UUID;

import org.jboss.netty.buffer.ChannelBuffer;
import org.jboss.netty.buffer.ChannelBuffers;
import org.jboss.netty.channel.Channel;

import Connection.ConnectionManager;
import Database.MongoDBConnection;
import GamePlay.Command;
import GamePlay.GamePlayVariables;

public class Player
{
	private final short			LOGIN_BUFFER_SIZE		= 200;
	private final short			SIGNUP_BUFFER_SIZE		= 150;
	private final short			RESULT_GAME_SIZE		= 250;
	private final short			SIGNUP_DEFAULT_ELO		= 1000;
	private final short			FINDMATCH_BUFFER_SIZE	= 250;
	private final short			UPDATE_ELO_SIZE			= 50;
	private final short			LEADERBOARD_BUFFER_SIZE	= 1000;
	private Channel				ChannelPlayer;
	private Integer				PlayerID;
	private String				LobbyID;
	private PlayerInformation	Information;
	private short				NumOfSentBrick			= 0;
	private short				Status					= PlayerStatus.PLAYER_OFFLINE;

	public short getStatus()
	{
		return Status;
	}

	public short getNumOfSentBrick()
	{
		return NumOfSentBrick;
	}

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
		if (lobbyID == null)
		{
			Status = PlayerStatus.PLAYER_ONLINE;
		}
		else
		{
			Status = PlayerStatus.PLAYER_FINDING_MATCH;
		}
		LobbyID = lobbyID;
	}

	public void HandleBuffer(ChannelBuffer buffer)
	{
		ChannelBuffer tempBuffer = buffer.copy();
		int length = tempBuffer.readShort();
		int command = tempBuffer.readShort();
		// int textLength = tempBuffer.readShort();
		// System.out.println("Sring: length"
		// + textLength
		// + "--index"
		// + tempBuffer.readerIndex()
		// + "--"
		// + tempBuffer.toString(tempBuffer.readerIndex() + 2, textLength,
		// StandardCharsets.UTF_8));
		// tempBuffer.readerIndex(buffer.readerIndex());

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
		case Command.CMD_PVP_CANCEL:
			// cancel findmatch
			ConnectionManager.GetInstance().CurrentLobby.get(LobbyID)
					.LeaveLobby(this);
			break;
		case Command.CMD_PVP_SEND:
			if (LobbyID != null)
			{
				ConnectionManager.GetInstance().CurrentLobby.get(LobbyID)
						.TranfferData(this, buffer);
				NumOfSentBrick += tempBuffer.readShort();
				System.out.println("Send = " + NumOfSentBrick);
			}
			else
			{
				System.out.println("^&%^^&#$%#$% #$#&# EXCEPTION");
			}

			break;
		case Command.CMD_UPDATE_LEADERBOARD:
			HandleUpdateLeaderboard();
			break;
		case Command.CMD_UPDATE_HIGHSCORE:
			HandleUpdateHighScore(buffer);
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
		case Command.CMD_PVP_SKILL_LASERS:
		case Command.CMD_PVP_SKILL_MAGNET:
		case Command.CMD_PVP_SKILL_METEOR:
			if (LobbyID != null)
			{
				ConnectionManager.GetInstance().CurrentLobby.get(LobbyID)
						.TranfferData(this, buffer);

			}
			else
			{
				System.out.println("^&%^^&#$%#$% #$#&# EXCEPTION");
			}
			break;
		case Command.CMD_PVP_ENTER:
			// Set back to the sender
			// HandleIngameNextRes(buffer);

			// test send login
			// WriteToClient(HandleLoginRes(buffer));

			// Test Send to the opponent

			System.out.println("=> Enter game");
			if (LobbyID != null)
			{
				ConnectionManager.GetInstance().CurrentLobby.get(LobbyID)
						.TranfferData(this, buffer);

			}
			else
			{
				System.out.println("^&%^^&#$%#$% #$#&# EXCEPTION");
			}
			break;
		}
	}

	private void HandleUpdateHighScore(ChannelBuffer buffer)
	{		
		ChannelBuffer tempBuffer = buffer.copy();
		short len = tempBuffer.readShort();
		short cmd = tempBuffer.readShort();
		
		int highScore = tempBuffer.readShort();
		
		// update to DB
		PlayerInformation newValue = new PlayerInformation();
		newValue = Information;
		newValue.setHighScore(highScore);
		MongoDBConnection.GetInstance().Update(Information, newValue);
		System.out.println("UPDATED HIGHSCORE: " + highScore);
	}

	public void HandleUpdateLeaderboard()
	{
		ChannelBuffer bufferOutElo = ChannelBuffers
				.buffer(LEADERBOARD_BUFFER_SIZE);
		ChannelBuffer bufferOutScore = ChannelBuffers
				.buffer(LEADERBOARD_BUFFER_SIZE);

		int sizeEloBuffer = 0;
		int sizeScoreBuffer = 0;

		LinkedHashMap<String, Integer> eloStading = new LinkedHashMap<String, Integer>();
		LinkedHashMap<String, Integer> scoreStading = new LinkedHashMap<String, Integer>();
		int[] stadingPosition = new int[2];

		eloStading = MongoDBConnection.GetInstance().Top10Elo();
		scoreStading = MongoDBConnection.GetInstance().Top10Highscore();
		stadingPosition = MongoDBConnection.GetInstance().StandingPosition(
				Information.getIDPlayer(), Information.getElo(),
				Information.getHighScore());

		// add size for number position
		sizeEloBuffer += 4;
		for (Entry<String, Integer> entry : eloStading.entrySet())
		{
			sizeEloBuffer += entry.getKey().getBytes(StandardCharsets.UTF_8).length + 4;
		}

		sizeScoreBuffer += 4;
		for (Entry<String, Integer> entry : scoreStading.entrySet())
		{
			sizeScoreBuffer += entry.getKey().getBytes(StandardCharsets.UTF_8).length + 4;
		}

		bufferOutElo.writeShort(sizeEloBuffer);
		bufferOutElo.writeShort(Command.CMD_UPDATE_LEADERBOARD_ELO);
		// number of position
		bufferOutElo.writeShort(stadingPosition[0]);
		bufferOutElo.writeShort(10);

		bufferOutScore.writeShort(sizeScoreBuffer);
		bufferOutScore.writeShort(Command.CMD_UPDATE_LEADERBOARD_SCORE);
		// number of position
		bufferOutScore.writeShort(stadingPosition[1]);
		bufferOutScore.writeShort(10);

		for (Entry<String, Integer> entry : eloStading.entrySet())
		{
			// size text
			bufferOutElo.writeShort(entry.getKey().getBytes(
					StandardCharsets.UTF_8).length);
			// text
			bufferOutElo.writeBytes(entry.getKey().getBytes(
					StandardCharsets.UTF_8));
			// elo
			bufferOutElo.writeShort(entry.getValue().intValue());
		}

		for (Entry<String, Integer> entry : scoreStading.entrySet())
		{
			// size text
			bufferOutScore.writeShort(entry.getKey().getBytes(
					StandardCharsets.UTF_8).length);
			// text
			bufferOutScore.writeBytes(entry.getKey().getBytes(
					StandardCharsets.UTF_8));
			// elo
			bufferOutScore.writeShort(entry.getValue().intValue());
		}

		WriteToClient(bufferOutElo);
		WriteToClient(bufferOutScore);
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
		// bufferOut.writeShort(arg0);
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
		int highScore = tempBuffer.readShort();
		// int addedDateHighScore = (int) tempBuffer.readFloat();

		int addedDateHighScore = 1400000000;

		short lenId = tempBuffer.readShort();
		String id = tempBuffer.toString(tempBuffer.readerIndex() + 2, lenId,
				StandardCharsets.UTF_8);

		// increase index channelBuffer
		tempBuffer.readerIndex(tempBuffer.readerIndex() + 2 + lenId);
		short lenName = tempBuffer.readShort();
		String name = tempBuffer.toString(tempBuffer.readerIndex() + 2,
				lenName, StandardCharsets.UTF_8);

		System.out.println("Sign in: lenName: " + lenName + " name" + name);

		// ID only for testing
		// String id = "e6b32074-de6e-42a4-a6a8-64a4a4c993a1";

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

		// Write length of data - include lenght of id(short 2) and id and
		// 2bytes for ELo
		// (string.length)
		resLogin.writeShort(idStringSize + 4);
		resLogin.writeShort(Command.CMD_LOGIN);

		// Write ID length
		resLogin.writeShort(idStringSize);
		// Writeplayer ID
		resLogin.writeBytes(info.getIDPlayer().getBytes(StandardCharsets.UTF_8));
		// Write elo
		resLogin.writeShort(info.getElo());
		Status = PlayerStatus.PLAYER_ONLINE;

		// update to DB
		PlayerInformation newValue = new PlayerInformation();
		newValue = info;
		newValue.setName(name);
		newValue.setHighScore(highScore);
		newValue.setHighScoreDateAdded(new Date(addedDateHighScore));
		MongoDBConnection.GetInstance().Update(info, newValue);

		// test
		//MongoDBConnection.GetInstance().Top10Elo();
		// MongoDBConnection.GetInstance().Top10Highscore();
		//MongoDBConnection.GetInstance().StandingPosition(
				//"b1040149-7951-4674-88ca-820e709148f1", 998, 55);
		return resLogin;
	}

	// Handle sign up request
	public ChannelBuffer HandleSignUpRes(ChannelBuffer buffer)
	{
		ChannelBuffer tempBuffer = buffer.copy();

		// Read length and command
		short len = tempBuffer.readShort();
		short cmd = tempBuffer.readShort();
		short lenId = tempBuffer.readShort();
		String name = tempBuffer.toString(tempBuffer.readerIndex() + 2, lenId,
				StandardCharsets.UTF_8);

		System.out.println("Sign up: " + name);

		// Generate a new ID for new user
		String newPlayerID = UUID.randomUUID().toString();
		int idStringSize = newPlayerID.getBytes(StandardCharsets.UTF_8).length;

		// Use PlayerInformation to store data
		PlayerInformation playerInfo = new PlayerInformation();
		playerInfo.setIDPlayer(newPlayerID);
		playerInfo.setElo(SIGNUP_DEFAULT_ELO);
		playerInfo.setName(name);

		// Information
		Information = playerInfo;

		// Update to server
		MongoDBConnection.GetInstance().Insert(playerInfo);

		// Generate response for client
		ChannelBuffer resSignUp = ChannelBuffers.buffer(SIGNUP_BUFFER_SIZE);

		// Write header
		// Write length of data - include lenght of id(short 2) and id and
		// 2bytes for ELo
		resSignUp.writeShort(idStringSize + 4);
		resSignUp.writeShort(Command.CMD_LOGIN);
		resSignUp.writeShort(idStringSize);
		resSignUp.writeBytes(newPlayerID.getBytes(StandardCharsets.UTF_8));
		resSignUp.writeShort(playerInfo.getElo());

		// System.out.println("SEND BACK ... ID: " + newPlayerID + "-"
		// +playerInfo.getElo()
		// +"idStringSize:" + idStringSize + "zxx" +
		// newPlayerID.getBytes(StandardCharsets.UTF_8).length +"--"
		// +resSignUp.readableBytes());

		Status = PlayerStatus.PLAYER_ONLINE;
		return resSignUp;
	}

	public void HandleStartGame(int[] listBrick)
	{
		ChannelBuffer resFoundMatch = ChannelBuffers
				.buffer(FINDMATCH_BUFFER_SIZE);
		resFoundMatch.writeShort(100 * 2 + 2);
		resFoundMatch.writeShort(Command.CMD_FOUND_PVP);

		resFoundMatch.writeShort(GamePlayVariables.GAMEPLAY_MAX_NUM_BRICK);
		for (int i = 0; i < GamePlayVariables.GAMEPLAY_MAX_NUM_BRICK; i++)
		{
			resFoundMatch.writeShort(listBrick[i]);

		}

		Status = PlayerStatus.PLAYER_PLAYING;
		NumOfSentBrick = 0;
		WriteToClient(resFoundMatch);
	}

	public void HandleResultGame(short isWin, boolean isDisconnect)
	{
		setLobbyID(null);
		ChannelBuffer resResultGame = ChannelBuffers.buffer(RESULT_GAME_SIZE);
		PlayerInformation newInfo = new PlayerInformation();
		newInfo = Information;
		if (isWin == GamePlayVariables.GAMEPLAY_PVP_WIN)
		{
			resResultGame.writeShort(2);
			if (isDisconnect)
			{
				resResultGame.writeShort(Command.CMD_PVP_DISCONNECT);
			}
			else
			{
				resResultGame.writeShort(Command.CMD_PVP_WIN);
			}
			resResultGame.writeShort(GamePlayVariables.GAMEPLAY_PVP_ELO_WIN);
			newInfo.setElo(newInfo.getElo()
					+ GamePlayVariables.GAMEPLAY_PVP_ELO_WIN);
			newInfo.setGameResult(GamePlayVariables.GAMEPLAY_PVP_WIN);
		}
		else if (isWin == GamePlayVariables.GAMEPLAY_PVP_LOSE)
		{
			resResultGame.writeShort(2);
			resResultGame.writeShort(Command.CMD_PVP_LOSE);
			resResultGame.writeShort(GamePlayVariables.GAMEPLAY_PVP_ELO_WIN);
			newInfo.setElo(newInfo.getElo()
					- GamePlayVariables.GAMEPLAY_PVP_ELO_WIN);
			newInfo.setGameResult(GamePlayVariables.GAMEPLAY_PVP_LOSE);
		}
		else
		{
			resResultGame.writeShort(2);
			resResultGame.writeShort(Command.CMD_PVP_DRAW);
			resResultGame.writeShort(GamePlayVariables.GAMEPLAY_PVP_ELO_DRAW);
			newInfo.setElo(newInfo.getElo()
					+ GamePlayVariables.GAMEPLAY_PVP_ELO_DRAW);
			newInfo.setGameResult(GamePlayVariables.GAMEPLAY_PVP_DRAW);
		}
		MongoDBConnection.GetInstance().Update(Information, newInfo);
		Information.setElo(newInfo.getElo());
		Information.setGameResult(isWin);
		// goi update elo
		ChannelBuffer updateElo = ChannelBuffers.buffer(UPDATE_ELO_SIZE);
		updateElo.writeShort(2);
		updateElo.writeShort(Command.CMD_UPDATE_ELO);
		updateElo.writeShort(Information.getElo());
		WriteToClient(resResultGame);
		WriteToClient(updateElo);
	}

	public void HandleResultDisconnectGame()
	{
		setLobbyID(null);
		PlayerInformation newInfo = new PlayerInformation();
		newInfo = Information;

		newInfo.setElo(newInfo.getElo()
				- GamePlayVariables.GAMEPLAY_PVP_ELO_WIN);
		newInfo.setGameResult(GamePlayVariables.GAMEPLAY_PVP_LOSE);
		
		MongoDBConnection.GetInstance().Update(Information, newInfo);
		Information.setElo(newInfo.getElo());
	}

	public void HandleDisconnect(boolean b)
	{
		System.out.println("!!!!!!!!!!! Player dis - status = " + Status);
		switch (Status)
		{
		case PlayerStatus.PLAYER_FINDING_MATCH:
			ConnectionManager.GetInstance().CurrentLobby.get(LobbyID)
					.FindingDisconect(this);
			break;
		case PlayerStatus.PLAYER_PLAYING:
			ConnectionManager.GetInstance().CurrentLobby.get(LobbyID)
					.PlayingDisconect(this);
			break;
		}

	}

}
