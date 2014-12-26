package core.display.layer;
import core.util.Log;
import openfl.display.DisplayObject;

/**
 * ...
 * @author anhtinh
 */
class LayerManager
{
	public static inline var LAYER_SCREEN:Int = 0; 
	public static inline var LAYER_DIALOG:Int = 1;
	public static inline var LAYER_POPUP:Int = 2; 
	public static inline var LAYER_MESSAGE:Int = 3; 
	public static inline var LAYER_TOP:Int = 4; 
	public static inline var LAYER_COUNT:Int = 5; 
	
	private var _layers : Array<Layer> = new Array<Layer>();
	
	
	public function new(main : Main) 
	{
		Log.error("new layer");
		for (i in 0...LAYER_COUNT) 
		{
			var layer : Layer = new Layer();
			main.addChild(layer);
			_layers.push(layer);
		}
	}
	
	
	private function getLayer(layerIndex : Int) : Layer
	{
		if (layerIndex >= 0 && layerIndex < LAYER_COUNT) {
			return _layers[layerIndex];
		}
		else
		{
			Log.error("core.display.layer.LayerManager ==>> Can not get layer with layerIndex : " + layerIndex);
			return _layers[LAYER_TOP];
		}
		
	}
	
	public function addToLayer(target : DisplayObject, layerIndex : Int) : Void
	{
		getLayer(layerIndex).add(target);
	}
}