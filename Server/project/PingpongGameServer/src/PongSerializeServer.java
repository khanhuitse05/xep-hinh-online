import io.netty.bootstrap.ChannelFactory;
import io.netty.bootstrap.ServerBootstrap;
import io.netty.channel.Channel;
import io.netty.channel.group.ChannelGroup;
import io.netty.channel.group.DefaultChannelGroup;

import java.net.InetSocketAddress;
import java.util.concurrent.BlockingQueue;
import java.util.concurrent.Executors;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.TimeUnit;


public class PongSerializeServer 
{
	public static void main(String[] args) throws Exception
	{
		if(args.length != 2)
		{
			System.err.print("Usage: " + PongSerializeServer.class.getSimpleName());
			return;
		}
		
		int port = Integer.parseInt(args[0]);
		int nbConn = Integer.parseInt(args[1]);
		
		// Start server with Non-block of active threads  = 2 * nb  + 1 maximum
		ChannelFactory factory = new NioServerChannelSocketFactory(Executors.newCachedThreadPool(),
				Executors.newCachedThreadPool(),
				Runtime.getRuntime().availableProcessors() * 2 + 1);
		
		ServerBootstrap bootstrap = new ServerBootstrap(factory);
		
		// Create global channel group
		ChannelGroup channelGroup = new DefaultChannelGroup(PongSerializeServer.class.getName());
		
		// Create the blockingQueue to wait for  a limit number of client
		BlockingQueue<Integer> answer = new LinkedBlockingQueue<Integer>();
		
		OrderedMemoryAwareThreadPoolExecutor pipelineExecutor = new OrderedMemoryAwareThreadPoolExecutor(
				200, 1048576, 1073741824, 100, TimeUnit.MILLISECONDS, Executors.defaultThreadFactory());
		
		bootstrap.setPipelineFactory(new PongPipelineFactory(channelGroup, pipelineExecutor, answer, nbConn));
		
		bootstrap.setOption("child.tcpNoDelay", true);
		bootstrap.setOption("child.keepAlive", true);
		bootstrap.setOption("child.reuseAddress", true);
		bootstrap.setOption("child.connectTimeoutMillis", 100);
		bootstrap.setOption("readWriteFair", true);
		
		// Start Netty running
		
		// Create the monitor
		ThroughputMonitor monitor = new ThroughputMonitor();
		
		// Add the parent channel to the group
		Channel channel = bootstrap.bind(new InetSocketAddress(port));
		channelGroup.add(channel);
		
		// Start the monitor
		monitor.start();
		
		// Wait for the server stop
		answer.take();
		
		// End the monitor
		System.out.println("End of the monitor");
		monitor.interrupt();
		
		// Close all the channel
		channelGroup.close().awaitUninterruptibly();
		
		// Close the executor for the pipeline
		pipelineExecutor.shutdownNow();
		
		// Release resource
		factory.releaseExternalResources();		
	}
}
