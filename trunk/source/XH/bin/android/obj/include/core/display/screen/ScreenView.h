#ifndef INCLUDED_core_display_screen_ScreenView
#define INCLUDED_core_display_screen_ScreenView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <core/display/ex/ExSprite.h>
HX_DECLARE_CLASS3(core,display,ex,ExSprite)
HX_DECLARE_CLASS3(core,display,screen,ScreenView)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
namespace core{
namespace display{
namespace screen{


class HXCPP_CLASS_ATTRIBUTES  ScreenView_obj : public ::core::display::ex::ExSprite_obj{
	public:
		typedef ::core::display::ex::ExSprite_obj super;
		typedef ScreenView_obj OBJ_;
		ScreenView_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ScreenView_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ScreenView_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("ScreenView"); }

		virtual Void transitionIn( );
		Dynamic transitionIn_dyn();

		virtual Void transitionInComplete( );
		Dynamic transitionInComplete_dyn();

		virtual Void transitionOut( );
		Dynamic transitionOut_dyn();

		virtual Void transitionOutComplete( );
		Dynamic transitionOutComplete_dyn();

		virtual Void onEnter( );
		Dynamic onEnter_dyn();

		virtual Void onExit( );
		Dynamic onExit_dyn();

		virtual Void dispose( );
		Dynamic dispose_dyn();

		static ::String TRANSITION_IN_COMPLETE;
		static ::String TRANSITION_OUT_COMPLETE;
		static ::String PRE_TRANSITION_OUT;
		static ::String PRE_TRANSITION_IN;
};

} // end namespace core
} // end namespace display
} // end namespace screen

#endif /* INCLUDED_core_display_screen_ScreenView */ 
