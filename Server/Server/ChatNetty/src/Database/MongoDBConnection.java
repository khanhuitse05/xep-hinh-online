package Database;

import java.net.UnknownHostException;

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
	final private String				DB_Skills				= "Skills";
	final private String				DB_Elo					= "Elo";

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

		BasicDBObject documentDetail = new BasicDBObject();
		for (int i = 0; i < 10; i++)
		{
			documentDetail.put(Integer.toString(i), info.getSkills()[i]);
		}

		document.put(DB_Skills, documentDetail);
		Collection.insert(documentDetail);
	}

	public void Update(PlayerInformation oldValue, PlayerInformation newValue)
	{
		BasicDBObject newDocument = new BasicDBObject();

		BasicDBObject skills = new BasicDBObject();
		for (int i = 0; i < 10; i++)
		{
			skills.put(Integer.toString(i), newValue.getSkills()[i]);
		}

		newDocument.append(
				"$set",
				new BasicDBObject().append(DB_Exp, newValue.getIDPlayer())
						.append(DB_Gold, newValue.getGold())
						.append(DB_Skills, skills)
						.append(DB_Elo, newValue.getElo()));

		BasicDBObject searchQuery = new BasicDBObject().append(DB_ID,
				oldValue.getIDPlayer());

		Collection.update(searchQuery, newDocument);
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
			info.setExp((int) result.get(DB_Exp));
			info.setElo((int) result.get(DB_Elo));
			// int[] skills = news int[10];
			// skills = (int[]) result.get(DB_Skills);
			// info.setSkills(skills);
		}

		return info;
	}
}
