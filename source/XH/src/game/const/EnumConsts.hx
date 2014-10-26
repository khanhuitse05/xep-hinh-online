
package game.const;

/**
 * ...
 * @author trihv
 */
class EnumConsts
{
    // Misc
    public static var   MiscTexts           = new EnumConsts("assets/text.xml");

    // Font
    public static var   FontArialNormal     = new EnumConsts("img/fonts/arial.ttf");
    public static var   FontArialBold       = new EnumConsts("img/fonts/arialbd.ttf");
    
    private var m_strConsts:String;
    public function new(str:String)
    {
        m_strConsts = str;
    }

    /**
     * 
     * @return
     */
    public function getConsts():String
    {
        return m_strConsts;
    }
}
