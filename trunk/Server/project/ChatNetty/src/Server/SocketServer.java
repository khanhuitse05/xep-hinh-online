package Server;

import java.net.InetSocketAddress;
import java.util.concurrent.Executors;

import org.jboss.netty.bootstrap.ServerBootstrap;
import org.jboss.netty.channel.ChannelFactory;
import org.jboss.netty.channel.ChannelFuture;
import org.jboss.netty.channel.ChannelPipeline;
import org.jboss.netty.channel.ChannelPipelineFactory;
import org.jboss.netty.channel.Channels;
import org.jboss.netty.channel.socket.nio.NioServerSocketChannelFactory;
import org.jboss.netty.handler.codec.serialization.ClassResolvers;
import org.jboss.netty.handler.codec.serialization.ObjectDecoder;

import Client.MessageObject;

public class SocketServer 
{
	 public  static String   s_strIPAddress;
	 public  static int      s_nPort;
	 
	public static void main(String[] args) throws Exception
	{  
		final long SERVER_CHANNEL_MEMORY_LIMIT = 99999;
		int port = 8080;
		String ip = "192.168.1.168";		
		
		 // Configure the server.
		ChannelFactory factory = new NioServerSocketChannelFactory(
				Executors.newCachedThreadPool(), 
				Executors.newCachedThreadPool());

        ServerBootstrap bootstrap = new ServerBootstrap(factory);
        bootstrap.setPipelineFactory(new ChannelPipelineFactory() {
        	  public ChannelPipeline getPipeline() throws Exception {
        		   return Channels.pipeline(
        		    //new ObjectDecoder(ClassResolvers.weakCachingConcurrentResolver(SocketServer.class.getClassLoader())),
        			new SocketServerDecoder(),
        		    new SocketServerHandler()
        		   );
        		  };
        		 });
        
        // Set up the pipeline factory.
        int threadPoolSize = Runtime.getRuntime().availableProcessors() << 3; // 8x
        long globalMemLimit = Runtime.getRuntime().maxMemory() >> 2;
        
//        ChannelPipeline pipeline = bootstrap.getPipeline();
//        pipeline.addLast("executor",
//                            new ExecutionHandler
//                            (
//                                new OrderedMemoryAwareThreadPoolExecutor
//                                (
//                                    threadPoolSize,
//                                    SERVER_CHANNEL_MEMORY_LIMIT,
//                                    globalMemLimit,
//                                    0, TimeUnit.MILLISECONDS
//                                )
//                            )
//                        );
        //pipeline.addLast("decoder", new ObjectDecoder(ClassResolvers.weakCachingConcurrentResolver(null)));
        //pipeline.addLast("decoder", new ObjectDecoder(ClassResolvers.weakCachingConcurrentResolver(SocketServer.class.getClassLoader())));
        //pipeline.addLast("handler", new SocketServerHandler());
        //pipeline.addLast("decoder", new SocketServerDecoder());
        
        //tcp option
        bootstrap.setOption("child.keepAlive", true);
        bootstrap.setOption("child.tcpNoDelay", true);
        bootstrap.setOption("child.reuseAddress", true);  
        bootstrap.setOption("child.connectTimeoutMillis", 100);  
        bootstrap.setOption("readWriteFair", true);  
        
        
        // Bind and start to accept incoming connections.
        s_strIPAddress  = ip;
        s_nPort         = port;
        
        ChannelFuture chnFuture = bootstrap.bind(new InetSocketAddress(s_strIPAddress, s_nPort)).getCloseFuture();

        System.out.println("Server started ... ");

        chnFuture.awaitUninterruptibly();
        factory.releaseExternalResources();
        System.out.println("Shutdown ... ");     
        
	}

}
