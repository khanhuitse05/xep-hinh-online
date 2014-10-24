package Client;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.net.InetSocketAddress;
import java.util.concurrent.Executors;

import org.jboss.netty.bootstrap.ClientBootstrap;
import org.jboss.netty.channel.Channel;
import org.jboss.netty.channel.ChannelFactory;
import org.jboss.netty.channel.ChannelFuture;
import org.jboss.netty.channel.socket.nio.NioClientSocketChannelFactory;

public class ChatClient 
{
	public static void main(String[] args) throws Exception 
	{
		String host = "192.168.1.197";
		int port = 8080;
        
        ChannelFactory factory = new NioClientSocketChannelFactory(
        		Executors.newCachedThreadPool(),
        		Executors.newCachedThreadPool());
        
        ClientBootstrap bootstrap = new ClientBootstrap(factory);
        
        
        bootstrap.setPipelineFactory(new ClientPipelineFactory());
        
        bootstrap.setOption("tcpNoDelay", true);        
        bootstrap.setOption("keepAlive", true);
        ChannelFuture chnFuture = bootstrap.connect(new InetSocketAddress(host, port));
        Channel channel = chnFuture.awaitUninterruptibly().getChannel();
        ChannelFuture cnFtWrite = null;
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        
        for(;;)
        {
        	String message = in.readLine();        	
        	if(message  == null)
        	{
        		break;
        	}
        	

    		//MessageObject messageObj = new MessageObject(message);
    		cnFtWrite = channel.write(message + "\r\n");
    		
    		if (message.toLowerCase().equals("bye"))
    		{
    			channel.getCloseFuture().awaitUninterruptibly();
    			break;
    		}
        	// Send       	
        	
        }
        
        if(cnFtWrite != null)
        {
        	cnFtWrite.awaitUninterruptibly();
        }
        	
        channel.close().awaitUninterruptibly();

        factory.releaseExternalResources();
        
        /*
        if(!chnFuture.isSuccess())
        {
        	System.out.println("Not success");
        }
        
        chnFuture.getChannel().getCloseFuture().awaitUninterruptibly();
        */
        
        
        System.out.println("Exit");
    }
}
