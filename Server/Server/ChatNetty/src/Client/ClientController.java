package Client;

import java.net.InetSocketAddress;

import org.jboss.netty.buffer.ChannelBuffer;
import org.jboss.netty.channel.ChannelHandlerContext;
import org.jboss.netty.channel.MessageEvent;
import org.jboss.netty.util.internal.ConcurrentHashMap;

import Player.Player;
import User.User;
import Utils.Misc;

public class ClientController
{
    public static ConcurrentHashMap<Integer, Player>	AllPlayers = new ConcurrentHashMap();
    
    public static ChannelBuffer login(ChannelBuffer pBuff, ChannelHandlerContext ctx, MessageEvent e) throws Exception
    {
		int nCmd = pBuff.readShort();
		Integer strUserID = e.getChannel().getId();

		
        if (nCmd != 0 ) 
        {
            return null;
        }

    
        //Player user = new Player();
        //User tempUser = AllPlayers.get(strUserID);
        
        //if (tempUser != null)
        {
            //pTempUser.handleDisconnect(true);
        }

        
        //user.UserInfo.UserCommand          = nCmd;
        //user.initVariables(ctx, (InetSocketAddress)e.getRemoteAddress(), e.getChannel());

        System.out.println( "Login to SERVER" ) ;

        //AllPlayers.put(user.UserInfo.UserID, user);
        //ChannelBuffer pOutBuff = user.respLogin();

        // Set attachment
        //ctx.setAttachment(user);
        //return pOutBuff;
        return null;
    }
    
}
