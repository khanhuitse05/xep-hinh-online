#ifndef INCLUDED_core_display_popup_PopupManager
#define INCLUDED_core_display_popup_PopupManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <core/display/screen/ScreenManager.h>
HX_DECLARE_CLASS3(core,display,popup,PopupID)
HX_DECLARE_CLASS3(core,display,popup,PopupManager)
HX_DECLARE_CLASS3(core,display,screen,Screen)
HX_DECLARE_CLASS3(core,display,screen,ScreenManager)
namespace core{
namespace display{
namespace popup{


class HXCPP_CLASS_ATTRIBUTES  PopupManager_obj : public ::core::display::screen::ScreenManager_obj{
	public:
		typedef ::core::display::screen::ScreenManager_obj super;
		typedef PopupManager_obj OBJ_;
		PopupManager_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PopupManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PopupManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("PopupManager"); }

		virtual Void showPopup( ::core::display::popup::PopupID popupID,hx::Null< bool >  showDarkBg);
		Dynamic showPopup_dyn();

};

} // end namespace core
} // end namespace display
} // end namespace popup

#endif /* INCLUDED_core_display_popup_PopupManager */ 
