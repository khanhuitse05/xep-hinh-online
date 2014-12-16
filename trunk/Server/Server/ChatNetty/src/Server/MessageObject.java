package Server;

import java.io.Serializable;
import java.util.Date;

public class MessageObject  implements Serializable
{
	private static final long serialVersionUID = 1L;  
	 
	private final String content;
	private final int time;
	
	public MessageObject(String content) 
	{
		this.content = content;
		this.time = 0;
	}
	
	
	public String getContent() 
	{
		return this.content;
	}
	
	
	public int getTime() 
	{
		return time;
	}
	
	
	@Override
	public String toString() 
	{		
		return new Date(time * 1000L).toString() + " -- " + content;
	}
}
