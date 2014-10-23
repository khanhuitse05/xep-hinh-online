#ifndef INCLUDED_core_display_DisplayManager
#define INCLUDED_core_display_DisplayManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Main)
HX_DECLARE_CLASS2(core,display,DisplayManager)
HX_DECLARE_CLASS3(core,display,layer,LayerManager)
HX_DECLARE_CLASS3(core,display,popup,PopupManager)
HX_DECLARE_CLASS3(core,display,screen,ScreenManager)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
namespace core{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  DisplayManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DisplayManager_obj OBJ_;
		DisplayManager_obj();
		Void __construct(::Main main);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< DisplayManager_obj > __new(::Main main);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DisplayManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("DisplayManager"); }

		Dynamic m_pScreensManager;
		::core::display::layer::LayerManager layerManager;
		::core::display::popup::PopupManager m_pPopupManager;
		virtual Void toScreen( Dynamic screenID);
		Dynamic toScreen_dyn();

};

} // end namespace core
} // end namespace display

#endif /* INCLUDED_core_display_DisplayManager */ 
