#ifndef INCLUDED_core_display_screen_ScreenManager
#define INCLUDED_core_display_screen_ScreenManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(core,display,screen,Screen)
HX_DECLARE_CLASS3(core,display,screen,ScreenBase)
HX_DECLARE_CLASS3(core,display,screen,ScreenManager)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
namespace core{
namespace display{
namespace screen{


class HXCPP_CLASS_ATTRIBUTES  ScreenManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ScreenManager_obj OBJ_;
		ScreenManager_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ScreenManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ScreenManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ScreenManager"); }

		Array< ::Dynamic > m_pScreensList;
		::core::display::screen::ScreenBase m_pCurrentBase;
		virtual Void toScreen( ::core::display::screen::Screen screenID);
		Dynamic toScreen_dyn();

		virtual Void onLoadResourceComplete( );
		Dynamic onLoadResourceComplete_dyn();

		virtual Void onLoadScreenProgess( Float progess);
		Dynamic onLoadScreenProgess_dyn();

		virtual Void toTransitionOut( );
		Dynamic toTransitionOut_dyn();

		virtual Void cleanOldScreen( );
		Dynamic cleanOldScreen_dyn();

};

} // end namespace core
} // end namespace display
} // end namespace screen

#endif /* INCLUDED_core_display_screen_ScreenManager */ 
