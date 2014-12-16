package UserData;

import User.User;

public abstract class UserData
{
	public String StrKey;
	public User CurrentUser;
	public boolean IsLoad;

	public UserData(User user, int nClassIndex, String key, int nType)
			throws Exception
	{
		// m_bIsChanged = false;
		// m_strKey = key;
		// m_nType = nType;
		// m_nClassIndex = nClassIndex;
		//
		// if (user == null)
		// {
		// return;
		// }
		// m_pUser = user;
		// m_pLoggers = m_pUser.m_pLoggers;
		//
		// m_strDBMainKey = null;
		// m_nPoolID = -1;
		//
		// m_nVersion = -1 ;
	}

	public boolean isLoad()
	{
		return IsLoad;
	}

	public boolean load() throws Exception
	{
		if (IsLoad)
		{
			return true;
		}

		// m_bIsLoad = load(getDBKey());

		return IsLoad;
	}

	public boolean load(String strKey) throws Exception
	{
		// byte[] data = getDatabaseObj() .getRAW( strKey , getPoolID() ) ;
		// if (data == null)
		// {
		// return false;
		// }
		// int offset = 0;
		// return load(data, offset);
		
		return false;
	}

	public boolean load(byte[] data, int offset) throws Exception
	{
		// if (data != null)
		// {
		// ChannelBuffer pBuff = ChannelBuffers.wrappedBuffer(data);
		// m_bIsLoad = load(pBuff);
		// return m_bIsLoad;
		// }
		 return false;
	}

}
