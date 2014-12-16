package Utils;

import org.jboss.netty.buffer.ChannelBuffer;

public class Misc
{
	public static String readBufferStr(ChannelBuffer pBuff, String charSet)
			throws Exception
	{
		// int len = ((pBuff.readByte()&0xFF) << 8) | (pBuff.readByte()&0xFF);
		int len = pBuff.readShort();
		if (len > 0)
		{
			byte[] bytes = new byte[len];
			pBuff.readBytes(bytes);
			if (charSet != null)
			{
				return new String(bytes, charSet);
			}
			return new String(bytes);
		}
		return null;
	}
}
