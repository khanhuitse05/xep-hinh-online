package core.display.ex;

import openfl.Assets;
import openfl.text.Font;
import openfl.text.TextField;
import openfl.text.TextFieldAutoSize;
import openfl.text.TextFormat;


/**
 * ...
 * @author KhanhTN
 */
class Lable extends TextField
{

	/**
	 * 
	 */
	public function new() 
	{
		super();		
	}
	/**
	 * 
	 * @param	nFontSize
	 * @param	nFontColor
	 */
	public function setFont(nFontSize:Int, nFontColor:Int) : Void
    {
		var pFormat:TextFormat = new TextFormat();
		pFormat.size = nFontSize;
		pFormat.color = nFontColor;
        this.defaultTextFormat = pFormat;

    }
	/**
	 * 
	 * @param	strFontName
	 * @param	nFontSize
	 * @param	nFontColor
	 */
	public function setSystemFont(strFontName:String, nFontSize:Int, nFontColor:Int) : Void
    {
        this.defaultTextFormat = getSysFontFormat(strFontName, nFontSize, nFontColor);
    }
	/**
	 * 
	 * @param	strFontName
	 * @param	nFontSize
	 * @param	nFontColor
	 * @return
	 */
	public static function getSysFontFormat(strFontName:String, nFontSize:Int, nFontColor:Int):TextFormat
    {
        var pFont:Font = Assets.getFont(strFontName);
		var pFormat:TextFormat = new TextFormat();
		pFormat.font = pFont.fontName;
		pFormat.size = nFontSize;
		pFormat.color = nFontColor;
        return pFormat;
    }
	/**
     * 
     * @param   str
     */
    public function setSysText(str:String):Void
    {
        this.htmlText = str;
		this.autoSize = TextFieldAutoSize.LEFT;
    }

    /**
     * 
     * @param    nWidth
     */
    public function setSysTextInfo(x:Float, y:Float, str:String):Void
    {
        setSysText(str);
        this.x = x;
        this.y = y;
    }
}