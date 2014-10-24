package Server;

import java.util.concurrent.ConcurrentHashMap;

import org.jboss.netty.channel.Channel;
import org.jboss.netty.channel.ChannelHandlerContext;
import org.jboss.netty.channel.ChannelStateEvent;
import org.jboss.netty.channel.ExceptionEvent;
import org.jboss.netty.channel.MessageEvent;
import org.jboss.netty.channel.SimpleChannelHandler;

public class SocketServerHandler extends SimpleChannelHandler
{	
	public static ConcurrentHashMap<Channel, Long> m_pUnknownConnections = new ConcurrentHashMap<Channel, Long>();
	
	@Override
	public void messageReceived(ChannelHandlerContext ctx, MessageEvent e) 
	{
        System.out.println("Server: ");        
        // Convert to a String first.
        String request = (String) e.getMessage();
        //MessageObject m = (MessageObject) e.getMessage();
        System.out.println("Client sent: " +request + " channel:" + e.getChannel().toString());
        
        
        if (request.toLowerCase().equals("bye"))
        {
        	e.getChannel().close();
        }
        
        
        //e.getChannel().close();
	}	
//	@Override
//	public void messageReceived(ChannelHandlerContext ctx, MessageEvent e) 
//	{
//		ChannelBuffer buf = (ChannelBuffer)e.getMessage();
//		long data = buf.readInt();
//		System.out.println(data + " --> data");
//		e.getChannel().close();
//	}
	
	@Override
	public void channelBound(ChannelHandlerContext ctx, ChannelStateEvent e) 
	{
		System.out.println("Channel bound");
	}
	
	@Override
	public void channelConnected(ChannelHandlerContext ctx, ChannelStateEvent e) throws Exception 
	{
		System.out.println("Channel connected");

        Channel channel = e.getChannel();
        addNewConnection(channel);
	}
	
	 @Override
	 public void exceptionCaught(ChannelHandlerContext ctx, ExceptionEvent e) 
	 {
		 e.getCause().printStackTrace();
		 e.getChannel().close();
	 }
	 
	 @Override
	 public void channelDisconnected(ChannelHandlerContext ctx, ChannelStateEvent e) 
	 {
		 System.out.println("Channel disconnected");
		 m_pUnknownConnections.remove(e.getChannel());
	 }
	 
	 public static void addNewConnection(Channel channel) throws Exception
	 {	 
		 m_pUnknownConnections.put(channel, System.currentTimeMillis());
	 }
}
