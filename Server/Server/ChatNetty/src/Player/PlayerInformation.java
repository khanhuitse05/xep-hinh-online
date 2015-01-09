package Player;

import java.util.Date;

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
}
