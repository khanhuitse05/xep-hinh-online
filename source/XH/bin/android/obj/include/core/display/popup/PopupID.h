#ifndef INCLUDED_core_display_popup_PopupID
#define INCLUDED_core_display_popup_PopupID

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <core/display/screen/Screen.h>
HX_DECLARE_CLASS3(core,display,popup,PopupID)
HX_DECLARE_CLASS3(core,display,screen,Screen)
namespace core{
namespace display{
namespace popup{


class HXCPP_CLASS_ATTRIBUTES  PopupID_obj : public ::core::display::screen::Screen_obj{
	public:
		typedef ::core::display::screen::Screen_obj super;
		typedef PopupID_obj OBJ_;
		PopupID_obj();
		Void __construct(::Class className);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PopupID_obj > __new(::Class className);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PopupID_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("PopupID"); }

};

} // end namespace core
} // end namespace display
} // end namespace popup

#endif /* INCLUDED_core_display_popup_PopupID */ 
