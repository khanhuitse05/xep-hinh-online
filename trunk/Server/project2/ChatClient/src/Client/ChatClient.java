package Client;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.net.InetSocketAddress;
import java.util.concurrent.Executor;
import java.util.concurrent.Executors;

import org.jboss.netty.bootstrap.ClientBootstrap;
import org.jboss.netty.channel.Channel;
import org.jboss.netty.channel.ChannelFactory;
import org.jboss.netty.channel.ChannelFuture;
import org.jboss.netty.channel.ChannelPipeline;
import org.jboss.netty.channel.ChannelPipelineFactory;
import org.jboss.netty.channel.Channels;
import org.jboss.netty.channel.socket.nio.NioClientSocketChannelFactory;
import org.jboss.netty.handler.codec.serialization.ObjectEncoder;

public class ChatClient 
{
	public static void main(String[] args) throws Exception 
	{
		String host = "192.168.1.168";
		int port = 8080;
        
		/*
        ChannelFactory factory = new NioClientSocketChannelFactory(
        		Executors.newCachedThreadPool(),
        		Executors.newCachedThreadPool());
        
        ClientBootstrap bootstrap = new ClientBootstrap(factory);        
        
        bootstrap.setPipelineFactory(new ClientPipelineFactory());
        */
		
		Executor bossPool = Executors.newCachedThreadPool();
		Executor workerPool = Executors.newCachedThreadPool();
		
		ChannelFactory channelFactory = new NioClientSocketChannelFactory(bossPool, workerPool);
		ChannelPipelineFactory pipelineFactory = new ChannelPipelineFactory() {
		  public ChannelPipeline getPipeline() throws Exception {
		    return Channels.pipeline(
		      new ObjectEncoder());
		    }
		};
		ClientBootstrap boostrap = new ClientBootstrap(channelFactory);
		boostrap.setPipelineFactory(pipelineFactory);
		
		
		boostrap.setOption("tcpNoDelay", true);
		boostrap.setOption("keepAlive", true);
        ChannelFuture chnFuture = boostrap.connect(new InetSocketAddress(host, port));
        
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
        	

    		MessageObject messageObj = new MessageObject(message);
    		
    		//MessageObject messageObj = new MessageObject("hay hom");
    		//chnFuture.getChannel().write(messageObj);
        	//System.out.println("write here");
    		
    		
//    		ChannelBuffer buf = ChannelBuffers.buffer(100);
//    		
//    		ByteArrayOutputStream b = new ByteArrayOutputStream();
//    		ObjectOutputStream o = new ObjectOutputStream(b);
//    		o.writeObject(messageObj);
//    		
//    		buf.writeBytes(b.toByteArray());
//    		Channels.write(channel, buf);
    		
    		//cnFtWrite = channel.write(message + "\r\n");
    		//cnFtWrite = Channels.write(channel, messageObj);
    		
        	Channel chan = chnFuture.getChannel();
        	chan.write(messageObj);
        	
        	System.out.println("Wrote");
        	
    		if (message.toLowerCase().equals("bye"))
    		{
    			channel.close();
    			break;
    		}
        	// Send       	
        	
        }
        
        if(cnFtWrite != null)
        {
        	cnFtWrite.awaitUninterruptibly();
        }
        	
        channel.close().awaitUninterruptibly();

        //factory.releaseExternalResources();
        
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
