package Player;

public class PlayerInformation
{
	private String	IDPlayer;
	private String	IDFaceBook;
	private int		Gold;
	private int		Exp;
	private String	Name;
	private int[]	Skills	= new int[10];

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

}
