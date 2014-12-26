
package core.display.scene;

import core.display.screen.ScreenView;

/**
 * ...
 * @author trihv
 */
class SceneView extends ScreenView
{
	
	public static var NON 				= -1;
	public static var EXIT 				= 0;
	public static var HOME 				= 1;
	public static var CHOOSEKILL_PVE 	= 2;
	public static var CHOOSEKILL_PVP 	= 3;
	public static var PVE 				= 4;
	public static var PVP 				= 5;
	public static var RANK 				= 6;
	public static var SETTING 			= 7;
    public function new() 
    {
        super();
    }
	public function getSceneType():Int
	{
		return NON;
	}
}