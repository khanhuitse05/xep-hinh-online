#ifndef INCLUDED_tweenx909_TweenX
#define INCLUDED_tweenx909_TweenX

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <tweenx909/advanced/CommandX.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS1(haxe,Timer)
HX_DECLARE_CLASS2(haxe,ds,ObjectMap)
HX_DECLARE_CLASS1(tweenx909,EventX)
HX_DECLARE_CLASS1(tweenx909,TweenX)
HX_DECLARE_CLASS2(tweenx909,advanced,CommandX)
HX_DECLARE_CLASS2(tweenx909,advanced,DefaultsX)
HX_DECLARE_CLASS2(tweenx909,advanced,GroupX)
HX_DECLARE_CLASS2(tweenx909,advanced,StandardTweenX)
HX_DECLARE_CLASS2(tweenx909,advanced,TweenTypeX)
HX_DECLARE_CLASS2(tweenx909,advanced,UpdateModeX)
HX_DECLARE_CLASS3(tweenx909,advanced,_GroupX,GroupTypeX)
namespace tweenx909{


class HXCPP_CLASS_ATTRIBUTES  TweenX_obj : public ::tweenx909::advanced::CommandX_obj{
	public:
		typedef ::tweenx909::advanced::CommandX_obj super;
		typedef TweenX_obj OBJ_;
		TweenX_obj();
		Void __construct(::tweenx909::advanced::TweenTypeX type,Dynamic time,Dynamic ease,Dynamic delay,Dynamic repeat,Dynamic yoyo,Dynamic zigzag,Dynamic interval,Dynamic autoPlay,Dynamic posInfos);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TweenX_obj > __new(::tweenx909::advanced::TweenTypeX type,Dynamic time,Dynamic ease,Dynamic delay,Dynamic repeat,Dynamic yoyo,Dynamic zigzag,Dynamic interval,Dynamic autoPlay,Dynamic posInfos);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TweenX_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TweenX"); }

		bool playing;
		bool backward;
		Float _currentTime;
		Float _singleTime;
		Dynamic _skip;
		::tweenx909::advanced::TweenTypeX _type;
		bool _inited;
		Float _totalTime;
		bool _dead;
		::tweenx909::TweenX _parent;
		bool _fastMode;
		Array< ::String > _toKeys;
		Float timeScale;
		virtual Float get_currentTime( );
		Dynamic get_currentTime_dyn();

		virtual Float get_singleTime( );
		Dynamic get_singleTime_dyn();

		virtual Float get_totalTime( );
		Dynamic get_totalTime_dyn();

		virtual Float set_timeScale( Float value);
		Dynamic set_timeScale_dyn();

		bool _inverted;
		bool _odd;
		Float _time;
		Dynamic _ease;
		Dynamic &_ease_dyn() { return _ease;}
		Float _interval;
		int _repeat;
		bool _zigzag;
		bool _yoyo;
		Float _delay;
		bool _autoPlay;
		Float _rest;
		bool _timeIsDefault;
		bool _easeIsDefault;
		bool _intervalIsDefault;
		bool _repeatIsDefault;
		bool _zigzagIsDefault;
		bool _yoyoIsDefault;
		bool _delayIsDefault;
		bool _autoPlayIsDefault;
		Dynamic _onPlay;
		Dynamic &_onPlay_dyn() { return _onPlay;}
		Dynamic _onStop;
		Dynamic &_onStop_dyn() { return _onStop;}
		Dynamic _onDelay;
		Dynamic &_onDelay_dyn() { return _onDelay;}
		Dynamic _onInterval;
		Dynamic &_onInterval_dyn() { return _onInterval;}
		Dynamic _onRepeat;
		Dynamic &_onRepeat_dyn() { return _onRepeat;}
		Dynamic _onRest;
		Dynamic &_onRest_dyn() { return _onRest;}
		Dynamic _onHead;
		Dynamic &_onHead_dyn() { return _onHead;}
		Dynamic _onUpdate;
		Dynamic &_onUpdate_dyn() { return _onUpdate;}
		Dynamic _onFoot;
		Dynamic &_onFoot_dyn() { return _onFoot;}
		Dynamic _onFinish;
		Dynamic &_onFinish_dyn() { return _onFinish;}
		Dynamic _eventListeners;
		int id;
		virtual ::String error( ::String msg);
		Dynamic error_dyn();

