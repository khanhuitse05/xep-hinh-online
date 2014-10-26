#ifndef INCLUDED_scene_login_LoginView
#define INCLUDED_scene_login_LoginView

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <core/display/scene/SceneView.h>
HX_DECLARE_CLASS3(core,display,ex,ExSprite)
HX_DECLARE_CLASS3(core,display,ex,Lable)
HX_DECLARE_CLASS3(core,display,ex,SimpleButton)
HX_DECLARE_CLASS3(core,display,scene,SceneView)
HX_DECLARE_CLASS3(core,display,screen,ScreenView)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,events,Event)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,text,TextField)
HX_DECLARE_CLASS2(scene,login,LoginView)
namespace scene{
namespace login{


class HXCPP_CLASS_ATTRIBUTES  LoginView_obj : public ::core::display::scene::SceneView_obj{
	public:
		typedef ::core::display::scene::SceneView_obj super;
		typedef LoginView_obj OBJ_;
		LoginView_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< LoginView_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LoginView_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("LoginView"); }

		::openfl::_v2::display::Sprite testBtn;
		::core::display::ex::SimpleButton loginBtn;
		::core::display::ex::Lable mNoteText;
		::openfl::_v2::text::TextField testInfoTf;
		::openfl::_v2::text::TextField nameInputTf;
		virtual Void onLogin( ::openfl::_v2::events::Event e);
		Dynamic onLogin_dyn();

		virtual Void onClick( ::openfl::_v2::events::Event e);
		Dynamic onClick_dyn();

};

} // end namespace scene
} // end namespace login

#endif /* INCLUDED_scene_login_LoginView */ 
