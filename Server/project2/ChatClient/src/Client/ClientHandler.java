package Client;

import org.jboss.netty.channel.ChannelFuture;
import org.jboss.netty.channel.ChannelFutureListener;
import org.jboss.netty.channel.ChannelHandlerContext;
import org.jboss.netty.channel.ChannelStateEvent;
import org.jboss.netty.channel.SimpleChannelHandler;

public class ClientHandler extends SimpleChannelHandler
{
	// Send message
	
	@Override
	public void channelConnected(ChannelHandlerContext ctx, ChannelStateEvent e) 
	{
		System.out.println("Channel connected");
		//f.addListener(ChannelFutureListener.CLOSE);
	}
	

	/*
	@Override
	public void channelConnected(ChannelHandlerContext ctx, ChannelStateEvent e) 
	{
		System.out.println("Channel connected");
		Channel ch = e.getChannel();
		ChannelBuffer buf = ChannelBuffers.buffer(4);
		buf.writeInt((int) (System.currentTimeMillis() / 1000L + 2208988800L));
		ChannelFuture f = e.getChannel().write(buf);
		
		
		f.addListener(new ChannelFutureListener() 
		{
            public void operationComplete(ChannelFuture future) 
            {
            	Channel ch = future.getChannel();
                ch.close();
            }
        });
		
		
		f.addListener(ChannelFutureListener.CLOSE);
	}
	*/
	 public void channelDisconnected(ChannelHandlerContext ctx, ChannelStateEvent e) 
	 {
		 System.out.println("Channel disconnected");
	 }
	
}
