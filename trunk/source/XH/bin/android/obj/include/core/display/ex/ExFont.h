#ifndef INCLUDED_core_display_ex_ExFont
#define INCLUDED_core_display_ex_ExFont

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <core/display/ex/ExSprite.h>
HX_DECLARE_CLASS3(core,display,ex,ExFont)
HX_DECLARE_CLASS3(core,display,ex,ExSprite)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,text,Font)
HX_DECLARE_CLASS3(openfl,_v2,text,TextField)
HX_DECLARE_CLASS3(openfl,_v2,text,TextFormat)
namespace core{
namespace display{
namespace ex{


class HXCPP_CLASS_ATTRIBUTES  ExFont_obj : public ::core::display::ex::ExSprite_obj{
	public:
		typedef ::core::display::ex::ExSprite_obj super;
		typedef ExFont_obj OBJ_;
		ExFont_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ExFont_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ExFont_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ExFont"); }

		::openfl::_v2::text::TextField m_pSysTextField;
		Array< ::Dynamic > m_pSysTextBorder;
		::openfl::_v2::text::Font m_pSysFont;
		int m_nFontType;
		int m_nBorderSize;
		virtual Void setSystemFont( ::String strFontName,int nFontSize,int nFontColor,bool isBorder,int nBorderColor,int nBorderSize);
		Dynamic setSystemFont_dyn();

		virtual Void setSysFontSelectable( bool isSel);
		Dynamic setSysFontSelectable_dyn();

		virtual Void setSysText( ::String str);
		Dynamic setSysText_dyn();

		virtual Void setSysTextInfo( Float x,Float y,::String str);
		Dynamic setSysTextInfo_dyn();

		virtual Void setSysFieldWidth( int w);
		Dynamic setSysFieldWidth_dyn();

		virtual Void setSysMouseEnabled( bool isEnable);
		Dynamic setSysMouseEnabled_dyn();

		static int FONT_NONE;
		static int FONT_SYSTEM;
		static int FONT_MANUAL;
		static ::core::display::ex::ExFont getSystemFont( ::String strFontName,int nFontSize,int nFontColor,hx::Null< bool >  isBorder,hx::Null< int >  nBorderColor,hx::Null< int >  nBorderSize);
		static Dynamic getSystemFont_dyn();

		static ::openfl::_v2::text::TextFormat getSysFontFormat( ::String strFontName,int nFontSize,int nFontColor,hx::Null< bool >  isNewFont);
		static Dynamic getSysFontFormat_dyn();

};

} // end namespace core
} // end namespace display
} // end namespace ex

#endif /* INCLUDED_core_display_ex_ExFont */ 
