import io.netty.channel.ChannelHandlerContext;
import io.netty.channel.group.ChannelGroup;

import java.nio.channels.Channel;
import java.util.concurrent.atomic.AtomicInteger;
import java.util.concurrent.atomic.AtomicLong;
import java.util.logging.Logger;


public class PongHandler extends SimpleChannelHandler
{
	final Logger logger = Logger.getLogger(PongHandler.class.getName());
	
	// is there any pongh message to send
	final AtomicInteger isPong = new AtomicInteger(0);
	
	// bytes monitor
	final AtomicLong transferredBytes = new AtomicLong();
	
	//Pong Object
	PingPong pp;
	
	ChannelGroup channelGroup = null;
	
	public PongHandler(ChannelGroup channelGroup) 
	{
		
	}
	
	@Override
	public void channelConnected(ChannelHandlerContext ctx, ChannelStateEvent e)
	{
		channelGroup.add(ctx.getChannel());
	}
	
	// if write a pong is not possible before, just write it now
	@Override
	public void channelInterestChanged(ChannelHandlerContext ctx, ChannelStateEvent e)
	{
		generatePongTraffic(e);
	}
	
	// Whenre ping message is received, send pong
	@Override
	public void messageReceived(ChannelHandlerContext ctx, ChannelStateEvent e)
	{
		PingPong pptmp = (PingPong)e.getMessage();
		
		if(pptmp != null)
		{
			pp = pptmp;
			PongHandler.transferredBytes.addAndGet(pp.status.length + pp.test.length() + 16);
			isPong.incrementAndGet();
			generatePongTraffic(e);
		}
	}
	
	@Override
	public void exceptionCaught(ChannelHandlerContext ctx, ChannelStateEvent e)
	{
		Channel.close(e.getChannel());
	}
	
	// Used when write is possible
	public void generatePongTraffic(ChannelStateEvent e)
	{
		if(isPong.intValue() > 0 )
		{
			Channel channel = e.getChannel();
			sendPongTraffic(channel);
		}
	}
	
	// Truly send pong traffic
	public void sendPongTraffic(Channel channel)
	{
		if((channel.getInterestOps() & Channel.OP_WRITE)) == 0)
		{
			pp.rank++;
			isPong.decrementAndGet();
			Channel.write(channel, pp);
		}
	}
	
	
	
}
