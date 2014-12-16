package Database;

import java.net.UnknownHostException;

import com.mongodb.MongoClient;

public class MongoDBConnection
{
	private static MongoClient Instance =  null;
	
	public static MongoClient GetInstance()
	{
		if(Instance == null)
		{
			try
			{
				Instance = new MongoClient("localhost");
			}
			catch (UnknownHostException e)
			{
				e.printStackTrace();
			}
		}
		
		return Instance;
	}
	
	
	
}
