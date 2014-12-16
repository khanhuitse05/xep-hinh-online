package Server;

import org.jboss.netty.buffer.ChannelBuffer;
import org.jboss.netty.buffer.ChannelBuffers;
import org.jboss.netty.channel.Channel;
import org.jboss.netty.channel.ChannelHandlerContext;
import org.jboss.netty.handler.codec.frame.FrameDecoder;

public class SocketServerDecoder extends FrameDecoder
{
	@Override
	protected Object decode(ChannelHandlerContext ctx, Channel channel, ChannelBuffer buffer) throws Exception
	{		

        ChannelBuffer message = null;
        if (buffer.readableBytes() > 0)
        {
            buffer.markReaderIndex();
            int type = buffer.readUnsignedByte();
            if (type == 0 )
            {
                int nMsgLen = buffer.readableBytes();
                if (nMsgLen > 0)
                {
                    message = buffer.copy(buffer.readerIndex(), nMsgLen);
                    buffer.skipBytes(nMsgLen);
                }
                else
                {
                    buffer.resetReaderIndex();
                }
            }
            else if (type == '<' )
            {            	

                System.out.println("type = <");
//                channel.write(ChannelBuffers.wrappedBuffer(SocketServer.m_pPolicy));
//                buffer.clear();
            }
            else
            {
                System.out.println("Disconnect");
//                User pUser = (User)ctx.getAttachment();
//                if (pUser == null)
//                {
//                    channel.close();
//                }
//                else
//                {
//                    pUser.handleDisconnect(true);
//                }
            }
        }
        return message;
	}
}
	