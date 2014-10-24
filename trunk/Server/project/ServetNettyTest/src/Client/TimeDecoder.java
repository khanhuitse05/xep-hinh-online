package Client;

import io.netty.buffer.ByteBuf;
import io.netty.channel.ChannelHandlerContext;
import io.netty.handler.codec.ByteToMessageDecoder;

import java.util.List;

import Server.UnixTime;

public class TimeDecoder extends ByteToMessageDecoder
{
	@Override
	protected void decode(ChannelHandlerContext ctx, ByteBuf buf, List<Object> out)
	{
		if(buf.readableBytes() < 4)
		{
			return;
		}
		
		out.add(new UnixTime(buf.readInt()));
	}
	
	
}
