#ifndef INCLUDED_tweenx909_advanced_StandardTweenX
#define INCLUDED_tweenx909_advanced_StandardTweenX

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <tweenx909/TweenX.h>
HX_DECLARE_CLASS1(tweenx909,EventX)
HX_DECLARE_CLASS1(tweenx909,TweenX)
HX_DECLARE_CLASS2(tweenx909,advanced,CommandX)
HX_DECLARE_CLASS2(tweenx909,advanced,StandardTweenX)
HX_DECLARE_CLASS2(tweenx909,advanced,TweenTypeX)
namespace tweenx909{
namespace advanced{


class HXCPP_CLASS_ATTRIBUTES  StandardTweenX_obj : public ::tweenx909::TweenX_obj{
	public:
		typedef ::tweenx909::TweenX_obj super;
		typedef StandardTweenX_obj OBJ_;
		StandardTweenX_obj();
		Void __construct(::tweenx909::advanced::TweenTypeX type,Dynamic time,Dynamic ease,Dynamic delay,Dynamic repeat,Dynamic yoyo,Dynamic zigzag,Dynamic interval,Dynamic autoPlay,Dynamic posInfos);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< StandardTweenX_obj > __new(::tweenx909::advanced::TweenTypeX type,Dynamic time,Dynamic ease,Dynamic delay,Dynamic repeat,Dynamic yoyo,Dynamic zigzag,Dynamic interval,Dynamic autoPlay,Dynamic posInfos);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StandardTweenX_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("StandardTweenX"); }

		Dynamic _autoFrom;
		virtual Void checkField( Dynamic target,::String key);
		Dynamic checkField_dyn();

		virtual Dynamic _getTarget( );
		Dynamic _getTarget_dyn();

		virtual Void _setTo( ::String key,Dynamic value);
		Dynamic _setTo_dyn();

		virtual Void _setRelativeTo( ::String key,Dynamic value);
		Dynamic _setRelativeTo_dyn();

		virtual Void _setRelativeTo2( ::String key,Dynamic value);
		Dynamic _setRelativeTo2_dyn();

		virtual Void _initFromTo( Dynamic target,Dynamic _from,Dynamic _to);

		virtual Void _initFrom( Dynamic target,Dynamic _from,Dynamic _to);
		Dynamic _initFrom_dyn();

		virtual Dynamic _defaultFrom( Dynamic value,Dynamic _to);
		Dynamic _defaultFrom_dyn();

		virtual ::tweenx909::TweenX play( );

		virtual ::tweenx909::TweenX stop( );

		virtual ::tweenx909::TweenX update( Float time);

		virtual ::tweenx909::TweenX _goto( hx::Null< Float >  time,hx::Null< bool >  andPlay);

		virtual ::tweenx909::TweenX onDelay( Dynamic handler);

		virtual ::tweenx909::TweenX onFinish( Dynamic handler);

		virtual ::tweenx909::TweenX onFoot( Dynamic handler);

		virtual ::tweenx909::TweenX onHead( Dynamic handler);

		virtual ::tweenx909::TweenX onInterval( Dynamic handler);

		virtual ::tweenx909::TweenX onStop( Dynamic handler);

		virtual ::tweenx909::TweenX onPlay( Dynamic handler);

		virtual ::tweenx909::TweenX onRepeat( Dynamic handler);

		virtual ::tweenx909::TweenX onRest( Dynamic handler);

		virtual ::tweenx909::TweenX onUpdate( Dynamic handler);

		virtual ::tweenx909::TweenX addEventListener( ::tweenx909::EventX type,Dynamic _tmp_listener);

		virtual ::tweenx909::TweenX removeEventListener( ::tweenx909::EventX type,Dynamic _tmp_listener);

		virtual ::tweenx909::TweenX time( Float value);

		virtual ::tweenx909::TweenX ease( Dynamic value);

		virtual ::tweenx909::TweenX delay( Float value);

		virtual ::tweenx909::TweenX rest( Float value);

		virtual ::tweenx909::TweenX interval( Float value);

		virtual ::tweenx909::TweenX repeat( hx::Null< int >  value);

		virtual ::tweenx909::TweenX yoyo( hx::Null< bool >  value);

		virtual ::tweenx909::TweenX zigzag( hx::Null< bool >  value);

		virtual ::tweenx909::TweenX autoPlay( hx::Null< bool >  value);

		virtual ::tweenx909::TweenX setTimeScale( hx::Null< Float >  value);

		virtual ::tweenx909::TweenX skip( hx::Null< Float >  delay);

		virtual ::tweenx909::advanced::StandardTweenX autoFrom( hx::Null< bool >  value);
		Dynamic autoFrom_dyn();

		static Dynamic clone( Dynamic obj);
		static Dynamic clone_dyn();

};

} // end namespace tweenx909
} // end namespace advanced

#endif /* INCLUDED_tweenx909_advanced_StandardTweenX */ 
