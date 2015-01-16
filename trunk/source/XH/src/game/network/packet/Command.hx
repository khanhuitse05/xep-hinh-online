
package game.network.packet;
class Command
{
	// 
	public static var MINE               			= 0;
	public static var ENEMY							= 1;
	
	public static var CMD_PVP_ENTER          		= 110; // User gửi thông tin của mình cho đối thủ
	public static var CMD_PVP_WIN                 	= 112; // Thắng
	public static var CMD_PVP_DRAW                 	= 113; // Hòa
	public static var CMD_PVP_LOSE                	= 114; // Thua	
	public static var CMD_PVP_DISCONNET             = 115; // Khi đối phương disconnet
	public static var CMD_PVP_FOUND              	= 116; // Đã tìm thấy
	public static var CMD_PVP_FINDING              	= 118; // Tìm kiếm trận đấu
	public static var CMD_PVP_CANCEL              	= 120; // Hủy tìm kiếm trận đấu

	public static var CMD_PVP_NEXT                	= 122; // viên gạch kế tiếp
	public static var CMD_PVP_GROW                	= 124; // grow
	public static var CMD_PVP_SEND                	= 126; // gửi hàng gạch
	public static var CMD_PVP_HOLD    		       	= 128; // giữ  gạch
	public static var CMD_PVP_FALL	        	   	= 130; // gạch rơi
	public static var CMD_PVP_SKILL_LASERS	        = 132; // skill lasers
	public static var CMD_PVP_SKILL_MAGNET	        = 134; // skill magnet
	public static var CMD_PVP_SKILL_METEOR	       	= 136; // skill meteor
	public static var CMD_PVP_FULL			       	= 138; // skill meteor
	
	// data
	public static var CMD_DATA_ELO					= 150; // sv gửi elo
	public static var CMD_RANK_ELO					= 152; // sv gửi
	public static var CMD_RANK_HIGHSCORE			= 154; // sv gửi
	
	public static var CMD_DATE_SCORE				= 156; // Cập nhật score lên sever
	
	// use
    public static var CMD_LOGIN                     = 100; // LOGIN
	public static var CMD_SIGNUP                 	= 101; // SIGN UP
}
