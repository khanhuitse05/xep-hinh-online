
package game.network.packet;
class Command
{
	// 
	public static var CMD_REQ_ENTER_PVP               	= 110;
	public static var CMD_REQ_WIN_PVP                 	= 111;
	public static var CMD_REQ_LOSE_PVP                	= 112;
	public static var CMD_REQ_FINDING_PVP              	= 113;
	public static var CMD_REQ_CANCEL_PVP              	= 114;
	public static var CMD_REQ_PVP_NEXT                	= 115;
	public static var CMD_REQ_PVP_GROW                	= 116;
	public static var CMD_REQ_PVP_HOLD    		       	= 117;
	public static var CMD_REQ_PVP_FALL	        	   	= 118;
	
	//
    public static var CMD_GAME_ENTER = 101;
    public static var CMD_GAME = 102;
    public static var CMD_RESP_ENEMY_GAME = 207;
    public static var CMD_RESP_GAME = 207;
	// use
    public static var CMD_RESP_LOGIN                     = 210;
	public static var CMD_RESP_USERINFO                  = 211;
	public static var CMD_RESP_SKILL                     = 212;
        
	//PvP
	public static var CMD_RESP_ENTER_PVP               = 213;
	public static var CMD_RESP_WIN_PVP                 = 214;
	public static var CMD_RESP_LOSE_PVP                = 215;
	public static var CMD_RESP_FINDER_PVP              = 216;
	public static var CMD_RESP_PVP_NEXT                = 217;
	public static var CMD_RESP_PVP_GROW                = 218;
	public static var CMD_RESP_PVP_HOLD    		       = 219;
	public static var CMD_RESP_PVP_FALL	        	   = 220;
}