		virtual ::tweenx909::TweenX play( );
		Dynamic play_dyn();

		virtual ::tweenx909::TweenX stop( );
		Dynamic stop_dyn();

		virtual Void _stop( );
		Dynamic _stop_dyn();

		virtual ::tweenx909::TweenX update( Float time);
		Dynamic update_dyn();

		virtual ::tweenx909::TweenX _goto( hx::Null< Float >  time,hx::Null< bool >  andPlay);
		Dynamic _goto_dyn();

		virtual Void _invert( );
		Dynamic _invert_dyn();

		virtual Void _init( );
		Dynamic _init_dyn();

		virtual Void _initFromTo( Dynamic target,Dynamic _from,Dynamic _to);
		Dynamic _initFromTo_dyn();

		virtual Void _update( Float spent);
		Dynamic _update_dyn();

		virtual Void _head( int repeatNum);
		Dynamic _head_dyn();

		virtual Void _foot( int repeatNum);
		Dynamic _foot_dyn();

		virtual Void _finish( );
		Dynamic _finish_dyn();

		virtual Void _apply( Float p,int repeatNum);
		Dynamic _apply_dyn();

		virtual Dynamic _fastCalc( Dynamic _from,Dynamic _to,Float t1,Float t2);
		Dynamic _fastCalc_dyn();

		virtual Dynamic _calc( Dynamic _from,Dynamic _to,Float t1,Float t2);
		Dynamic _calc_dyn();

		virtual ::tweenx909::TweenX time( Float value);
		Dynamic time_dyn();

		virtual ::tweenx909::TweenX ease( Dynamic value);
		Dynamic ease_dyn();

		virtual ::tweenx909::TweenX delay( Float value);
		Dynamic delay_dyn();

		virtual ::tweenx909::TweenX rest( Float value);
		Dynamic rest_dyn();

		virtual ::tweenx909::TweenX interval( Float value);
		Dynamic interval_dyn();

		virtual ::tweenx909::TweenX repeat( hx::Null< int >  value);
		Dynamic repeat_dyn();

		virtual ::tweenx909::TweenX yoyo( hx::Null< bool >  value);
		Dynamic yoyo_dyn();

		virtual ::tweenx909::TweenX zigzag( hx::Null< bool >  value);
		Dynamic zigzag_dyn();

		virtual ::tweenx909::TweenX autoPlay( hx::Null< bool >  value);
		Dynamic autoPlay_dyn();

		virtual ::tweenx909::TweenX skip( hx::Null< Float >  delay);
		Dynamic skip_dyn();

		virtual ::tweenx909::TweenX setTimeScale( hx::Null< Float >  value);
		Dynamic setTimeScale_dyn();

		virtual ::tweenx909::TweenX onPlay( Dynamic handler);
		Dynamic onPlay_dyn();

		virtual ::tweenx909::TweenX onStop( Dynamic handler);
		Dynamic onStop_dyn();

		virtual ::tweenx909::TweenX onDelay( Dynamic handler);
		Dynamic onDelay_dyn();

		virtual ::tweenx909::TweenX onHead( Dynamic handler);
		Dynamic onHead_dyn();

		virtual ::tweenx909::TweenX onUpdate( Dynamic handler);
		Dynamic onUpdate_dyn();

		virtual ::tweenx909::TweenX onFoot( Dynamic handler);
		Dynamic onFoot_dyn();

		virtual ::tweenx909::TweenX onRest( Dynamic handler);
		Dynamic onRest_dyn();

		virtual ::tweenx909::TweenX onInterval( Dynamic handler);
		Dynamic onInterval_dyn();

		virtual ::tweenx909::TweenX onRepeat( Dynamic handler);
		Dynamic onRepeat_dyn();

		virtual ::tweenx909::TweenX onFinish( Dynamic handler);
		Dynamic onFinish_dyn();

		virtual ::tweenx909::TweenX addEventListener( ::tweenx909::EventX type,Dynamic listener);
		Dynamic addEventListener_dyn();

		virtual ::tweenx909::TweenX removeEventListener( ::tweenx909::EventX type,Dynamic listener);
		Dynamic removeEventListener_dyn();

