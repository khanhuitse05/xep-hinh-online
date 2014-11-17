package Client;

import java.io.ByteArrayOutputStream;
import java.io.IOException;
import java.io.ObjectOutputStream;

import org.jboss.netty.buffer.ChannelBuffer;
import org.jboss.netty.buffer.ChannelBuffers;
import org.jboss.netty.channel.ChannelFuture;
import org.jboss.netty.channel.ChannelHandlerContext;
import org.jboss.netty.channel.ChannelStateEvent;
import org.jboss.netty.channel.Channels;
import org.jboss.netty.channel.ExceptionEvent;
import org.jboss.netty.channel.SimpleChannelHandler;

public class ClientHandler extends SimpleChannelHandler
{
	// Send message
	
	@Override
	public void channelConnected(ChannelHandlerContext ctx, ChannelStateEvent e) throws IOException 
	{
		System.out.println("Channel connected");
		ChannelFuture cnFtWrite = null;
		MessageObject messageObj = new MessageObject("hay hom");
		
//		ChannelBuffer buf = ChannelBuffers.buffer(100);
//		
//		   ByteArrayOutputStream b = new ByteArrayOutputStream();
//	        ObjectOutputStream o = new ObjectOutputStream(b);
//	        o.writeObject(messageObj);
//	        
//
//			buf.writeBytes(b.toByteArray());
//		Channels.write(ctx, e.getFuture(), buf);
		
		//e.getChannel().write(messageObj);
		System.out.println("Write");
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
	 
	 @Override
	 public void exceptionCaught(ChannelHandlerContext ctx, ExceptionEvent e) 
	 {
		 System.out.println(e.toString());
	 }
	
}
