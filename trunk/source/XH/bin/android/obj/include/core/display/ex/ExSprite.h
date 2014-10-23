#ifndef INCLUDED_core_display_ex_ExSprite
#define INCLUDED_core_display_ex_ExSprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/display/Sprite.h>
HX_DECLARE_CLASS3(core,display,ex,ExSprite)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
namespace core{
namespace display{
namespace ex{


class HXCPP_CLASS_ATTRIBUTES  ExSprite_obj : public ::openfl::_v2::display::Sprite_obj{
	public:
		typedef ::openfl::_v2::display::Sprite_obj super;
		typedef ExSprite_obj OBJ_;
		ExSprite_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ExSprite_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ExSprite_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ExSprite"); }

		Array< ::Dynamic > m_pChilds;
		virtual Void addChildForDel( ::openfl::_v2::display::DisplayObject child);
		Dynamic addChildForDel_dyn();

		virtual Void removeAndDelChild( ::openfl::_v2::display::DisplayObject child);
		Dynamic removeAndDelChild_dyn();

};

} // end namespace core
} // end namespace display
} // end namespace ex

#endif /* INCLUDED_core_display_ex_ExSprite */ 
