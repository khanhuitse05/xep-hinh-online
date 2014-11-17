
package core.display.screen;

/**
 * ...
 * @author trihv
 */
class Screen
{
    public var m_pBaseClass :  Class<Dynamic>;
    public var m_pViewClass :  Class<Dynamic>;
    public var m_nLayer:Int;

    /**
     * 
     * @param    layer
     * @param    baseName
     * @param    viewName
     */
    public function new(layer:Int, baseName:Class<Dynamic>, viewName:Class<Dynamic>) 
    {
        this.m_pBaseClass = baseName;
        this.m_pViewClass = viewName;
        this.m_nLayer  = layer;
    }
}