#ifndef INCLUDED_core_display_ex_Lable
#define INCLUDED_core_display_ex_Lable

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/text/TextField.h>
HX_DECLARE_CLASS3(core,display,ex,Lable)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,text,TextField)
HX_DECLARE_CLASS3(openfl,_v2,text,TextFormat)
namespace core{
namespace display{
namespace ex{


class HXCPP_CLASS_ATTRIBUTES  Lable_obj : public ::openfl::_v2::text::TextField_obj{
	public:
		typedef ::openfl::_v2::text::TextField_obj super;
		typedef Lable_obj OBJ_;
		Lable_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Lable_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Lable_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Lable"); }

		virtual Void setFont( int nFontSize,int nFontColor);
		Dynamic setFont_dyn();

		virtual Void setSystemFont( ::String strFontName,int nFontSize,int nFontColor);
		Dynamic setSystemFont_dyn();

		virtual Void setSysText( ::String str);
		Dynamic setSysText_dyn();

		virtual Void setSysTextInfo( Float x,Float y,::String str);
		Dynamic setSysTextInfo_dyn();

		static ::openfl::_v2::text::TextFormat getSysFontFormat( ::String strFontName,int nFontSize,int nFontColor);
		static Dynamic getSysFontFormat_dyn();

};

} // end namespace core
} // end namespace display
} // end namespace ex

#endif /* INCLUDED_core_display_ex_Lable */ 
