package Player;

import java.util.Date;

import GamePlay.GamePlayVariables;

public class PlayerInformation
{
	private String	IDPlayer;
	private String	IDFaceBook;
	private int		Gold;
	private int		Exp;
	private String	Name;
	private int		Elo;
	private int[]	Skills	= new int[10];
	private int		HighScore;
	private Date	HighScoreAddedDate;
	private int		PlayedGame;
	private int		WinGame;
	private int		DrawGame;
	private int		LostGame;

	public int getPlayedGame()
	{
		return PlayedGame;
	}

	public void setPlayedGame(int playedGame)
	{
		PlayedGame = playedGame;
	}

	public int getWinGame()
	{
		return WinGame;
	}

	public void setWinGame(int winGame)
	{
		WinGame = winGame;
	}

	public int getDrawGame()
	{
		return DrawGame;
	}

	public void setDrawGame(int drawGame)
	{
		DrawGame = drawGame;
	}

	public int getLostGame()
	{
		return LostGame;
	}

	public void setLostGame(int lostGame)
	{
		LostGame = lostGame;
	}

	public int getHighScore()
	{
		return HighScore;
	}

	public void setHighScore(int highScore)
	{
		HighScore = highScore;
	}

	public Date getHighScoreDateAdded()
	{
		return HighScoreAddedDate;
	}

	public void setHighScoreDateAdded(Date highScoreDateAdded)
	{
		HighScoreAddedDate = highScoreDateAdded;
	}

	public PlayerInformation()
	{
		IDPlayer = "";
		IDFaceBook = "";
		Gold = 0;
		Exp = 0;
		Name = "this is my name";
		Elo = 0;
		HighScore = 0;
		HighScoreAddedDate = new Date(0);
		PlayedGame = 0;
		WinGame = 0;
		DrawGame = 0;
		LostGame = 0;
	}

	public String getIDPlayer()
	{
		return IDPlayer;
	}

	public void setIDPlayer(String iDPlayer)
	{
		IDPlayer = iDPlayer;
	}

	public int getGold()
	{
		return Gold;
	}

	public int[] getSkills()
	{
		return Skills;
	}

	public void setSkills(int[] skills)
	{
		for (int i = 0; i < 10; i++)
		{
			Skills[i] = skills[i];
		}
	}

	public void setGold(int gold)
	{
		Gold = gold;
	}

	public int getExp()
	{
		return Exp;
	}

	public void setExp(int exp)
	{
		Exp = exp;
	}

	public String getName()
	{
		return Name;
	}

	public void setName(String name)
	{
		Name = name;
	}

	public String getIDFaceBook()
	{
		return IDFaceBook;
	}

	public void setIDFaceBook(String iDFaceBook)
	{
		IDFaceBook = iDFaceBook;
	}

	public int getElo()
	{
		return Elo;
	}

	public void setElo(int elo)
	{
		Elo = elo;
	}
	
	public void setGameResult(int result)
	{
		switch(result)
		{
		case GamePlayVariables.GAMEPLAY_PVP_WIN:
			WinGame++;
			break;
		case GamePlayVariables.GAMEPLAY_PVP_DRAW:
			DrawGame++;
			break;
		case GamePlayVariables.GAMEPLAY_PVP_LOSE:
			LostGame++;
			break;
		}
		PlayedGame++;
	}
}
