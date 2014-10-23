package core.display.layer;
import openfl.display.DisplayObject;
import openfl.display.Sprite;

/**
 * ...
 * @author anhtinh
 */
class Layer extends Sprite
{

    public function new() 
    {
        super();
    }
    
    public function add(target : DisplayObject) : Void
    {
        this.addChild(target);
    }
    
    public function remove(target : DisplayObject) : Void
    {
        if(this.contains(target)) this.removeChild(target);
    }
}