		virtual Void _addEventListener( ::tweenx909::EventX type,Dynamic listener);
		Dynamic _addEventListener_dyn();

		virtual Void _removeEventListener( ::tweenx909::EventX type,Dynamic listener);
		Dynamic _removeEventListener_dyn();

		virtual Float _getPosition( Float p,bool back);
		Dynamic _getPosition_dyn();

		virtual Void checkInited( );
		Dynamic checkInited_dyn();

		virtual Void dispatch( int num);
		Dynamic dispatch_dyn();

		virtual Void initGroup( ::tweenx909::advanced::GroupX g);
		Dynamic initGroup_dyn();

		static Array< ::Dynamic > _tweens;
		static Array< ::Dynamic > _addedTweens;
		static Dynamic get_tweens( );
		static Dynamic get_tweens_dyn();

		static Float prevTime;
		static bool managerInited;
		static Dynamic DEFAULT_EASE;
		static Dynamic &DEFAULT_EASE_dyn() { return DEFAULT_EASE;}
		static Float DEFAULT_TIME;
		static Float DEFAULT_DELAY;
		static int DEFAULT_REPEAT;
		static int DEFAULT_INTERVAL;
		static bool DEFAULT_YOYO;
		static bool DEFAULT_ZIGZAG;
		static bool DEFAULT_AUTO_PLAY;
		static bool DEFAULT_AUTO_FROM;
		static Dynamic defaultEase;
		static Dynamic &defaultEase_dyn() { return defaultEase;}
		static Float defaultTime;
		static Float defaultDelay;
		static Float defaultInterval;
		static int defaultRepeat;
		static bool defaultYoyo;
		static bool defaultZigZag;
		static bool defaultAutoPlay;
		static bool defaultAutoFrom;
		static Dynamic _rules;
		static Dynamic get_rules( );
		static Dynamic get_rules_dyn();

		static Float topLevelTimeScale;
		static bool _groupDefaults;
		static ::tweenx909::advanced::DefaultsX dumpDefaults( );
		static Dynamic dumpDefaults_dyn();

		static Void setDefaults( ::tweenx909::advanced::DefaultsX defaults);
		static Dynamic setDefaults_dyn();

		static Void initDefaults( );
		static Dynamic initDefaults_dyn();

		static ::tweenx909::advanced::UpdateModeX updateMode;
		static ::tweenx909::advanced::UpdateModeX set_updateMode( ::tweenx909::advanced::UpdateModeX value);
		static Dynamic set_updateMode_dyn();

		static Void initManager( );
		static Dynamic initManager_dyn();

		static Void mainLoop( );
		static Dynamic mainLoop_dyn();

		static Void stopUpdater( );
		static Dynamic stopUpdater_dyn();

		static Void manualUpdate( Float time);
		static Dynamic manualUpdate_dyn();

		static Void initTweens( );
		static Dynamic initTweens_dyn();

		static Void clear( );
		static Dynamic clear_dyn();

		static Void addRule( Dynamic rule);
		static Dynamic addRule_dyn();

		static Void addRules( Dynamic rules);
		static Dynamic addRules_dyn();

		static ::tweenx909::advanced::StandardTweenX from( Dynamic target,Dynamic _to,Dynamic delay,Dynamic repeat,Dynamic interval,Dynamic autoPlay,Dynamic posInfos);
		static Dynamic from_dyn();

		static ::tweenx909::advanced::StandardTweenX to( Dynamic target,Dynamic _to,Dynamic time,Dynamic ease,Dynamic delay,Dynamic repeat,Dynamic yoyo,Dynamic zigzag,Dynamic interval,Dynamic autoPlay,Dynamic posInfos);
		static Dynamic to_dyn();

		static ::tweenx909::TweenX tweenFunc( Dynamic func,Dynamic _from,Dynamic _to,Dynamic time,Dynamic ease,Dynamic delay,Dynamic repeat,Dynamic yoyo,Dynamic zigzag,Dynamic interval,Dynamic autoPlay,Dynamic posInfos);
		static Dynamic tweenFunc_dyn();

		static ::tweenx909::TweenX tweenFunc1( Dynamic func,Float from1,Float to1,Dynamic time,Dynamic ease,Dynamic delay,Dynamic repeat,Dynamic yoyo,Dynamic zigzag,Dynamic interval,Dynamic autoPlay,Dynamic posInfos);
		static Dynamic tweenFunc1_dyn();

