package Server;

import java.nio.charset.Charset;

import org.jboss.netty.buffer.ChannelBuffer;
import org.jboss.netty.channel.Channel;
import org.jboss.netty.channel.ChannelHandlerContext;
import org.jboss.netty.handler.codec.frame.FrameDecoder;

public class SocketServerDecoder extends FrameDecoder
{
	@Override
	protected Object decode(ChannelHandlerContext ctx, Channel channel, ChannelBuffer buffer) throws Exception
	{
		if (buffer.readableBytes() > 1) 
		{
			String str = "empty";
			System.out.println("Decode 1 " + buffer.toString());        
			str = buffer.toString(Charset.forName("UTF-8"));

			int index = buffer.readInt();
			System.out.println("Decode 2 " + str + " - " + index);
			return new MessageObject(str);
		}
		

		return null; 
	}
}
	