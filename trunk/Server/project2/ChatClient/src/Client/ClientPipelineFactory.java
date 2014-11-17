package Client;

import org.jboss.netty.channel.ChannelPipeline;
import org.jboss.netty.channel.ChannelPipelineFactory;
import org.jboss.netty.channel.Channels;
import org.jboss.netty.handler.codec.serialization.ObjectEncoder;

public class ClientPipelineFactory implements ChannelPipelineFactory
{
	public ChannelPipeline getPipeline() throws Exception
	{
		//ChannelPipeline pipeline = Channels.pipeline(new TimeEncoder(), new ClientHandler());
		ChannelPipeline pipeline = Channels.pipeline(new ObjectEncoder());
        //TimeEncoder encoder = new TimeEncoder();
		//pipeline.addLast("encoder", new ObjectEncoder());
		//pipeline.addLast("encoder", encoder);
		return pipeline;
	}
}