		static ::tweenx909::TweenX tweenFunc2( Dynamic func,Float from1,Float from2,Float to1,Float to2,Dynamic time,Dynamic ease,Dynamic delay,Dynamic repeat,Dynamic yoyo,Dynamic zigzag,Dynamic interval,Dynamic autoPlay,Dynamic posInfos);
		static Dynamic tweenFunc2_dyn();

		static ::tweenx909::TweenX tweenFunc3( Dynamic func,Float from1,Float from2,Float from3,Float to1,Float to2,Float to3,Dynamic time,Dynamic ease,Dynamic delay,Dynamic repeat,Dynamic yoyo,Dynamic zigzag,Dynamic interval,Dynamic autoPlay,Dynamic posInfos);
		static Dynamic tweenFunc3_dyn();

		static ::tweenx909::TweenX tweenFunc4( Dynamic func,Float from1,Float from2,Float from3,Float from4,Float to1,Float to2,Float to3,Float to4,Dynamic time,Dynamic ease,Dynamic delay,Dynamic repeat,Dynamic yoyo,Dynamic zigzag,Dynamic interval,Dynamic autoPlay,Dynamic posInfos);
		static Dynamic tweenFunc4_dyn();

		static ::tweenx909::TweenX func( Dynamic func,Dynamic delay,Dynamic repeat,Dynamic interval,Dynamic posInfos);
		static Dynamic func_dyn();

		static Void playAll( Dynamic tweens);
		static Dynamic playAll_dyn();

		static Void stopAll( Dynamic tweens);
		static Dynamic stopAll_dyn();

		static Void gotoAll( Dynamic tweens,hx::Null< Float >  time,hx::Null< bool >  andPlay);
		static Dynamic gotoAll_dyn();

		static Void updateAll( Dynamic tweens,Float time);
		static Dynamic updateAll_dyn();

		static ::tweenx909::TweenX serial( Dynamic tweens,::tweenx909::advanced::DefaultsX defaults,Dynamic posInfos);
		static Dynamic serial_dyn();

		static ::tweenx909::TweenX lag( Dynamic tweens,Dynamic delay,::tweenx909::advanced::DefaultsX defaults,Dynamic posInfos);
		static Dynamic lag_dyn();

		static ::tweenx909::TweenX parallel( Dynamic tweens,::tweenx909::advanced::DefaultsX defaults,Dynamic posInfos);
		static Dynamic parallel_dyn();

		static ::tweenx909::advanced::CommandX wait( Dynamic delay,Dynamic posInfos);
		static Dynamic wait_dyn();

		static ::tweenx909::TweenX _group( Dynamic tweens,::tweenx909::advanced::_GroupX::GroupTypeX type,::tweenx909::advanced::DefaultsX defaults,Dynamic posInfos);
		static Dynamic _group_dyn();

		static Void _lock( ::tweenx909::TweenX o);
		static Dynamic _lock_dyn();

		static Float getTime( );
		static Dynamic getTime_dyn();

		static ::haxe::Timer _timer;
		static Void setInterval( Dynamic f,int t);
		static Dynamic setInterval_dyn();

		static Array< ::String > fields( Dynamic t);
		static Dynamic fields_dyn();

		static Dynamic _initLog;
		static ::haxe::ds::ObjectMap dictionary;
		static int _objCounter;
		static Dynamic hashObject( Dynamic o);
		static Dynamic hashObject_dyn();

		static Void _resetLog( );
		static Dynamic _resetLog_dyn();

		static Dynamic field( Dynamic o,::String key);
		static Dynamic field_dyn();

		static Void setField( Dynamic o,::String key,Dynamic value);
		static Dynamic setField_dyn();

		static bool isIterable( Dynamic d);
		static Dynamic isIterable_dyn();

		static Float _MIN;
		static int _DELAY;
		static int _FINISH;
		static int _FOOT;
		static int _HEAD;
		static int _INTERVAL;
		static int _PLAY;
		static int _REPEAT;
		static int _REST;
		static int _STOP;
		static int _UPDATE;
		static int idCounter;
};

} // end namespace tweenx909

#endif /* INCLUDED_tweenx909_TweenX */ 
