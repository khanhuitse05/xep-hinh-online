import java.io.Serializable;


public class PingPong implements Serializable
{
	final long serialVersionUID = 1l;
	
	// Current rank
	int rank;
	
	// Array of byte for pingpong message
	byte[] status;
	
	// Default string for MD5 decoder
	String test = "dfklajdsfjkasdjfakdsfgklajhg ";
	
	public PingPong(int rank, byte[] status)
	{
		// TODO Auto-generated constructor stub
	}
			
	@Override	
	public String toString()
	{
		return "Pingpong " + rank;
	}
}
