#ifndef INCLUDED_core_display_screen_ScreenBase
#define INCLUDED_core_display_screen_ScreenBase

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/events/EventDispatcher.h>
HX_DECLARE_CLASS3(core,display,ex,ExSprite)
HX_DECLARE_CLASS3(core,display,screen,Screen)
HX_DECLARE_CLASS3(core,display,screen,ScreenBase)
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
namespace screen{


class HXCPP_CLASS_ATTRIBUTES  ScreenBase_obj : public ::openfl::_v2::events::EventDispatcher_obj{
	public:
		typedef ::openfl::_v2::events::EventDispatcher_obj super;
		typedef ScreenBase_obj OBJ_;
		ScreenBase_obj();
		Void __construct(::core::display::screen::Screen screenID);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ScreenBase_obj > __new(::core::display::screen::Screen screenID);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ScreenBase_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ScreenBase"); }

		bool m_isInBase;
		::core::display::screen::ScreenView m_pView;
		::core::display::screen::Screen m_pScreenID;
		virtual Dynamic getView( );
		Dynamic getView_dyn();

		virtual Array< ::String > preloadResourceURLs( );
		Dynamic preloadResourceURLs_dyn();

		virtual Void transitionOut( );
		Dynamic transitionOut_dyn();

		virtual Void transitionIn( );
		Dynamic transitionIn_dyn();

		virtual Void createView( );
		Dynamic createView_dyn();

		virtual Void onEnter( );
		Dynamic onEnter_dyn();

		virtual Void onExit( );
		Dynamic onExit_dyn();

		virtual Void viewTransitionOutComplete( ::openfl::_v2::events::Event e);
		Dynamic viewTransitionOutComplete_dyn();

		virtual Void viewTransitionInComplete( ::openfl::_v2::events::Event e);
		Dynamic viewTransitionInComplete_dyn();

		virtual Void onTransitionInComplete( );
		Dynamic onTransitionInComplete_dyn();

		virtual Void onTransitionOutComplete( );
		Dynamic onTransitionOutComplete_dyn();

};

} // end namespace core
} // end namespace display
} // end namespace screen

#endif /* INCLUDED_core_display_screen_ScreenBase */ 
