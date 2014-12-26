
package game.network.packet;
class Command
{
	// 
	public static var MINE               			= 0;
	public static var ENEMY							= 1;
	
	public static var CMD_PVP_ENTER          		= 110;
	public static var CMD_PVP_WIN                 	= 112;
	public static var CMD_PVP_LOSE                	= 114;
	public static var CMD_PVP_FOUND              	= 116;
	public static var CMD_PVP_FINDER              	= 118;
	public static var CMD_PVP_CANCEL              	= 120;

	public static var CMD_PVP_NEXT                	= 122;
	public static var CMD_PVP_GROW                	= 124;
	public static var CMD_PVP_SEND                	= 126;
	public static var CMD_PVP_HOLD    		       	= 128;
	public static var CMD_PVP_FALL	        	   	= 130;
	
	// use
    public static var CMD_LOGIN                     = 100;
	public static var CMD_SIGNUP                 	= 101;
}
