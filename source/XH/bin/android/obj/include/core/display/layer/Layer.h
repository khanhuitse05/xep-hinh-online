#ifndef INCLUDED_core_display_layer_Layer
#define INCLUDED_core_display_layer_Layer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/display/Sprite.h>
HX_DECLARE_CLASS3(core,display,layer,Layer)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
namespace core{
namespace display{
namespace layer{


class HXCPP_CLASS_ATTRIBUTES  Layer_obj : public ::openfl::_v2::display::Sprite_obj{
	public:
		typedef ::openfl::_v2::display::Sprite_obj super;
		typedef Layer_obj OBJ_;
		Layer_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Layer_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Layer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Layer"); }

		virtual Void add( ::openfl::_v2::display::DisplayObject target);
		Dynamic add_dyn();

		virtual Void remove( ::openfl::_v2::display::DisplayObject target);
		Dynamic remove_dyn();

};

} // end namespace core
} // end namespace display
} // end namespace layer

#endif /* INCLUDED_core_display_layer_Layer */ 
