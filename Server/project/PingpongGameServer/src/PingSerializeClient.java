import io.netty.bootstrap.ChannelFactory;
import io.netty.channel.Channel;
import io.netty.channel.group.ChannelGroup;
import io.netty.channel.group.DefaultChannelGroup;

import java.net.InetSocketAddress;
import java.util.concurrent.Executors;


public class PingSerializeClient 
{
	// Main class for client talking
	// host for server
	// port for server
	// number of message
	// size of array
	
	public void main(String[] args) throws Exception
	{
		// parse option
		
		String host = args[0];
		int port = Integer.parseInt(args[1]);
		int nbMessage;
		int size = 16384;
		if(args.length >= 3)
		{
			nbMessage = Integer.parseInt(args[2]);
			size = Integer.parseInt(arge[3]);
		}
		else
		{
			nbMessage = 256;
		}	
		
		
		// Start netty configuration
		
		// Start client with nb of active threads maximum 3
		ChannelFactory factory = new NioClientSocketChannelFactory(Executors.newCachedThreadPool(), Executors.newCachedThreadPool(), 3 );
		
		// Create bootstrap
		ClientBootstrap bootstrap = new ClientBootstrap(factory);
		
		// Create the global channel
		ChannelGroup channelGroup  = new DefaultChannelGroup(PingSerializeCllient.class.getName());
		
		// Create associated handler
		PingHandler handler = new PingHandler(nbMessage, size);
		
		// Add handler to pipeline and some options
		bootstrap.getPipeline().addLast("handler", handler);		
		bootstrap.setOption("tcpNopDelay", true);
		bootstrap.setOption("keepAlive", true);
		bootstrap.setOption("reuseAddress", true);
		bootstrap.setOption("connectionTimeoutMillis", 100);
		
		// Connect to the server, w8 for the connection and get back the channel
		Channel channel = bootstrap.connect(new InetSocketAddress(host, port)).awaitUniteruptibly().getChannel();
		
		channelGroup.add(channel);
		Pingpong pingpong  = handler.getPingPong();
		
		channelGroup.close().awaitUninterruptibly();
		factory.releaseExternalResources();		
		
	}
	
}
