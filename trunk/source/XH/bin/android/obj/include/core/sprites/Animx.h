#ifndef INCLUDED_core_sprites_Animx
#define INCLUDED_core_sprites_Animx

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/display/Sprite.h>
HX_DECLARE_CLASS2(core,sprites,Animx)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,display,Tilesheet)
HX_DECLARE_CLASS3(openfl,_v2,events,Event)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
namespace core{
namespace sprites{


class HXCPP_CLASS_ATTRIBUTES  Animx_obj : public ::openfl::_v2::display::Sprite_obj{
	public:
		typedef ::openfl::_v2::display::Sprite_obj super;
		typedef Animx_obj OBJ_;
		Animx_obj();
		Void __construct(int _total,int _width,int _height,int _column);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Animx_obj > __new(int _total,int _width,int _height,int _column);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Animx_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Animx"); }

		Array< ::Dynamic > mFrames;
		int mIndex;
		int mTotalFrame;
		int mColumnFrame;
		int mWidth;
		int mHeight;
		bool mRunning;
		int mDuration;
		int mCount;
		int mfirstIndex;
		int mLastIndex;
		int mLoopTotal;
		int mLoopCount;
		bool mFlag;
		::openfl::_v2::display::Tilesheet tilesheet;
		::openfl::_v2::display::Tilesheet radsa;
		virtual Void Init( ::String _path);
		Dynamic Init_dyn();

		virtual Void gameLoop( ::openfl::_v2::events::Event e);
		Dynamic gameLoop_dyn();

		virtual Void gameDraw( );
		Dynamic gameDraw_dyn();

		virtual Void animate5( int _duration,int _fist,int _last,int _loop,bool _flag);
		Dynamic animate5_dyn();

		virtual Void animate4( int _duration,int _fist,int _last,int _loop);
		Dynamic animate4_dyn();

		virtual Void animate3( int _duration,int _fist,int _last);
		Dynamic animate3_dyn();

		virtual Void animate2( int _duration,int _loop);
		Dynamic animate2_dyn();

		virtual Void animate( );
		Dynamic animate_dyn();

		virtual Void stopAnimate( );
		Dynamic stopAnimate_dyn();

		virtual Void stopAnimate1( int _i);
		Dynamic stopAnimate1_dyn();

};

} // end namespace core
} // end namespace sprites

#endif /* INCLUDED_core_sprites_Animx */ 
