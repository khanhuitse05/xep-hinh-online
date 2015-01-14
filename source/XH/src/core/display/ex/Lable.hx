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
		setFont(25, 0xff0000);
	}
	/**
	 * 
	 * @param	nFontSize
	 * @param	nFontColor
	 */
	public function setFont(nFontSize:Int, nFontColor:Int) : Void
    {
		var pFormat:TextFormat = new TextFormat();
		var pFont:Font = Assets.getFont("img/fonts/fontgame.TTF");
		pFormat.font = pFont.fontName;
		pFormat.size = nFontSize;
		pFormat.color = nFontColor;
        this.defaultTextFormat = pFormat;
		
        this.selectable = false;
        this.embedFonts = true;

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
		
        this.selectable = false;
        this.embedFonts = true;
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
    public function setSysText(str:String, _auto:Bool = true):Void
    {
        this.htmlText = str;
		if (_auto) 
		{
			this.autoSize = TextFieldAutoSize.LEFT;
		}
    }

    /**
     * 
     * @param    nWidth
     */
    public function setSysTextInfo(x:Float, y:Float, str:String, _auto:Bool = true):Void
    {
        setSysText(str, _auto);
        this.x = x;
        this.y = y;
    }
	/**
     * 
     * @param 
     */
    public function setPosition(x:Float, y:Float):Void
    {
        this.x = x;
        this.y = y;
    }
}