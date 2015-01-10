package Database;

import java.net.UnknownHostException;
import java.util.HashMap;

import Player.PlayerInformation;

import com.mongodb.BasicDBObject;
import com.mongodb.DB;
import com.mongodb.DBCollection;
import com.mongodb.DBCursor;
import com.mongodb.DBObject;
import com.mongodb.MongoClient;

public class MongoDBConnection
{
	final private static String			DB_DBName				= "TetrisOnline";
	final private static String			DB_CollectionName		= "PLAYER";

	final private String				DB_ID					= "ID";
	final private String				DB_IDFacebook			= "FBID";
	final private String				DB_Gold					= "Gold";
	final private String				DB_Exp					= "Exp";
	final private String				DB_Name					= "Name";
	final private String				DB_Elo					= "Elo";
	final private String				DB_Skills				= "Skills";
	final private String				DB_HighScore			= "HighScore";
	final private String				DB_HighScoreAddedDate	= "HighScoreAddedDate";

	private static MongoClient			MongoClientConnection	= null;
	private static MongoDBConnection	Instance				= null;

	private static DBCollection			Collection;

	public static MongoDBConnection GetInstance()
	{
		if (Instance == null)
		{
			try
			{
				Instance = new MongoDBConnection();
				MongoClientConnection = new MongoClient("localhost");
				DB db = MongoClientConnection.getDB(DB_DBName);
				Collection = db.getCollection(DB_CollectionName);
			}
			catch (UnknownHostException e)
			{
				e.printStackTrace();
			}
		}

		return Instance;
	}

	public void Insert(PlayerInformation info)
	{
		BasicDBObject document = new BasicDBObject();
		document.put(DB_ID, info.getIDPlayer());
		document.put(DB_IDFacebook, info.getIDFaceBook());
		document.put(DB_Exp, info.getExp());
		document.put(DB_Name, info.getName());
		document.put(DB_Gold, info.getGold());
		document.put(DB_Elo, info.getElo());
		document.put(DB_HighScore, info.getHighScore());
		document.put(DB_HighScoreAddedDate, info.getHighScoreDateAdded());

		// BasicDBObject documentDetail = new BasicDBObject();
		// for (int i = 0; i < 10; i++)
		// {
		// documentDetail.put(Integer.toString(i), info.getSkills()[i]);
		// }
		//
		// document.put(DB_Skills, documentDetail);
		System.out.println("==============INSERT=============="
				+ Collection.insert(document).toString());
	}

	public void Update(PlayerInformation oldValue, PlayerInformation newValue)
	{
		BasicDBObject newDocument = new BasicDBObject();

		// BasicDBObject skills = new BasicDBObject();
		// for (int i = 0; i < 10; i++)
		// {
		// skills.put(Integer.toString(i), newValue.getSkills()[i]);
		// }

		newDocument.append(
				"$set",
				new BasicDBObject()
						.append(DB_Exp, newValue.getExp())
						.append(DB_Gold, newValue.getGold())
						.append(DB_Elo, newValue.getElo())
						.append(DB_HighScore, newValue.getHighScore())
						.append(DB_HighScoreAddedDate,
								newValue.getHighScoreDateAdded())
						.append(DB_Name, newValue.getName()));

		BasicDBObject searchQuery = new BasicDBObject().append(DB_ID,
				oldValue.getIDPlayer());

		System.out.println("============UPDATE==============="
				+ Collection.update(searchQuery, newDocument));
	}

	public PlayerInformation Query(String id)
	{
		PlayerInformation info = new PlayerInformation();
		BasicDBObject whereQuery = new BasicDBObject();
		whereQuery.put(DB_ID, id);

		DBCursor cursor = Collection.find(whereQuery);

		while (cursor.hasNext())
		{
			DBObject result = cursor.next();
			info.setExp((int) result.get(DB_Exp));
			info.setGold((int) result.get(DB_Gold));
			info.setIDFaceBook(result.get(DB_IDFacebook).toString());
			info.setIDPlayer(result.get(DB_ID).toString());
			info.setName(result.get(DB_Name).toString());
			info.setElo((int) result.get(DB_Elo));
			info.setHighScore((int) result.get(DB_HighScore));
			// thieu addedDateHighScore
			// int[] skills = news int[10];
			// skills = (int[]) result.get(DB_Skills);
			// info.setSkills(skills);
		}

		return info;
	}

	public HashMap<String, Integer> Top10Elo()
	{
		HashMap<String, Integer> result = new HashMap<String, Integer>();

		DBCursor cursor = Collection.find().sort(new BasicDBObject(DB_Elo, -1).append(DB_Name, 1))
				.limit(10);

		while (cursor.hasNext())
		{
			DBObject cur = cursor.next();
			String name = cur.get(DB_Name).toString();
			Integer elo = new Integer((int) cur.get(DB_Elo));
			result.put(name, elo);
			System.out.println("========== Elo =========" + name + "==" + elo);
		}
		return result;
	}

	public HashMap<String, Integer> Top10Highscore()
	{
		HashMap<String, Integer> result = new HashMap<String, Integer>();

		DBCursor cursor = Collection.find()
				.sort(new BasicDBObject(DB_HighScore, -1).append(DB_Name, 1)).limit(10);

		while (cursor.hasNext())
		{
			DBObject cur = cursor.next();
			String name = cur.get(DB_Name).toString();
			Integer score = new Integer((int) cur.get(DB_HighScore));
			result.put(name, score);
			System.out.println("====== Score =========" + name + "==" + score);
		}
		return result;
	}

	public int[] StandingPosition(String id, int elo, int score)
	{
		int[] result = new int[2];
		BasicDBObject queryElo = new BasicDBObject();
		queryElo.put(DB_Elo, new BasicDBObject("$gt", elo));
		DBCursor cursor = Collection.find(queryElo);
		result[0] = cursor.count() + 1;

		BasicDBObject queryScore = new BasicDBObject();
		queryElo.put(DB_HighScore, new BasicDBObject("$gt", score));
		DBCursor cursor2 = Collection.find(queryScore);
		result[1] = cursor2.count() + 1;

		System.out.println("============ Stading pos ===========" + result[0]
				+ "==" + result[1]);
		return result;
	}
}
