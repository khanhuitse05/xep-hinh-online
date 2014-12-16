package User;

import java.net.InetSocketAddress;

import org.jboss.netty.buffer.ChannelBuffer;
import org.jboss.netty.buffer.ChannelBuffers;
import org.jboss.netty.channel.Channel;
import org.jboss.netty.channel.ChannelHandlerContext;

public class User
{

	public Channel UserChannel = null;
	public ChannelHandlerContext AttachContext = null;
	public ChannelBuffer OutBuffer = null;
	// public LogParser Loggers;
	public byte[] DataBuffer = null;

	public int RealBufferIdx = 0;
	public int EstimateBufferIdx = 0;

	// Pool
	public int PoolCacheID = 0;
	public int PoolBaseID = 0;

	// The time syn to database
	public int LastSynTime = 0;

	// Game play
	// public GamePlay CurrentGame;
	// public GamePlay[] GameModes;

	// ----------------------------------------------------------
	// We make only one common instance to save memory and avoid leaking mem.
	// public GamePlay.GameBoard GameBoard;
	// public GamePlay.MatchStep MatchStep;
	// ----------------------------------------------------------

	// User info
	public Info UserInfo = null;
	// public UserPower Power = null;
	// public UserSystem System = null;

	// Game mode
	public byte GameMode;
	// Competitor type
	public byte CompetitorType;

	// Is Ingame
	public int GameState;

	public void writeToClientAbs(ChannelBuffer buff)
	{
		if (buff != null)
		{
			UserChannel.write(buff);
		}
	}

	public void commitBuffer(int size)
	{
		if (EstimateBufferIdx != RealBufferIdx)
		{
			if (size > 0)
			{
				RealBufferIdx += size;
				if (RealBufferIdx >= 131072)
				{
					RealBufferIdx = 0;
				}
			}
			else
			{
				RealBufferIdx = 0;
			}
			EstimateBufferIdx = RealBufferIdx;
		}
	}

	public ChannelBuffer getBuffer(int nEstSize)
	{
		if (EstimateBufferIdx == RealBufferIdx)
		{
			if (nEstSize > 0)
			{
				if (131072 - RealBufferIdx < nEstSize)
				{
					RealBufferIdx = EstimateBufferIdx = 0;
				}
			}
			else
			// get full buffer
			{
				RealBufferIdx = EstimateBufferIdx = 0;
			}

			nEstSize = 131072 - RealBufferIdx;
			EstimateBufferIdx = 131072;

			ChannelBuffer buffer = ChannelBuffers.wrappedBuffer(DataBuffer,
					RealBufferIdx, nEstSize);
			buffer.clear();
			return buffer;
		}
		return null;
	}

	public void registerUser() throws Exception
	{
		// for (int i=0; i<UserData.length; i++)
		// {
		// UserData[i].initialize();
		// UserData[i].m_bIsChanged = true;
		// }
		//
		// if(Loggers != null){ Loggers.parse(); Loggers.clear();} ;
	}

	public ChannelBuffer respLogin() throws Exception
	{
		GameState = 3;
		// UserInfo.login();

		byte[] pStrID = UserInfo.UserID.getBytes();
		// int
		// nHeaderLen=(0+33+pStrID.length+(13)*(Item.m_vItems.size())+Consts.s_pDiamondMineFloors.length);
		int nHeaderLen = 0 + 33 + pStrID.length;
		int nBufferLen = (nHeaderLen >= 8 ? nHeaderLen : 8) + 4;
		ChannelBuffer pOutBuff = this.getBuffer(nBufferLen);

		pOutBuff.writeShort(nHeaderLen);
		pOutBuff.writeShort(UserInfo.UserCommand);
		pOutBuff.writeShort(pStrID.length);
		pOutBuff.writeBytes(pStrID);
		pOutBuff.writeByte(UserInfo.Gender);
		pOutBuff.writeShort(this.UserInfo.Level);
		pOutBuff.writeInt(this.UserInfo.CoinPayment);
		pOutBuff.writeInt(this.UserInfo.CoinBonus);
		pOutBuff.writeLong(this.UserInfo.Gold);
		pOutBuff.writeShort(this.UserInfo.PowerLevel);
		pOutBuff.writeShort(this.UserInfo.SubPowerLevel);
		pOutBuff.writeInt(this.UserInfo.Exp);

		// pOutBuff.writeShort(Item.m_vItems.size());

		// for(UserData_Item.Item objitem:Item.m_vItems)
		// {
		// pOutBuff.writeInt(objitem.nPID);
		// pOutBuff.writeInt(objitem.nID);
		// pOutBuff.writeByte(objitem.nStorage);
		// pOutBuff.writeInt(objitem.nExpiredTime);
		// }

		// pOutBuff.writeShort(Consts.s_pDiamondMineFloors.length);
		// pOutBuff.writeBytes(Consts.s_pDiamondMineFloors);

		this.commitBuffer(nBufferLen);

		// if(Loggers != null){ Loggers.parse(); Loggers.clear();} ;
		return pOutBuff;
	}

	public static class Info
	{
		// /////////////////////////////////////////////////////////////////////////////////
		// Main data
		// /////////////////////////////////////////////////////////////////////////////////
		public int PID;
		public String UserID;
		public String LoginName;
		public String Nickname;

		// Level
		public int Exp;
		public short Level;

		// Power
		public short PowerLevel;
		public short SubPowerLevel;

		// Gender
		public byte Gender;
		// Gold
		public long Gold;

		// Time
		public int LoginTime;
		public int RegisterTime;

		// Coin
		public int CoinPayment;
		public int CoinBonus;
		public int CoinTotalPayment;
		public int CoinTotalBonus;

		// /////////////////////////////////////////////////////////////////////////////////
		// Process only
		// /////////////////////////////////////////////////////////////////////////////////
		// Command
		public int UserCommand;
		// Server ID
		public int ServerID;
		// Client source: Web, mobile
		public String ClientSource;
		public String DBKeyPrefix;
		// Session
		public String SessionID;

		// /////////////////////////////////////////////////////////////////////////////////
		// Real-time purpose
		// /////////////////////////////////////////////////////////////////////////////////
		public int IsOnline;
	};

	public void initVariables(ChannelHandlerContext handler,
			InetSocketAddress address, Channel channel) throws Exception
	{
		// m_pPower = new UserPower();
		// m_pSystem = new UserSystem();
		// m_pLoggers = new LogParser();

		AttachContext = handler;
		// m_pSystem.strIPAddress = address.getHostName();
		UserChannel = channel;
		if (UserChannel != null)
		{
			DataBuffer = new byte[131072];
		}

		// m_pGameModes = new GamePlay[7];
	}

	public User(ChannelHandlerContext handler, InetSocketAddress address,
			Channel channel) throws Exception
	{
		UserInfo = new User.Info();

		// Init
		initVariables(handler, address, channel);
	}

	public User() throws Exception
	{
		UserInfo = new User.Info();

		PoolCacheID = -1;
		PoolBaseID = -1;
	}
}
