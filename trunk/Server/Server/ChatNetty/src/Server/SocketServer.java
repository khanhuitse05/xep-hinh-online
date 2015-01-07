package Server;

import java.net.InetSocketAddress;
import java.util.concurrent.Executors;
import java.util.concurrent.TimeUnit;

import org.jboss.netty.bootstrap.ServerBootstrap;
import org.jboss.netty.channel.AdaptiveReceiveBufferSizePredictorFactory;
import org.jboss.netty.channel.ChannelPipeline;
import org.jboss.netty.channel.socket.nio.NioServerSocketChannelFactory;
import org.jboss.netty.handler.execution.ExecutionHandler;
import org.jboss.netty.handler.execution.OrderedMemoryAwareThreadPoolExecutor;

public class SocketServer 
{
	public  static String   IPAddress  = "192.168.0.101";
	public  static int      Port = 8080;
	 
	public static void main(String[] args) throws Exception
	{  
		 // Configure the server.
        ServerBootstrap bootstrap = new ServerBootstrap(new NioServerSocketChannelFactory(Executors.newCachedThreadPool(), Executors.newCachedThreadPool()));

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
                                    (65536  << 1) ,
                                    globalMemLimit,
                                    0, TimeUnit.MILLISECONDS
                                )
                            )
                        );
        pipeline.addLast("handler", new SocketServerHandler());

        //tcp option
        bootstrap.setOption("child.keepAlive", true);
        bootstrap.setOption("child.tcpNoDelay", true);
        bootstrap.setOption("child.receiveBufferSizePredictorFactory",
                            new AdaptiveReceiveBufferSizePredictorFactory(
                                256 ,
                                16384 ,
                                65536 )
                            );
        bootstrap.setOption("child.sendBufferSize", (1024*1024) );
        bootstrap.setOption("child.receiveBufferSize", (1024*1024) ); 
        bootstrap.setOption("writeBufferLowWaterMark", (32*1024) );
        bootstrap.setOption("writeBufferHighWaterMark", (36*1024) );

        // Bind and start to accept incoming connections.
        bootstrap.bind(new InetSocketAddress(IPAddress, Port));
        int nbThreads =  Thread.getAllStackTraces().keySet().size();
        
        System.out.println("Bind + number of thread = " + nbThreads + " size: " + threadPoolSize);
	}

}
