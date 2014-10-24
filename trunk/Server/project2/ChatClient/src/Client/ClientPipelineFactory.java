package Client;

import org.jboss.netty.channel.ChannelPipeline;
import org.jboss.netty.channel.ChannelPipelineFactory;
import org.jboss.netty.channel.Channels;
import org.jboss.netty.handler.codec.string.StringEncoder;

public class ClientPipelineFactory implements ChannelPipelineFactory
{
	public ChannelPipeline getPipeline() throws Exception
	{
		ChannelPipeline pipeline = Channels.pipeline(new ClientHandler());
        
        //TimeEncoder encoder = new TimeEncoder();
		pipeline.addLast("encoder", new StringEncoder());
		
		return pipeline;
	}
}
