#ifndef INCLUDED_core_resource_ResourceManager
#define INCLUDED_core_resource_ResourceManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(core,resource,ResourceManager)
HX_DECLARE_CLASS2(core,sprites,Animx)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
namespace core{
namespace resource{


class HXCPP_CLASS_ATTRIBUTES  ResourceManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ResourceManager_obj OBJ_;
		ResourceManager_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ResourceManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ResourceManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ResourceManager"); }

		::core::sprites::Animx aLoadingAnim;
		::openfl::_v2::display::Sprite sHomeBG;
		::openfl::_v2::display::Sprite sSingleBG;
		::openfl::_v2::display::Sprite sBattlesBG;
		::openfl::_v2::display::Sprite sFriendBG;
		::openfl::_v2::display::Sprite sMissionBG;
		::openfl::_v2::display::Sprite sSingle_btn;
		::openfl::_v2::display::Sprite sBattles_btn;
		::openfl::_v2::display::Sprite sFriend_btn;
		::openfl::_v2::display::Sprite sMission_btn;
		::openfl::_v2::display::Sprite sBack_btn;
		virtual Void initAnim( );
		Dynamic initAnim_dyn();

		virtual Void initSprite( );
		Dynamic initSprite_dyn();

		virtual Void initAudio( );
		Dynamic initAudio_dyn();

		virtual ::openfl::_v2::display::Sprite getSprite( int _id);
		Dynamic getSprite_dyn();

		virtual ::core::sprites::Animx getAnim( int _id);
		Dynamic getAnim_dyn();

};

} // end namespace core
} // end namespace resource

#endif /* INCLUDED_core_resource_ResourceManager */ 
