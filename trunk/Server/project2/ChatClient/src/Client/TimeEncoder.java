package Client;

import static org.jboss.netty.buffer.ChannelBuffers.buffer;

import java.nio.charset.Charset;

import org.jboss.netty.buffer.ChannelBuffer;
import org.jboss.netty.channel.ChannelHandlerContext;
import org.jboss.netty.channel.Channels;
import org.jboss.netty.channel.MessageEvent;
import org.jboss.netty.channel.SimpleChannelHandler;

public class TimeEncoder extends SimpleChannelHandler {
	public void writeRequested(ChannelHandlerContext ctx, MessageEvent e) 
	{
		System.out.println("writeRequested");
		MessageObject m = (MessageObject) e.getMessage();
		ChannelBuffer buf = buffer(m.getContent().length() + 10);
		buf.writeBytes(m.getContent().getBytes(Charset.forName("UTF-8")));
		Channels.write(ctx, e.getFuture(), buf);
	}
}
//
// public class TimeEncoder extends FrameDecoder
// {
// @Override
// protected Object encode(
// ChannelHandlerContext ctx, Channel channel, ChannelBuffer buffer)
// {
// if (buffer.readableBytes() < 1)
// {
// return null;
// }
// byte[] temp = null;
// buffer.readBytes(temp);
// String str = "empty";
// try
// {
// str = new String(temp, "UTF-8");
// } catch (UnsupportedEncodingException e)
// {
// e.printStackTrace();
// }
// return new MessageObject(str);
// }
// }