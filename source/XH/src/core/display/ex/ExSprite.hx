package core.display.ex;

import flash.display.DisplayObject;
import openfl.display.Sprite;

/**
 * ...
 * @author trihv
 */
class ExSprite extends Sprite
{
    private var m_pChilds:Array<DisplayObject>;
    public function new() 
    {
        super();
    }

    /**
     * 
     * @param    child
     */
    public function addChildForDel(child:DisplayObject):Void
    {
        super.addChild(child);

        if (m_pChilds == null)
        {
            m_pChilds = new Array<DisplayObject>();
        }
        m_pChilds.push(child);
    }

    /**
     * 
     * @param  child: a display element
     */
    public function removeAndDelChild(child:DisplayObject):Void
    {
        super.removeChild(child);
        if (m_pChilds.remove(child))
        {
            child = null;
        }
    }
	/**
     * 
     * @param  
     */
    public function removeAllAndDelChild():Void
    {
		if (m_pChilds != null) 
		{
			for (i in 0...m_pChilds.length)
			{
				removeAndDelChild(m_pChilds[0]);
			}
			m_pChilds = null;
		}
    }
}
