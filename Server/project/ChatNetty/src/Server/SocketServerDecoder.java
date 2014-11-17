package Server;

import java.io.ByteArrayInputStream;
import java.io.ObjectInputStream;
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
		MessageObject object2 = null;
		if (buffer.readableBytes() > 0) 
		{
			

			System.out.println("Haxe send " + buffer.readInt());     
			
            buffer.markReaderIndex();
			String str = "empty";
			System.out.println("Decode 1 " + buffer.toString());        
			//str = buffer.toString(Charset.forName("UTF-8"));

			ByteArrayInputStream in = new ByteArrayInputStream(buffer.array());

			System.out.println("Decode 2 " + buffer.toString());

			ObjectInputStream is = new ObjectInputStream(in);

			System.out.println("Decode 3 " + buffer.toString());        

			MessageObject object =(MessageObject)is.readObject();
			

			System.out.println("Decode 4 " + buffer.toString());        

			int index = buffer.readUnsignedByte();
			int nMsgLen = buffer.readableBytes();
			if (nMsgLen > 0)
            {
                //message = buffer.copy(buffer.readerIndex(), nMsgLen);
                buffer.skipBytes(nMsgLen);
            }
            else
            {
                buffer.resetReaderIndex();
            }
			
			System.out.println("Decode 2 " + object.getContent() + " - ");
			return object;
		}		

		return object2; 
	}
}
	