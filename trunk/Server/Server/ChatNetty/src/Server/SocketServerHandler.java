package Server;

import java.util.concurrent.ConcurrentHashMap;

import org.jboss.netty.buffer.ChannelBuffer;
import org.jboss.netty.channel.Channel;
import org.jboss.netty.channel.ChannelHandlerContext;
import org.jboss.netty.channel.ChannelStateEvent;
import org.jboss.netty.channel.ExceptionEvent;
import org.jboss.netty.channel.MessageEvent;
import org.jboss.netty.channel.SimpleChannelHandler;

import Client.ClientController;
import Connection.ConnectionManager;
import Player.Player;
import User.User;

public class SocketServerHandler extends SimpleChannelHandler
{
	public static ConcurrentHashMap<Channel, Integer>	UnknownConnections	= new ConcurrentHashMap<Channel, Integer>();

	// public static int m_nLastCheckDumpConnection;

	// @Override
	public void channelConnected(ChannelHandlerContext ctx, ChannelStateEvent e)
			throws Exception
	{
		Channel channel = e.getChannel();
		addNewConnection(channel);
		System.out.println("=>> CLIENT CONNECTED !!!");
	}

	// @Override
	public void channelDisconnected(ChannelHandlerContext ctx,
			ChannelStateEvent e) throws Exception
	{
		User pUser = (User) ctx.getAttachment();
		if (pUser != null)
		{
			// pUser.handleDisconnect(false);
		}
		UnknownConnections.remove(e.getChannel());
		System.out.println("=>> CLIENT DISCONNECTED !!!");
		super.channelDisconnected(ctx, e);
	}

	// @Override
	public void messageReceived(ChannelHandlerContext ctx, MessageEvent e)
			throws Exception
	{
		System.out.println("RECEIVE MESSAGE");

		Channel channel = e.getChannel();
		Player player = (Player) ctx.getAttachment();
		ChannelBuffer buffer = ((ChannelBuffer) e.getMessage());
		
		try
		{
			System.out.println("in try");

			if (player != null)
			{
				System.out.println("player != null - ID: " + player.getPlayerID() );

				if (ConnectionManager.AllPlayers.get(player.getPlayerID()) == player)
				{
					player.HandleBuffer(buffer);
				}
				//else
				{
					// pUser.handleDisconnect(true);
				}
			}
			
			else
			{
				System.out.println("player == null");
				ChannelBuffer bufferOut = ConnectionManager.GetInstance()
						.PlayerLogin(buffer, ctx, e);
				player = (Player) ctx.getAttachment();
				
				//if (player != null) 
				{
					System.out.println("else player != null");
					//if (bufferOut != null)
					{
						System.out.println("bufferOut == null");
						UnknownConnections.remove(channel);
						player.WriteToClient(bufferOut);
					}
				}
			}
			
		}
		catch (Exception ex)
		{
			ex.printStackTrace();
			// USE_DEBUG
		}
	}

	// @Override
	public void exceptionCaught(ChannelHandlerContext ctx, ExceptionEvent e)
	{
		e.getChannel().close();
	}

	/**
     *
     */
	public static void addNewConnection(Channel channel) throws Exception
	{
		int second = (int) (int) (System.currentTimeMillis() / 1000);
		UnknownConnections.put(channel, second);

		// if (second - m_nLastCheckDumpConnection >= 300)
		// {
		// m_nLastCheckDumpConnection = second;
		// Enumeration e = m_pUnknownConnections.keys();
		// while (e.hasMoreElements())
		// {
		// Channel chan = (Channel) e.nextElement();
		// int connectTime = m_pUnknownConnections.get(chan);
		// if (second - connectTime >= 10)
		// {
		// System.out.println("Close zombie connection " + chan);
		// m_pUnknownConnections.remove(chan);
		// chan.close();
		// }
		// }
		// }
	}
}
