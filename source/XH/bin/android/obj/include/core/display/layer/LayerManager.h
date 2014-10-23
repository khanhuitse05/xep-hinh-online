#ifndef INCLUDED_core_display_layer_LayerManager
#define INCLUDED_core_display_layer_LayerManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Main)
HX_DECLARE_CLASS3(core,display,layer,Layer)
HX_DECLARE_CLASS3(core,display,layer,LayerManager)
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


class HXCPP_CLASS_ATTRIBUTES  LayerManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef LayerManager_obj OBJ_;
		LayerManager_obj();
		Void __construct(::Main main);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< LayerManager_obj > __new(::Main main);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LayerManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("LayerManager"); }

		Array< ::Dynamic > _layers;
		virtual ::core::display::layer::Layer getLayer( int layerIndex);
		Dynamic getLayer_dyn();

		virtual Void addToLayer( ::openfl::_v2::display::DisplayObject target,int layerIndex);
		Dynamic addToLayer_dyn();

		static int LAYER_SCREEN;
		static int LAYER_DIALOG;
		static int LAYER_POPUP;
		static int LAYER_TOP;
		static int LAYER_COUNT;
};

} // end namespace core
} // end namespace display
} // end namespace layer

#endif /* INCLUDED_core_display_layer_LayerManager */ 
