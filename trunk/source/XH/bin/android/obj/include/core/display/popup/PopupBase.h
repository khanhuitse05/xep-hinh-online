#ifndef INCLUDED_core_display_popup_PopupBase
#define INCLUDED_core_display_popup_PopupBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <core/display/screen/ScreenView.h>
HX_DECLARE_CLASS3(core,display,ex,ExSprite)
HX_DECLARE_CLASS3(core,display,popup,PopupBase)
HX_DECLARE_CLASS3(core,display,screen,ScreenView)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,events,Event)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
namespace core{
namespace display{
namespace popup{


class HXCPP_CLASS_ATTRIBUTES  PopupBase_obj : public ::core::display::screen::ScreenView_obj{
	public:
		typedef ::core::display::screen::ScreenView_obj super;
		typedef PopupBase_obj OBJ_;
		PopupBase_obj();
		Void __construct(hx::Null< bool >  __o_showDarkBg);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PopupBase_obj > __new(hx::Null< bool >  __o_showDarkBg);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PopupBase_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("PopupBase"); }

		virtual Void onHide( ::openfl::_v2::events::Event e);
		Dynamic onHide_dyn();

		virtual Void transitionIn( );

		virtual Void transitionInComplete( );

		virtual Void transitionOut( );

		virtual Void transitionOutComplete( );

};

} // end namespace core
} // end namespace display
} // end namespace popup

#endif /* INCLUDED_core_display_popup_PopupBase */ 
