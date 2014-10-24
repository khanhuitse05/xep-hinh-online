import io.netty.channel.ChannelPipeline;
import io.netty.channel.group.ChannelGroup;
import io.netty.handler.codec.serialization.ObjectDecoder;
import io.netty.handler.codec.serialization.ObjectEncoder;

import java.nio.channels.Channels;
import java.util.concurrent.BlockingQueue;


public class PongPipelineFactory implements ChannelPipelineFactory 
{
	ChannelGroup channelGroup = null;
	OrderdMemoryAwareThreadPoolExecutor pipelineExecutor = null;
	
	BlockingQueue<Integer> answer = null;
	int max = 100;
	
	// Constructor
	public PongPipelineFactory(ChannelGroup channelGroup, OrderdMemoryAwareThreadPoolExecutor pipelineExecutor, BlockingQueue<Integer> answer, int max)
	{
		super();
		
		
	}
	
	// Initiate the pipeline for the newly active connection with OjectXxxCoder
	public ChannelPipeline getPipeline() throws Exception
	{
		if(max == 0)
		{
			// Stop globally
			answer.add(new Integer(0));
		}
		
		ChannelPipeline pipeline = Channels.pipeline();
		pipeline.addLast("decoder", new ObjectDecoder());
		pipeline.addLast("encoder", new ObjectEncoder());
		pipeline.addLast("pipelineExecutor", new ExecutorHandler(pipelineExecutor));
		PongHander handler = new PongHandler(channelGroup);
		pipeline.addLast("handler", handler);
		max--;
		return pipeline;		
	}
	
	
}
