package UserData;

import org.jboss.netty.buffer.ChannelBuffer;
import org.jboss.netty.buffer.ChannelBuffers;

import User.User;

public class UserDataInfo extends UserData
{
	public UserDataInfo(User user, int nClassIndex, String key, int nType)
			throws Exception
	{
		super(user, nClassIndex, key, nType);
		// TODO Auto-generated constructor stub
	}

	public byte[] toByteArray() throws Exception
	{
		byte[] data = new byte[33];
		ChannelBuffer outBuff = ChannelBuffers.wrappedBuffer(data);
		outBuff.clear();
		outBuff.writeShort(1);
		outBuff.writeInt(CurrentUser.UserInfo.PID);
		outBuff.writeShort(CurrentUser.UserInfo.Level);
		outBuff.writeInt(CurrentUser.UserInfo.Exp);
		outBuff.writeLong(CurrentUser.UserInfo.Gold);
		outBuff.writeByte(CurrentUser.UserInfo.Gender);
//		outBuff.writeInt(CurrentUser.UserInfo.LoginTime);
//		outBuff.writeInt(CurrentUser.UserInfo.RegisterTime);
//		outBuff.writeShort(CurrentUser.UserInfo.PowerLevel);
//		outBuff.writeShort(CurrentUser.UserInfo.SubPowerLevel);
		//showDebug( "*** Save userUserInfo" ) ;
		return data;		
	}
	
	public boolean load(ChannelBuffer pBuff) throws Exception
	{
		//m_nVersion=pBuff.readShort();
		CurrentUser.UserInfo.PID=pBuff.readInt();
		CurrentUser.UserInfo.Level=pBuff.readShort();
		CurrentUser.UserInfo.Exp=pBuff.readInt();
		CurrentUser.UserInfo.Gold=pBuff.readLong();
		CurrentUser.UserInfo.Gender=pBuff.readByte();
//		CurrentUser.UserInfo.LoginTime=pBuff.readInt();
//		CurrentUser.UserInfo.RegisterTime=pBuff.readInt();
//		CurrentUser.UserInfo.PowerLevel=pBuff.readShort();
//		CurrentUser.UserInfo.SubPowerLevel=pBuff.readShort();
//		showDebug( "*** Load userUserInfo" ) ;
		return true;
	}
	
    public boolean login() throws Exception
    {
//        int nDiffDay = 0;
//
//        m_pUser.m_pPvE.load();
//        m_pUser.m_pPvE.newDayChanged();
//
//        m_pUser.m_pInfo.nLoginTime = (int)(System.currentTimeMillis()/1000) ;
//        m_pUser.appendLogLogin();
        return true;
    }
    
}
