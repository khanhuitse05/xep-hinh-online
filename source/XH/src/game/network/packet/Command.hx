
package game.network.packet;
class Command
{
	// 
	public static var MINE               			= 0;
	public static var ENEMY							= 1;
	
	
	public static var CMD_ENTER_PVP               	= 110;
	public static var CMD_WIN_PVP                 	= 112;
	public static var CMD_LOSE_PVP                	= 114;
	public static var CMD_FINDING_PVP              	= 116;
	public static var CMD_FINDER_PVP              	= 118;
	public static var CMD_CANCEL_PVP              	= 120;
	public static var CMD_PVP_NEXT                	= 122;
	public static var CMD_PVP_GROW                	= 124;
	public static var CMD_PVP_HOLD    		       	= 126;
	public static var CMD_PVP_FALL	        	   	= 128;
	
	// use
    public static var CMD_LOGIN                     = 100;
	public static var CMD_USERINFO                  = 101;
	public static var CMD_SKILL                     = 102;
}
