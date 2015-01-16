package GamePlay;

public class Command
{
	public static final short	CMD_LOGIN						= 100;
	public static final short	CMD_SIGNUP						= 101;
	public static final short	CMD_PVP_WIN						= 112;
	public static final short	CMD_PVP_LOSE					= 114;
	public static final short	CMD_PVP_DRAW					= 113;
	public static final short	CMD_PVP_DISCONNECT				= 115;

	public static final short	CMD_FINDING_PVP					= 118;
	public static final short	CMD_FOUND_PVP					= 116;
	public static final short	CMD_PVP_CANCEL					= 120;

	public static final short	CMD_PVP_GROW					= 124;
	public static final short	CMD_PVP_HOLD					= 128;
	public static final short	CMD_REQ_PVP_NEXT				= 122;
	public static final short	CMD_REQ_PVP_FALL				= 130;
	public static final short	CMD_PVP_ENTER					= 110;
	public static final short	CMD_PVP_SEND					= 126;

	public static final short	CMD_PVP_SKILL_LASERS			= 132;
	public static final short	CMD_PVP_SKILL_MAGNET			= 134;
	public static final short	CMD_PVP_SKILL_METEOR			= 136;
	public static final short	CMD_PVP_SKILL_FULL				= 138;

	public static final short	CMD_UPDATE_ELO					= 150;
	public static final short	CMD_UPDATE_LEADERBOARD			= 152;
	public static final short	CMD_UPDATE_LEADERBOARD_ELO		= 152;
	public static final short	CMD_UPDATE_LEADERBOARD_SCORE	= 154;
	public static final short	CMD_UPDATE_HIGHSCORE			= 156;
}
