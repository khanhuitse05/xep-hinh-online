#ifndef INCLUDED_core_display_dialog_DialogManager
#define INCLUDED_core_display_dialog_DialogManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <core/display/screen/ScreenManager.h>
HX_DECLARE_CLASS3(core,display,dialog,DialogManager)
HX_DECLARE_CLASS3(core,display,screen,ScreenManager)
namespace core{
namespace display{
namespace dialog{


class HXCPP_CLASS_ATTRIBUTES  DialogManager_obj : public ::core::display::screen::ScreenManager_obj{
	public:
		typedef ::core::display::screen::ScreenManager_obj super;
		typedef DialogManager_obj OBJ_;
		DialogManager_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< DialogManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DialogManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("DialogManager"); }

};

} // end namespace core
} // end namespace display
} // end namespace dialog

#endif /* INCLUDED_core_display_dialog_DialogManager */ 
