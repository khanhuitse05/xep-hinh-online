#ifndef INCLUDED_scene_singleplay_SinglePlay
#define INCLUDED_scene_singleplay_SinglePlay

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <core/display/scene/SceneBase.h>
HX_DECLARE_CLASS3(core,display,scene,SceneBase)
HX_DECLARE_CLASS3(core,display,scene,SceneID)
HX_DECLARE_CLASS3(core,display,screen,Screen)
HX_DECLARE_CLASS3(core,display,screen,ScreenBase)
HX_DECLARE_CLASS2(core,event,EventEx)
HX_DECLARE_CLASS3(openfl,_v2,events,Event)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
HX_DECLARE_CLASS2(scene,singleplay,SinglePlay)
namespace scene{
namespace singleplay{


class HXCPP_CLASS_ATTRIBUTES  SinglePlay_obj : public ::core::display::scene::SceneBase_obj{
	public:
		typedef ::core::display::scene::SceneBase_obj super;
		typedef SinglePlay_obj OBJ_;
		SinglePlay_obj();
		Void __construct(::core::display::scene::SceneID sceneID);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< SinglePlay_obj > __new(::core::display::scene::SceneID sceneID);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SinglePlay_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("SinglePlay"); }

		virtual Void onTransitionInComplete( );

		virtual Void onServerData( ::core::event::EventEx e);
		Dynamic onServerData_dyn();

		virtual Void onTransitionOutComplete( );

};

} // end namespace scene
} // end namespace singleplay

#endif /* INCLUDED_scene_singleplay_SinglePlay */ 
