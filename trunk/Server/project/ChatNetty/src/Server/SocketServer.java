package Server;

import java.net.InetSocketAddress;
import java.util.concurrent.Executors;
import java.util.concurrent.TimeUnit;

import org.jboss.netty.bootstrap.ServerBootstrap;
import org.jboss.netty.channel.ChannelFactory;
import org.jboss.netty.channel.ChannelFuture;
import org.jboss.netty.channel.ChannelPipeline;
import org.jboss.netty.channel.socket.nio.NioServerSocketChannelFactory;
import org.jboss.netty.handler.codec.string.StringDecoder;
import org.jboss.netty.handler.execution.ExecutionHandler;
import org.jboss.netty.handler.execution.OrderedMemoryAwareThreadPoolExecutor;

public class SocketServer 
{
	 public  static String   s_strIPAddress;
	 public  static int      s_nPort;
	 
	public static void main(String[] args) throws Exception
	{  
		final long SERVER_CHANNEL_MEMORY_LIMIT = 99999;
		int port = 8080;
		String ip = "192.168.1.197";
		
		
		 // Configure the server.
		ChannelFactory factory = new NioServerSocketChannelFactory(
				Executors.newCachedThreadPool(), 
				Executors.newCachedThreadPool());

        ServerBootstrap bootstrap = new ServerBootstrap(factory);
        // Set up the pipeline factory.
        int threadPoolSize = Runtime.getRuntime().availableProcessors() << 3; // 8x
        long globalMemLimit = Runtime.getRuntime().maxMemory() >> 2;
        ChannelPipeline pipeline = bootstrap.getPipeline();
        pipeline.addLast("executor",
                            new ExecutionHandler
                            (
                                new OrderedMemoryAwareThreadPoolExecutor
                                (
                                    threadPoolSize,
                                    SERVER_CHANNEL_MEMORY_LIMIT,
                                    globalMemLimit,
                                    0, TimeUnit.MILLISECONDS
                                )
                            )
                        );
        pipeline.addLast("decoder", new StringDecoder());
        pipeline.addLast("handler", new SocketServerHandler());

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