package Server;

import io.netty.buffer.ByteBuf;
import io.netty.channel.ChannelHandlerContext;
import io.netty.channel.ChannelOutboundHandlerAdapter;
import io.netty.channel.ChannelPromise;

public class TimerEncoder extends ChannelOutboundHandlerAdapter
{
	@Override
	public void write(ChannelHandlerContext ctx, Object msg, ChannelPromise promise)
	{
		UnixTime m = (UnixTime) msg;
		ByteBuf buf = ctx.alloc().buffer(4);
		
		buf.writeInt(m.value());
		ctx.write(buf, promise);		
	}
}
