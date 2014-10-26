#ifndef INCLUDED_core_display_ex_SimpleButton
#define INCLUDED_core_display_ex_SimpleButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <core/display/ex/ExSprite.h>
HX_DECLARE_CLASS3(core,display,ex,ExSprite)
HX_DECLARE_CLASS3(core,display,ex,SimpleButton)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,events,Event)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,MouseEvent)
namespace core{
namespace display{
namespace ex{


class HXCPP_CLASS_ATTRIBUTES  SimpleButton_obj : public ::core::display::ex::ExSprite_obj{
	public:
		typedef ::core::display::ex::ExSprite_obj super;
		typedef SimpleButton_obj OBJ_;
		SimpleButton_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< SimpleButton_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SimpleButton_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SimpleButton"); }

		::openfl::_v2::display::DisplayObject _normalDisplay;
		::openfl::_v2::display::DisplayObject _overDisplay;
		::openfl::_v2::display::DisplayObject _pressDisplay;
		::openfl::_v2::display::DisplayObject _disableDisplay;
		bool _noOverDisplay;
		bool _isDisable;
		virtual Void setDisplay( ::openfl::_v2::display::DisplayObject normalDisplay,::openfl::_v2::display::DisplayObject overDisplay,::openfl::_v2::display::DisplayObject pressDisplay,::openfl::_v2::display::DisplayObject disableDisplay);
		Dynamic setDisplay_dyn();

		virtual Void setStatus( int status);
		Dynamic setStatus_dyn();

		virtual bool isDisabled( );
		Dynamic isDisabled_dyn();

		virtual bool isPressed( );
		Dynamic isPressed_dyn();

		virtual bool onMouseDown( ::openfl::_v2::events::MouseEvent e);
		Dynamic onMouseDown_dyn();

		virtual bool onMouseOver( ::openfl::_v2::events::MouseEvent e);
		Dynamic onMouseOver_dyn();

		virtual bool onMouseOut( ::openfl::_v2::events::MouseEvent e);
		Dynamic onMouseOut_dyn();

		virtual bool GetDisable( );
		Dynamic GetDisable_dyn();

		virtual Void SetDisable( bool disable);
		Dynamic SetDisable_dyn();

		virtual Void setPosition( Float x,Float y);
		Dynamic setPosition_dyn();

		static int NORMAL_STATUS;
		static int OVER_STATUS;
		static int PRESS_STATUS;
		static int DISABLE_STATUS;
};

} // end namespace core
} // end namespace display
} // end namespace ex

#endif /* INCLUDED_core_display_ex_SimpleButton */ 
