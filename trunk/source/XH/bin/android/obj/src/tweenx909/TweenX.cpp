#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_tweenx909_EaseX
#include <tweenx909/EaseX.h>
#endif
#ifndef INCLUDED_tweenx909_EventX
#include <tweenx909/EventX.h>
#endif
#ifndef INCLUDED_tweenx909_TweenX
#include <tweenx909/TweenX.h>
#endif
#ifndef INCLUDED_tweenx909_advanced_CommandTypeX
#include <tweenx909/advanced/CommandTypeX.h>
#endif
#ifndef INCLUDED_tweenx909_advanced_CommandX
#include <tweenx909/advanced/CommandX.h>
#endif
#ifndef INCLUDED_tweenx909_advanced_DefaultsX
#include <tweenx909/advanced/DefaultsX.h>
#endif
#ifndef INCLUDED_tweenx909_advanced_GroupX
#include <tweenx909/advanced/GroupX.h>
#endif
#ifndef INCLUDED_tweenx909_advanced_StandardTweenX
#include <tweenx909/advanced/StandardTweenX.h>
#endif
#ifndef INCLUDED_tweenx909_advanced_TweenTypeX
#include <tweenx909/advanced/TweenTypeX.h>
#endif
#ifndef INCLUDED_tweenx909_advanced_UpdateModeX
#include <tweenx909/advanced/UpdateModeX.h>
#endif
#ifndef INCLUDED_tweenx909_advanced__GroupX_GroupTypeX
#include <tweenx909/advanced/_GroupX/GroupTypeX.h>
#endif
#ifndef INCLUDED_tweenx909_rule_AhsvX
#include <tweenx909/rule/AhsvX.h>
#endif
#ifndef INCLUDED_tweenx909_rule_ArgbX
#include <tweenx909/rule/ArgbX.h>
#endif
#ifndef INCLUDED_tweenx909_rule_ArrayRuleX
#include <tweenx909/rule/ArrayRuleX.h>
#endif
#ifndef INCLUDED_tweenx909_rule_BoolRuleX
#include <tweenx909/rule/BoolRuleX.h>
#endif
#ifndef INCLUDED_tweenx909_rule_HsvX
#include <tweenx909/rule/HsvX.h>
#endif
#ifndef INCLUDED_tweenx909_rule_QuakeX
#include <tweenx909/rule/QuakeX.h>
#endif
#ifndef INCLUDED_tweenx909_rule_RgbX
#include <tweenx909/rule/RgbX.h>
#endif
#ifndef INCLUDED_tweenx909_rule_TimelineX
#include <tweenx909/rule/TimelineX.h>
#endif
namespace tweenx909{

Void TweenX_obj::__construct(::tweenx909::advanced::TweenTypeX type,Dynamic time,Dynamic ease,Dynamic delay,Dynamic repeat,Dynamic yoyo,Dynamic zigzag,Dynamic interval,Dynamic autoPlay,Dynamic posInfos)
{
HX_STACK_FRAME("tweenx909.TweenX","new",0x33fed1f8,"tweenx909.TweenX.new","tweenx909/TweenX.hx",26,0x5ef20c57)
HX_STACK_THIS(this)
HX_STACK_ARG(type,"type")
HX_STACK_ARG(time,"time")
HX_STACK_ARG(ease,"ease")
HX_STACK_ARG(delay,"delay")
HX_STACK_ARG(repeat,"repeat")
HX_STACK_ARG(yoyo,"yoyo")
HX_STACK_ARG(zigzag,"zigzag")
HX_STACK_ARG(interval,"interval")
HX_STACK_ARG(autoPlay,"autoPlay")
HX_STACK_ARG(posInfos,"posInfos")
{
	HX_STACK_LINE(443)
	this->timeScale = (int)1;
	HX_STACK_LINE(426)
	this->_skip = null();
	HX_STACK_LINE(424)
	this->_currentTime = (int)0;
	HX_STACK_LINE(392)
	::tweenx909::advanced::CommandTypeX _g = ::tweenx909::advanced::CommandTypeX_obj::TWEEN(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(392)
	super::__construct(_g,posInfos);
	HX_STACK_LINE(393)
	this->_type = type;
	HX_STACK_LINE(395)
	this->_currentTime = (int)0;
	HX_STACK_LINE(396)
	switch( (int)(type->__Index())){
		case (int)0: {
			HX_STACK_LINE(396)
			::tweenx909::advanced::GroupX g = (::tweenx909::advanced::TweenTypeX(type))->__Param(0);		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(397)
			{
				HX_STACK_LINE(398)
				this->_easeIsDefault = false;
				HX_STACK_LINE(399)
				if (((ease == null()))){
					HX_STACK_LINE(399)
					this->_ease = ::tweenx909::EaseX_obj::linear_dyn();
				}
				else{
					HX_STACK_LINE(399)
					this->_ease = ease;
				}
			}
		}
		;break;
		default: {
			HX_STACK_LINE(400)
			Dynamic _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(400)
			if ((this->_easeIsDefault = (ease == null()))){
				HX_STACK_LINE(400)
				_g1 = ::tweenx909::TweenX_obj::defaultEase_dyn();
			}
			else{
				HX_STACK_LINE(400)
				_g1 = ease;
			}
			HX_STACK_LINE(400)
			this->_ease = _g1;
		}
	}
	HX_STACK_LINE(403)
	Float _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(403)
	if ((this->_timeIsDefault = (time == null()))){
		HX_STACK_LINE(403)
		_g2 = ::tweenx909::TweenX_obj::defaultTime;
	}
	else{
		HX_STACK_LINE(403)
		_g2 = time;
	}
	HX_STACK_LINE(403)
	this->_time = _g2;
	HX_STACK_LINE(404)
	Float _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(404)
	if ((this->_delayIsDefault = (delay == null()))){
		HX_STACK_LINE(404)
		_g3 = ::tweenx909::TweenX_obj::defaultDelay;
	}
	else{
		HX_STACK_LINE(404)
		_g3 = delay;
	}
	HX_STACK_LINE(404)
	this->_delay = _g3;
	HX_STACK_LINE(405)
	Float _g4;		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(405)
	if ((this->_intervalIsDefault = (interval == null()))){
		HX_STACK_LINE(405)
		_g4 = ::tweenx909::TweenX_obj::defaultInterval;
	}
	else{
		HX_STACK_LINE(405)
		_g4 = interval;
	}
	HX_STACK_LINE(405)
	this->_interval = _g4;
	HX_STACK_LINE(406)
	int _g5;		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(406)
	if ((this->_repeatIsDefault = (repeat == null()))){
		HX_STACK_LINE(406)
		_g5 = ::tweenx909::TweenX_obj::defaultRepeat;
	}
	else{
		HX_STACK_LINE(406)
		_g5 = repeat;
	}
	HX_STACK_LINE(406)
	this->_repeat = _g5;
	HX_STACK_LINE(407)
	bool _g6;		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(407)
	if ((this->_yoyoIsDefault = (yoyo == null()))){
		HX_STACK_LINE(407)
		_g6 = ::tweenx909::TweenX_obj::defaultYoyo;
	}
	else{
		HX_STACK_LINE(407)
		_g6 = yoyo;
	}
	HX_STACK_LINE(407)
	this->_yoyo = _g6;
	HX_STACK_LINE(408)
	bool _g7;		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(408)
	if ((this->_zigzagIsDefault = (zigzag == null()))){
		HX_STACK_LINE(408)
		_g7 = ::tweenx909::TweenX_obj::defaultZigZag;
	}
	else{
		HX_STACK_LINE(408)
		_g7 = zigzag;
	}
	HX_STACK_LINE(408)
	this->_zigzag = _g7;
	HX_STACK_LINE(409)
	bool _g8;		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(409)
	if ((this->_autoPlayIsDefault = (autoPlay == null()))){
		HX_STACK_LINE(409)
		_g8 = ::tweenx909::TweenX_obj::defaultAutoPlay;
	}
	else{
		HX_STACK_LINE(409)
		_g8 = autoPlay;
	}
	HX_STACK_LINE(409)
	this->_autoPlay = _g8;
	HX_STACK_LINE(411)
	this->_rest = (int)0;
	HX_STACK_LINE(412)
	this->_eventListeners = Dynamic( Array_obj<Dynamic>::__new());
	HX_STACK_LINE(414)
	int _g9 = (::tweenx909::TweenX_obj::idCounter)++;		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(414)
	this->id = _g9;
	HX_STACK_LINE(415)
	::tweenx909::TweenX_obj::_addedTweens->push(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(416)
	if ((!(::tweenx909::TweenX_obj::managerInited))){
		HX_STACK_LINE(416)
		::tweenx909::TweenX_obj::managerInited = true;
		HX_STACK_LINE(416)
		::tweenx909::TweenX_obj::stopUpdater();
		HX_STACK_LINE(416)
		{
			HX_STACK_LINE(416)
			::tweenx909::advanced::UpdateModeX _g1 = ::tweenx909::TweenX_obj::updateMode;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(416)
			switch( (int)(_g1->__Index())){
				case (int)1: {
					HX_STACK_LINE(416)
					Float f = (::tweenx909::advanced::UpdateModeX(_g1))->__Param(0);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(416)
					{
						HX_STACK_LINE(416)
						Float _g10 = ::Sys_obj::time();		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(416)
						Float _g11 = (_g10 * (int)1000);		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(416)
						::tweenx909::TweenX_obj::prevTime = _g11;
						HX_STACK_LINE(416)
						{
							HX_STACK_LINE(416)
							int t = ::Math_obj::round((Float((int)1000) / Float(f)));		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(416)
							if (((::tweenx909::TweenX_obj::_timer != null()))){
								HX_STACK_LINE(416)
								::tweenx909::TweenX_obj::_timer->stop();
							}
							HX_STACK_LINE(416)
							::haxe::Timer _g12 = ::haxe::Timer_obj::__new(t);		HX_STACK_VAR(_g12,"_g12");
							HX_STACK_LINE(416)
							::tweenx909::TweenX_obj::_timer = _g12;
							HX_STACK_LINE(416)
							::tweenx909::TweenX_obj::_timer->run = ::tweenx909::TweenX_obj::mainLoop_dyn();
						}
					}
				}
				;break;
				case (int)0: {
				}
				;break;
			}
		}
	}
}
;
	return null();
}

//TweenX_obj::~TweenX_obj() { }

Dynamic TweenX_obj::__CreateEmpty() { return  new TweenX_obj; }
hx::ObjectPtr< TweenX_obj > TweenX_obj::__new(::tweenx909::advanced::TweenTypeX type,Dynamic time,Dynamic ease,Dynamic delay,Dynamic repeat,Dynamic yoyo,Dynamic zigzag,Dynamic interval,Dynamic autoPlay,Dynamic posInfos)
{  hx::ObjectPtr< TweenX_obj > result = new TweenX_obj();
	result->__construct(type,time,ease,delay,repeat,yoyo,zigzag,interval,autoPlay,posInfos);
	return result;}

Dynamic TweenX_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TweenX_obj > result = new TweenX_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9]);
	return result;}

Float TweenX_obj::get_currentTime( ){
	HX_STACK_FRAME("tweenx909.TweenX","get_currentTime",0xf9636215,"tweenx909.TweenX.get_currentTime","tweenx909/TweenX.hx",450,0x5ef20c57)
	HX_STACK_THIS(this)
	HX_STACK_LINE(451)
	Float t = this->get_totalTime();		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(452)
	Float p;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(452)
	if ((this->backward)){
		HX_STACK_LINE(452)
		p = (t - this->_currentTime);
	}
	else{
		HX_STACK_LINE(452)
		p = this->_currentTime;
	}
	HX_STACK_LINE(453)
	if (((p < (int)0))){
		HX_STACK_LINE(453)
		p = (int)0;
	}
	HX_STACK_LINE(454)
	if (((p > t))){
		HX_STACK_LINE(454)
		p = t;
	}
	HX_STACK_LINE(455)
	return p;
}


HX_DEFINE_DYNAMIC_FUNC0(TweenX_obj,get_currentTime,return )

Float TweenX_obj::get_singleTime( ){
	HX_STACK_FRAME("tweenx909.TweenX","get_singleTime",0xe8628066,"tweenx909.TweenX.get_singleTime","tweenx909/TweenX.hx",458,0x5ef20c57)
	HX_STACK_THIS(this)
	HX_STACK_LINE(458)
	return (this->_time + this->_interval);
}


HX_DEFINE_DYNAMIC_FUNC0(TweenX_obj,get_singleTime,return )

Float TweenX_obj::get_totalTime( ){
	HX_STACK_FRAME("tweenx909.TweenX","get_totalTime",0x25014160,"tweenx909.TweenX.get_totalTime","tweenx909/TweenX.hx",460,0x5ef20c57)
	HX_STACK_THIS(this)
	HX_STACK_LINE(461)
	Float _g = this->get_singleTime();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(461)
	Float _g1 = (_g * this->_repeat);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(461)
	Float _g2 = (this->_delay + _g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(461)
	Float _g3 = (_g2 - this->_interval);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(461)
	return (_g3 + this->_rest);
}


HX_DEFINE_DYNAMIC_FUNC0(TweenX_obj,get_totalTime,return )

Float TweenX_obj::set_timeScale( Float value){
	HX_STACK_FRAME("tweenx909.TweenX","set_timeScale",0x2e0f48b8,"tweenx909.TweenX.set_timeScale","tweenx909/TweenX.hx",464,0x5ef20c57)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(465)
	if (((this->_parent != null()))){
		HX_STACK_LINE(465)
		HX_STACK_DO_THROW(this->error(HX_CSTRING("Can't change timeScale of serialized object directly")));
	}
	else{
		HX_STACK_LINE(466)
		return this->timeScale = value;
	}
	HX_STACK_LINE(465)
	return 0.;
}


HX_DEFINE_DYNAMIC_FUNC1(TweenX_obj,set_timeScale,return )

::String TweenX_obj::error( ::String msg){
	HX_STACK_FRAME("tweenx909.TweenX","error",0x28ca6360,"tweenx909.TweenX.error","tweenx909/TweenX.hx",518,0x5ef20c57)
	HX_STACK_THIS(this)
	HX_STACK_ARG(msg,"msg")
	HX_STACK_LINE(519)
	Dynamic p = this->definedPosInfos;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(520)
	return (((((((((((msg + HX_CSTRING("(Tween_")) + this->id) + HX_CSTRING(" was generated at ")) + p->__Field(HX_CSTRING("className"),true)) + HX_CSTRING("/")) + p->__Field(HX_CSTRING("methodName"),true)) + HX_CSTRING("() [")) + p->__Field(HX_CSTRING("fileName"),true)) + HX_CSTRING(":")) + p->__Field(HX_CSTRING("lineNumber"),true)) + HX_CSTRING("])"));
}


HX_DEFINE_DYNAMIC_FUNC1(TweenX_obj,error,return )

::tweenx909::TweenX TweenX_obj::play( ){
	HX_STACK_FRAME("tweenx909.TweenX","play",0x4c50915c,"tweenx909.TweenX.play","tweenx909/TweenX.hx",524,0x5ef20c57)
	HX_STACK_THIS(this)
	HX_STACK_LINE(525)
	if (((this->_parent != null()))){
		HX_STACK_LINE(525)
		HX_STACK_DO_THROW(this->error(HX_CSTRING("Can't play serialized object directly")));
	}
	HX_STACK_LINE(526)
	if ((this->playing)){
		HX_STACK_LINE(526)
		return hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(527)
	if ((!(this->_inited))){
		HX_STACK_LINE(527)
		this->_init();
	}
	HX_STACK_LINE(529)
	this->playing = true;
	HX_STACK_LINE(530)
	::tweenx909::TweenX_obj::_tweens->push(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(533)
	{
		HX_STACK_LINE(533)
		Dynamic listeners = this->_eventListeners->__GetItem((int)0);		HX_STACK_VAR(listeners,"listeners");
		HX_STACK_LINE(533)
		if (((listeners != null()))){
			HX_STACK_LINE(533)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(533)
			while((true)){
				HX_STACK_LINE(533)
				if ((!(((_g < listeners->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(533)
					break;
				}
				HX_STACK_LINE(533)
				Dynamic f = listeners->__GetItem(_g);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(533)
				++(_g);
				HX_STACK_LINE(533)
				f(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
	HX_STACK_LINE(534)
	if (((this->_onPlay_dyn() != null()))){
		HX_STACK_LINE(534)
		this->_onPlay();
	}
	HX_STACK_LINE(535)
	this->update(1.4901161415892264e-008);
	HX_STACK_LINE(536)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(TweenX_obj,play,return )

::tweenx909::TweenX TweenX_obj::stop( ){
	HX_STACK_FRAME("tweenx909.TweenX","stop",0x4e52536a,"tweenx909.TweenX.stop","tweenx909/TweenX.hx",538,0x5ef20c57)
	HX_STACK_THIS(this)
	HX_STACK_LINE(539)
	if (((this->_parent != null()))){
		HX_STACK_LINE(539)
		HX_STACK_DO_THROW(this->error(HX_CSTRING("Can't stop serialized object directly")));
	}
	HX_STACK_LINE(540)
	this->_stop();
	HX_STACK_LINE(541)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(TweenX_obj,stop,return )

Void TweenX_obj::_stop( ){
{
		HX_STACK_FRAME("tweenx909.TweenX","_stop",0xb50da379,"tweenx909.TweenX._stop","tweenx909/TweenX.hx",543,0x5ef20c57)
		HX_STACK_THIS(this)
		HX_STACK_LINE(544)
		if ((!(this->playing))){
			HX_STACK_LINE(544)
			return null();
		}
		HX_STACK_LINE(545)
		this->playing = false;
		HX_STACK_LINE(546)
		{
			HX_STACK_LINE(546)
			Dynamic listeners = this->_eventListeners->__GetItem((int)9);		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(546)
			if (((listeners != null()))){
				HX_STACK_LINE(546)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(546)
				while((true)){
					HX_STACK_LINE(546)
					if ((!(((_g < listeners->__Field(HX_CSTRING("length"),true)))))){
						HX_STACK_LINE(546)
						break;
					}
					HX_STACK_LINE(546)
					Dynamic f = listeners->__GetItem(_g);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(546)
					++(_g);
					HX_STACK_LINE(546)
					f(hx::ObjectPtr<OBJ_>(this));
				}
			}
		}
		HX_STACK_LINE(547)
		if (((this->_onStop_dyn() != null()))){
			HX_STACK_LINE(547)
			this->_onStop();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TweenX_obj,_stop,(void))

::tweenx909::TweenX TweenX_obj::update( Float time){
	HX_STACK_FRAME("tweenx909.TweenX","update",0xbde99371,"tweenx909.TweenX.update","tweenx909/TweenX.hx",550,0x5ef20c57)
	HX_STACK_THIS(this)
	HX_STACK_ARG(time,"time")
	HX_STACK_LINE(551)
	if (((this->_parent != null()))){
		HX_STACK_LINE(551)
		HX_STACK_DO_THROW(this->error(HX_CSTRING("Can't stop serialized object directly")));
	}
	HX_STACK_LINE(552)
	this->_update(((time * this->timeScale) * ::tweenx909::TweenX_obj::topLevelTimeScale));
	HX_STACK_LINE(553)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(TweenX_obj,update,return )

::tweenx909::TweenX TweenX_obj::_goto( hx::Null< Float >  __o_time,hx::Null< bool >  __o_andPlay){
Float time = __o_time.Default(0);
bool andPlay = __o_andPlay.Default(false);
	HX_STACK_FRAME("tweenx909.TweenX","goto",0x465ffd0b,"tweenx909.TweenX.goto","tweenx909/TweenX.hx",556,0x5ef20c57)
	HX_STACK_THIS(this)
	HX_STACK_ARG(time,"time")
	HX_STACK_ARG(andPlay,"andPlay")
{
		HX_STACK_LINE(557)
		if (((this->_parent != null()))){
			HX_STACK_LINE(557)
			HX_STACK_DO_THROW(this->error(HX_CSTRING("Can't move serialized object directly")));
		}
		HX_STACK_LINE(558)
		if ((!(this->_inited))){
			HX_STACK_LINE(558)
			this->_init();
		}
		HX_STACK_LINE(559)
		Float t = time;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(560)
		if (((t < (int)0))){
			HX_STACK_LINE(560)
			t = (int)0;
		}
		else{
			HX_STACK_LINE(561)
			if (((t > this->_totalTime))){
				HX_STACK_LINE(561)
				t = this->_totalTime;
			}
		}
		HX_STACK_LINE(562)
		Float _g = this->get_currentTime();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(562)
		Float _g1 = (t - _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(562)
		this->_update(_g1);
		HX_STACK_LINE(563)
		if ((andPlay)){
			HX_STACK_LINE(563)
			this->play();
		}
		HX_STACK_LINE(564)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(TweenX_obj,_goto,return )

Void TweenX_obj::_invert( ){
{
		HX_STACK_FRAME("tweenx909.TweenX","_invert",0xdef7a64d,"tweenx909.TweenX._invert","tweenx909/TweenX.hx",567,0x5ef20c57)
		HX_STACK_THIS(this)
		HX_STACK_LINE(568)
		this->_currentTime = (this->_totalTime - this->_currentTime);
		HX_STACK_LINE(569)
		if (((hx::Mod(this->_repeat,(int)2) == (int)0))){
			HX_STACK_LINE(569)
			this->_odd = !(this->_odd);
		}
		HX_STACK_LINE(571)
		this->_inverted = !(this->_inverted);
		HX_STACK_LINE(572)
		Float d = this->_delay;		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(573)
		this->_delay = this->_rest;
		HX_STACK_LINE(574)
		this->_rest = d;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TweenX_obj,_invert,(void))

Void TweenX_obj::_init( ){
{
		HX_STACK_FRAME("tweenx909.TweenX","_init",0xae6cee87,"tweenx909.TweenX._init","tweenx909/TweenX.hx",581,0x5ef20c57)
		HX_STACK_THIS(this)
		HX_STACK_LINE(582)
		if ((this->_inited)){
			HX_STACK_LINE(582)
			return null();
		}
		HX_STACK_LINE(583)
		this->_inited = true;
		HX_STACK_LINE(585)
		if ((::tweenx909::TweenX_obj::_groupDefaults)){
			HX_STACK_LINE(586)
			if ((this->_easeIsDefault)){
				HX_STACK_LINE(586)
				this->_ease = ::tweenx909::TweenX_obj::defaultEase_dyn();
			}
			HX_STACK_LINE(587)
			if ((this->_timeIsDefault)){
				HX_STACK_LINE(587)
				this->_time = ::tweenx909::TweenX_obj::defaultTime;
			}
			HX_STACK_LINE(588)
			if ((this->_delayIsDefault)){
				HX_STACK_LINE(588)
				this->_delay = ::tweenx909::TweenX_obj::defaultDelay;
			}
			HX_STACK_LINE(589)
			if ((this->_intervalIsDefault)){
				HX_STACK_LINE(589)
				this->_interval = ::tweenx909::TweenX_obj::defaultInterval;
			}
			HX_STACK_LINE(590)
			if ((this->_repeatIsDefault)){
				HX_STACK_LINE(590)
				this->_repeat = ::tweenx909::TweenX_obj::defaultRepeat;
			}
			HX_STACK_LINE(591)
			if ((this->_yoyoIsDefault)){
				HX_STACK_LINE(591)
				this->_yoyo = ::tweenx909::TweenX_obj::defaultYoyo;
			}
			HX_STACK_LINE(592)
			if ((this->_zigzagIsDefault)){
				HX_STACK_LINE(592)
				this->_zigzag = ::tweenx909::TweenX_obj::defaultZigZag;
			}
			HX_STACK_LINE(593)
			if ((this->_autoPlayIsDefault)){
				HX_STACK_LINE(593)
				this->_autoPlay = ::tweenx909::TweenX_obj::defaultAutoPlay;
			}
		}
		HX_STACK_LINE(596)
		if (((this->_repeat == (int)0))){
			HX_STACK_LINE(596)
			this->_repeat = (int)2147483646;
		}
		HX_STACK_LINE(597)
		if (((this->_time < 1.4901161415892264e-008))){
			HX_STACK_LINE(597)
			this->_time = 1.4901161415892264e-008;
		}
		HX_STACK_LINE(599)
		Float _g = ::Sys_obj::time();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(599)
		Float ot = (_g * (int)1000);		HX_STACK_VAR(ot,"ot");
		HX_STACK_LINE(600)
		this->_fastMode = true;
		HX_STACK_LINE(602)
		{
			HX_STACK_LINE(602)
			::tweenx909::advanced::TweenTypeX _g1 = this->_type;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(602)
			switch( (int)(_g1->__Index())){
				case (int)2: {
					HX_STACK_LINE(602)
					Dynamic _to = (::tweenx909::advanced::TweenTypeX(_g1))->__Param(2);		HX_STACK_VAR(_to,"_to");
					HX_STACK_LINE(602)
					Dynamic _from = (::tweenx909::advanced::TweenTypeX(_g1))->__Param(1);		HX_STACK_VAR(_from,"_from");
					HX_STACK_LINE(602)
					Dynamic target = (::tweenx909::advanced::TweenTypeX(_g1))->__Param(0);		HX_STACK_VAR(target,"target");
					HX_STACK_LINE(603)
					{
						HX_STACK_LINE(604)
						this->_initFromTo(target,_from,_to);
						HX_STACK_LINE(605)
						Array< ::String > _g11 = ::Reflect_obj::fields(_to);		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(605)
						this->_toKeys = _g11;
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(602)
					Dynamic toArr = (::tweenx909::advanced::TweenTypeX(_g1))->__Param(2);		HX_STACK_VAR(toArr,"toArr");
					HX_STACK_LINE(602)
					Dynamic fromArr = (::tweenx909::advanced::TweenTypeX(_g1))->__Param(1);		HX_STACK_VAR(fromArr,"fromArr");
					HX_STACK_LINE(602)
					Dynamic targets = (::tweenx909::advanced::TweenTypeX(_g1))->__Param(0);		HX_STACK_VAR(targets,"targets");
					HX_STACK_LINE(606)
					{
						HX_STACK_LINE(607)
						int i = (int)0;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(608)
						for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(targets->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
							Dynamic target = __it->next();
							{
								HX_STACK_LINE(609)
								Dynamic _from = fromArr->__GetItem(i);		HX_STACK_VAR(_from,"_from");
								HX_STACK_LINE(609)
								Dynamic _to = toArr->__GetItem(i);		HX_STACK_VAR(_to,"_to");
								HX_STACK_LINE(610)
								this->_initFromTo(target,_from,_to);
								HX_STACK_LINE(611)
								if (((i == (int)0))){
									HX_STACK_LINE(611)
									Array< ::String > _g2 = ::Reflect_obj::fields(_to);		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(611)
									this->_toKeys = _g2;
								}
								HX_STACK_LINE(612)
								(i)++;
							}
;
						}
					}
				}
				;break;
				case (int)0: {
					HX_STACK_LINE(602)
					::tweenx909::advanced::GroupX g = (::tweenx909::advanced::TweenTypeX(_g1))->__Param(0);		HX_STACK_VAR(g,"g");
					HX_STACK_LINE(615)
					this->initGroup(g);
				}
				;break;
				default: {
				}
			}
		}
		HX_STACK_LINE(620)
		Float _g3 = this->get_singleTime();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(620)
		this->_singleTime = _g3;
		HX_STACK_LINE(621)
		Float _g4 = this->get_totalTime();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(621)
		this->_totalTime = _g4;
		HX_STACK_LINE(623)
		if ((this->_autoPlay)){
			HX_STACK_LINE(623)
			this->play();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TweenX_obj,_init,(void))

Void TweenX_obj::_initFromTo( Dynamic target,Dynamic _from,Dynamic _to){
{
		HX_STACK_FRAME("tweenx909.TweenX","_initFromTo",0x14001f6c,"tweenx909.TweenX._initFromTo","tweenx909/TweenX.hx",627,0x5ef20c57)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(_from,"_from")
		HX_STACK_ARG(_to,"_to")
		HX_STACK_LINE(627)
		HX_STACK_DO_THROW(this->error(HX_CSTRING("must be standard tween.")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(TweenX_obj,_initFromTo,(void))

Void TweenX_obj::_update( Float spent){
{
		HX_STACK_FRAME("tweenx909.TweenX","_update",0xc6244540,"tweenx909.TweenX._update","tweenx909/TweenX.hx",633,0x5ef20c57)
		HX_STACK_THIS(this)
		HX_STACK_ARG(spent,"spent")
		HX_STACK_LINE(638)
		if ((!(this->_inited))){
			HX_STACK_LINE(638)
			this->_init();
		}
		HX_STACK_LINE(639)
		if (((spent == (int)0))){
			HX_STACK_LINE(639)
			return null();
		}
		HX_STACK_LINE(640)
		if ((this->backward)){
			HX_STACK_LINE(640)
			spent = -(spent);
		}
		HX_STACK_LINE(641)
		if (((spent < (int)0))){
			HX_STACK_LINE(642)
			this->_invert();
			HX_STACK_LINE(643)
			this->backward = !(this->backward);
			HX_STACK_LINE(644)
			spent = -(spent);
		}
		HX_STACK_LINE(646)
		Float _currentTime = this->_currentTime;		HX_STACK_VAR(_currentTime,"_currentTime");
		HX_STACK_LINE(646)
		Float _singleTime = this->get_singleTime();		HX_STACK_VAR(_singleTime,"_singleTime");
		HX_STACK_LINE(646)
		Float _totalTime = this->_totalTime;		HX_STACK_VAR(_totalTime,"_totalTime");
		HX_STACK_LINE(648)
		Float time = this->_time;		HX_STACK_VAR(time,"time");
		HX_STACK_LINE(649)
		Float delay = this->_delay;		HX_STACK_VAR(delay,"delay");
		HX_STACK_LINE(650)
		Float untilRest = (_totalTime - this->_rest);		HX_STACK_VAR(untilRest,"untilRest");
		HX_STACK_LINE(651)
		bool delaying = ((_currentTime - delay) < 1.4901161415892264e-008);		HX_STACK_VAR(delaying,"delaying");
		HX_STACK_LINE(652)
		bool resting = (bool(!(delaying)) && bool((1.4901161415892264e-008 > (untilRest - _currentTime))));		HX_STACK_VAR(resting,"resting");
		HX_STACK_LINE(653)
		Float body = (_currentTime - delay);		HX_STACK_VAR(body,"body");
		HX_STACK_LINE(654)
		int repeatNum = ::Math_obj::floor((Float(body) / Float(_singleTime)));		HX_STACK_VAR(repeatNum,"repeatNum");
		HX_STACK_LINE(655)
		Float position = (body - (repeatNum * _singleTime));		HX_STACK_VAR(position,"position");
		HX_STACK_LINE(656)
		bool intervending = (1.4901161415892264e-008 > (time - position));		HX_STACK_VAR(intervending,"intervending");
		HX_STACK_LINE(658)
		Float _g = hx::AddEq(_currentTime,spent);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(658)
		this->_currentTime = _g;
		HX_STACK_LINE(659)
		hx::AddEq(position,spent);
		HX_STACK_LINE(660)
		hx::AddEq(body,spent);
		HX_STACK_LINE(665)
		if ((((_currentTime - delay) < 1.4901161415892264e-008))){
			HX_STACK_LINE(666)
			{
				HX_STACK_LINE(666)
				Dynamic listeners = this->_eventListeners->__GetItem((int)1);		HX_STACK_VAR(listeners,"listeners");
				HX_STACK_LINE(666)
				if (((listeners != null()))){
					HX_STACK_LINE(666)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(666)
					while((true)){
						HX_STACK_LINE(666)
						if ((!(((_g1 < listeners->__Field(HX_CSTRING("length"),true)))))){
							HX_STACK_LINE(666)
							break;
						}
						HX_STACK_LINE(666)
						Dynamic f = listeners->__GetItem(_g1);		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(666)
						++(_g1);
						HX_STACK_LINE(666)
						f(hx::ObjectPtr<OBJ_>(this));
					}
				}
			}
			HX_STACK_LINE(667)
			if (((this->_onDelay_dyn() != null()))){
				HX_STACK_LINE(667)
				this->_onDelay();
			}
			HX_STACK_LINE(668)
			return null();
		}
		else{
			HX_STACK_LINE(669)
			if ((delaying)){
				HX_STACK_LINE(670)
				{
					HX_STACK_LINE(670)
					this->_apply((int)0,(int)0);
					HX_STACK_LINE(670)
					{
						HX_STACK_LINE(670)
						Dynamic listeners = this->_eventListeners->__GetItem((int)2);		HX_STACK_VAR(listeners,"listeners");
						HX_STACK_LINE(670)
						if (((listeners != null()))){
							HX_STACK_LINE(670)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(670)
							while((true)){
								HX_STACK_LINE(670)
								if ((!(((_g1 < listeners->__Field(HX_CSTRING("length"),true)))))){
									HX_STACK_LINE(670)
									break;
								}
								HX_STACK_LINE(670)
								Dynamic f = listeners->__GetItem(_g1);		HX_STACK_VAR(f,"f");
								HX_STACK_LINE(670)
								++(_g1);
								HX_STACK_LINE(670)
								f(hx::ObjectPtr<OBJ_>(this));
							}
						}
					}
					HX_STACK_LINE(670)
					if (((this->_onHead_dyn() != null()))){
						HX_STACK_LINE(670)
						this->_onHead();
					}
					HX_STACK_LINE(670)
					{
						HX_STACK_LINE(670)
						Dynamic listeners = this->_eventListeners->__GetItem((int)3);		HX_STACK_VAR(listeners,"listeners");
						HX_STACK_LINE(670)
						if (((listeners != null()))){
							HX_STACK_LINE(670)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(670)
							while((true)){
								HX_STACK_LINE(670)
								if ((!(((_g1 < listeners->__Field(HX_CSTRING("length"),true)))))){
									HX_STACK_LINE(670)
									break;
								}
								HX_STACK_LINE(670)
								Dynamic f = listeners->__GetItem(_g1);		HX_STACK_VAR(f,"f");
								HX_STACK_LINE(670)
								++(_g1);
								HX_STACK_LINE(670)
								f(hx::ObjectPtr<OBJ_>(this));
							}
						}
					}
					HX_STACK_LINE(670)
					if (((this->_onUpdate_dyn() != null()))){
						HX_STACK_LINE(670)
						this->_onUpdate();
					}
				}
				HX_STACK_LINE(671)
				delaying = false;
			}
		}
		HX_STACK_LINE(675)
		if (((1.4901161415892264e-008 > (untilRest - _currentTime)))){
			HX_STACK_LINE(676)
			if ((!(resting))){
				HX_STACK_LINE(677)
				if ((intervending)){
					HX_STACK_LINE(678)
					{
						HX_STACK_LINE(678)
						Dynamic listeners = this->_eventListeners->__GetItem((int)6);		HX_STACK_VAR(listeners,"listeners");
						HX_STACK_LINE(678)
						if (((listeners != null()))){
							HX_STACK_LINE(678)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(678)
							while((true)){
								HX_STACK_LINE(678)
								if ((!(((_g1 < listeners->__Field(HX_CSTRING("length"),true)))))){
									HX_STACK_LINE(678)
									break;
								}
								HX_STACK_LINE(678)
								Dynamic f = listeners->__GetItem(_g1);		HX_STACK_VAR(f,"f");
								HX_STACK_LINE(678)
								++(_g1);
								HX_STACK_LINE(678)
								f(hx::ObjectPtr<OBJ_>(this));
							}
						}
					}
					HX_STACK_LINE(679)
					if (((this->_onRepeat_dyn() != null()))){
						HX_STACK_LINE(679)
						this->_onRepeat();
					}
					HX_STACK_LINE(680)
					{
						HX_STACK_LINE(680)
						this->_apply((int)0,repeatNum);
						HX_STACK_LINE(680)
						{
							HX_STACK_LINE(680)
							Dynamic listeners = this->_eventListeners->__GetItem((int)2);		HX_STACK_VAR(listeners,"listeners");
							HX_STACK_LINE(680)
							if (((listeners != null()))){
								HX_STACK_LINE(680)
								int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(680)
								while((true)){
									HX_STACK_LINE(680)
									if ((!(((_g1 < listeners->__Field(HX_CSTRING("length"),true)))))){
										HX_STACK_LINE(680)
										break;
									}
									HX_STACK_LINE(680)
									Dynamic f = listeners->__GetItem(_g1);		HX_STACK_VAR(f,"f");
									HX_STACK_LINE(680)
									++(_g1);
									HX_STACK_LINE(680)
									f(hx::ObjectPtr<OBJ_>(this));
								}
							}
						}
						HX_STACK_LINE(680)
						if (((this->_onHead_dyn() != null()))){
							HX_STACK_LINE(680)
							this->_onHead();
						}
						HX_STACK_LINE(680)
						{
							HX_STACK_LINE(680)
							Dynamic listeners = this->_eventListeners->__GetItem((int)3);		HX_STACK_VAR(listeners,"listeners");
							HX_STACK_LINE(680)
							if (((listeners != null()))){
								HX_STACK_LINE(680)
								int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(680)
								while((true)){
									HX_STACK_LINE(680)
									if ((!(((_g1 < listeners->__Field(HX_CSTRING("length"),true)))))){
										HX_STACK_LINE(680)
										break;
									}
									HX_STACK_LINE(680)
									Dynamic f = listeners->__GetItem(_g1);		HX_STACK_VAR(f,"f");
									HX_STACK_LINE(680)
									++(_g1);
									HX_STACK_LINE(680)
									f(hx::ObjectPtr<OBJ_>(this));
								}
							}
						}
						HX_STACK_LINE(680)
						if (((this->_onUpdate_dyn() != null()))){
							HX_STACK_LINE(680)
							this->_onUpdate();
						}
					}
				}
				HX_STACK_LINE(682)
				{
					HX_STACK_LINE(682)
					this->_apply(this->_time,(this->_repeat - (int)1));
					HX_STACK_LINE(682)
					{
						HX_STACK_LINE(682)
						Dynamic listeners = this->_eventListeners->__GetItem((int)3);		HX_STACK_VAR(listeners,"listeners");
						HX_STACK_LINE(682)
						if (((listeners != null()))){
							HX_STACK_LINE(682)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(682)
							while((true)){
								HX_STACK_LINE(682)
								if ((!(((_g1 < listeners->__Field(HX_CSTRING("length"),true)))))){
									HX_STACK_LINE(682)
									break;
								}
								HX_STACK_LINE(682)
								Dynamic f = listeners->__GetItem(_g1);		HX_STACK_VAR(f,"f");
								HX_STACK_LINE(682)
								++(_g1);
								HX_STACK_LINE(682)
								f(hx::ObjectPtr<OBJ_>(this));
							}
						}
					}
					HX_STACK_LINE(682)
					if (((this->_onUpdate_dyn() != null()))){
						HX_STACK_LINE(682)
						this->_onUpdate();
					}
					HX_STACK_LINE(682)
					{
						HX_STACK_LINE(682)
						Dynamic listeners = this->_eventListeners->__GetItem((int)4);		HX_STACK_VAR(listeners,"listeners");
						HX_STACK_LINE(682)
						if (((listeners != null()))){
							HX_STACK_LINE(682)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(682)
							while((true)){
								HX_STACK_LINE(682)
								if ((!(((_g1 < listeners->__Field(HX_CSTRING("length"),true)))))){
									HX_STACK_LINE(682)
									break;
								}
								HX_STACK_LINE(682)
								Dynamic f = listeners->__GetItem(_g1);		HX_STACK_VAR(f,"f");
								HX_STACK_LINE(682)
								++(_g1);
								HX_STACK_LINE(682)
								f(hx::ObjectPtr<OBJ_>(this));
							}
						}
					}
					HX_STACK_LINE(682)
					if (((this->_onFoot_dyn() != null()))){
						HX_STACK_LINE(682)
						this->_onFoot();
					}
				}
			}
			HX_STACK_LINE(685)
			if (((1.4901161415892264e-008 > (_totalTime - _currentTime)))){
				HX_STACK_LINE(686)
				this->_currentTime = this->_totalTime;
				HX_STACK_LINE(686)
				{
					HX_STACK_LINE(686)
					Dynamic listeners = this->_eventListeners->__GetItem((int)8);		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(686)
					if (((listeners != null()))){
						HX_STACK_LINE(686)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(686)
						while((true)){
							HX_STACK_LINE(686)
							if ((!(((_g1 < listeners->__Field(HX_CSTRING("length"),true)))))){
								HX_STACK_LINE(686)
								break;
							}
							HX_STACK_LINE(686)
							Dynamic f = listeners->__GetItem(_g1);		HX_STACK_VAR(f,"f");
							HX_STACK_LINE(686)
							++(_g1);
							HX_STACK_LINE(686)
							f(hx::ObjectPtr<OBJ_>(this));
						}
					}
				}
				HX_STACK_LINE(686)
				if (((this->_onFinish_dyn() != null()))){
					HX_STACK_LINE(686)
					this->_onFinish();
				}
				HX_STACK_LINE(686)
				this->_stop();
			}
			else{
				HX_STACK_LINE(688)
				{
					HX_STACK_LINE(688)
					Dynamic listeners = this->_eventListeners->__GetItem((int)7);		HX_STACK_VAR(listeners,"listeners");
					HX_STACK_LINE(688)
					if (((listeners != null()))){
						HX_STACK_LINE(688)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(688)
						while((true)){
							HX_STACK_LINE(688)
							if ((!(((_g1 < listeners->__Field(HX_CSTRING("length"),true)))))){
								HX_STACK_LINE(688)
								break;
							}
							HX_STACK_LINE(688)
							Dynamic f = listeners->__GetItem(_g1);		HX_STACK_VAR(f,"f");
							HX_STACK_LINE(688)
							++(_g1);
							HX_STACK_LINE(688)
							f(hx::ObjectPtr<OBJ_>(this));
						}
					}
				}
				HX_STACK_LINE(689)
				if (((this->_onRest_dyn() != null()))){
					HX_STACK_LINE(689)
					this->_onRest();
				}
			}
		}
		else{
			HX_STACK_LINE(693)
			if (((1.4901161415892264e-008 > (time - position)))){
				HX_STACK_LINE(694)
				if (((bool(!(intervending)) && bool((repeatNum >= (int)0))))){
					HX_STACK_LINE(694)
					this->_apply(this->_time,repeatNum);
					HX_STACK_LINE(694)
					{
						HX_STACK_LINE(694)
						Dynamic listeners = this->_eventListeners->__GetItem((int)3);		HX_STACK_VAR(listeners,"listeners");
						HX_STACK_LINE(694)
						if (((listeners != null()))){
							HX_STACK_LINE(694)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(694)
							while((true)){
								HX_STACK_LINE(694)
								if ((!(((_g1 < listeners->__Field(HX_CSTRING("length"),true)))))){
									HX_STACK_LINE(694)
									break;
								}
								HX_STACK_LINE(694)
								Dynamic f = listeners->__GetItem(_g1);		HX_STACK_VAR(f,"f");
								HX_STACK_LINE(694)
								++(_g1);
								HX_STACK_LINE(694)
								f(hx::ObjectPtr<OBJ_>(this));
							}
						}
					}
					HX_STACK_LINE(694)
					if (((this->_onUpdate_dyn() != null()))){
						HX_STACK_LINE(694)
						this->_onUpdate();
					}
					HX_STACK_LINE(694)
					{
						HX_STACK_LINE(694)
						Dynamic listeners = this->_eventListeners->__GetItem((int)4);		HX_STACK_VAR(listeners,"listeners");
						HX_STACK_LINE(694)
						if (((listeners != null()))){
							HX_STACK_LINE(694)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(694)
							while((true)){
								HX_STACK_LINE(694)
								if ((!(((_g1 < listeners->__Field(HX_CSTRING("length"),true)))))){
									HX_STACK_LINE(694)
									break;
								}
								HX_STACK_LINE(694)
								Dynamic f = listeners->__GetItem(_g1);		HX_STACK_VAR(f,"f");
								HX_STACK_LINE(694)
								++(_g1);
								HX_STACK_LINE(694)
								f(hx::ObjectPtr<OBJ_>(this));
							}
						}
					}
					HX_STACK_LINE(694)
					if (((this->_onFoot_dyn() != null()))){
						HX_STACK_LINE(694)
						this->_onFoot();
					}
				}
				HX_STACK_LINE(695)
				if (((position < _singleTime))){
					HX_STACK_LINE(696)
					{
						HX_STACK_LINE(696)
						Dynamic listeners = this->_eventListeners->__GetItem((int)5);		HX_STACK_VAR(listeners,"listeners");
						HX_STACK_LINE(696)
						if (((listeners != null()))){
							HX_STACK_LINE(696)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(696)
							while((true)){
								HX_STACK_LINE(696)
								if ((!(((_g1 < listeners->__Field(HX_CSTRING("length"),true)))))){
									HX_STACK_LINE(696)
									break;
								}
								HX_STACK_LINE(696)
								Dynamic f = listeners->__GetItem(_g1);		HX_STACK_VAR(f,"f");
								HX_STACK_LINE(696)
								++(_g1);
								HX_STACK_LINE(696)
								f(hx::ObjectPtr<OBJ_>(this));
							}
						}
					}
					HX_STACK_LINE(697)
					if (((this->_onInterval_dyn() != null()))){
						HX_STACK_LINE(697)
						this->_onInterval();
					}
					HX_STACK_LINE(698)
					return null();
				}
				else{
					HX_STACK_LINE(700)
					if (((repeatNum >= (int)0))){
						HX_STACK_LINE(701)
						{
							HX_STACK_LINE(701)
							Dynamic listeners = this->_eventListeners->__GetItem((int)6);		HX_STACK_VAR(listeners,"listeners");
							HX_STACK_LINE(701)
							if (((listeners != null()))){
								HX_STACK_LINE(701)
								int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(701)
								while((true)){
									HX_STACK_LINE(701)
									if ((!(((_g1 < listeners->__Field(HX_CSTRING("length"),true)))))){
										HX_STACK_LINE(701)
										break;
									}
									HX_STACK_LINE(701)
									Dynamic f = listeners->__GetItem(_g1);		HX_STACK_VAR(f,"f");
									HX_STACK_LINE(701)
									++(_g1);
									HX_STACK_LINE(701)
									f(hx::ObjectPtr<OBJ_>(this));
								}
							}
						}
						HX_STACK_LINE(702)
						if (((this->_onRepeat_dyn() != null()))){
							HX_STACK_LINE(702)
							this->_onRepeat();
						}
						HX_STACK_LINE(703)
						{
							HX_STACK_LINE(703)
							this->_apply((int)0,repeatNum);
							HX_STACK_LINE(703)
							{
								HX_STACK_LINE(703)
								Dynamic listeners = this->_eventListeners->__GetItem((int)2);		HX_STACK_VAR(listeners,"listeners");
								HX_STACK_LINE(703)
								if (((listeners != null()))){
									HX_STACK_LINE(703)
									int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(703)
									while((true)){
										HX_STACK_LINE(703)
										if ((!(((_g1 < listeners->__Field(HX_CSTRING("length"),true)))))){
											HX_STACK_LINE(703)
											break;
										}
										HX_STACK_LINE(703)
										Dynamic f = listeners->__GetItem(_g1);		HX_STACK_VAR(f,"f");
										HX_STACK_LINE(703)
										++(_g1);
										HX_STACK_LINE(703)
										f(hx::ObjectPtr<OBJ_>(this));
									}
								}
							}
							HX_STACK_LINE(703)
							if (((this->_onHead_dyn() != null()))){
								HX_STACK_LINE(703)
								this->_onHead();
							}
							HX_STACK_LINE(703)
							{
								HX_STACK_LINE(703)
								Dynamic listeners = this->_eventListeners->__GetItem((int)3);		HX_STACK_VAR(listeners,"listeners");
								HX_STACK_LINE(703)
								if (((listeners != null()))){
									HX_STACK_LINE(703)
									int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(703)
									while((true)){
										HX_STACK_LINE(703)
										if ((!(((_g1 < listeners->__Field(HX_CSTRING("length"),true)))))){
											HX_STACK_LINE(703)
											break;
										}
										HX_STACK_LINE(703)
										Dynamic f = listeners->__GetItem(_g1);		HX_STACK_VAR(f,"f");
										HX_STACK_LINE(703)
										++(_g1);
										HX_STACK_LINE(703)
										f(hx::ObjectPtr<OBJ_>(this));
									}
								}
							}
							HX_STACK_LINE(703)
							if (((this->_onUpdate_dyn() != null()))){
								HX_STACK_LINE(703)
								this->_onUpdate();
							}
						}
					}
					HX_STACK_LINE(705)
					int _g1 = ::Std_obj::_int((Float(body) / Float(_singleTime)));		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(705)
					repeatNum = _g1;
					HX_STACK_LINE(706)
					position = (body - (repeatNum * _singleTime));
					HX_STACK_LINE(708)
					if (((1.4901161415892264e-008 > (time - position)))){
						HX_STACK_LINE(709)
						{
							HX_STACK_LINE(709)
							this->_apply(this->_time,repeatNum);
							HX_STACK_LINE(709)
							{
								HX_STACK_LINE(709)
								Dynamic listeners = this->_eventListeners->__GetItem((int)3);		HX_STACK_VAR(listeners,"listeners");
								HX_STACK_LINE(709)
								if (((listeners != null()))){
									HX_STACK_LINE(709)
									int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(709)
									while((true)){
										HX_STACK_LINE(709)
										if ((!(((_g2 < listeners->__Field(HX_CSTRING("length"),true)))))){
											HX_STACK_LINE(709)
											break;
										}
										HX_STACK_LINE(709)
										Dynamic f = listeners->__GetItem(_g2);		HX_STACK_VAR(f,"f");
										HX_STACK_LINE(709)
										++(_g2);
										HX_STACK_LINE(709)
										f(hx::ObjectPtr<OBJ_>(this));
									}
								}
							}
							HX_STACK_LINE(709)
							if (((this->_onUpdate_dyn() != null()))){
								HX_STACK_LINE(709)
								this->_onUpdate();
							}
							HX_STACK_LINE(709)
							{
								HX_STACK_LINE(709)
								Dynamic listeners = this->_eventListeners->__GetItem((int)4);		HX_STACK_VAR(listeners,"listeners");
								HX_STACK_LINE(709)
								if (((listeners != null()))){
									HX_STACK_LINE(709)
									int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(709)
									while((true)){
										HX_STACK_LINE(709)
										if ((!(((_g2 < listeners->__Field(HX_CSTRING("length"),true)))))){
											HX_STACK_LINE(709)
											break;
										}
										HX_STACK_LINE(709)
										Dynamic f = listeners->__GetItem(_g2);		HX_STACK_VAR(f,"f");
										HX_STACK_LINE(709)
										++(_g2);
										HX_STACK_LINE(709)
										f(hx::ObjectPtr<OBJ_>(this));
									}
								}
							}
							HX_STACK_LINE(709)
							if (((this->_onFoot_dyn() != null()))){
								HX_STACK_LINE(709)
								this->_onFoot();
							}
						}
						HX_STACK_LINE(710)
						{
							HX_STACK_LINE(710)
							Dynamic listeners = this->_eventListeners->__GetItem((int)5);		HX_STACK_VAR(listeners,"listeners");
							HX_STACK_LINE(710)
							if (((listeners != null()))){
								HX_STACK_LINE(710)
								int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(710)
								while((true)){
									HX_STACK_LINE(710)
									if ((!(((_g2 < listeners->__Field(HX_CSTRING("length"),true)))))){
										HX_STACK_LINE(710)
										break;
									}
									HX_STACK_LINE(710)
									Dynamic f = listeners->__GetItem(_g2);		HX_STACK_VAR(f,"f");
									HX_STACK_LINE(710)
									++(_g2);
									HX_STACK_LINE(710)
									f(hx::ObjectPtr<OBJ_>(this));
								}
							}
						}
						HX_STACK_LINE(711)
						if (((this->_onInterval_dyn() != null()))){
							HX_STACK_LINE(711)
							this->_onInterval();
						}
						HX_STACK_LINE(712)
						return null();
					}
				}
			}
			else{
				HX_STACK_LINE(716)
				if ((intervending)){
					HX_STACK_LINE(717)
					{
						HX_STACK_LINE(717)
						Dynamic listeners = this->_eventListeners->__GetItem((int)6);		HX_STACK_VAR(listeners,"listeners");
						HX_STACK_LINE(717)
						if (((listeners != null()))){
							HX_STACK_LINE(717)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(717)
							while((true)){
								HX_STACK_LINE(717)
								if ((!(((_g1 < listeners->__Field(HX_CSTRING("length"),true)))))){
									HX_STACK_LINE(717)
									break;
								}
								HX_STACK_LINE(717)
								Dynamic f = listeners->__GetItem(_g1);		HX_STACK_VAR(f,"f");
								HX_STACK_LINE(717)
								++(_g1);
								HX_STACK_LINE(717)
								f(hx::ObjectPtr<OBJ_>(this));
							}
						}
					}
					HX_STACK_LINE(718)
					if (((this->_onRepeat_dyn() != null()))){
						HX_STACK_LINE(718)
						this->_onRepeat();
					}
					HX_STACK_LINE(719)
					{
						HX_STACK_LINE(719)
						this->_apply((int)0,repeatNum);
						HX_STACK_LINE(719)
						{
							HX_STACK_LINE(719)
							Dynamic listeners = this->_eventListeners->__GetItem((int)2);		HX_STACK_VAR(listeners,"listeners");
							HX_STACK_LINE(719)
							if (((listeners != null()))){
								HX_STACK_LINE(719)
								int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(719)
								while((true)){
									HX_STACK_LINE(719)
									if ((!(((_g1 < listeners->__Field(HX_CSTRING("length"),true)))))){
										HX_STACK_LINE(719)
										break;
									}
									HX_STACK_LINE(719)
									Dynamic f = listeners->__GetItem(_g1);		HX_STACK_VAR(f,"f");
									HX_STACK_LINE(719)
									++(_g1);
									HX_STACK_LINE(719)
									f(hx::ObjectPtr<OBJ_>(this));
								}
							}
						}
						HX_STACK_LINE(719)
						if (((this->_onHead_dyn() != null()))){
							HX_STACK_LINE(719)
							this->_onHead();
						}
						HX_STACK_LINE(719)
						{
							HX_STACK_LINE(719)
							Dynamic listeners = this->_eventListeners->__GetItem((int)3);		HX_STACK_VAR(listeners,"listeners");
							HX_STACK_LINE(719)
							if (((listeners != null()))){
								HX_STACK_LINE(719)
								int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(719)
								while((true)){
									HX_STACK_LINE(719)
									if ((!(((_g1 < listeners->__Field(HX_CSTRING("length"),true)))))){
										HX_STACK_LINE(719)
										break;
									}
									HX_STACK_LINE(719)
									Dynamic f = listeners->__GetItem(_g1);		HX_STACK_VAR(f,"f");
									HX_STACK_LINE(719)
									++(_g1);
									HX_STACK_LINE(719)
									f(hx::ObjectPtr<OBJ_>(this));
								}
							}
						}
						HX_STACK_LINE(719)
						if (((this->_onUpdate_dyn() != null()))){
							HX_STACK_LINE(719)
							this->_onUpdate();
						}
					}
				}
			}
			HX_STACK_LINE(722)
			this->_apply(position,repeatNum);
			HX_STACK_LINE(723)
			{
				HX_STACK_LINE(723)
				Dynamic listeners = this->_eventListeners->__GetItem((int)3);		HX_STACK_VAR(listeners,"listeners");
				HX_STACK_LINE(723)
				if (((listeners != null()))){
					HX_STACK_LINE(723)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(723)
					while((true)){
						HX_STACK_LINE(723)
						if ((!(((_g1 < listeners->__Field(HX_CSTRING("length"),true)))))){
							HX_STACK_LINE(723)
							break;
						}
						HX_STACK_LINE(723)
						Dynamic f = listeners->__GetItem(_g1);		HX_STACK_VAR(f,"f");
						HX_STACK_LINE(723)
						++(_g1);
						HX_STACK_LINE(723)
						f(hx::ObjectPtr<OBJ_>(this));
					}
				}
			}
			HX_STACK_LINE(724)
			if (((this->_onUpdate_dyn() != null()))){
				HX_STACK_LINE(724)
				this->_onUpdate();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TweenX_obj,_update,(void))

Void TweenX_obj::_head( int repeatNum){
{
		HX_STACK_FRAME("tweenx909.TweenX","_head",0xadbcdc97,"tweenx909.TweenX._head","tweenx909/TweenX.hx",728,0x5ef20c57)
		HX_STACK_THIS(this)
		HX_STACK_ARG(repeatNum,"repeatNum")
		HX_STACK_LINE(729)
		this->_apply((int)0,repeatNum);
		HX_STACK_LINE(730)
		{
			HX_STACK_LINE(730)
			Dynamic listeners = this->_eventListeners->__GetItem((int)2);		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(730)
			if (((listeners != null()))){
				HX_STACK_LINE(730)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(730)
				while((true)){
					HX_STACK_LINE(730)
					if ((!(((_g < listeners->__Field(HX_CSTRING("length"),true)))))){
						HX_STACK_LINE(730)
						break;
					}
					HX_STACK_LINE(730)
					Dynamic f = listeners->__GetItem(_g);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(730)
					++(_g);
					HX_STACK_LINE(730)
					f(hx::ObjectPtr<OBJ_>(this));
				}
			}
		}
		HX_STACK_LINE(731)
		if (((this->_onHead_dyn() != null()))){
			HX_STACK_LINE(731)
			this->_onHead();
		}
		HX_STACK_LINE(732)
		{
			HX_STACK_LINE(732)
			Dynamic listeners = this->_eventListeners->__GetItem((int)3);		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(732)
			if (((listeners != null()))){
				HX_STACK_LINE(732)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(732)
				while((true)){
					HX_STACK_LINE(732)
					if ((!(((_g < listeners->__Field(HX_CSTRING("length"),true)))))){
						HX_STACK_LINE(732)
						break;
					}
					HX_STACK_LINE(732)
					Dynamic f = listeners->__GetItem(_g);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(732)
					++(_g);
					HX_STACK_LINE(732)
					f(hx::ObjectPtr<OBJ_>(this));
				}
			}
		}
		HX_STACK_LINE(733)
		if (((this->_onUpdate_dyn() != null()))){
			HX_STACK_LINE(733)
			this->_onUpdate();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TweenX_obj,_head,(void))

Void TweenX_obj::_foot( int repeatNum){
{
		HX_STACK_FRAME("tweenx909.TweenX","_foot",0xac721225,"tweenx909.TweenX._foot","tweenx909/TweenX.hx",735,0x5ef20c57)
		HX_STACK_THIS(this)
		HX_STACK_ARG(repeatNum,"repeatNum")
		HX_STACK_LINE(736)
		this->_apply(this->_time,repeatNum);
		HX_STACK_LINE(737)
		{
			HX_STACK_LINE(737)
			Dynamic listeners = this->_eventListeners->__GetItem((int)3);		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(737)
			if (((listeners != null()))){
				HX_STACK_LINE(737)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(737)
				while((true)){
					HX_STACK_LINE(737)
					if ((!(((_g < listeners->__Field(HX_CSTRING("length"),true)))))){
						HX_STACK_LINE(737)
						break;
					}
					HX_STACK_LINE(737)
					Dynamic f = listeners->__GetItem(_g);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(737)
					++(_g);
					HX_STACK_LINE(737)
					f(hx::ObjectPtr<OBJ_>(this));
				}
			}
		}
		HX_STACK_LINE(738)
		if (((this->_onUpdate_dyn() != null()))){
			HX_STACK_LINE(738)
			this->_onUpdate();
		}
		HX_STACK_LINE(739)
		{
			HX_STACK_LINE(739)
			Dynamic listeners = this->_eventListeners->__GetItem((int)4);		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(739)
			if (((listeners != null()))){
				HX_STACK_LINE(739)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(739)
				while((true)){
					HX_STACK_LINE(739)
					if ((!(((_g < listeners->__Field(HX_CSTRING("length"),true)))))){
						HX_STACK_LINE(739)
						break;
					}
					HX_STACK_LINE(739)
					Dynamic f = listeners->__GetItem(_g);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(739)
					++(_g);
					HX_STACK_LINE(739)
					f(hx::ObjectPtr<OBJ_>(this));
				}
			}
		}
		HX_STACK_LINE(740)
		if (((this->_onFoot_dyn() != null()))){
			HX_STACK_LINE(740)
			this->_onFoot();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TweenX_obj,_foot,(void))

Void TweenX_obj::_finish( ){
{
		HX_STACK_FRAME("tweenx909.TweenX","_finish",0xc59dff8a,"tweenx909.TweenX._finish","tweenx909/TweenX.hx",743,0x5ef20c57)
		HX_STACK_THIS(this)
		HX_STACK_LINE(744)
		this->_currentTime = this->_totalTime;
		HX_STACK_LINE(745)
		{
			HX_STACK_LINE(745)
			Dynamic listeners = this->_eventListeners->__GetItem((int)8);		HX_STACK_VAR(listeners,"listeners");
			HX_STACK_LINE(745)
			if (((listeners != null()))){
				HX_STACK_LINE(745)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(745)
				while((true)){
					HX_STACK_LINE(745)
					if ((!(((_g < listeners->__Field(HX_CSTRING("length"),true)))))){
						HX_STACK_LINE(745)
						break;
					}
					HX_STACK_LINE(745)
					Dynamic f = listeners->__GetItem(_g);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(745)
					++(_g);
					HX_STACK_LINE(745)
					f(hx::ObjectPtr<OBJ_>(this));
				}
			}
		}
		HX_STACK_LINE(746)
		if (((this->_onFinish_dyn() != null()))){
			HX_STACK_LINE(746)
			this->_onFinish();
		}
		HX_STACK_LINE(747)
		this->_stop();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TweenX_obj,_finish,(void))

Void TweenX_obj::_apply( Float p,int repeatNum){
{
		HX_STACK_FRAME("tweenx909.TweenX","_apply",0x5706da17,"tweenx909.TweenX._apply","tweenx909/TweenX.hx",750,0x5ef20c57)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p,"p")
		HX_STACK_ARG(repeatNum,"repeatNum")
		HX_STACK_LINE(751)
		Float t;		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(751)
		{
			HX_STACK_LINE(751)
			bool back = (hx::Mod(repeatNum,(int)2) == (int)1);		HX_STACK_VAR(back,"back");
			HX_STACK_LINE(751)
			Float t1 = (Float(p) / Float(this->_time));		HX_STACK_VAR(t1,"t1");
			HX_STACK_LINE(751)
			if ((this->_odd)){
				HX_STACK_LINE(751)
				back = !(back);
			}
			HX_STACK_LINE(751)
			if ((this->_inverted)){
				HX_STACK_LINE(751)
				t1 = ((int)1 - t1);
			}
			HX_STACK_LINE(751)
			if ((back)){
				HX_STACK_LINE(751)
				if ((this->_yoyo)){
					HX_STACK_LINE(751)
					t1 = ((int)1 - t1);
				}
				HX_STACK_LINE(751)
				Float _g = this->_ease(t1);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(751)
				t1 = _g;
				HX_STACK_LINE(751)
				if ((this->_zigzag)){
					HX_STACK_LINE(751)
					t1 = ((int)1 - t1);
				}
			}
			else{
				HX_STACK_LINE(751)
				Float _g1 = this->_ease(t1);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(751)
				t1 = _g1;
			}
			HX_STACK_LINE(751)
			t = t1;
		}
		HX_STACK_LINE(753)
		{
			HX_STACK_LINE(753)
			::tweenx909::advanced::TweenTypeX _g = this->_type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(753)
			switch( (int)(_g->__Index())){
				case (int)2: {
					HX_STACK_LINE(753)
					Dynamic _to = (::tweenx909::advanced::TweenTypeX(_g))->__Param(2);		HX_STACK_VAR(_to,"_to");
					HX_STACK_LINE(753)
					Dynamic _from = (::tweenx909::advanced::TweenTypeX(_g))->__Param(1);		HX_STACK_VAR(_from,"_from");
					HX_STACK_LINE(753)
					Dynamic target = (::tweenx909::advanced::TweenTypeX(_g))->__Param(0);		HX_STACK_VAR(target,"target");
					HX_STACK_LINE(754)
					{
						HX_STACK_LINE(755)
						Float t2 = ((int)1 - t);		HX_STACK_VAR(t2,"t2");
						HX_STACK_LINE(756)
						if ((this->_fastMode)){
							HX_STACK_LINE(757)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(757)
							Array< ::String > _g2 = this->_toKeys;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(757)
							while((true)){
								HX_STACK_LINE(757)
								if ((!(((_g1 < _g2->length))))){
									HX_STACK_LINE(757)
									break;
								}
								HX_STACK_LINE(757)
								::String key = _g2->__get(_g1);		HX_STACK_VAR(key,"key");
								HX_STACK_LINE(757)
								++(_g1);
								HX_STACK_LINE(758)
								{
									HX_STACK_LINE(760)
									Dynamic value;		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(760)
									{
										HX_STACK_LINE(760)
										Dynamic _from1;		HX_STACK_VAR(_from1,"_from1");
										HX_STACK_LINE(760)
										_from1 = (  (((_from == null()))) ? Dynamic(null()) : Dynamic(_from->__Field(key,true)) );
										HX_STACK_LINE(760)
										Dynamic _to1;		HX_STACK_VAR(_to1,"_to1");
										HX_STACK_LINE(760)
										_to1 = (  (((_to == null()))) ? Dynamic(null()) : Dynamic(_to->__Field(key,true)) );
										HX_STACK_LINE(760)
										value = ((_from1 * t2) + (_to1 * t));
									}
									HX_STACK_LINE(758)
									if (((target != null()))){
										HX_STACK_LINE(758)
										target->__SetField(key,value,true);
									}
								}
							}
						}
						else{
							HX_STACK_LINE(764)
							int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(764)
							Array< ::String > _g2 = this->_toKeys;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(764)
							while((true)){
								HX_STACK_LINE(764)
								if ((!(((_g1 < _g2->length))))){
									HX_STACK_LINE(764)
									break;
								}
								HX_STACK_LINE(764)
								::String key = _g2->__get(_g1);		HX_STACK_VAR(key,"key");
								HX_STACK_LINE(764)
								++(_g1);
								HX_STACK_LINE(765)
								{
									HX_STACK_LINE(767)
									Dynamic value;		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(767)
									{
										HX_STACK_LINE(767)
										Dynamic _from1;		HX_STACK_VAR(_from1,"_from1");
										HX_STACK_LINE(767)
										_from1 = (  (((_from == null()))) ? Dynamic(null()) : Dynamic(_from->__Field(key,true)) );
										HX_STACK_LINE(767)
										Dynamic _to1;		HX_STACK_VAR(_to1,"_to1");
										HX_STACK_LINE(767)
										_to1 = (  (((_to == null()))) ? Dynamic(null()) : Dynamic(_to->__Field(key,true)) );
										HX_STACK_LINE(767)
										if ((::Std_obj::is(_to1,hx::ClassOf< ::Float >()))){
											HX_STACK_LINE(767)
											Dynamic d = ((_from1 * t2) + (_to1 * t));		HX_STACK_VAR(d,"d");
											HX_STACK_LINE(767)
											value = d;
										}
										else{
											HX_STACK_LINE(767)
											int i = (int)0;		HX_STACK_VAR(i,"i");
											HX_STACK_LINE(767)
											int l = ::tweenx909::TweenX_obj::_rules->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(l,"l");
											HX_STACK_LINE(767)
											Dynamic f;		HX_STACK_VAR(f,"f");
											HX_STACK_LINE(767)
											Dynamic result = null();		HX_STACK_VAR(result,"result");
											HX_STACK_LINE(767)
											bool ok = false;		HX_STACK_VAR(ok,"ok");
											HX_STACK_LINE(767)
											while((true)){
												HX_STACK_LINE(767)
												if ((!(((i < l))))){
													HX_STACK_LINE(767)
													break;
												}
												HX_STACK_LINE(767)
												if ((::Std_obj::is(_to1,(f = ::tweenx909::TweenX_obj::_rules->__GetItem((i)++))->__Field(HX_CSTRING("inputClass"),true)))){
													HX_STACK_LINE(767)
													ok = true;
													HX_STACK_LINE(767)
													Dynamic _g21 = f->__Field(HX_CSTRING("calc"),true)(_from1,_to1,t,t2,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g21,"_g21");
													HX_STACK_LINE(767)
													result = _g21;
													HX_STACK_LINE(767)
													break;
												}
											}
											HX_STACK_LINE(767)
											if ((!(ok))){
												HX_STACK_LINE(767)
												::Class _g3 = ::Type_obj::getClass(_to1);		HX_STACK_VAR(_g3,"_g3");
												HX_STACK_LINE(767)
												::String _g4 = ::Type_obj::getClassName(_g3);		HX_STACK_VAR(_g4,"_g4");
												HX_STACK_LINE(767)
												::String _g5 = (HX_CSTRING("The tween rule for ") + _g4);		HX_STACK_VAR(_g5,"_g5");
												HX_STACK_LINE(767)
												::String _g6 = (_g5 + HX_CSTRING(" is not defined"));		HX_STACK_VAR(_g6,"_g6");
												HX_STACK_LINE(767)
												HX_STACK_DO_THROW(this->error(_g6));
											}
											HX_STACK_LINE(767)
											value = result;
										}
									}
									HX_STACK_LINE(765)
									if (((target != null()))){
										HX_STACK_LINE(765)
										target->__SetField(key,value,true);
									}
								}
							}
						}
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(753)
					Dynamic tos = (::tweenx909::advanced::TweenTypeX(_g))->__Param(2);		HX_STACK_VAR(tos,"tos");
					HX_STACK_LINE(753)
					Dynamic froms = (::tweenx909::advanced::TweenTypeX(_g))->__Param(1);		HX_STACK_VAR(froms,"froms");
					HX_STACK_LINE(753)
					Dynamic targets = (::tweenx909::advanced::TweenTypeX(_g))->__Param(0);		HX_STACK_VAR(targets,"targets");
					HX_STACK_LINE(772)
					{
						HX_STACK_LINE(773)
						Float t2 = ((int)1 - t);		HX_STACK_VAR(t2,"t2");
						HX_STACK_LINE(774)
						int i = (int)0;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(786)
						for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(targets->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
							Dynamic target = __it->next();
							{
								HX_STACK_LINE(787)
								Dynamic _to = tos->__GetItem(i);		HX_STACK_VAR(_to,"_to");
								HX_STACK_LINE(788)
								int _g8 = (i)++;		HX_STACK_VAR(_g8,"_g8");
								HX_STACK_LINE(788)
								Dynamic _from = froms->__GetItem(_g8);		HX_STACK_VAR(_from,"_from");
								HX_STACK_LINE(789)
								{
									HX_STACK_LINE(789)
									int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(789)
									Array< ::String > _g2 = this->_toKeys;		HX_STACK_VAR(_g2,"_g2");
									HX_STACK_LINE(789)
									while((true)){
										HX_STACK_LINE(789)
										if ((!(((_g1 < _g2->length))))){
											HX_STACK_LINE(789)
											break;
										}
										HX_STACK_LINE(789)
										::String key = _g2->__get(_g1);		HX_STACK_VAR(key,"key");
										HX_STACK_LINE(789)
										++(_g1);
										HX_STACK_LINE(792)
										Dynamic value;		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(792)
										{
											HX_STACK_LINE(792)
											Dynamic _from1;		HX_STACK_VAR(_from1,"_from1");
											HX_STACK_LINE(792)
											_from1 = (  (((_from == null()))) ? Dynamic(null()) : Dynamic(_from->__Field(key,true)) );
											HX_STACK_LINE(792)
											Dynamic _to1;		HX_STACK_VAR(_to1,"_to1");
											HX_STACK_LINE(792)
											_to1 = (  (((_to == null()))) ? Dynamic(null()) : Dynamic(_to->__Field(key,true)) );
											HX_STACK_LINE(792)
											if ((::Std_obj::is(_to1,hx::ClassOf< ::Float >()))){
												HX_STACK_LINE(792)
												Dynamic d = ((_from1 * t2) + (_to1 * t));		HX_STACK_VAR(d,"d");
												HX_STACK_LINE(792)
												value = d;
											}
											else{
												HX_STACK_LINE(792)
												int i1 = (int)0;		HX_STACK_VAR(i1,"i1");
												HX_STACK_LINE(792)
												int l = ::tweenx909::TweenX_obj::_rules->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(l,"l");
												HX_STACK_LINE(792)
												Dynamic f;		HX_STACK_VAR(f,"f");
												HX_STACK_LINE(792)
												Dynamic result = null();		HX_STACK_VAR(result,"result");
												HX_STACK_LINE(792)
												bool ok = false;		HX_STACK_VAR(ok,"ok");
												HX_STACK_LINE(792)
												while((true)){
													HX_STACK_LINE(792)
													if ((!(((i1 < l))))){
														HX_STACK_LINE(792)
														break;
													}
													HX_STACK_LINE(792)
													if ((::Std_obj::is(_to1,(f = ::tweenx909::TweenX_obj::_rules->__GetItem((i1)++))->__Field(HX_CSTRING("inputClass"),true)))){
														HX_STACK_LINE(792)
														ok = true;
														HX_STACK_LINE(792)
														Dynamic _g9 = f->__Field(HX_CSTRING("calc"),true)(_from1,_to1,t,t2,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g9,"_g9");
														HX_STACK_LINE(792)
														result = _g9;
														HX_STACK_LINE(792)
														break;
													}
												}
												HX_STACK_LINE(792)
												if ((!(ok))){
													HX_STACK_LINE(792)
													::Class _g10 = ::Type_obj::getClass(_to1);		HX_STACK_VAR(_g10,"_g10");
													HX_STACK_LINE(792)
													::String _g11 = ::Type_obj::getClassName(_g10);		HX_STACK_VAR(_g11,"_g11");
													HX_STACK_LINE(792)
													::String _g12 = (HX_CSTRING("The tween rule for ") + _g11);		HX_STACK_VAR(_g12,"_g12");
													HX_STACK_LINE(792)
													::String _g13 = (_g12 + HX_CSTRING(" is not defined"));		HX_STACK_VAR(_g13,"_g13");
													HX_STACK_LINE(792)
													HX_STACK_DO_THROW(this->error(_g13));
												}
												HX_STACK_LINE(792)
												value = result;
											}
										}
										HX_STACK_LINE(790)
										if (((target != null()))){
											HX_STACK_LINE(790)
											target->__SetField(key,value,true);
										}
									}
								}
							}
;
						}
					}
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(753)
					Dynamic _to = (::tweenx909::advanced::TweenTypeX(_g))->__Param(2);		HX_STACK_VAR(_to,"_to");
					HX_STACK_LINE(753)
					Dynamic _from = (::tweenx909::advanced::TweenTypeX(_g))->__Param(1);		HX_STACK_VAR(_from,"_from");
					HX_STACK_LINE(753)
					Dynamic func = (::tweenx909::advanced::TweenTypeX(_g))->__Param(0);		HX_STACK_VAR(func,"func");
					HX_STACK_LINE(796)
					{
						HX_STACK_LINE(797)
						Float t2 = ((int)1 - t);		HX_STACK_VAR(t2,"t2");
						HX_STACK_LINE(798)
						Dynamic arr = Dynamic( Array_obj<Dynamic>::__new());		HX_STACK_VAR(arr,"arr");
						HX_STACK_LINE(799)
						{
							HX_STACK_LINE(799)
							int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(799)
							int _g1 = _to->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(799)
							while((true)){
								HX_STACK_LINE(799)
								if ((!(((_g2 < _g1))))){
									HX_STACK_LINE(799)
									break;
								}
								HX_STACK_LINE(799)
								int i = (_g2)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(799)
								{
									HX_STACK_LINE(799)
									Dynamic _from1 = _from->__GetItem(i);		HX_STACK_VAR(_from1,"_from1");
									HX_STACK_LINE(799)
									Dynamic _to1 = _to->__GetItem(i);		HX_STACK_VAR(_to1,"_to1");
									HX_STACK_LINE(799)
									if ((::Std_obj::is(_to1,hx::ClassOf< ::Float >()))){
										HX_STACK_LINE(799)
										Dynamic d = ((_from1 * t2) + (_to1 * t));		HX_STACK_VAR(d,"d");
										HX_STACK_LINE(799)
										hx::IndexRef((arr).mPtr,i) = d;
									}
									else{
										HX_STACK_LINE(799)
										int i1 = (int)0;		HX_STACK_VAR(i1,"i1");
										HX_STACK_LINE(799)
										int l = ::tweenx909::TweenX_obj::_rules->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(l,"l");
										HX_STACK_LINE(799)
										Dynamic f;		HX_STACK_VAR(f,"f");
										HX_STACK_LINE(799)
										Dynamic result = null();		HX_STACK_VAR(result,"result");
										HX_STACK_LINE(799)
										bool ok = false;		HX_STACK_VAR(ok,"ok");
										HX_STACK_LINE(799)
										while((true)){
											HX_STACK_LINE(799)
											if ((!(((i1 < l))))){
												HX_STACK_LINE(799)
												break;
											}
											HX_STACK_LINE(799)
											if ((::Std_obj::is(_to1,(f = ::tweenx909::TweenX_obj::_rules->__GetItem((i1)++))->__Field(HX_CSTRING("inputClass"),true)))){
												HX_STACK_LINE(799)
												ok = true;
												HX_STACK_LINE(799)
												Dynamic _g14 = f->__Field(HX_CSTRING("calc"),true)(_from1,_to1,t,t2,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g14,"_g14");
												HX_STACK_LINE(799)
												result = _g14;
												HX_STACK_LINE(799)
												break;
											}
										}
										HX_STACK_LINE(799)
										if ((!(ok))){
											HX_STACK_LINE(799)
											::Class _g15 = ::Type_obj::getClass(_to1);		HX_STACK_VAR(_g15,"_g15");
											HX_STACK_LINE(799)
											::String _g16 = ::Type_obj::getClassName(_g15);		HX_STACK_VAR(_g16,"_g16");
											HX_STACK_LINE(799)
											::String _g17 = (HX_CSTRING("The tween rule for ") + _g16);		HX_STACK_VAR(_g17,"_g17");
											HX_STACK_LINE(799)
											::String _g18 = (_g17 + HX_CSTRING(" is not defined"));		HX_STACK_VAR(_g18,"_g18");
											HX_STACK_LINE(799)
											HX_STACK_DO_THROW(this->error(_g18));
										}
										HX_STACK_LINE(799)
										hx::IndexRef((arr).mPtr,i) = result;
									}
								}
							}
						}
						HX_STACK_LINE(800)
						::Reflect_obj::callMethod(null(),func,arr);
					}
				}
				;break;
				case (int)0: {
					HX_STACK_LINE(753)
					::tweenx909::advanced::GroupX g = (::tweenx909::advanced::TweenTypeX(_g))->__Param(0);		HX_STACK_VAR(g,"g");
					HX_STACK_LINE(802)
					{
						HX_STACK_LINE(803)
						Array< ::Dynamic > ts = g->tweens;		HX_STACK_VAR(ts,"ts");
						HX_STACK_LINE(804)
						Float spent = ((((this->_time * t) - g->current)) * 1.00000001);		HX_STACK_VAR(spent,"spent");
						HX_STACK_LINE(805)
						if (((spent < (int)0))){
							HX_STACK_LINE(805)
							int _g1 = ((int)1 - ts->length);		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(805)
							while((true)){
								HX_STACK_LINE(805)
								if ((!(((_g1 < (int)1))))){
									HX_STACK_LINE(805)
									break;
								}
								HX_STACK_LINE(805)
								int i = (_g1)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(805)
								ts->__get(-(i)).StaticCast< ::tweenx909::TweenX >()->_update(spent);
							}
						}
						else{
							HX_STACK_LINE(806)
							int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(806)
							int _g1 = ts->length;		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(806)
							while((true)){
								HX_STACK_LINE(806)
								if ((!(((_g2 < _g1))))){
									HX_STACK_LINE(806)
									break;
								}
								HX_STACK_LINE(806)
								int i = (_g2)++;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(806)
								ts->__get(i).StaticCast< ::tweenx909::TweenX >()->_update(spent);
							}
						}
						HX_STACK_LINE(807)
						Float _g19 = g->tweens->__get((int)0).StaticCast< ::tweenx909::TweenX >()->get_currentTime();		HX_STACK_VAR(_g19,"_g19");
						HX_STACK_LINE(807)
						g->current = _g19;
					}
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(753)
					Dynamic f = (::tweenx909::advanced::TweenTypeX(_g))->__Param(0);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(810)
					if (((t == (int)1))){
						HX_STACK_LINE(810)
						f().Cast< Void >();
					}
				}
				;break;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TweenX_obj,_apply,(void))

Dynamic TweenX_obj::_fastCalc( Dynamic _from,Dynamic _to,Float t1,Float t2){
	HX_STACK_FRAME("tweenx909.TweenX","_fastCalc",0xd18ac048,"tweenx909.TweenX._fastCalc","tweenx909/TweenX.hx",815,0x5ef20c57)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_from,"_from")
	HX_STACK_ARG(_to,"_to")
	HX_STACK_ARG(t1,"t1")
	HX_STACK_ARG(t2,"t2")
	HX_STACK_LINE(815)
	return ((_from * t2) + (_to * t1));
}


HX_DEFINE_DYNAMIC_FUNC4(TweenX_obj,_fastCalc,return )

Dynamic TweenX_obj::_calc( Dynamic _from,Dynamic _to,Float t1,Float t2){
	HX_STACK_FRAME("tweenx909.TweenX","_calc",0xaa6bcc0c,"tweenx909.TweenX._calc","tweenx909/TweenX.hx",819,0x5ef20c57)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_from,"_from")
	HX_STACK_ARG(_to,"_to")
	HX_STACK_ARG(t1,"t1")
	HX_STACK_ARG(t2,"t2")
	HX_STACK_LINE(819)
	if ((::Std_obj::is(_to,hx::ClassOf< ::Float >()))){
		HX_STACK_LINE(820)
		Dynamic d = ((_from * t2) + (_to * t1));		HX_STACK_VAR(d,"d");
		HX_STACK_LINE(821)
		return d;
	}
	else{
		HX_STACK_LINE(823)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(823)
		int l = ::tweenx909::TweenX_obj::_rules->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(823)
		Dynamic f;		HX_STACK_VAR(f,"f");
		HX_STACK_LINE(823)
		Dynamic result = null();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(823)
		bool ok = false;		HX_STACK_VAR(ok,"ok");
		HX_STACK_LINE(824)
		while((true)){
			HX_STACK_LINE(824)
			if ((!(((i < l))))){
				HX_STACK_LINE(824)
				break;
			}
			HX_STACK_LINE(825)
			if ((::Std_obj::is(_to,(f = ::tweenx909::TweenX_obj::_rules->__GetItem((i)++))->__Field(HX_CSTRING("inputClass"),true)))){
				HX_STACK_LINE(826)
				ok = true;
				HX_STACK_LINE(827)
				Dynamic _g = f->__Field(HX_CSTRING("calc"),true)(_from,_to,t1,t2,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(827)
				result = _g;
				HX_STACK_LINE(828)
				break;
			}
		}
		HX_STACK_LINE(831)
		if ((!(ok))){
			HX_STACK_LINE(831)
			::Class _g1 = ::Type_obj::getClass(_to);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(831)
			::String _g2 = ::Type_obj::getClassName(_g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(831)
			::String _g3 = (HX_CSTRING("The tween rule for ") + _g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(831)
			::String _g4 = (_g3 + HX_CSTRING(" is not defined"));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(831)
			HX_STACK_DO_THROW(this->error(_g4));
		}
		HX_STACK_LINE(832)
		return result;
	}
	HX_STACK_LINE(819)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC4(TweenX_obj,_calc,return )

::tweenx909::TweenX TweenX_obj::time( Float value){
	HX_STACK_FRAME("tweenx909.TweenX","time",0x4ef32f75,"tweenx909.TweenX.time","tweenx909/TweenX.hx",839,0x5ef20c57)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(840)
	if (((value < (int)0))){
		HX_STACK_LINE(840)
		HX_STACK_DO_THROW(this->error(HX_CSTRING("Can't be negative value")));
	}
	HX_STACK_LINE(841)
	this->checkInited();
	HX_STACK_LINE(842)
	this->_timeIsDefault = false;
	HX_STACK_LINE(843)
	this->_time = value;
	HX_STACK_LINE(844)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(TweenX_obj,time,return )

::tweenx909::TweenX TweenX_obj::ease( Dynamic value){
	HX_STACK_FRAME("tweenx909.TweenX","ease",0x4502ef56,"tweenx909.TweenX.ease","tweenx909/TweenX.hx",846,0x5ef20c57)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(847)
	this->checkInited();
	HX_STACK_LINE(848)
	this->_easeIsDefault = false;
	HX_STACK_LINE(849)
	this->_ease = value;
	HX_STACK_LINE(850)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(TweenX_obj,ease,return )

::tweenx909::TweenX TweenX_obj::delay( Float value){
	HX_STACK_FRAME("tweenx909.TweenX","delay",0x8cc76f1b,"tweenx909.TweenX.delay","tweenx909/TweenX.hx",852,0x5ef20c57)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(853)
	if (((value < (int)0))){
		HX_STACK_LINE(853)
		HX_STACK_DO_THROW(this->error(HX_CSTRING("Can't be negative value")));
	}
	HX_STACK_LINE(854)
	this->checkInited();
	HX_STACK_LINE(855)
	this->_delayIsDefault = false;
	HX_STACK_LINE(856)
	this->_delay = value;
	HX_STACK_LINE(857)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(TweenX_obj,delay,return )

::tweenx909::TweenX TweenX_obj::rest( Float value){
	HX_STACK_FRAME("tweenx909.TweenX","rest",0x4d9dbe7c,"tweenx909.TweenX.rest","tweenx909/TweenX.hx",859,0x5ef20c57)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(860)
	if (((value < (int)0))){
		HX_STACK_LINE(860)
		HX_STACK_DO_THROW(this->error(HX_CSTRING("Can't be negative value")));
	}
	HX_STACK_LINE(861)
	this->checkInited();
	HX_STACK_LINE(862)
	this->_rest = value;
	HX_STACK_LINE(863)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(TweenX_obj,rest,return )

::tweenx909::TweenX TweenX_obj::interval( Float value){
	HX_STACK_FRAME("tweenx909.TweenX","interval",0xea8cb0ad,"tweenx909.TweenX.interval","tweenx909/TweenX.hx",865,0x5ef20c57)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(866)
	if (((value < (int)0))){
		HX_STACK_LINE(866)
		HX_STACK_DO_THROW(this->error(HX_CSTRING("Can't be negative value")));
	}
	HX_STACK_LINE(867)
	this->checkInited();
	HX_STACK_LINE(868)
	this->_intervalIsDefault = false;
	HX_STACK_LINE(869)
	this->_interval = value;
	HX_STACK_LINE(870)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(TweenX_obj,interval,return )

::tweenx909::TweenX TweenX_obj::repeat( hx::Null< int >  __o_value){
int value = __o_value.Default(0);
	HX_STACK_FRAME("tweenx909.TweenX","repeat",0x3d60a4c3,"tweenx909.TweenX.repeat","tweenx909/TweenX.hx",872,0x5ef20c57)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
{
		HX_STACK_LINE(873)
		if (((value < (int)0))){
			HX_STACK_LINE(873)
			HX_STACK_DO_THROW(this->error(HX_CSTRING("Can't be negative value")));
		}
		HX_STACK_LINE(874)
		this->checkInited();
		HX_STACK_LINE(875)
		this->_repeatIsDefault = false;
		HX_STACK_LINE(876)
		this->_repeat = value;
		HX_STACK_LINE(877)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC1(TweenX_obj,repeat,return )

::tweenx909::TweenX TweenX_obj::yoyo( hx::Null< bool >  __o_value){
bool value = __o_value.Default(true);
	HX_STACK_FRAME("tweenx909.TweenX","yoyo",0x5245d894,"tweenx909.TweenX.yoyo","tweenx909/TweenX.hx",879,0x5ef20c57)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
{
		HX_STACK_LINE(880)
		this->checkInited();
		HX_STACK_LINE(881)
		this->_yoyoIsDefault = false;
		HX_STACK_LINE(882)
		this->_yoyo = value;
		HX_STACK_LINE(883)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC1(TweenX_obj,yoyo,return )

::tweenx909::TweenX TweenX_obj::zigzag( hx::Null< bool >  __o_value){
bool value = __o_value.Default(true);
	HX_STACK_FRAME("tweenx909.TweenX","zigzag",0xb7f2dd70,"tweenx909.TweenX.zigzag","tweenx909/TweenX.hx",885,0x5ef20c57)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
{
		HX_STACK_LINE(886)
		this->checkInited();
		HX_STACK_LINE(887)
		this->_zigzagIsDefault = false;
		HX_STACK_LINE(888)
		this->_zigzag = value;
		HX_STACK_LINE(889)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC1(TweenX_obj,zigzag,return )

::tweenx909::TweenX TweenX_obj::autoPlay( hx::Null< bool >  __o_value){
bool value = __o_value.Default(true);
	HX_STACK_FRAME("tweenx909.TweenX","autoPlay",0xef90546b,"tweenx909.TweenX.autoPlay","tweenx909/TweenX.hx",891,0x5ef20c57)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
{
		HX_STACK_LINE(892)
		this->checkInited();
		HX_STACK_LINE(893)
		this->_autoPlayIsDefault = false;
		HX_STACK_LINE(894)
		this->_autoPlay = value;
		HX_STACK_LINE(895)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC1(TweenX_obj,autoPlay,return )

::tweenx909::TweenX TweenX_obj::skip( hx::Null< Float >  __o_delay){
Float delay = __o_delay.Default(0);
	HX_STACK_FRAME("tweenx909.TweenX","skip",0x4e4b79e7,"tweenx909.TweenX.skip","tweenx909/TweenX.hx",897,0x5ef20c57)
	HX_STACK_THIS(this)
	HX_STACK_ARG(delay,"delay")
{
		HX_STACK_LINE(898)
		this->checkInited();
		HX_STACK_LINE(899)
		this->_skip = delay;
		HX_STACK_LINE(900)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC1(TweenX_obj,skip,return )

::tweenx909::TweenX TweenX_obj::setTimeScale( hx::Null< Float >  __o_value){
Float value = __o_value.Default(0);
	HX_STACK_FRAME("tweenx909.TweenX","setTimeScale",0x47b36ea3,"tweenx909.TweenX.setTimeScale","tweenx909/TweenX.hx",902,0x5ef20c57)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
{
		HX_STACK_LINE(903)
		this->set_timeScale(value);
		HX_STACK_LINE(904)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC1(TweenX_obj,setTimeScale,return )

::tweenx909::TweenX TweenX_obj::onPlay( Dynamic handler){
	HX_STACK_FRAME("tweenx909.TweenX","onPlay",0x23c8441b,"tweenx909.TweenX.onPlay","tweenx909/TweenX.hx",910,0x5ef20c57)
	HX_STACK_THIS(this)
	HX_STACK_ARG(handler,"handler")
	HX_STACK_LINE(911)
	this->_onPlay = handler;
	HX_STACK_LINE(912)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(TweenX_obj,onPlay,return )

::tweenx909::TweenX TweenX_obj::onStop( Dynamic handler){
	HX_STACK_FRAME("tweenx909.TweenX","onStop",0x25ca0629,"tweenx909.TweenX.onStop","tweenx909/TweenX.hx",914,0x5ef20c57)
	HX_STACK_THIS(this)
	HX_STACK_ARG(handler,"handler")
	HX_STACK_LINE(915)
	this->_onStop = handler;
	HX_STACK_LINE(916)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(TweenX_obj,onStop,return )

::tweenx909::TweenX TweenX_obj::onDelay( Dynamic handler){
	HX_STACK_FRAME("tweenx909.TweenX","onDelay",0x3e0c237c,"tweenx909.TweenX.onDelay","tweenx909/TweenX.hx",918,0x5ef20c57)
	HX_STACK_THIS(this)
	HX_STACK_ARG(handler,"handler")
	HX_STACK_LINE(919)
	this->_onDelay = handler;
	HX_STACK_LINE(920)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(TweenX_obj,onDelay,return )

::tweenx909::TweenX TweenX_obj::onHead( Dynamic handler){
	HX_STACK_FRAME("tweenx909.TweenX","onHead",0x1e793f47,"tweenx909.TweenX.onHead","tweenx909/TweenX.hx",922,0x5ef20c57)
	HX_STACK_THIS(this)
	HX_STACK_ARG(handler,"handler")
	HX_STACK_LINE(923)
	this->_onHead = handler;
	HX_STACK_LINE(924)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(TweenX_obj,onHead,return )

::tweenx909::TweenX TweenX_obj::onUpdate( Dynamic handler){
	HX_STACK_FRAME("tweenx909.TweenX","onUpdate",0x28c2b3f0,"tweenx909.TweenX.onUpdate","tweenx909/TweenX.hx",926,0x5ef20c57)
	HX_STACK_THIS(this)
	HX_STACK_ARG(handler,"handler")
	HX_STACK_LINE(927)
	this->_onUpdate = handler;
	HX_STACK_LINE(928)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(TweenX_obj,onUpdate,return )

::tweenx909::TweenX TweenX_obj::onFoot( Dynamic handler){
	HX_STACK_FRAME("tweenx909.TweenX","onFoot",0x1d2e74d5,"tweenx909.TweenX.onFoot","tweenx909/TweenX.hx",930,0x5ef20c57)
	HX_STACK_THIS(this)
	HX_STACK_ARG(handler,"handler")
	HX_STACK_LINE(931)
	this->_onFoot = handler;
	HX_STACK_LINE(932)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(TweenX_obj,onFoot,return )

::tweenx909::TweenX TweenX_obj::onRest( Dynamic handler){
	HX_STACK_FRAME("tweenx909.TweenX","onRest",0x2515713b,"tweenx909.TweenX.onRest","tweenx909/TweenX.hx",934,0x5ef20c57)
	HX_STACK_THIS(this)
	HX_STACK_ARG(handler,"handler")
	HX_STACK_LINE(935)
	this->_onRest = handler;
	HX_STACK_LINE(936)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(TweenX_obj,onRest,return )

::tweenx909::TweenX TweenX_obj::onInterval( Dynamic handler){
	HX_STACK_FRAME("tweenx909.TweenX","onInterval",0x964e2eec,"tweenx909.TweenX.onInterval","tweenx909/TweenX.hx",938,0x5ef20c57)
	HX_STACK_THIS(this)
	HX_STACK_ARG(handler,"handler")
	HX_STACK_LINE(939)
	this->_onInterval = handler;
	HX_STACK_LINE(940)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(TweenX_obj,onInterval,return )

::tweenx909::TweenX TweenX_obj::onRepeat( Dynamic handler){
	HX_STACK_FRAME("tweenx909.TweenX","onRepeat",0xa839c542,"tweenx909.TweenX.onRepeat","tweenx909/TweenX.hx",942,0x5ef20c57)
	HX_STACK_THIS(this)
	HX_STACK_ARG(handler,"handler")
	HX_STACK_LINE(943)
	this->_onRepeat = handler;
	HX_STACK_LINE(944)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(TweenX_obj,onRepeat,return )

::tweenx909::TweenX TweenX_obj::onFinish( Dynamic handler){
	HX_STACK_FRAME("tweenx909.TweenX","onFinish",0x283c6e3a,"tweenx909.TweenX.onFinish","tweenx909/TweenX.hx",946,0x5ef20c57)
	HX_STACK_THIS(this)
	HX_STACK_ARG(handler,"handler")
	HX_STACK_LINE(947)
	this->_onFinish = handler;
	HX_STACK_LINE(948)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC1(TweenX_obj,onFinish,return )

::tweenx909::TweenX TweenX_obj::addEventListener( ::tweenx909::EventX type,Dynamic listener){
	HX_STACK_FRAME("tweenx909.TweenX","addEventListener",0xd315eb35,"tweenx909.TweenX.addEventListener","tweenx909/TweenX.hx",951,0x5ef20c57)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(listener,"listener")
	HX_STACK_LINE(952)
	{
		HX_STACK_LINE(952)
		int i = type->__Index();		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(952)
		Dynamic arr;		HX_STACK_VAR(arr,"arr");
		HX_STACK_LINE(952)
		if (((this->_eventListeners->__GetItem(i) == null()))){
			HX_STACK_LINE(952)
			arr = hx::IndexRef((this->_eventListeners).mPtr,i) = Dynamic( Array_obj<Dynamic>::__new());
		}
		else{
			HX_STACK_LINE(952)
			arr = this->_eventListeners->__GetItem(i);
		}
		HX_STACK_LINE(952)
		if ((!(::Lambda_obj::has(arr,listener)))){
			HX_STACK_LINE(952)
			arr->__Field(HX_CSTRING("push"),true)(listener);
		}
	}
	HX_STACK_LINE(953)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(TweenX_obj,addEventListener,return )

::tweenx909::TweenX TweenX_obj::removeEventListener( ::tweenx909::EventX type,Dynamic listener){
	HX_STACK_FRAME("tweenx909.TweenX","removeEventListener",0x83b73962,"tweenx909.TweenX.removeEventListener","tweenx909/TweenX.hx",955,0x5ef20c57)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(listener,"listener")
	HX_STACK_LINE(956)
	{
		HX_STACK_LINE(956)
		int i = type->__Index();		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(956)
		if (((this->_eventListeners->__GetItem(i) != null()))){
			HX_STACK_LINE(956)
			this->_eventListeners->__GetItem(i)->__Field(HX_CSTRING("remove"),true)(listener);
		}
	}
	HX_STACK_LINE(957)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(TweenX_obj,removeEventListener,return )

Void TweenX_obj::_addEventListener( ::tweenx909::EventX type,Dynamic listener){
{
		HX_STACK_FRAME("tweenx909.TweenX","_addEventListener",0x23d095c4,"tweenx909.TweenX._addEventListener","tweenx909/TweenX.hx",959,0x5ef20c57)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(listener,"listener")
		HX_STACK_LINE(960)
		int i = type->__Index();		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(961)
		Dynamic arr;		HX_STACK_VAR(arr,"arr");
		HX_STACK_LINE(961)
		if (((this->_eventListeners->__GetItem(i) == null()))){
			HX_STACK_LINE(961)
			arr = hx::IndexRef((this->_eventListeners).mPtr,i) = Dynamic( Array_obj<Dynamic>::__new());
		}
		else{
			HX_STACK_LINE(962)
			arr = this->_eventListeners->__GetItem(i);
		}
		HX_STACK_LINE(963)
		if ((!(::Lambda_obj::has(arr,listener)))){
			HX_STACK_LINE(963)
			arr->__Field(HX_CSTRING("push"),true)(listener);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TweenX_obj,_addEventListener,(void))

Void TweenX_obj::_removeEventListener( ::tweenx909::EventX type,Dynamic listener){
{
		HX_STACK_FRAME("tweenx909.TweenX","_removeEventListener",0xa0085233,"tweenx909.TweenX._removeEventListener","tweenx909/TweenX.hx",965,0x5ef20c57)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(listener,"listener")
		HX_STACK_LINE(966)
		int i = type->__Index();		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(967)
		if (((this->_eventListeners->__GetItem(i) != null()))){
			HX_STACK_LINE(968)
			this->_eventListeners->__GetItem(i)->__Field(HX_CSTRING("remove"),true)(listener);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TweenX_obj,_removeEventListener,(void))

Float TweenX_obj::_getPosition( Float p,bool back){
	HX_STACK_FRAME("tweenx909.TweenX","_getPosition",0x4c9c1cc8,"tweenx909.TweenX._getPosition","tweenx909/TweenX.hx",975,0x5ef20c57)
	HX_STACK_THIS(this)
	HX_STACK_ARG(p,"p")
	HX_STACK_ARG(back,"back")
	HX_STACK_LINE(976)
	Float t = (Float(p) / Float(this->_time));		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(977)
	if ((this->_odd)){
		HX_STACK_LINE(977)
		back = !(back);
	}
	HX_STACK_LINE(978)
	if ((this->_inverted)){
		HX_STACK_LINE(978)
		t = ((int)1 - t);
	}
	HX_STACK_LINE(979)
	if ((back)){
		HX_STACK_LINE(980)
		if ((this->_yoyo)){
			HX_STACK_LINE(980)
			t = ((int)1 - t);
		}
		HX_STACK_LINE(981)
		Float _g = this->_ease(t);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(981)
		t = _g;
		HX_STACK_LINE(982)
		if ((this->_zigzag)){
			HX_STACK_LINE(982)
			t = ((int)1 - t);
		}
	}
	else{
		HX_STACK_LINE(984)
		Float _g1 = this->_ease(t);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(984)
		t = _g1;
	}
	HX_STACK_LINE(986)
	return t;
}


HX_DEFINE_DYNAMIC_FUNC2(TweenX_obj,_getPosition,return )

Void TweenX_obj::checkInited( ){
{
		HX_STACK_FRAME("tweenx909.TweenX","checkInited",0x00c8a3ef,"tweenx909.TweenX.checkInited","tweenx909/TweenX.hx",989,0x5ef20c57)
		HX_STACK_THIS(this)
		HX_STACK_LINE(989)
		if ((this->_inited)){
			HX_STACK_LINE(989)
			HX_STACK_DO_THROW(this->error(HX_CSTRING("Can't change params after initialization")));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TweenX_obj,checkInited,(void))

Void TweenX_obj::dispatch( int num){
{
		HX_STACK_FRAME("tweenx909.TweenX","dispatch",0xe0740622,"tweenx909.TweenX.dispatch","tweenx909/TweenX.hx",991,0x5ef20c57)
		HX_STACK_THIS(this)
		HX_STACK_ARG(num,"num")
		HX_STACK_LINE(1000)
		Dynamic listeners = this->_eventListeners->__GetItem(num);		HX_STACK_VAR(listeners,"listeners");
		HX_STACK_LINE(1001)
		if (((listeners != null()))){
			HX_STACK_LINE(1001)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1001)
			while((true)){
				HX_STACK_LINE(1001)
				if ((!(((_g < listeners->__Field(HX_CSTRING("length"),true)))))){
					HX_STACK_LINE(1001)
					break;
				}
				HX_STACK_LINE(1001)
				Dynamic f = listeners->__GetItem(_g);		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(1001)
				++(_g);
				HX_STACK_LINE(1001)
				f(hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TweenX_obj,dispatch,(void))

Void TweenX_obj::initGroup( ::tweenx909::advanced::GroupX g){
{
		HX_STACK_FRAME("tweenx909.TweenX","initGroup",0xc1a711a7,"tweenx909.TweenX.initGroup","tweenx909/TweenX.hx",1004,0x5ef20c57)
		HX_STACK_THIS(this)
		HX_STACK_ARG(g,"g")
		HX_STACK_LINE(1005)
		::tweenx909::advanced::DefaultsX df = null();		HX_STACK_VAR(df,"df");
		HX_STACK_LINE(1005)
		bool gd = false;		HX_STACK_VAR(gd,"gd");
		HX_STACK_LINE(1007)
		if (((g->defaults != null()))){
			HX_STACK_LINE(1008)
			::tweenx909::advanced::DefaultsX _g = ::tweenx909::TweenX_obj::dumpDefaults();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1008)
			df = _g;
			HX_STACK_LINE(1009)
			gd = ::tweenx909::TweenX_obj::_groupDefaults;
			HX_STACK_LINE(1010)
			::tweenx909::TweenX_obj::_groupDefaults = true;
			HX_STACK_LINE(1011)
			::tweenx909::TweenX_obj::setDefaults(g->defaults);
			HX_STACK_LINE(1012)
			::tweenx909::TweenX_obj::defaultAutoPlay = false;
		}
		HX_STACK_LINE(1015)
		Float delay = 0.0;		HX_STACK_VAR(delay,"delay");
		HX_STACK_LINE(1016)
		Float max = 0.0;		HX_STACK_VAR(max,"max");
		HX_STACK_LINE(1017)
		Array< ::Dynamic > result = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(1019)
		{
			HX_STACK_LINE(1019)
			::tweenx909::advanced::_GroupX::GroupTypeX _g = g->type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1019)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(1021)
					for(::cpp::FastIterator_obj< ::tweenx909::advanced::CommandX > *__it = ::cpp::CreateFastIterator< ::tweenx909::advanced::CommandX >(g->source->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
						::tweenx909::advanced::CommandX t = __it->next();
						{
							HX_STACK_LINE(1022)
							if (((t == null()))){
								HX_STACK_LINE(1022)
								continue;
							}
							HX_STACK_LINE(1023)
							{
								HX_STACK_LINE(1023)
								::tweenx909::advanced::CommandTypeX _g1 = t->command;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(1023)
								switch( (int)(_g1->__Index())){
									case (int)1: {
										HX_STACK_LINE(1023)
										Float d = (::tweenx909::advanced::CommandTypeX(_g1))->__Param(0);		HX_STACK_VAR(d,"d");
										HX_STACK_LINE(1024)
										hx::AddEq(delay,d);
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(1023)
										::tweenx909::TweenX o = (::tweenx909::advanced::CommandTypeX(_g1))->__Param(0);		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1025)
										{
											HX_STACK_LINE(1026)
											result->push(o);
											HX_STACK_LINE(1027)
											o->_autoPlay = false;
											HX_STACK_LINE(1029)
											if (((bool(::tweenx909::TweenX_obj::_groupDefaults) && bool(o->_delayIsDefault)))){
												HX_STACK_LINE(1030)
												o->_delay = ::tweenx909::TweenX_obj::defaultDelay;
											}
											HX_STACK_LINE(1032)
											o->_init();
											HX_STACK_LINE(1033)
											hx::AddEq(o->_delay,delay);
											HX_STACK_LINE(1034)
											hx::AddEq(o->_totalTime,delay);
											HX_STACK_LINE(1036)
											Float totalTime = o->_totalTime;		HX_STACK_VAR(totalTime,"totalTime");
											HX_STACK_LINE(1037)
											if (((o->_skip != null()))){
												HX_STACK_LINE(1037)
												delay = (delay + o->_skip);
											}
											else{
												HX_STACK_LINE(1037)
												delay = totalTime;
											}
											HX_STACK_LINE(1038)
											if (((max < totalTime))){
												HX_STACK_LINE(1038)
												max = totalTime;
											}
										}
									}
									;break;
								}
							}
						}
;
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(1019)
					Float lag = (::tweenx909::advanced::_GroupX::GroupTypeX(_g))->__Param(0);		HX_STACK_VAR(lag,"lag");
					HX_STACK_LINE(1042)
					for(::cpp::FastIterator_obj< ::tweenx909::advanced::CommandX > *__it = ::cpp::CreateFastIterator< ::tweenx909::advanced::CommandX >(g->source->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
						::tweenx909::advanced::CommandX t = __it->next();
						{
							HX_STACK_LINE(1043)
							if (((t == null()))){
								HX_STACK_LINE(1043)
								continue;
							}
							HX_STACK_LINE(1044)
							{
								HX_STACK_LINE(1044)
								::tweenx909::advanced::CommandTypeX _g1 = t->command;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(1044)
								switch( (int)(_g1->__Index())){
									case (int)1: {
										HX_STACK_LINE(1044)
										Float d = (::tweenx909::advanced::CommandTypeX(_g1))->__Param(0);		HX_STACK_VAR(d,"d");
										HX_STACK_LINE(1046)
										hx::AddEq(delay,d);
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(1044)
										::tweenx909::TweenX o = (::tweenx909::advanced::CommandTypeX(_g1))->__Param(0);		HX_STACK_VAR(o,"o");
										HX_STACK_LINE(1047)
										{
											HX_STACK_LINE(1048)
											result->push(o);
											HX_STACK_LINE(1050)
											o->_init();
											HX_STACK_LINE(1051)
											hx::AddEq(o->_delay,delay);
											HX_STACK_LINE(1052)
											hx::AddEq(o->_totalTime,delay);
											HX_STACK_LINE(1054)
											Float totalTime = o->_totalTime;		HX_STACK_VAR(totalTime,"totalTime");
											HX_STACK_LINE(1055)
											if (((o->_skip != null()))){
												HX_STACK_LINE(1055)
												hx::AddEq(delay,o->_skip);
											}
											else{
												HX_STACK_LINE(1055)
												hx::AddEq(delay,lag);
											}
											HX_STACK_LINE(1056)
											if (((max < totalTime))){
												HX_STACK_LINE(1056)
												max = totalTime;
											}
										}
									}
									;break;
								}
							}
						}
;
					}
				}
				;break;
			}
		}
		HX_STACK_LINE(1060)
		{
			HX_STACK_LINE(1060)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1060)
			while((true)){
				HX_STACK_LINE(1060)
				if ((!(((_g < result->length))))){
					HX_STACK_LINE(1060)
					break;
				}
				HX_STACK_LINE(1060)
				::tweenx909::TweenX t = result->__get(_g).StaticCast< ::tweenx909::TweenX >();		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(1060)
				++(_g);
				HX_STACK_LINE(1061)
				Float diff = (max - t->_totalTime);		HX_STACK_VAR(diff,"diff");
				HX_STACK_LINE(1062)
				hx::AddEq(t->_rest,diff);
				HX_STACK_LINE(1063)
				hx::AddEq(t->_totalTime,diff);
			}
		}
		HX_STACK_LINE(1066)
		this->_time = max;
		HX_STACK_LINE(1067)
		g->tweens = result;
		HX_STACK_LINE(1068)
		g->source = null();
		HX_STACK_LINE(1070)
		if (((g->defaults != null()))){
			HX_STACK_LINE(1071)
			::tweenx909::TweenX_obj::_groupDefaults = gd;
			HX_STACK_LINE(1072)
			::tweenx909::TweenX_obj::setDefaults(df);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TweenX_obj,initGroup,(void))

Array< ::Dynamic > TweenX_obj::_tweens;

Array< ::Dynamic > TweenX_obj::_addedTweens;

Dynamic TweenX_obj::get_tweens( ){
	HX_STACK_FRAME("tweenx909.TweenX","get_tweens",0xa9c6c4d9,"tweenx909.TweenX.get_tweens","tweenx909/TweenX.hx",34,0x5ef20c57)
	HX_STACK_LINE(34)
	return ::tweenx909::TweenX_obj::_tweens;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(TweenX_obj,get_tweens,return )

Float TweenX_obj::prevTime;

bool TweenX_obj::managerInited;

Dynamic TweenX_obj::DEFAULT_EASE;

Float TweenX_obj::DEFAULT_TIME;

Float TweenX_obj::DEFAULT_DELAY;

int TweenX_obj::DEFAULT_REPEAT;

int TweenX_obj::DEFAULT_INTERVAL;

bool TweenX_obj::DEFAULT_YOYO;

bool TweenX_obj::DEFAULT_ZIGZAG;

bool TweenX_obj::DEFAULT_AUTO_PLAY;

bool TweenX_obj::DEFAULT_AUTO_FROM;

Dynamic TweenX_obj::defaultEase;

Float TweenX_obj::defaultTime;

Float TweenX_obj::defaultDelay;

Float TweenX_obj::defaultInterval;

int TweenX_obj::defaultRepeat;

bool TweenX_obj::defaultYoyo;

bool TweenX_obj::defaultZigZag;

bool TweenX_obj::defaultAutoPlay;

bool TweenX_obj::defaultAutoFrom;

Dynamic TweenX_obj::_rules;

Dynamic TweenX_obj::get_rules( ){
	HX_STACK_FRAME("tweenx909.TweenX","get_rules",0x412003e6,"tweenx909.TweenX.get_rules","tweenx909/TweenX.hx",67,0x5ef20c57)
	HX_STACK_LINE(67)
	return ::tweenx909::TweenX_obj::_rules;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(TweenX_obj,get_rules,return )

Float TweenX_obj::topLevelTimeScale;

bool TweenX_obj::_groupDefaults;

::tweenx909::advanced::DefaultsX TweenX_obj::dumpDefaults( ){
	HX_STACK_FRAME("tweenx909.TweenX","dumpDefaults",0x3cb0694e,"tweenx909.TweenX.dumpDefaults","tweenx909/TweenX.hx",74,0x5ef20c57)
	HX_STACK_LINE(74)
	return ::tweenx909::advanced::DefaultsX_obj::__new()->dump();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(TweenX_obj,dumpDefaults,return )

Void TweenX_obj::setDefaults( ::tweenx909::advanced::DefaultsX defaults){
{
		HX_STACK_FRAME("tweenx909.TweenX","setDefaults",0x6764f3ec,"tweenx909.TweenX.setDefaults","tweenx909/TweenX.hx",77,0x5ef20c57)
		HX_STACK_ARG(defaults,"defaults")
		HX_STACK_LINE(77)
		defaults->apply();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TweenX_obj,setDefaults,(void))

Void TweenX_obj::initDefaults( ){
{
		HX_STACK_FRAME("tweenx909.TweenX","initDefaults",0x49f4632a,"tweenx909.TweenX.initDefaults","tweenx909/TweenX.hx",80,0x5ef20c57)
		HX_STACK_LINE(80)
		::tweenx909::advanced::DefaultsX_obj::__new()->apply();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(TweenX_obj,initDefaults,(void))

::tweenx909::advanced::UpdateModeX TweenX_obj::updateMode;

::tweenx909::advanced::UpdateModeX TweenX_obj::set_updateMode( ::tweenx909::advanced::UpdateModeX value){
	HX_STACK_FRAME("tweenx909.TweenX","set_updateMode",0x4676e431,"tweenx909.TweenX.set_updateMode","tweenx909/TweenX.hx",86,0x5ef20c57)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(87)
	::tweenx909::TweenX_obj::updateMode = value;
	HX_STACK_LINE(88)
	{
		HX_STACK_LINE(88)
		::tweenx909::TweenX_obj::managerInited = true;
		HX_STACK_LINE(88)
		::tweenx909::TweenX_obj::stopUpdater();
		HX_STACK_LINE(88)
		{
			HX_STACK_LINE(88)
			::tweenx909::advanced::UpdateModeX _g = ::tweenx909::TweenX_obj::updateMode;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(88)
			switch( (int)(_g->__Index())){
				case (int)1: {
					HX_STACK_LINE(88)
					Float f = (::tweenx909::advanced::UpdateModeX(_g))->__Param(0);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(88)
					{
						HX_STACK_LINE(88)
						Float _g1 = ::Sys_obj::time();		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(88)
						Float _g11 = (_g1 * (int)1000);		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(88)
						::tweenx909::TweenX_obj::prevTime = _g11;
						HX_STACK_LINE(88)
						{
							HX_STACK_LINE(88)
							int t = ::Math_obj::round((Float((int)1000) / Float(f)));		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(88)
							if (((::tweenx909::TweenX_obj::_timer != null()))){
								HX_STACK_LINE(88)
								::tweenx909::TweenX_obj::_timer->stop();
							}
							HX_STACK_LINE(88)
							::haxe::Timer _g2 = ::haxe::Timer_obj::__new(t);		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(88)
							::tweenx909::TweenX_obj::_timer = _g2;
							HX_STACK_LINE(88)
							::tweenx909::TweenX_obj::_timer->run = ::tweenx909::TweenX_obj::mainLoop_dyn();
						}
					}
				}
				;break;
				case (int)0: {
				}
				;break;
			}
		}
	}
	HX_STACK_LINE(89)
	return value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TweenX_obj,set_updateMode,return )

Void TweenX_obj::initManager( ){
{
		HX_STACK_FRAME("tweenx909.TweenX","initManager",0x53965ad5,"tweenx909.TweenX.initManager","tweenx909/TweenX.hx",95,0x5ef20c57)
		HX_STACK_LINE(96)
		::tweenx909::TweenX_obj::managerInited = true;
		HX_STACK_LINE(97)
		::tweenx909::TweenX_obj::stopUpdater();
		HX_STACK_LINE(98)
		{
			HX_STACK_LINE(98)
			::tweenx909::advanced::UpdateModeX _g = ::tweenx909::TweenX_obj::updateMode;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(98)
			switch( (int)(_g->__Index())){
				case (int)1: {
					HX_STACK_LINE(98)
					Float f = (::tweenx909::advanced::UpdateModeX(_g))->__Param(0);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(103)
					{
						HX_STACK_LINE(104)
						Float _g1 = ::Sys_obj::time();		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(104)
						Float _g11 = (_g1 * (int)1000);		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(104)
						::tweenx909::TweenX_obj::prevTime = _g11;
						HX_STACK_LINE(105)
						{
							HX_STACK_LINE(105)
							int t = ::Math_obj::round((Float((int)1000) / Float(f)));		HX_STACK_VAR(t,"t");
							HX_STACK_LINE(105)
							if (((::tweenx909::TweenX_obj::_timer != null()))){
								HX_STACK_LINE(105)
								::tweenx909::TweenX_obj::_timer->stop();
							}
							HX_STACK_LINE(105)
							::haxe::Timer _g2 = ::haxe::Timer_obj::__new(t);		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(105)
							::tweenx909::TweenX_obj::_timer = _g2;
							HX_STACK_LINE(105)
							::tweenx909::TweenX_obj::_timer->run = ::tweenx909::TweenX_obj::mainLoop_dyn();
						}
					}
				}
				;break;
				case (int)0: {
				}
				;break;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(TweenX_obj,initManager,(void))

Void TweenX_obj::mainLoop( ){
{
		HX_STACK_FRAME("tweenx909.TweenX","mainLoop",0x624a52a5,"tweenx909.TweenX.mainLoop","tweenx909/TweenX.hx",110,0x5ef20c57)
		HX_STACK_LINE(110)
		{
			HX_STACK_LINE(110)
			::tweenx909::advanced::UpdateModeX _g = ::tweenx909::TweenX_obj::updateMode;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(110)
			switch( (int)(_g->__Index())){
				case (int)1: {
					HX_STACK_LINE(110)
					Float f = (::tweenx909::advanced::UpdateModeX(_g))->__Param(0);		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(115)
					{
						HX_STACK_LINE(116)
						Float _g1 = ::Sys_obj::time();		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(116)
						Float _g11 = (_g1 * (int)1000);		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(116)
						Float _g2 = (_g11 - ::tweenx909::TweenX_obj::prevTime);		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(116)
						Float _g3 = (Float(_g2) / Float((int)1000));		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(116)
						::tweenx909::TweenX_obj::manualUpdate(_g3);
						HX_STACK_LINE(117)
						Float _g4 = ::Sys_obj::time();		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(117)
						Float _g5 = (_g4 * (int)1000);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(117)
						::tweenx909::TweenX_obj::prevTime = _g5;
					}
				}
				;break;
				case (int)0: {
					HX_STACK_LINE(119)
					HX_STACK_DO_THROW(HX_CSTRING("invalid auto update"));
				}
				;break;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(TweenX_obj,mainLoop,(void))

Void TweenX_obj::stopUpdater( ){
{
		HX_STACK_FRAME("tweenx909.TweenX","stopUpdater",0x74f237ff,"tweenx909.TweenX.stopUpdater","tweenx909/TweenX.hx",123,0x5ef20c57)
		HX_STACK_LINE(123)
		if (((::tweenx909::TweenX_obj::_timer != null()))){
			HX_STACK_LINE(124)
			::tweenx909::TweenX_obj::_timer->stop();
			HX_STACK_LINE(125)
			::tweenx909::TweenX_obj::_timer = null();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(TweenX_obj,stopUpdater,(void))

Void TweenX_obj::manualUpdate( Float time){
{
		HX_STACK_FRAME("tweenx909.TweenX","manualUpdate",0xc3862c57,"tweenx909.TweenX.manualUpdate","tweenx909/TweenX.hx",136,0x5ef20c57)
		HX_STACK_ARG(time,"time")
		HX_STACK_LINE(137)
		::tweenx909::TweenX_obj::initTweens();
		HX_STACK_LINE(138)
		int l = ::tweenx909::TweenX_obj::_tweens->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(138)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(139)
		while((true)){
			HX_STACK_LINE(139)
			if ((!(((i < l))))){
				HX_STACK_LINE(139)
				break;
			}
			HX_STACK_LINE(140)
			int _g = (i)++;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(140)
			::tweenx909::TweenX t = ::tweenx909::TweenX_obj::_tweens->__get(_g).StaticCast< ::tweenx909::TweenX >();		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(141)
			t->_update(((time * t->timeScale) * ::tweenx909::TweenX_obj::topLevelTimeScale));
			HX_STACK_LINE(142)
			if ((!(t->playing))){
				HX_STACK_LINE(142)
				int _g1 = --(i);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(142)
				::tweenx909::TweenX_obj::_tweens->splice(_g1,(int)1);
				HX_STACK_LINE(142)
				(l)--;
			}
		}
		HX_STACK_LINE(144)
		::tweenx909::TweenX_obj::_resetLog();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TweenX_obj,manualUpdate,(void))

Void TweenX_obj::initTweens( ){
{
		HX_STACK_FRAME("tweenx909.TweenX","initTweens",0xbd84b040,"tweenx909.TweenX.initTweens","tweenx909/TweenX.hx",146,0x5ef20c57)
		HX_STACK_LINE(147)
		{
			HX_STACK_LINE(147)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(147)
			Array< ::Dynamic > _g1 = ::tweenx909::TweenX_obj::_addedTweens;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(147)
			while((true)){
				HX_STACK_LINE(147)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(147)
					break;
				}
				HX_STACK_LINE(147)
				::tweenx909::TweenX t = _g1->__get(_g).StaticCast< ::tweenx909::TweenX >();		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(147)
				++(_g);
				HX_STACK_LINE(147)
				t->_init();
			}
		}
		HX_STACK_LINE(148)
		::tweenx909::TweenX_obj::_addedTweens->splice((int)0,::tweenx909::TweenX_obj::_addedTweens->length);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(TweenX_obj,initTweens,(void))

Void TweenX_obj::clear( ){
{
		HX_STACK_FRAME("tweenx909.TweenX","clear",0xfdfc0925,"tweenx909.TweenX.clear","tweenx909/TweenX.hx",150,0x5ef20c57)
		HX_STACK_LINE(151)
		{
			HX_STACK_LINE(151)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(151)
			Array< ::Dynamic > _g1 = ::tweenx909::TweenX_obj::_addedTweens;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(151)
			while((true)){
				HX_STACK_LINE(151)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(151)
					break;
				}
				HX_STACK_LINE(151)
				::tweenx909::TweenX t = _g1->__get(_g).StaticCast< ::tweenx909::TweenX >();		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(151)
				++(_g);
				HX_STACK_LINE(151)
				t->_autoPlay = false;
			}
		}
		HX_STACK_LINE(152)
		Dynamic _g = ::tweenx909::TweenX_obj::get_tweens();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(152)
		::tweenx909::TweenX_obj::stopAll(_g);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(TweenX_obj,clear,(void))

Void TweenX_obj::addRule( Dynamic rule){
{
		HX_STACK_FRAME("tweenx909.TweenX","addRule",0x58986955,"tweenx909.TweenX.addRule","tweenx909/TweenX.hx",158,0x5ef20c57)
		HX_STACK_ARG(rule,"rule")
		HX_STACK_LINE(159)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(159)
		int l = ::tweenx909::TweenX_obj::_rules->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(160)
		while((true)){
			HX_STACK_LINE(160)
			if ((!(((i < l))))){
				HX_STACK_LINE(160)
				break;
			}
			HX_STACK_LINE(161)
			int _g = (i)++;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(161)
			Dynamic r = ::tweenx909::TweenX_obj::_rules->__GetItem(_g);		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(162)
			if (((r->__Field(HX_CSTRING("inputClass"),true) == rule->__Field(HX_CSTRING("inputClass"),true)))){
				HX_STACK_LINE(162)
				int _g1 = (i)--;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(162)
				::tweenx909::TweenX_obj::_rules->__Field(HX_CSTRING("splice"),true)(_g1,(int)1);
				HX_STACK_LINE(162)
				(l)--;
			}
		}
		HX_STACK_LINE(164)
		::tweenx909::TweenX_obj::_rules->__Field(HX_CSTRING("push"),true)(rule);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TweenX_obj,addRule,(void))

Void TweenX_obj::addRules( Dynamic rules){
{
		HX_STACK_FRAME("tweenx909.TweenX","addRules",0x2cc3c17e,"tweenx909.TweenX.addRules","tweenx909/TweenX.hx",167,0x5ef20c57)
		HX_STACK_ARG(rules,"rules")
		HX_STACK_LINE(167)
		for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(rules->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
			Dynamic r = __it->next();
			::tweenx909::TweenX_obj::addRule(r);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TweenX_obj,addRules,(void))

::tweenx909::advanced::StandardTweenX TweenX_obj::from( Dynamic target,Dynamic _to,Dynamic delay,Dynamic repeat,Dynamic interval,Dynamic autoPlay,Dynamic posInfos){
	HX_STACK_FRAME("tweenx909.TweenX","from",0x45b908d2,"tweenx909.TweenX.from","tweenx909/TweenX.hx",173,0x5ef20c57)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(_to,"_to")
	HX_STACK_ARG(delay,"delay")
	HX_STACK_ARG(repeat,"repeat")
	HX_STACK_ARG(interval,"interval")
	HX_STACK_ARG(autoPlay,"autoPlay")
	HX_STACK_ARG(posInfos,"posInfos")
	HX_STACK_LINE(174)
	if (((_to == null()))){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","tweenx909/TweenX.hx",174,0x5ef20c57)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(174)
		_to = _Function_2_1::Block();
	}
	HX_STACK_LINE(175)
	if ((!(::tweenx909::TweenX_obj::isIterable(target)))){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","tweenx909/TweenX.hx",175,0x5ef20c57)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(175)
		::tweenx909::advanced::TweenTypeX _g = ::tweenx909::advanced::TweenTypeX_obj::FROM_TO(target,_Function_2_1::Block(),_to);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(175)
		return ::tweenx909::advanced::StandardTweenX_obj::__new(_g,(int)0,::tweenx909::EaseX_obj::linear_dyn(),delay,repeat,false,false,interval,autoPlay,posInfos);
	}
	else{
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","tweenx909/TweenX.hx",176,0x5ef20c57)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(176)
		::tweenx909::advanced::TweenTypeX _g1 = ::tweenx909::advanced::TweenTypeX_obj::ARRAY(target,Dynamic( Array_obj<Dynamic>::__new().Add(_Function_2_1::Block())),Dynamic( Array_obj<Dynamic>::__new().Add(_to)));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(176)
		return ::tweenx909::advanced::StandardTweenX_obj::__new(_g1,(int)0,::tweenx909::EaseX_obj::linear_dyn(),delay,repeat,false,false,interval,autoPlay,posInfos);
	}
	HX_STACK_LINE(175)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(TweenX_obj,from,return )

::tweenx909::advanced::StandardTweenX TweenX_obj::to( Dynamic target,Dynamic _to,Dynamic time,Dynamic ease,Dynamic delay,Dynamic repeat,Dynamic yoyo,Dynamic zigzag,Dynamic interval,Dynamic autoPlay,Dynamic posInfos){
	HX_STACK_FRAME("tweenx909.TweenX","to",0x9ea79ee3,"tweenx909.TweenX.to","tweenx909/TweenX.hx",178,0x5ef20c57)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(_to,"_to")
	HX_STACK_ARG(time,"time")
	HX_STACK_ARG(ease,"ease")
	HX_STACK_ARG(delay,"delay")
	HX_STACK_ARG(repeat,"repeat")
	HX_STACK_ARG(yoyo,"yoyo")
	HX_STACK_ARG(zigzag,"zigzag")
	HX_STACK_ARG(interval,"interval")
	HX_STACK_ARG(autoPlay,"autoPlay")
	HX_STACK_ARG(posInfos,"posInfos")
	HX_STACK_LINE(179)
	if (((_to == null()))){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","tweenx909/TweenX.hx",179,0x5ef20c57)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(179)
		_to = _Function_2_1::Block();
	}
	HX_STACK_LINE(180)
	if ((!(::tweenx909::TweenX_obj::isIterable(target)))){
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","tweenx909/TweenX.hx",180,0x5ef20c57)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(180)
		::tweenx909::advanced::TweenTypeX _g = ::tweenx909::advanced::TweenTypeX_obj::FROM_TO(target,_Function_2_1::Block(),_to);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(180)
		return ::tweenx909::advanced::StandardTweenX_obj::__new(_g,time,ease,delay,repeat,yoyo,zigzag,interval,autoPlay,posInfos);
	}
	else{
		struct _Function_2_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","tweenx909/TweenX.hx",181,0x5ef20c57)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(181)
		::tweenx909::advanced::TweenTypeX _g1 = ::tweenx909::advanced::TweenTypeX_obj::ARRAY(target,Dynamic( Array_obj<Dynamic>::__new().Add(_Function_2_1::Block())),Dynamic( Array_obj<Dynamic>::__new().Add(_to)));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(181)
		return ::tweenx909::advanced::StandardTweenX_obj::__new(_g1,time,ease,delay,repeat,yoyo,zigzag,interval,autoPlay,posInfos);
	}
	HX_STACK_LINE(180)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC11(TweenX_obj,to,return )

::tweenx909::TweenX TweenX_obj::tweenFunc( Dynamic func,Dynamic _from,Dynamic _to,Dynamic time,Dynamic ease,Dynamic delay,Dynamic repeat,Dynamic yoyo,Dynamic zigzag,Dynamic interval,Dynamic autoPlay,Dynamic posInfos){
	HX_STACK_FRAME("tweenx909.TweenX","tweenFunc",0x86ac16e7,"tweenx909.TweenX.tweenFunc","tweenx909/TweenX.hx",183,0x5ef20c57)
	HX_STACK_ARG(func,"func")
	HX_STACK_ARG(_from,"_from")
	HX_STACK_ARG(_to,"_to")
	HX_STACK_ARG(time,"time")
	HX_STACK_ARG(ease,"ease")
	HX_STACK_ARG(delay,"delay")
	HX_STACK_ARG(repeat,"repeat")
	HX_STACK_ARG(yoyo,"yoyo")
	HX_STACK_ARG(zigzag,"zigzag")
	HX_STACK_ARG(interval,"interval")
	HX_STACK_ARG(autoPlay,"autoPlay")
	HX_STACK_ARG(posInfos,"posInfos")
	HX_STACK_LINE(184)
	Dynamic _g = ::Lambda_obj::array(_from);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(184)
	Dynamic _g1 = ::Lambda_obj::array(_to);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(184)
	::tweenx909::advanced::TweenTypeX _g2 = ::tweenx909::advanced::TweenTypeX_obj::FUNC(func,_g,_g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(184)
	return ::tweenx909::TweenX_obj::__new(_g2,time,ease,delay,repeat,yoyo,zigzag,interval,autoPlay,posInfos);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC12(TweenX_obj,tweenFunc,return )

::tweenx909::TweenX TweenX_obj::tweenFunc1( Dynamic func,Float from1,Float to1,Dynamic time,Dynamic ease,Dynamic delay,Dynamic repeat,Dynamic yoyo,Dynamic zigzag,Dynamic interval,Dynamic autoPlay,Dynamic posInfos){
	HX_STACK_FRAME("tweenx909.TweenX","tweenFunc1",0x4fe7f36a,"tweenx909.TweenX.tweenFunc1","tweenx909/TweenX.hx",186,0x5ef20c57)
	HX_STACK_ARG(func,"func")
	HX_STACK_ARG(from1,"from1")
	HX_STACK_ARG(to1,"to1")
	HX_STACK_ARG(time,"time")
	HX_STACK_ARG(ease,"ease")
	HX_STACK_ARG(delay,"delay")
	HX_STACK_ARG(repeat,"repeat")
	HX_STACK_ARG(yoyo,"yoyo")
	HX_STACK_ARG(zigzag,"zigzag")
	HX_STACK_ARG(interval,"interval")
	HX_STACK_ARG(autoPlay,"autoPlay")
	HX_STACK_ARG(posInfos,"posInfos")
	HX_STACK_LINE(187)
	::tweenx909::advanced::TweenTypeX _g = ::tweenx909::advanced::TweenTypeX_obj::FUNC(func,Dynamic( Array_obj<Dynamic>::__new().Add(from1)),Dynamic( Array_obj<Dynamic>::__new().Add(to1)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(187)
	return ::tweenx909::TweenX_obj::__new(_g,time,ease,delay,repeat,yoyo,zigzag,interval,autoPlay,posInfos);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC12(TweenX_obj,tweenFunc1,return )

::tweenx909::TweenX TweenX_obj::tweenFunc2( Dynamic func,Float from1,Float from2,Float to1,Float to2,Dynamic time,Dynamic ease,Dynamic delay,Dynamic repeat,Dynamic yoyo,Dynamic zigzag,Dynamic interval,Dynamic autoPlay,Dynamic posInfos){
	HX_STACK_FRAME("tweenx909.TweenX","tweenFunc2",0x4fe7f36b,"tweenx909.TweenX.tweenFunc2","tweenx909/TweenX.hx",189,0x5ef20c57)
	HX_STACK_ARG(func,"func")
	HX_STACK_ARG(from1,"from1")
	HX_STACK_ARG(from2,"from2")
	HX_STACK_ARG(to1,"to1")
	HX_STACK_ARG(to2,"to2")
	HX_STACK_ARG(time,"time")
	HX_STACK_ARG(ease,"ease")
	HX_STACK_ARG(delay,"delay")
	HX_STACK_ARG(repeat,"repeat")
	HX_STACK_ARG(yoyo,"yoyo")
	HX_STACK_ARG(zigzag,"zigzag")
	HX_STACK_ARG(interval,"interval")
	HX_STACK_ARG(autoPlay,"autoPlay")
	HX_STACK_ARG(posInfos,"posInfos")
	HX_STACK_LINE(190)
	::tweenx909::advanced::TweenTypeX _g = ::tweenx909::advanced::TweenTypeX_obj::FUNC(func,Dynamic( Array_obj<Dynamic>::__new().Add(from1).Add(from2)),Dynamic( Array_obj<Dynamic>::__new().Add(to1).Add(to2)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(190)
	return ::tweenx909::TweenX_obj::__new(_g,time,ease,delay,repeat,yoyo,zigzag,interval,autoPlay,posInfos);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC14(TweenX_obj,tweenFunc2,return )

::tweenx909::TweenX TweenX_obj::tweenFunc3( Dynamic func,Float from1,Float from2,Float from3,Float to1,Float to2,Float to3,Dynamic time,Dynamic ease,Dynamic delay,Dynamic repeat,Dynamic yoyo,Dynamic zigzag,Dynamic interval,Dynamic autoPlay,Dynamic posInfos){
	HX_STACK_FRAME("tweenx909.TweenX","tweenFunc3",0x4fe7f36c,"tweenx909.TweenX.tweenFunc3","tweenx909/TweenX.hx",192,0x5ef20c57)
	HX_STACK_ARG(func,"func")
	HX_STACK_ARG(from1,"from1")
	HX_STACK_ARG(from2,"from2")
	HX_STACK_ARG(from3,"from3")
	HX_STACK_ARG(to1,"to1")
	HX_STACK_ARG(to2,"to2")
	HX_STACK_ARG(to3,"to3")
	HX_STACK_ARG(time,"time")
	HX_STACK_ARG(ease,"ease")
	HX_STACK_ARG(delay,"delay")
	HX_STACK_ARG(repeat,"repeat")
	HX_STACK_ARG(yoyo,"yoyo")
	HX_STACK_ARG(zigzag,"zigzag")
	HX_STACK_ARG(interval,"interval")
	HX_STACK_ARG(autoPlay,"autoPlay")
	HX_STACK_ARG(posInfos,"posInfos")
	HX_STACK_LINE(193)
	::tweenx909::advanced::TweenTypeX _g = ::tweenx909::advanced::TweenTypeX_obj::FUNC(func,Dynamic( Array_obj<Dynamic>::__new().Add(from1).Add(from2).Add(from3)),Dynamic( Array_obj<Dynamic>::__new().Add(to1).Add(to2).Add(to3)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(193)
	return ::tweenx909::TweenX_obj::__new(_g,time,ease,delay,repeat,yoyo,zigzag,interval,autoPlay,posInfos);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC16(TweenX_obj,tweenFunc3,return )

::tweenx909::TweenX TweenX_obj::tweenFunc4( Dynamic func,Float from1,Float from2,Float from3,Float from4,Float to1,Float to2,Float to3,Float to4,Dynamic time,Dynamic ease,Dynamic delay,Dynamic repeat,Dynamic yoyo,Dynamic zigzag,Dynamic interval,Dynamic autoPlay,Dynamic posInfos){
	HX_STACK_FRAME("tweenx909.TweenX","tweenFunc4",0x4fe7f36d,"tweenx909.TweenX.tweenFunc4","tweenx909/TweenX.hx",195,0x5ef20c57)
	HX_STACK_ARG(func,"func")
	HX_STACK_ARG(from1,"from1")
	HX_STACK_ARG(from2,"from2")
	HX_STACK_ARG(from3,"from3")
	HX_STACK_ARG(from4,"from4")
	HX_STACK_ARG(to1,"to1")
	HX_STACK_ARG(to2,"to2")
	HX_STACK_ARG(to3,"to3")
	HX_STACK_ARG(to4,"to4")
	HX_STACK_ARG(time,"time")
	HX_STACK_ARG(ease,"ease")
	HX_STACK_ARG(delay,"delay")
	HX_STACK_ARG(repeat,"repeat")
	HX_STACK_ARG(yoyo,"yoyo")
	HX_STACK_ARG(zigzag,"zigzag")
	HX_STACK_ARG(interval,"interval")
	HX_STACK_ARG(autoPlay,"autoPlay")
	HX_STACK_ARG(posInfos,"posInfos")
	HX_STACK_LINE(196)
	::tweenx909::advanced::TweenTypeX _g = ::tweenx909::advanced::TweenTypeX_obj::FUNC(func,Dynamic( Array_obj<Dynamic>::__new().Add(from1).Add(from2).Add(from3).Add(from4)),Dynamic( Array_obj<Dynamic>::__new().Add(to1).Add(to2).Add(to3).Add(to4)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(196)
	return ::tweenx909::TweenX_obj::__new(_g,time,ease,delay,repeat,yoyo,zigzag,interval,autoPlay,posInfos);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC18(TweenX_obj,tweenFunc4,return )

::tweenx909::TweenX TweenX_obj::func( Dynamic func,Dynamic delay,Dynamic repeat,Dynamic interval,Dynamic posInfos){
	HX_STACK_FRAME("tweenx909.TweenX","func",0x45bb4eac,"tweenx909.TweenX.func","tweenx909/TweenX.hx",198,0x5ef20c57)
	HX_STACK_ARG(func,"func")
	HX_STACK_ARG(delay,"delay")
	HX_STACK_ARG(repeat,"repeat")
	HX_STACK_ARG(interval,"interval")
	HX_STACK_ARG(posInfos,"posInfos")
	HX_STACK_LINE(199)
	::tweenx909::advanced::TweenTypeX _g = ::tweenx909::advanced::TweenTypeX_obj::CALL(func);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(199)
	return ::tweenx909::TweenX_obj::__new(_g,(int)0,::tweenx909::EaseX_obj::linear_dyn(),delay,repeat,false,false,interval,false,posInfos);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(TweenX_obj,func,return )

Void TweenX_obj::playAll( Dynamic tweens){
{
		HX_STACK_FRAME("tweenx909.TweenX","playAll",0x5aa16125,"tweenx909.TweenX.playAll","tweenx909/TweenX.hx",207,0x5ef20c57)
		HX_STACK_ARG(tweens,"tweens")
		HX_STACK_LINE(207)
		for(::cpp::FastIterator_obj< ::tweenx909::TweenX > *__it = ::cpp::CreateFastIterator< ::tweenx909::TweenX >(tweens->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
			::tweenx909::TweenX t = __it->next();
			{
				HX_STACK_LINE(208)
				::tweenx909::advanced::CommandTypeX _g = t->command;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(208)
				switch( (int)(_g->__Index())){
					case (int)1: {
					}
					;break;
					case (int)0: {
						HX_STACK_LINE(208)
						::tweenx909::TweenX o = (::tweenx909::advanced::CommandTypeX(_g))->__Param(0);		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(211)
						o->play();
					}
					;break;
				}
			}
;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TweenX_obj,playAll,(void))

Void TweenX_obj::stopAll( Dynamic tweens){
{
		HX_STACK_FRAME("tweenx909.TweenX","stopAll",0x13e5dbd7,"tweenx909.TweenX.stopAll","tweenx909/TweenX.hx",215,0x5ef20c57)
		HX_STACK_ARG(tweens,"tweens")
		HX_STACK_LINE(215)
		for(::cpp::FastIterator_obj< ::tweenx909::TweenX > *__it = ::cpp::CreateFastIterator< ::tweenx909::TweenX >(tweens->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
			::tweenx909::TweenX t = __it->next();
			{
				HX_STACK_LINE(216)
				::tweenx909::advanced::CommandTypeX _g = t->command;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(216)
				switch( (int)(_g->__Index())){
					case (int)1: {
					}
					;break;
					case (int)0: {
						HX_STACK_LINE(216)
						::tweenx909::TweenX o = (::tweenx909::advanced::CommandTypeX(_g))->__Param(0);		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(219)
						o->stop();
					}
					;break;
				}
			}
;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TweenX_obj,stopAll,(void))

Void TweenX_obj::gotoAll( Dynamic tweens,hx::Null< Float >  __o_time,hx::Null< bool >  __o_andPlay){
Float time = __o_time.Default(0);
bool andPlay = __o_andPlay.Default(false);
	HX_STACK_FRAME("tweenx909.TweenX","gotoAll",0x01732cd6,"tweenx909.TweenX.gotoAll","tweenx909/TweenX.hx",223,0x5ef20c57)
	HX_STACK_ARG(tweens,"tweens")
	HX_STACK_ARG(time,"time")
	HX_STACK_ARG(andPlay,"andPlay")
{
		HX_STACK_LINE(223)
		for(::cpp::FastIterator_obj< ::tweenx909::TweenX > *__it = ::cpp::CreateFastIterator< ::tweenx909::TweenX >(tweens->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
			::tweenx909::TweenX t = __it->next();
			{
				HX_STACK_LINE(224)
				::tweenx909::advanced::CommandTypeX _g = t->command;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(224)
				switch( (int)(_g->__Index())){
					case (int)1: {
					}
					;break;
					case (int)0: {
						HX_STACK_LINE(224)
						::tweenx909::TweenX o = (::tweenx909::advanced::CommandTypeX(_g))->__Param(0);		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(227)
						o->_goto(time,andPlay);
					}
					;break;
				}
			}
;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(TweenX_obj,gotoAll,(void))

Void TweenX_obj::updateAll( Dynamic tweens,Float time){
{
		HX_STACK_FRAME("tweenx909.TweenX","updateAll",0x8ef71a30,"tweenx909.TweenX.updateAll","tweenx909/TweenX.hx",231,0x5ef20c57)
		HX_STACK_ARG(tweens,"tweens")
		HX_STACK_ARG(time,"time")
		HX_STACK_LINE(231)
		for(::cpp::FastIterator_obj< ::tweenx909::TweenX > *__it = ::cpp::CreateFastIterator< ::tweenx909::TweenX >(tweens->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
			::tweenx909::TweenX t = __it->next();
			{
				HX_STACK_LINE(232)
				::tweenx909::advanced::CommandTypeX _g = t->command;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(232)
				switch( (int)(_g->__Index())){
					case (int)1: {
					}
					;break;
					case (int)0: {
						HX_STACK_LINE(232)
						::tweenx909::TweenX o = (::tweenx909::advanced::CommandTypeX(_g))->__Param(0);		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(234)
						{
							HX_STACK_LINE(235)
							if ((!(o->_inited))){
								HX_STACK_LINE(235)
								o->_init();
							}
							HX_STACK_LINE(236)
							o->update(time);
						}
					}
					;break;
				}
			}
;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TweenX_obj,updateAll,(void))

::tweenx909::TweenX TweenX_obj::serial( Dynamic tweens,::tweenx909::advanced::DefaultsX defaults,Dynamic posInfos){
	HX_STACK_FRAME("tweenx909.TweenX","serial",0xa511775c,"tweenx909.TweenX.serial","tweenx909/TweenX.hx",245,0x5ef20c57)
	HX_STACK_ARG(tweens,"tweens")
	HX_STACK_ARG(defaults,"defaults")
	HX_STACK_ARG(posInfos,"posInfos")
	HX_STACK_LINE(245)
	::tweenx909::advanced::GroupX _g = ::tweenx909::advanced::GroupX_obj::__new(tweens,::tweenx909::advanced::_GroupX::GroupTypeX_obj::SERIAL,defaults);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(245)
	::tweenx909::advanced::TweenTypeX _g1 = ::tweenx909::advanced::TweenTypeX_obj::GROUP(_g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(245)
	::tweenx909::TweenX parent = ::tweenx909::TweenX_obj::__new(_g1,null(),null(),null(),null(),null(),null(),null(),null(),posInfos);		HX_STACK_VAR(parent,"parent");
	HX_STACK_LINE(245)
	for(::cpp::FastIterator_obj< ::tweenx909::advanced::CommandX > *__it = ::cpp::CreateFastIterator< ::tweenx909::advanced::CommandX >(tweens->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
		::tweenx909::advanced::CommandX t = __it->next();
		{
			HX_STACK_LINE(245)
			if (((t == null()))){
				HX_STACK_LINE(245)
				continue;
			}
			HX_STACK_LINE(245)
			{
				HX_STACK_LINE(245)
				::tweenx909::advanced::CommandTypeX _g2 = t->command;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(245)
				switch( (int)(_g2->__Index())){
					case (int)0: {
						HX_STACK_LINE(245)
						::tweenx909::TweenX o = (::tweenx909::advanced::CommandTypeX(_g2))->__Param(0);		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(245)
						{
							HX_STACK_LINE(245)
							{
								HX_STACK_LINE(245)
								if ((o->_inited)){
									HX_STACK_LINE(245)
									HX_STACK_DO_THROW(o->error(HX_CSTRING("Can't serialize initialized TweenCommandX")));
								}
								HX_STACK_LINE(245)
								o->_autoPlay = false;
							}
							HX_STACK_LINE(245)
							o->_parent = parent;
						}
					}
					;break;
					default: {
					}
				}
			}
		}
;
	}
	HX_STACK_LINE(245)
	return parent;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(TweenX_obj,serial,return )

::tweenx909::TweenX TweenX_obj::lag( Dynamic tweens,Dynamic __o_delay,::tweenx909::advanced::DefaultsX defaults,Dynamic posInfos){
Dynamic delay = __o_delay.Default(0.1);
	HX_STACK_FRAME("tweenx909.TweenX","lag",0x33fd49ea,"tweenx909.TweenX.lag","tweenx909/TweenX.hx",248,0x5ef20c57)
	HX_STACK_ARG(tweens,"tweens")
	HX_STACK_ARG(delay,"delay")
	HX_STACK_ARG(defaults,"defaults")
	HX_STACK_ARG(posInfos,"posInfos")
{
		HX_STACK_LINE(248)
		::tweenx909::advanced::_GroupX::GroupTypeX type = ::tweenx909::advanced::_GroupX::GroupTypeX_obj::LAG(delay);		HX_STACK_VAR(type,"type");
		HX_STACK_LINE(248)
		::tweenx909::advanced::GroupX _g = ::tweenx909::advanced::GroupX_obj::__new(tweens,type,defaults);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(248)
		::tweenx909::advanced::TweenTypeX _g1 = ::tweenx909::advanced::TweenTypeX_obj::GROUP(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(248)
		::tweenx909::TweenX parent = ::tweenx909::TweenX_obj::__new(_g1,null(),null(),null(),null(),null(),null(),null(),null(),posInfos);		HX_STACK_VAR(parent,"parent");
		HX_STACK_LINE(248)
		for(::cpp::FastIterator_obj< ::tweenx909::advanced::CommandX > *__it = ::cpp::CreateFastIterator< ::tweenx909::advanced::CommandX >(tweens->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
			::tweenx909::advanced::CommandX t = __it->next();
			{
				HX_STACK_LINE(248)
				if (((t == null()))){
					HX_STACK_LINE(248)
					continue;
				}
				HX_STACK_LINE(248)
				{
					HX_STACK_LINE(248)
					::tweenx909::advanced::CommandTypeX _g2 = t->command;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(248)
					switch( (int)(_g2->__Index())){
						case (int)0: {
							HX_STACK_LINE(248)
							::tweenx909::TweenX o = (::tweenx909::advanced::CommandTypeX(_g2))->__Param(0);		HX_STACK_VAR(o,"o");
							HX_STACK_LINE(248)
							{
								HX_STACK_LINE(248)
								{
									HX_STACK_LINE(248)
									if ((o->_inited)){
										HX_STACK_LINE(248)
										HX_STACK_DO_THROW(o->error(HX_CSTRING("Can't serialize initialized TweenCommandX")));
									}
									HX_STACK_LINE(248)
									o->_autoPlay = false;
								}
								HX_STACK_LINE(248)
								o->_parent = parent;
							}
						}
						;break;
						default: {
						}
					}
				}
			}
;
		}
		HX_STACK_LINE(248)
		return parent;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(TweenX_obj,lag,return )

::tweenx909::TweenX TweenX_obj::parallel( Dynamic tweens,::tweenx909::advanced::DefaultsX defaults,Dynamic posInfos){
	HX_STACK_FRAME("tweenx909.TweenX","parallel",0x4006e22f,"tweenx909.TweenX.parallel","tweenx909/TweenX.hx",251,0x5ef20c57)
	HX_STACK_ARG(tweens,"tweens")
	HX_STACK_ARG(defaults,"defaults")
	HX_STACK_ARG(posInfos,"posInfos")
	HX_STACK_LINE(251)
	::tweenx909::advanced::_GroupX::GroupTypeX type = ::tweenx909::advanced::_GroupX::GroupTypeX_obj::LAG((int)0);		HX_STACK_VAR(type,"type");
	HX_STACK_LINE(251)
	::tweenx909::advanced::GroupX _g = ::tweenx909::advanced::GroupX_obj::__new(tweens,type,defaults);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(251)
	::tweenx909::advanced::TweenTypeX _g1 = ::tweenx909::advanced::TweenTypeX_obj::GROUP(_g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(251)
	::tweenx909::TweenX parent = ::tweenx909::TweenX_obj::__new(_g1,null(),null(),null(),null(),null(),null(),null(),null(),posInfos);		HX_STACK_VAR(parent,"parent");
	HX_STACK_LINE(251)
	for(::cpp::FastIterator_obj< ::tweenx909::advanced::CommandX > *__it = ::cpp::CreateFastIterator< ::tweenx909::advanced::CommandX >(tweens->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
		::tweenx909::advanced::CommandX t = __it->next();
		{
			HX_STACK_LINE(251)
			if (((t == null()))){
				HX_STACK_LINE(251)
				continue;
			}
			HX_STACK_LINE(251)
			{
				HX_STACK_LINE(251)
				::tweenx909::advanced::CommandTypeX _g2 = t->command;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(251)
				switch( (int)(_g2->__Index())){
					case (int)0: {
						HX_STACK_LINE(251)
						::tweenx909::TweenX o = (::tweenx909::advanced::CommandTypeX(_g2))->__Param(0);		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(251)
						{
							HX_STACK_LINE(251)
							{
								HX_STACK_LINE(251)
								if ((o->_inited)){
									HX_STACK_LINE(251)
									HX_STACK_DO_THROW(o->error(HX_CSTRING("Can't serialize initialized TweenCommandX")));
								}
								HX_STACK_LINE(251)
								o->_autoPlay = false;
							}
							HX_STACK_LINE(251)
							o->_parent = parent;
						}
					}
					;break;
					default: {
					}
				}
			}
		}
;
	}
	HX_STACK_LINE(251)
	return parent;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(TweenX_obj,parallel,return )

::tweenx909::advanced::CommandX TweenX_obj::wait( Dynamic __o_delay,Dynamic posInfos){
Dynamic delay = __o_delay.Default(0.1);
	HX_STACK_FRAME("tweenx909.TweenX","wait",0x50e8bddd,"tweenx909.TweenX.wait","tweenx909/TweenX.hx",253,0x5ef20c57)
	HX_STACK_ARG(delay,"delay")
	HX_STACK_ARG(posInfos,"posInfos")
{
		HX_STACK_LINE(253)
		::tweenx909::advanced::CommandTypeX _g = ::tweenx909::advanced::CommandTypeX_obj::WAIT(delay);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(253)
		return ::tweenx909::advanced::CommandX_obj::__new(_g,posInfos);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TweenX_obj,wait,return )

::tweenx909::TweenX TweenX_obj::_group( Dynamic tweens,::tweenx909::advanced::_GroupX::GroupTypeX type,::tweenx909::advanced::DefaultsX defaults,Dynamic posInfos){
	HX_STACK_FRAME("tweenx909.TweenX","_group",0xccc007e8,"tweenx909.TweenX._group","tweenx909/TweenX.hx",254,0x5ef20c57)
	HX_STACK_ARG(tweens,"tweens")
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(defaults,"defaults")
	HX_STACK_ARG(posInfos,"posInfos")
	HX_STACK_LINE(255)
	::tweenx909::advanced::GroupX _g = ::tweenx909::advanced::GroupX_obj::__new(tweens,type,defaults);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(255)
	::tweenx909::advanced::TweenTypeX _g1 = ::tweenx909::advanced::TweenTypeX_obj::GROUP(_g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(255)
	::tweenx909::TweenX parent = ::tweenx909::TweenX_obj::__new(_g1,null(),null(),null(),null(),null(),null(),null(),null(),posInfos);		HX_STACK_VAR(parent,"parent");
	HX_STACK_LINE(256)
	for(::cpp::FastIterator_obj< ::tweenx909::advanced::CommandX > *__it = ::cpp::CreateFastIterator< ::tweenx909::advanced::CommandX >(tweens->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
		::tweenx909::advanced::CommandX t = __it->next();
		{
			HX_STACK_LINE(257)
			if (((t == null()))){
				HX_STACK_LINE(257)
				continue;
			}
			HX_STACK_LINE(258)
			{
				HX_STACK_LINE(258)
				::tweenx909::advanced::CommandTypeX _g2 = t->command;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(258)
				switch( (int)(_g2->__Index())){
					case (int)0: {
						HX_STACK_LINE(258)
						::tweenx909::TweenX o = (::tweenx909::advanced::CommandTypeX(_g2))->__Param(0);		HX_STACK_VAR(o,"o");
						HX_STACK_LINE(259)
						{
							HX_STACK_LINE(260)
							{
								HX_STACK_LINE(260)
								if ((o->_inited)){
									HX_STACK_LINE(260)
									HX_STACK_DO_THROW(o->error(HX_CSTRING("Can't serialize initialized TweenCommandX")));
								}
								HX_STACK_LINE(260)
								o->_autoPlay = false;
							}
							HX_STACK_LINE(261)
							o->_parent = parent;
						}
					}
					;break;
					default: {
					}
				}
			}
		}
;
	}
	HX_STACK_LINE(265)
	return parent;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(TweenX_obj,_group,return )

Void TweenX_obj::_lock( ::tweenx909::TweenX o){
{
		HX_STACK_FRAME("tweenx909.TweenX","_lock",0xb0694f62,"tweenx909.TweenX._lock","tweenx909/TweenX.hx",267,0x5ef20c57)
		HX_STACK_ARG(o,"o")
		HX_STACK_LINE(268)
		if ((o->_inited)){
			HX_STACK_LINE(268)
			HX_STACK_DO_THROW(o->error(HX_CSTRING("Can't serialize initialized TweenCommandX")));
		}
		HX_STACK_LINE(269)
		o->_autoPlay = false;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TweenX_obj,_lock,(void))

Float TweenX_obj::getTime( ){
	HX_STACK_FRAME("tweenx909.TweenX","getTime",0xf027295b,"tweenx909.TweenX.getTime","tweenx909/TweenX.hx",275,0x5ef20c57)
	HX_STACK_LINE(277)
	Float _g = ::Sys_obj::time();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(277)
	return (_g * (int)1000);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(TweenX_obj,getTime,return )

::haxe::Timer TweenX_obj::_timer;

Void TweenX_obj::setInterval( Dynamic f,int t){
{
		HX_STACK_FRAME("tweenx909.TweenX","setInterval",0xe0479c9f,"tweenx909.TweenX.setInterval","tweenx909/TweenX.hx",283,0x5ef20c57)
		HX_STACK_ARG(f,"f")
		HX_STACK_ARG(t,"t")
		HX_STACK_LINE(284)
		if (((::tweenx909::TweenX_obj::_timer != null()))){
			HX_STACK_LINE(284)
			::tweenx909::TweenX_obj::_timer->stop();
		}
		HX_STACK_LINE(285)
		::haxe::Timer _g = ::haxe::Timer_obj::__new(t);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(285)
		::tweenx909::TweenX_obj::_timer = _g;
		HX_STACK_LINE(286)
		::tweenx909::TweenX_obj::_timer->run = f;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TweenX_obj,setInterval,(void))

Array< ::String > TweenX_obj::fields( Dynamic t){
	HX_STACK_FRAME("tweenx909.TweenX","fields",0xb7729be1,"tweenx909.TweenX.fields","tweenx909/TweenX.hx",300,0x5ef20c57)
	HX_STACK_ARG(t,"t")
	HX_STACK_LINE(300)
	return ::Reflect_obj::fields(t);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TweenX_obj,fields,return )

Dynamic TweenX_obj::_initLog;

::haxe::ds::ObjectMap TweenX_obj::dictionary;

int TweenX_obj::_objCounter;

Dynamic TweenX_obj::hashObject( Dynamic o){
	HX_STACK_FRAME("tweenx909.TweenX","hashObject",0x7c09d295,"tweenx909.TweenX.hashObject","tweenx909/TweenX.hx",310,0x5ef20c57)
	HX_STACK_ARG(o,"o")
	HX_STACK_LINE(312)
	Dynamic _g = ::tweenx909::TweenX_obj::dictionary->get(o);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(312)
	if (((_g != null()))){
		HX_STACK_LINE(312)
		return ::tweenx909::TweenX_obj::dictionary->get(o);
	}
	else{
		HX_STACK_LINE(314)
		::tweenx909::TweenX_obj::_objCounter = ((int)1 + hx::Mod(::tweenx909::TweenX_obj::_objCounter,(int)33029));
		HX_STACK_LINE(315)
		::tweenx909::TweenX_obj::dictionary->set(o,::tweenx909::TweenX_obj::_objCounter);
		HX_STACK_LINE(316)
		return ::tweenx909::TweenX_obj::_objCounter;
	}
	HX_STACK_LINE(312)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TweenX_obj,hashObject,return )

Void TweenX_obj::_resetLog( ){
{
		HX_STACK_FRAME("tweenx909.TweenX","_resetLog",0xa38ec8ec,"tweenx909.TweenX._resetLog","tweenx909/TweenX.hx",337,0x5ef20c57)
		HX_STACK_LINE(338)
		::tweenx909::TweenX_obj::_initLog = Dynamic( Array_obj<Dynamic>::__new());
		HX_STACK_LINE(340)
		::haxe::ds::ObjectMap _g = ::haxe::ds::ObjectMap_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(340)
		::tweenx909::TweenX_obj::dictionary = _g;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(TweenX_obj,_resetLog,(void))

Dynamic TweenX_obj::field( Dynamic o,::String key){
	HX_STACK_FRAME("tweenx909.TweenX","field",0xb6342c52,"tweenx909.TweenX.field","tweenx909/TweenX.hx",353,0x5ef20c57)
	HX_STACK_ARG(o,"o")
	HX_STACK_ARG(key,"key")
	HX_STACK_LINE(353)
	return (  (((o == null()))) ? Dynamic(null()) : Dynamic(o->__Field(key,true)) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TweenX_obj,field,return )

Void TweenX_obj::setField( Dynamic o,::String key,Dynamic value){
{
		HX_STACK_FRAME("tweenx909.TweenX","setField",0xd0d83520,"tweenx909.TweenX.setField","tweenx909/TweenX.hx",364,0x5ef20c57)
		HX_STACK_ARG(o,"o")
		HX_STACK_ARG(key,"key")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(364)
		if (((o != null()))){
			HX_STACK_LINE(364)
			o->__SetField(key,value,true);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(TweenX_obj,setField,(void))

bool TweenX_obj::isIterable( Dynamic d){
	HX_STACK_FRAME("tweenx909.TweenX","isIterable",0x9e569224,"tweenx909.TweenX.isIterable","tweenx909/TweenX.hx",369,0x5ef20c57)
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(369)
	if (((d != null()))){
		HX_STACK_LINE(369)
		if ((!(::Std_obj::is(d,hx::ClassOf< Array<int> >())))){
			HX_STACK_LINE(369)
			if (((  ((::Reflect_obj::hasField(d,HX_CSTRING("iterator")))) ? bool(::Reflect_obj::isFunction(d->__Field(HX_CSTRING("iterator"),true))) : bool(false) ))){
				HX_STACK_LINE(369)
				Dynamic _g = d->__Field(HX_CSTRING("iterator"),true)();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(369)
				return (_g != null());
			}
			else{
				HX_STACK_LINE(369)
				return false;
			}
		}
		else{
			HX_STACK_LINE(369)
			return true;
		}
	}
	else{
		HX_STACK_LINE(369)
		return false;
	}
	HX_STACK_LINE(369)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TweenX_obj,isIterable,return )

Float TweenX_obj::_MIN;

int TweenX_obj::_DELAY;

int TweenX_obj::_FINISH;

int TweenX_obj::_FOOT;

int TweenX_obj::_HEAD;

int TweenX_obj::_INTERVAL;

int TweenX_obj::_PLAY;

int TweenX_obj::_REPEAT;

int TweenX_obj::_REST;

int TweenX_obj::_STOP;

int TweenX_obj::_UPDATE;

int TweenX_obj::idCounter;


TweenX_obj::TweenX_obj()
{
}

void TweenX_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TweenX);
	HX_MARK_MEMBER_NAME(playing,"playing");
	HX_MARK_MEMBER_NAME(backward,"backward");
	HX_MARK_MEMBER_NAME(_currentTime,"_currentTime");
	HX_MARK_MEMBER_NAME(_singleTime,"_singleTime");
	HX_MARK_MEMBER_NAME(_skip,"_skip");
	HX_MARK_MEMBER_NAME(_type,"_type");
	HX_MARK_MEMBER_NAME(_inited,"_inited");
	HX_MARK_MEMBER_NAME(_totalTime,"_totalTime");
	HX_MARK_MEMBER_NAME(_dead,"_dead");
	HX_MARK_MEMBER_NAME(_parent,"_parent");
	HX_MARK_MEMBER_NAME(_fastMode,"_fastMode");
	HX_MARK_MEMBER_NAME(_toKeys,"_toKeys");
	HX_MARK_MEMBER_NAME(timeScale,"timeScale");
	HX_MARK_MEMBER_NAME(_inverted,"_inverted");
	HX_MARK_MEMBER_NAME(_odd,"_odd");
	HX_MARK_MEMBER_NAME(_time,"_time");
	HX_MARK_MEMBER_NAME(_ease,"_ease");
	HX_MARK_MEMBER_NAME(_interval,"_interval");
	HX_MARK_MEMBER_NAME(_repeat,"_repeat");
	HX_MARK_MEMBER_NAME(_zigzag,"_zigzag");
	HX_MARK_MEMBER_NAME(_yoyo,"_yoyo");
	HX_MARK_MEMBER_NAME(_delay,"_delay");
	HX_MARK_MEMBER_NAME(_autoPlay,"_autoPlay");
	HX_MARK_MEMBER_NAME(_rest,"_rest");
	HX_MARK_MEMBER_NAME(_timeIsDefault,"_timeIsDefault");
	HX_MARK_MEMBER_NAME(_easeIsDefault,"_easeIsDefault");
	HX_MARK_MEMBER_NAME(_intervalIsDefault,"_intervalIsDefault");
	HX_MARK_MEMBER_NAME(_repeatIsDefault,"_repeatIsDefault");
	HX_MARK_MEMBER_NAME(_zigzagIsDefault,"_zigzagIsDefault");
	HX_MARK_MEMBER_NAME(_yoyoIsDefault,"_yoyoIsDefault");
	HX_MARK_MEMBER_NAME(_delayIsDefault,"_delayIsDefault");
	HX_MARK_MEMBER_NAME(_autoPlayIsDefault,"_autoPlayIsDefault");
	HX_MARK_MEMBER_NAME(_onPlay,"_onPlay");
	HX_MARK_MEMBER_NAME(_onStop,"_onStop");
	HX_MARK_MEMBER_NAME(_onDelay,"_onDelay");
	HX_MARK_MEMBER_NAME(_onInterval,"_onInterval");
	HX_MARK_MEMBER_NAME(_onRepeat,"_onRepeat");
	HX_MARK_MEMBER_NAME(_onRest,"_onRest");
	HX_MARK_MEMBER_NAME(_onHead,"_onHead");
	HX_MARK_MEMBER_NAME(_onUpdate,"_onUpdate");
	HX_MARK_MEMBER_NAME(_onFoot,"_onFoot");
	HX_MARK_MEMBER_NAME(_onFinish,"_onFinish");
	HX_MARK_MEMBER_NAME(_eventListeners,"_eventListeners");
	HX_MARK_MEMBER_NAME(id,"id");
	::tweenx909::advanced::CommandX_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TweenX_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(playing,"playing");
	HX_VISIT_MEMBER_NAME(backward,"backward");
	HX_VISIT_MEMBER_NAME(_currentTime,"_currentTime");
	HX_VISIT_MEMBER_NAME(_singleTime,"_singleTime");
	HX_VISIT_MEMBER_NAME(_skip,"_skip");
	HX_VISIT_MEMBER_NAME(_type,"_type");
	HX_VISIT_MEMBER_NAME(_inited,"_inited");
	HX_VISIT_MEMBER_NAME(_totalTime,"_totalTime");
	HX_VISIT_MEMBER_NAME(_dead,"_dead");
	HX_VISIT_MEMBER_NAME(_parent,"_parent");
	HX_VISIT_MEMBER_NAME(_fastMode,"_fastMode");
	HX_VISIT_MEMBER_NAME(_toKeys,"_toKeys");
	HX_VISIT_MEMBER_NAME(timeScale,"timeScale");
	HX_VISIT_MEMBER_NAME(_inverted,"_inverted");
	HX_VISIT_MEMBER_NAME(_odd,"_odd");
	HX_VISIT_MEMBER_NAME(_time,"_time");
	HX_VISIT_MEMBER_NAME(_ease,"_ease");
	HX_VISIT_MEMBER_NAME(_interval,"_interval");
	HX_VISIT_MEMBER_NAME(_repeat,"_repeat");
	HX_VISIT_MEMBER_NAME(_zigzag,"_zigzag");
	HX_VISIT_MEMBER_NAME(_yoyo,"_yoyo");
	HX_VISIT_MEMBER_NAME(_delay,"_delay");
	HX_VISIT_MEMBER_NAME(_autoPlay,"_autoPlay");
	HX_VISIT_MEMBER_NAME(_rest,"_rest");
	HX_VISIT_MEMBER_NAME(_timeIsDefault,"_timeIsDefault");
	HX_VISIT_MEMBER_NAME(_easeIsDefault,"_easeIsDefault");
	HX_VISIT_MEMBER_NAME(_intervalIsDefault,"_intervalIsDefault");
	HX_VISIT_MEMBER_NAME(_repeatIsDefault,"_repeatIsDefault");
	HX_VISIT_MEMBER_NAME(_zigzagIsDefault,"_zigzagIsDefault");
	HX_VISIT_MEMBER_NAME(_yoyoIsDefault,"_yoyoIsDefault");
	HX_VISIT_MEMBER_NAME(_delayIsDefault,"_delayIsDefault");
	HX_VISIT_MEMBER_NAME(_autoPlayIsDefault,"_autoPlayIsDefault");
	HX_VISIT_MEMBER_NAME(_onPlay,"_onPlay");
	HX_VISIT_MEMBER_NAME(_onStop,"_onStop");
	HX_VISIT_MEMBER_NAME(_onDelay,"_onDelay");
	HX_VISIT_MEMBER_NAME(_onInterval,"_onInterval");
	HX_VISIT_MEMBER_NAME(_onRepeat,"_onRepeat");
	HX_VISIT_MEMBER_NAME(_onRest,"_onRest");
	HX_VISIT_MEMBER_NAME(_onHead,"_onHead");
	HX_VISIT_MEMBER_NAME(_onUpdate,"_onUpdate");
	HX_VISIT_MEMBER_NAME(_onFoot,"_onFoot");
	HX_VISIT_MEMBER_NAME(_onFinish,"_onFinish");
	HX_VISIT_MEMBER_NAME(_eventListeners,"_eventListeners");
	HX_VISIT_MEMBER_NAME(id,"id");
	::tweenx909::advanced::CommandX_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TweenX_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"to") ) { return to_dyn(); }
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"lag") ) { return lag_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"from") ) { return from_dyn(); }
		if (HX_FIELD_EQ(inName,"func") ) { return func_dyn(); }
		if (HX_FIELD_EQ(inName,"wait") ) { return wait_dyn(); }
		if (HX_FIELD_EQ(inName,"_odd") ) { return _odd; }
		if (HX_FIELD_EQ(inName,"play") ) { return play_dyn(); }
		if (HX_FIELD_EQ(inName,"stop") ) { return stop_dyn(); }
		if (HX_FIELD_EQ(inName,"goto") ) { return _goto_dyn(); }
		if (HX_FIELD_EQ(inName,"time") ) { return time_dyn(); }
		if (HX_FIELD_EQ(inName,"ease") ) { return ease_dyn(); }
		if (HX_FIELD_EQ(inName,"rest") ) { return rest_dyn(); }
		if (HX_FIELD_EQ(inName,"yoyo") ) { return yoyo_dyn(); }
		if (HX_FIELD_EQ(inName,"skip") ) { return skip_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"rules") ) { return get_rules(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"_lock") ) { return _lock_dyn(); }
		if (HX_FIELD_EQ(inName,"field") ) { return field_dyn(); }
		if (HX_FIELD_EQ(inName,"_skip") ) { return _skip; }
		if (HX_FIELD_EQ(inName,"_type") ) { return _type; }
		if (HX_FIELD_EQ(inName,"_dead") ) { return _dead; }
		if (HX_FIELD_EQ(inName,"_time") ) { return _time; }
		if (HX_FIELD_EQ(inName,"_ease") ) { return _ease; }
		if (HX_FIELD_EQ(inName,"_yoyo") ) { return _yoyo; }
		if (HX_FIELD_EQ(inName,"_rest") ) { return _rest; }
		if (HX_FIELD_EQ(inName,"error") ) { return error_dyn(); }
		if (HX_FIELD_EQ(inName,"_stop") ) { return _stop_dyn(); }
		if (HX_FIELD_EQ(inName,"_init") ) { return _init_dyn(); }
		if (HX_FIELD_EQ(inName,"_head") ) { return _head_dyn(); }
		if (HX_FIELD_EQ(inName,"_foot") ) { return _foot_dyn(); }
		if (HX_FIELD_EQ(inName,"_calc") ) { return _calc_dyn(); }
		if (HX_FIELD_EQ(inName,"delay") ) { return delay_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"tweens") ) { return get_tweens(); }
		if (HX_FIELD_EQ(inName,"_rules") ) { return _rules; }
		if (HX_FIELD_EQ(inName,"serial") ) { return serial_dyn(); }
		if (HX_FIELD_EQ(inName,"_group") ) { return _group_dyn(); }
		if (HX_FIELD_EQ(inName,"_timer") ) { return _timer; }
		if (HX_FIELD_EQ(inName,"fields") ) { return fields_dyn(); }
		if (HX_FIELD_EQ(inName,"_delay") ) { return _delay; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"_apply") ) { return _apply_dyn(); }
		if (HX_FIELD_EQ(inName,"repeat") ) { return repeat_dyn(); }
		if (HX_FIELD_EQ(inName,"zigzag") ) { return zigzag_dyn(); }
		if (HX_FIELD_EQ(inName,"onPlay") ) { return onPlay_dyn(); }
		if (HX_FIELD_EQ(inName,"onStop") ) { return onStop_dyn(); }
		if (HX_FIELD_EQ(inName,"onHead") ) { return onHead_dyn(); }
		if (HX_FIELD_EQ(inName,"onFoot") ) { return onFoot_dyn(); }
		if (HX_FIELD_EQ(inName,"onRest") ) { return onRest_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_tweens") ) { return _tweens; }
		if (HX_FIELD_EQ(inName,"addRule") ) { return addRule_dyn(); }
		if (HX_FIELD_EQ(inName,"playAll") ) { return playAll_dyn(); }
		if (HX_FIELD_EQ(inName,"stopAll") ) { return stopAll_dyn(); }
		if (HX_FIELD_EQ(inName,"gotoAll") ) { return gotoAll_dyn(); }
		if (HX_FIELD_EQ(inName,"getTime") ) { return getTime_dyn(); }
		if (HX_FIELD_EQ(inName,"playing") ) { return playing; }
		if (HX_FIELD_EQ(inName,"_inited") ) { return _inited; }
		if (HX_FIELD_EQ(inName,"_parent") ) { return _parent; }
		if (HX_FIELD_EQ(inName,"_toKeys") ) { return _toKeys; }
		if (HX_FIELD_EQ(inName,"_repeat") ) { return _repeat; }
		if (HX_FIELD_EQ(inName,"_zigzag") ) { return _zigzag; }
		if (HX_FIELD_EQ(inName,"_onPlay") ) { return _onPlay; }
		if (HX_FIELD_EQ(inName,"_onStop") ) { return _onStop; }
		if (HX_FIELD_EQ(inName,"_onRest") ) { return _onRest; }
		if (HX_FIELD_EQ(inName,"_onHead") ) { return _onHead; }
		if (HX_FIELD_EQ(inName,"_onFoot") ) { return _onFoot; }
		if (HX_FIELD_EQ(inName,"_invert") ) { return _invert_dyn(); }
		if (HX_FIELD_EQ(inName,"_update") ) { return _update_dyn(); }
		if (HX_FIELD_EQ(inName,"_finish") ) { return _finish_dyn(); }
		if (HX_FIELD_EQ(inName,"onDelay") ) { return onDelay_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"prevTime") ) { return prevTime; }
		if (HX_FIELD_EQ(inName,"mainLoop") ) { return mainLoop_dyn(); }
		if (HX_FIELD_EQ(inName,"addRules") ) { return addRules_dyn(); }
		if (HX_FIELD_EQ(inName,"parallel") ) { return parallel_dyn(); }
		if (HX_FIELD_EQ(inName,"_initLog") ) { return _initLog; }
		if (HX_FIELD_EQ(inName,"setField") ) { return setField_dyn(); }
		if (HX_FIELD_EQ(inName,"backward") ) { return backward; }
		if (HX_FIELD_EQ(inName,"_onDelay") ) { return _onDelay; }
		if (HX_FIELD_EQ(inName,"interval") ) { return interval_dyn(); }
		if (HX_FIELD_EQ(inName,"autoPlay") ) { return autoPlay_dyn(); }
		if (HX_FIELD_EQ(inName,"onUpdate") ) { return onUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"onRepeat") ) { return onRepeat_dyn(); }
		if (HX_FIELD_EQ(inName,"onFinish") ) { return onFinish_dyn(); }
		if (HX_FIELD_EQ(inName,"dispatch") ) { return dispatch_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_rules") ) { return get_rules_dyn(); }
		if (HX_FIELD_EQ(inName,"tweenFunc") ) { return tweenFunc_dyn(); }
		if (HX_FIELD_EQ(inName,"updateAll") ) { return updateAll_dyn(); }
		if (HX_FIELD_EQ(inName,"_resetLog") ) { return _resetLog_dyn(); }
		if (HX_FIELD_EQ(inName,"idCounter") ) { return idCounter; }
		if (HX_FIELD_EQ(inName,"_fastMode") ) { return _fastMode; }
		if (HX_FIELD_EQ(inName,"totalTime") ) { return get_totalTime(); }
		if (HX_FIELD_EQ(inName,"timeScale") ) { return timeScale; }
		if (HX_FIELD_EQ(inName,"_inverted") ) { return _inverted; }
		if (HX_FIELD_EQ(inName,"_interval") ) { return _interval; }
		if (HX_FIELD_EQ(inName,"_autoPlay") ) { return _autoPlay; }
		if (HX_FIELD_EQ(inName,"_onRepeat") ) { return _onRepeat; }
		if (HX_FIELD_EQ(inName,"_onUpdate") ) { return _onUpdate; }
		if (HX_FIELD_EQ(inName,"_onFinish") ) { return _onFinish; }
		if (HX_FIELD_EQ(inName,"_fastCalc") ) { return _fastCalc_dyn(); }
		if (HX_FIELD_EQ(inName,"initGroup") ) { return initGroup_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_tweens") ) { return get_tweens_dyn(); }
		if (HX_FIELD_EQ(inName,"updateMode") ) { return updateMode; }
		if (HX_FIELD_EQ(inName,"initTweens") ) { return initTweens_dyn(); }
		if (HX_FIELD_EQ(inName,"tweenFunc1") ) { return tweenFunc1_dyn(); }
		if (HX_FIELD_EQ(inName,"tweenFunc2") ) { return tweenFunc2_dyn(); }
		if (HX_FIELD_EQ(inName,"tweenFunc3") ) { return tweenFunc3_dyn(); }
		if (HX_FIELD_EQ(inName,"tweenFunc4") ) { return tweenFunc4_dyn(); }
		if (HX_FIELD_EQ(inName,"dictionary") ) { return dictionary; }
		if (HX_FIELD_EQ(inName,"hashObject") ) { return hashObject_dyn(); }
		if (HX_FIELD_EQ(inName,"isIterable") ) { return isIterable_dyn(); }
		if (HX_FIELD_EQ(inName,"_totalTime") ) { return _totalTime; }
		if (HX_FIELD_EQ(inName,"singleTime") ) { return get_singleTime(); }
		if (HX_FIELD_EQ(inName,"onInterval") ) { return onInterval_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultEase") ) { return defaultEase; }
		if (HX_FIELD_EQ(inName,"defaultTime") ) { return defaultTime; }
		if (HX_FIELD_EQ(inName,"defaultYoyo") ) { return defaultYoyo; }
		if (HX_FIELD_EQ(inName,"setDefaults") ) { return setDefaults_dyn(); }
		if (HX_FIELD_EQ(inName,"initManager") ) { return initManager_dyn(); }
		if (HX_FIELD_EQ(inName,"stopUpdater") ) { return stopUpdater_dyn(); }
		if (HX_FIELD_EQ(inName,"setInterval") ) { return setInterval_dyn(); }
		if (HX_FIELD_EQ(inName,"_objCounter") ) { return _objCounter; }
		if (HX_FIELD_EQ(inName,"_singleTime") ) { return _singleTime; }
		if (HX_FIELD_EQ(inName,"currentTime") ) { return get_currentTime(); }
		if (HX_FIELD_EQ(inName,"_onInterval") ) { return _onInterval; }
		if (HX_FIELD_EQ(inName,"_initFromTo") ) { return _initFromTo_dyn(); }
		if (HX_FIELD_EQ(inName,"checkInited") ) { return checkInited_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_addedTweens") ) { return _addedTweens; }
		if (HX_FIELD_EQ(inName,"DEFAULT_EASE") ) { return DEFAULT_EASE; }
		if (HX_FIELD_EQ(inName,"defaultDelay") ) { return defaultDelay; }
		if (HX_FIELD_EQ(inName,"dumpDefaults") ) { return dumpDefaults_dyn(); }
		if (HX_FIELD_EQ(inName,"initDefaults") ) { return initDefaults_dyn(); }
		if (HX_FIELD_EQ(inName,"manualUpdate") ) { return manualUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"_currentTime") ) { return _currentTime; }
		if (HX_FIELD_EQ(inName,"setTimeScale") ) { return setTimeScale_dyn(); }
		if (HX_FIELD_EQ(inName,"_getPosition") ) { return _getPosition_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"managerInited") ) { return managerInited; }
		if (HX_FIELD_EQ(inName,"defaultRepeat") ) { return defaultRepeat; }
		if (HX_FIELD_EQ(inName,"defaultZigZag") ) { return defaultZigZag; }
		if (HX_FIELD_EQ(inName,"get_totalTime") ) { return get_totalTime_dyn(); }
		if (HX_FIELD_EQ(inName,"set_timeScale") ) { return set_timeScale_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_groupDefaults") ) { return _groupDefaults; }
		if (HX_FIELD_EQ(inName,"set_updateMode") ) { return set_updateMode_dyn(); }
		if (HX_FIELD_EQ(inName,"get_singleTime") ) { return get_singleTime_dyn(); }
		if (HX_FIELD_EQ(inName,"_timeIsDefault") ) { return _timeIsDefault; }
		if (HX_FIELD_EQ(inName,"_easeIsDefault") ) { return _easeIsDefault; }
		if (HX_FIELD_EQ(inName,"_yoyoIsDefault") ) { return _yoyoIsDefault; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"defaultInterval") ) { return defaultInterval; }
		if (HX_FIELD_EQ(inName,"defaultAutoPlay") ) { return defaultAutoPlay; }
		if (HX_FIELD_EQ(inName,"defaultAutoFrom") ) { return defaultAutoFrom; }
		if (HX_FIELD_EQ(inName,"get_currentTime") ) { return get_currentTime_dyn(); }
		if (HX_FIELD_EQ(inName,"_delayIsDefault") ) { return _delayIsDefault; }
		if (HX_FIELD_EQ(inName,"_eventListeners") ) { return _eventListeners; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_repeatIsDefault") ) { return _repeatIsDefault; }
		if (HX_FIELD_EQ(inName,"_zigzagIsDefault") ) { return _zigzagIsDefault; }
		if (HX_FIELD_EQ(inName,"addEventListener") ) { return addEventListener_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"topLevelTimeScale") ) { return topLevelTimeScale; }
		if (HX_FIELD_EQ(inName,"_addEventListener") ) { return _addEventListener_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_intervalIsDefault") ) { return _intervalIsDefault; }
		if (HX_FIELD_EQ(inName,"_autoPlayIsDefault") ) { return _autoPlayIsDefault; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"removeEventListener") ) { return removeEventListener_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_removeEventListener") ) { return _removeEventListener_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TweenX_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_odd") ) { _odd=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_skip") ) { _skip=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_type") ) { _type=inValue.Cast< ::tweenx909::advanced::TweenTypeX >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_dead") ) { _dead=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_time") ) { _time=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ease") ) { _ease=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_yoyo") ) { _yoyo=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rest") ) { _rest=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_rules") ) { _rules=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_timer") ) { _timer=inValue.Cast< ::haxe::Timer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_delay") ) { _delay=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_tweens") ) { _tweens=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"playing") ) { playing=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_inited") ) { _inited=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_parent") ) { _parent=inValue.Cast< ::tweenx909::TweenX >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_toKeys") ) { _toKeys=inValue.Cast< Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_repeat") ) { _repeat=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_zigzag") ) { _zigzag=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_onPlay") ) { _onPlay=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_onStop") ) { _onStop=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_onRest") ) { _onRest=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_onHead") ) { _onHead=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_onFoot") ) { _onFoot=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"prevTime") ) { prevTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_initLog") ) { _initLog=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"backward") ) { backward=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_onDelay") ) { _onDelay=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"idCounter") ) { idCounter=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_fastMode") ) { _fastMode=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timeScale") ) { if (inCallProp) return set_timeScale(inValue);timeScale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_inverted") ) { _inverted=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_interval") ) { _interval=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_autoPlay") ) { _autoPlay=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_onRepeat") ) { _onRepeat=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_onUpdate") ) { _onUpdate=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_onFinish") ) { _onFinish=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"updateMode") ) { if (inCallProp) return set_updateMode(inValue);updateMode=inValue.Cast< ::tweenx909::advanced::UpdateModeX >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dictionary") ) { dictionary=inValue.Cast< ::haxe::ds::ObjectMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_totalTime") ) { _totalTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultEase") ) { defaultEase=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"defaultTime") ) { defaultTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"defaultYoyo") ) { defaultYoyo=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_objCounter") ) { _objCounter=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_singleTime") ) { _singleTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_onInterval") ) { _onInterval=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_addedTweens") ) { _addedTweens=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEFAULT_EASE") ) { DEFAULT_EASE=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"defaultDelay") ) { defaultDelay=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_currentTime") ) { _currentTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"managerInited") ) { managerInited=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"defaultRepeat") ) { defaultRepeat=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"defaultZigZag") ) { defaultZigZag=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_groupDefaults") ) { _groupDefaults=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_timeIsDefault") ) { _timeIsDefault=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_easeIsDefault") ) { _easeIsDefault=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_yoyoIsDefault") ) { _yoyoIsDefault=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"defaultInterval") ) { defaultInterval=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"defaultAutoPlay") ) { defaultAutoPlay=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"defaultAutoFrom") ) { defaultAutoFrom=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_delayIsDefault") ) { _delayIsDefault=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_eventListeners") ) { _eventListeners=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_repeatIsDefault") ) { _repeatIsDefault=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_zigzagIsDefault") ) { _zigzagIsDefault=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"topLevelTimeScale") ) { topLevelTimeScale=inValue.Cast< Float >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_intervalIsDefault") ) { _intervalIsDefault=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_autoPlayIsDefault") ) { _autoPlayIsDefault=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TweenX_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("playing"));
	outFields->push(HX_CSTRING("backward"));
	outFields->push(HX_CSTRING("_currentTime"));
	outFields->push(HX_CSTRING("_singleTime"));
	outFields->push(HX_CSTRING("_skip"));
	outFields->push(HX_CSTRING("_type"));
	outFields->push(HX_CSTRING("_inited"));
	outFields->push(HX_CSTRING("_totalTime"));
	outFields->push(HX_CSTRING("_dead"));
	outFields->push(HX_CSTRING("_parent"));
	outFields->push(HX_CSTRING("_fastMode"));
	outFields->push(HX_CSTRING("_toKeys"));
	outFields->push(HX_CSTRING("currentTime"));
	outFields->push(HX_CSTRING("singleTime"));
	outFields->push(HX_CSTRING("totalTime"));
	outFields->push(HX_CSTRING("timeScale"));
	outFields->push(HX_CSTRING("_inverted"));
	outFields->push(HX_CSTRING("_odd"));
	outFields->push(HX_CSTRING("_time"));
	outFields->push(HX_CSTRING("_interval"));
	outFields->push(HX_CSTRING("_repeat"));
	outFields->push(HX_CSTRING("_zigzag"));
	outFields->push(HX_CSTRING("_yoyo"));
	outFields->push(HX_CSTRING("_delay"));
	outFields->push(HX_CSTRING("_autoPlay"));
	outFields->push(HX_CSTRING("_rest"));
	outFields->push(HX_CSTRING("_timeIsDefault"));
	outFields->push(HX_CSTRING("_easeIsDefault"));
	outFields->push(HX_CSTRING("_intervalIsDefault"));
	outFields->push(HX_CSTRING("_repeatIsDefault"));
	outFields->push(HX_CSTRING("_zigzagIsDefault"));
	outFields->push(HX_CSTRING("_yoyoIsDefault"));
	outFields->push(HX_CSTRING("_delayIsDefault"));
	outFields->push(HX_CSTRING("_autoPlayIsDefault"));
	outFields->push(HX_CSTRING("_eventListeners"));
	outFields->push(HX_CSTRING("id"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("_tweens"),
	HX_CSTRING("_addedTweens"),
	HX_CSTRING("get_tweens"),
	HX_CSTRING("prevTime"),
	HX_CSTRING("managerInited"),
	HX_CSTRING("DEFAULT_EASE"),
	HX_CSTRING("DEFAULT_TIME"),
	HX_CSTRING("DEFAULT_DELAY"),
	HX_CSTRING("DEFAULT_REPEAT"),
	HX_CSTRING("DEFAULT_INTERVAL"),
	HX_CSTRING("DEFAULT_YOYO"),
	HX_CSTRING("DEFAULT_ZIGZAG"),
	HX_CSTRING("DEFAULT_AUTO_PLAY"),
	HX_CSTRING("DEFAULT_AUTO_FROM"),
	HX_CSTRING("defaultEase"),
	HX_CSTRING("defaultTime"),
	HX_CSTRING("defaultDelay"),
	HX_CSTRING("defaultInterval"),
	HX_CSTRING("defaultRepeat"),
	HX_CSTRING("defaultYoyo"),
	HX_CSTRING("defaultZigZag"),
	HX_CSTRING("defaultAutoPlay"),
	HX_CSTRING("defaultAutoFrom"),
	HX_CSTRING("_rules"),
	HX_CSTRING("get_rules"),
	HX_CSTRING("topLevelTimeScale"),
	HX_CSTRING("_groupDefaults"),
	HX_CSTRING("dumpDefaults"),
	HX_CSTRING("setDefaults"),
	HX_CSTRING("initDefaults"),
	HX_CSTRING("updateMode"),
	HX_CSTRING("set_updateMode"),
	HX_CSTRING("initManager"),
	HX_CSTRING("mainLoop"),
	HX_CSTRING("stopUpdater"),
	HX_CSTRING("manualUpdate"),
	HX_CSTRING("initTweens"),
	HX_CSTRING("clear"),
	HX_CSTRING("addRule"),
	HX_CSTRING("addRules"),
	HX_CSTRING("from"),
	HX_CSTRING("to"),
	HX_CSTRING("tweenFunc"),
	HX_CSTRING("tweenFunc1"),
	HX_CSTRING("tweenFunc2"),
	HX_CSTRING("tweenFunc3"),
	HX_CSTRING("tweenFunc4"),
	HX_CSTRING("func"),
	HX_CSTRING("playAll"),
	HX_CSTRING("stopAll"),
	HX_CSTRING("gotoAll"),
	HX_CSTRING("updateAll"),
	HX_CSTRING("serial"),
	HX_CSTRING("lag"),
	HX_CSTRING("parallel"),
	HX_CSTRING("wait"),
	HX_CSTRING("_group"),
	HX_CSTRING("_lock"),
	HX_CSTRING("getTime"),
	HX_CSTRING("_timer"),
	HX_CSTRING("setInterval"),
	HX_CSTRING("fields"),
	HX_CSTRING("_initLog"),
	HX_CSTRING("dictionary"),
	HX_CSTRING("_objCounter"),
	HX_CSTRING("hashObject"),
	HX_CSTRING("_resetLog"),
	HX_CSTRING("field"),
	HX_CSTRING("setField"),
	HX_CSTRING("isIterable"),
	HX_CSTRING("_MIN"),
	HX_CSTRING("_DELAY"),
	HX_CSTRING("_FINISH"),
	HX_CSTRING("_FOOT"),
	HX_CSTRING("_HEAD"),
	HX_CSTRING("_INTERVAL"),
	HX_CSTRING("_PLAY"),
	HX_CSTRING("_REPEAT"),
	HX_CSTRING("_REST"),
	HX_CSTRING("_STOP"),
	HX_CSTRING("_UPDATE"),
	HX_CSTRING("idCounter"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(TweenX_obj,playing),HX_CSTRING("playing")},
	{hx::fsBool,(int)offsetof(TweenX_obj,backward),HX_CSTRING("backward")},
	{hx::fsFloat,(int)offsetof(TweenX_obj,_currentTime),HX_CSTRING("_currentTime")},
	{hx::fsFloat,(int)offsetof(TweenX_obj,_singleTime),HX_CSTRING("_singleTime")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TweenX_obj,_skip),HX_CSTRING("_skip")},
	{hx::fsObject /*::tweenx909::advanced::TweenTypeX*/ ,(int)offsetof(TweenX_obj,_type),HX_CSTRING("_type")},
	{hx::fsBool,(int)offsetof(TweenX_obj,_inited),HX_CSTRING("_inited")},
	{hx::fsFloat,(int)offsetof(TweenX_obj,_totalTime),HX_CSTRING("_totalTime")},
	{hx::fsBool,(int)offsetof(TweenX_obj,_dead),HX_CSTRING("_dead")},
	{hx::fsObject /*::tweenx909::TweenX*/ ,(int)offsetof(TweenX_obj,_parent),HX_CSTRING("_parent")},
	{hx::fsBool,(int)offsetof(TweenX_obj,_fastMode),HX_CSTRING("_fastMode")},
	{hx::fsObject /*Array< ::String >*/ ,(int)offsetof(TweenX_obj,_toKeys),HX_CSTRING("_toKeys")},
	{hx::fsFloat,(int)offsetof(TweenX_obj,timeScale),HX_CSTRING("timeScale")},
	{hx::fsBool,(int)offsetof(TweenX_obj,_inverted),HX_CSTRING("_inverted")},
	{hx::fsBool,(int)offsetof(TweenX_obj,_odd),HX_CSTRING("_odd")},
	{hx::fsFloat,(int)offsetof(TweenX_obj,_time),HX_CSTRING("_time")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TweenX_obj,_ease),HX_CSTRING("_ease")},
	{hx::fsFloat,(int)offsetof(TweenX_obj,_interval),HX_CSTRING("_interval")},
	{hx::fsInt,(int)offsetof(TweenX_obj,_repeat),HX_CSTRING("_repeat")},
	{hx::fsBool,(int)offsetof(TweenX_obj,_zigzag),HX_CSTRING("_zigzag")},
	{hx::fsBool,(int)offsetof(TweenX_obj,_yoyo),HX_CSTRING("_yoyo")},
	{hx::fsFloat,(int)offsetof(TweenX_obj,_delay),HX_CSTRING("_delay")},
	{hx::fsBool,(int)offsetof(TweenX_obj,_autoPlay),HX_CSTRING("_autoPlay")},
	{hx::fsFloat,(int)offsetof(TweenX_obj,_rest),HX_CSTRING("_rest")},
	{hx::fsBool,(int)offsetof(TweenX_obj,_timeIsDefault),HX_CSTRING("_timeIsDefault")},
	{hx::fsBool,(int)offsetof(TweenX_obj,_easeIsDefault),HX_CSTRING("_easeIsDefault")},
	{hx::fsBool,(int)offsetof(TweenX_obj,_intervalIsDefault),HX_CSTRING("_intervalIsDefault")},
	{hx::fsBool,(int)offsetof(TweenX_obj,_repeatIsDefault),HX_CSTRING("_repeatIsDefault")},
	{hx::fsBool,(int)offsetof(TweenX_obj,_zigzagIsDefault),HX_CSTRING("_zigzagIsDefault")},
	{hx::fsBool,(int)offsetof(TweenX_obj,_yoyoIsDefault),HX_CSTRING("_yoyoIsDefault")},
	{hx::fsBool,(int)offsetof(TweenX_obj,_delayIsDefault),HX_CSTRING("_delayIsDefault")},
	{hx::fsBool,(int)offsetof(TweenX_obj,_autoPlayIsDefault),HX_CSTRING("_autoPlayIsDefault")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TweenX_obj,_onPlay),HX_CSTRING("_onPlay")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TweenX_obj,_onStop),HX_CSTRING("_onStop")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TweenX_obj,_onDelay),HX_CSTRING("_onDelay")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TweenX_obj,_onInterval),HX_CSTRING("_onInterval")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TweenX_obj,_onRepeat),HX_CSTRING("_onRepeat")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TweenX_obj,_onRest),HX_CSTRING("_onRest")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TweenX_obj,_onHead),HX_CSTRING("_onHead")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TweenX_obj,_onUpdate),HX_CSTRING("_onUpdate")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TweenX_obj,_onFoot),HX_CSTRING("_onFoot")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TweenX_obj,_onFinish),HX_CSTRING("_onFinish")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(TweenX_obj,_eventListeners),HX_CSTRING("_eventListeners")},
	{hx::fsInt,(int)offsetof(TweenX_obj,id),HX_CSTRING("id")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("playing"),
	HX_CSTRING("backward"),
	HX_CSTRING("_currentTime"),
	HX_CSTRING("_singleTime"),
	HX_CSTRING("_skip"),
	HX_CSTRING("_type"),
	HX_CSTRING("_inited"),
	HX_CSTRING("_totalTime"),
	HX_CSTRING("_dead"),
	HX_CSTRING("_parent"),
	HX_CSTRING("_fastMode"),
	HX_CSTRING("_toKeys"),
	HX_CSTRING("timeScale"),
	HX_CSTRING("get_currentTime"),
	HX_CSTRING("get_singleTime"),
	HX_CSTRING("get_totalTime"),
	HX_CSTRING("set_timeScale"),
	HX_CSTRING("_inverted"),
	HX_CSTRING("_odd"),
	HX_CSTRING("_time"),
	HX_CSTRING("_ease"),
	HX_CSTRING("_interval"),
	HX_CSTRING("_repeat"),
	HX_CSTRING("_zigzag"),
	HX_CSTRING("_yoyo"),
	HX_CSTRING("_delay"),
	HX_CSTRING("_autoPlay"),
	HX_CSTRING("_rest"),
	HX_CSTRING("_timeIsDefault"),
	HX_CSTRING("_easeIsDefault"),
	HX_CSTRING("_intervalIsDefault"),
	HX_CSTRING("_repeatIsDefault"),
	HX_CSTRING("_zigzagIsDefault"),
	HX_CSTRING("_yoyoIsDefault"),
	HX_CSTRING("_delayIsDefault"),
	HX_CSTRING("_autoPlayIsDefault"),
	HX_CSTRING("_onPlay"),
	HX_CSTRING("_onStop"),
	HX_CSTRING("_onDelay"),
	HX_CSTRING("_onInterval"),
	HX_CSTRING("_onRepeat"),
	HX_CSTRING("_onRest"),
	HX_CSTRING("_onHead"),
	HX_CSTRING("_onUpdate"),
	HX_CSTRING("_onFoot"),
	HX_CSTRING("_onFinish"),
	HX_CSTRING("_eventListeners"),
	HX_CSTRING("id"),
	HX_CSTRING("error"),
	HX_CSTRING("play"),
	HX_CSTRING("stop"),
	HX_CSTRING("_stop"),
	HX_CSTRING("update"),
	HX_CSTRING("goto"),
	HX_CSTRING("_invert"),
	HX_CSTRING("_init"),
	HX_CSTRING("_initFromTo"),
	HX_CSTRING("_update"),
	HX_CSTRING("_head"),
	HX_CSTRING("_foot"),
	HX_CSTRING("_finish"),
	HX_CSTRING("_apply"),
	HX_CSTRING("_fastCalc"),
	HX_CSTRING("_calc"),
	HX_CSTRING("time"),
	HX_CSTRING("ease"),
	HX_CSTRING("delay"),
	HX_CSTRING("rest"),
	HX_CSTRING("interval"),
	HX_CSTRING("repeat"),
	HX_CSTRING("yoyo"),
	HX_CSTRING("zigzag"),
	HX_CSTRING("autoPlay"),
	HX_CSTRING("skip"),
	HX_CSTRING("setTimeScale"),
	HX_CSTRING("onPlay"),
	HX_CSTRING("onStop"),
	HX_CSTRING("onDelay"),
	HX_CSTRING("onHead"),
	HX_CSTRING("onUpdate"),
	HX_CSTRING("onFoot"),
	HX_CSTRING("onRest"),
	HX_CSTRING("onInterval"),
	HX_CSTRING("onRepeat"),
	HX_CSTRING("onFinish"),
	HX_CSTRING("addEventListener"),
	HX_CSTRING("removeEventListener"),
	HX_CSTRING("_addEventListener"),
	HX_CSTRING("_removeEventListener"),
	HX_CSTRING("_getPosition"),
	HX_CSTRING("checkInited"),
	HX_CSTRING("dispatch"),
	HX_CSTRING("initGroup"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TweenX_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TweenX_obj::_tweens,"_tweens");
	HX_MARK_MEMBER_NAME(TweenX_obj::_addedTweens,"_addedTweens");
	HX_MARK_MEMBER_NAME(TweenX_obj::prevTime,"prevTime");
	HX_MARK_MEMBER_NAME(TweenX_obj::managerInited,"managerInited");
	HX_MARK_MEMBER_NAME(TweenX_obj::DEFAULT_EASE,"DEFAULT_EASE");
	HX_MARK_MEMBER_NAME(TweenX_obj::DEFAULT_TIME,"DEFAULT_TIME");
	HX_MARK_MEMBER_NAME(TweenX_obj::DEFAULT_DELAY,"DEFAULT_DELAY");
	HX_MARK_MEMBER_NAME(TweenX_obj::DEFAULT_REPEAT,"DEFAULT_REPEAT");
	HX_MARK_MEMBER_NAME(TweenX_obj::DEFAULT_INTERVAL,"DEFAULT_INTERVAL");
	HX_MARK_MEMBER_NAME(TweenX_obj::DEFAULT_YOYO,"DEFAULT_YOYO");
	HX_MARK_MEMBER_NAME(TweenX_obj::DEFAULT_ZIGZAG,"DEFAULT_ZIGZAG");
	HX_MARK_MEMBER_NAME(TweenX_obj::DEFAULT_AUTO_PLAY,"DEFAULT_AUTO_PLAY");
	HX_MARK_MEMBER_NAME(TweenX_obj::DEFAULT_AUTO_FROM,"DEFAULT_AUTO_FROM");
	HX_MARK_MEMBER_NAME(TweenX_obj::defaultEase,"defaultEase");
	HX_MARK_MEMBER_NAME(TweenX_obj::defaultTime,"defaultTime");
	HX_MARK_MEMBER_NAME(TweenX_obj::defaultDelay,"defaultDelay");
	HX_MARK_MEMBER_NAME(TweenX_obj::defaultInterval,"defaultInterval");
	HX_MARK_MEMBER_NAME(TweenX_obj::defaultRepeat,"defaultRepeat");
	HX_MARK_MEMBER_NAME(TweenX_obj::defaultYoyo,"defaultYoyo");
	HX_MARK_MEMBER_NAME(TweenX_obj::defaultZigZag,"defaultZigZag");
	HX_MARK_MEMBER_NAME(TweenX_obj::defaultAutoPlay,"defaultAutoPlay");
	HX_MARK_MEMBER_NAME(TweenX_obj::defaultAutoFrom,"defaultAutoFrom");
	HX_MARK_MEMBER_NAME(TweenX_obj::_rules,"_rules");
	HX_MARK_MEMBER_NAME(TweenX_obj::topLevelTimeScale,"topLevelTimeScale");
	HX_MARK_MEMBER_NAME(TweenX_obj::_groupDefaults,"_groupDefaults");
	HX_MARK_MEMBER_NAME(TweenX_obj::updateMode,"updateMode");
	HX_MARK_MEMBER_NAME(TweenX_obj::_timer,"_timer");
	HX_MARK_MEMBER_NAME(TweenX_obj::_initLog,"_initLog");
	HX_MARK_MEMBER_NAME(TweenX_obj::dictionary,"dictionary");
	HX_MARK_MEMBER_NAME(TweenX_obj::_objCounter,"_objCounter");
	HX_MARK_MEMBER_NAME(TweenX_obj::_MIN,"_MIN");
	HX_MARK_MEMBER_NAME(TweenX_obj::_DELAY,"_DELAY");
	HX_MARK_MEMBER_NAME(TweenX_obj::_FINISH,"_FINISH");
	HX_MARK_MEMBER_NAME(TweenX_obj::_FOOT,"_FOOT");
	HX_MARK_MEMBER_NAME(TweenX_obj::_HEAD,"_HEAD");
	HX_MARK_MEMBER_NAME(TweenX_obj::_INTERVAL,"_INTERVAL");
	HX_MARK_MEMBER_NAME(TweenX_obj::_PLAY,"_PLAY");
	HX_MARK_MEMBER_NAME(TweenX_obj::_REPEAT,"_REPEAT");
	HX_MARK_MEMBER_NAME(TweenX_obj::_REST,"_REST");
	HX_MARK_MEMBER_NAME(TweenX_obj::_STOP,"_STOP");
	HX_MARK_MEMBER_NAME(TweenX_obj::_UPDATE,"_UPDATE");
	HX_MARK_MEMBER_NAME(TweenX_obj::idCounter,"idCounter");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TweenX_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TweenX_obj::_tweens,"_tweens");
	HX_VISIT_MEMBER_NAME(TweenX_obj::_addedTweens,"_addedTweens");
	HX_VISIT_MEMBER_NAME(TweenX_obj::prevTime,"prevTime");
	HX_VISIT_MEMBER_NAME(TweenX_obj::managerInited,"managerInited");
	HX_VISIT_MEMBER_NAME(TweenX_obj::DEFAULT_EASE,"DEFAULT_EASE");
	HX_VISIT_MEMBER_NAME(TweenX_obj::DEFAULT_TIME,"DEFAULT_TIME");
	HX_VISIT_MEMBER_NAME(TweenX_obj::DEFAULT_DELAY,"DEFAULT_DELAY");
	HX_VISIT_MEMBER_NAME(TweenX_obj::DEFAULT_REPEAT,"DEFAULT_REPEAT");
	HX_VISIT_MEMBER_NAME(TweenX_obj::DEFAULT_INTERVAL,"DEFAULT_INTERVAL");
	HX_VISIT_MEMBER_NAME(TweenX_obj::DEFAULT_YOYO,"DEFAULT_YOYO");
	HX_VISIT_MEMBER_NAME(TweenX_obj::DEFAULT_ZIGZAG,"DEFAULT_ZIGZAG");
	HX_VISIT_MEMBER_NAME(TweenX_obj::DEFAULT_AUTO_PLAY,"DEFAULT_AUTO_PLAY");
	HX_VISIT_MEMBER_NAME(TweenX_obj::DEFAULT_AUTO_FROM,"DEFAULT_AUTO_FROM");
	HX_VISIT_MEMBER_NAME(TweenX_obj::defaultEase,"defaultEase");
	HX_VISIT_MEMBER_NAME(TweenX_obj::defaultTime,"defaultTime");
	HX_VISIT_MEMBER_NAME(TweenX_obj::defaultDelay,"defaultDelay");
	HX_VISIT_MEMBER_NAME(TweenX_obj::defaultInterval,"defaultInterval");
	HX_VISIT_MEMBER_NAME(TweenX_obj::defaultRepeat,"defaultRepeat");
	HX_VISIT_MEMBER_NAME(TweenX_obj::defaultYoyo,"defaultYoyo");
	HX_VISIT_MEMBER_NAME(TweenX_obj::defaultZigZag,"defaultZigZag");
	HX_VISIT_MEMBER_NAME(TweenX_obj::defaultAutoPlay,"defaultAutoPlay");
	HX_VISIT_MEMBER_NAME(TweenX_obj::defaultAutoFrom,"defaultAutoFrom");
	HX_VISIT_MEMBER_NAME(TweenX_obj::_rules,"_rules");
	HX_VISIT_MEMBER_NAME(TweenX_obj::topLevelTimeScale,"topLevelTimeScale");
	HX_VISIT_MEMBER_NAME(TweenX_obj::_groupDefaults,"_groupDefaults");
	HX_VISIT_MEMBER_NAME(TweenX_obj::updateMode,"updateMode");
	HX_VISIT_MEMBER_NAME(TweenX_obj::_timer,"_timer");
	HX_VISIT_MEMBER_NAME(TweenX_obj::_initLog,"_initLog");
	HX_VISIT_MEMBER_NAME(TweenX_obj::dictionary,"dictionary");
	HX_VISIT_MEMBER_NAME(TweenX_obj::_objCounter,"_objCounter");
	HX_VISIT_MEMBER_NAME(TweenX_obj::_MIN,"_MIN");
	HX_VISIT_MEMBER_NAME(TweenX_obj::_DELAY,"_DELAY");
	HX_VISIT_MEMBER_NAME(TweenX_obj::_FINISH,"_FINISH");
	HX_VISIT_MEMBER_NAME(TweenX_obj::_FOOT,"_FOOT");
	HX_VISIT_MEMBER_NAME(TweenX_obj::_HEAD,"_HEAD");
	HX_VISIT_MEMBER_NAME(TweenX_obj::_INTERVAL,"_INTERVAL");
	HX_VISIT_MEMBER_NAME(TweenX_obj::_PLAY,"_PLAY");
	HX_VISIT_MEMBER_NAME(TweenX_obj::_REPEAT,"_REPEAT");
	HX_VISIT_MEMBER_NAME(TweenX_obj::_REST,"_REST");
	HX_VISIT_MEMBER_NAME(TweenX_obj::_STOP,"_STOP");
	HX_VISIT_MEMBER_NAME(TweenX_obj::_UPDATE,"_UPDATE");
	HX_VISIT_MEMBER_NAME(TweenX_obj::idCounter,"idCounter");
};

#endif

Class TweenX_obj::__mClass;

void TweenX_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("tweenx909.TweenX"), hx::TCanCast< TweenX_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void TweenX_obj::__boot()
{
	_tweens= Array_obj< ::Dynamic >::__new();
	_addedTweens= Array_obj< ::Dynamic >::__new();
	managerInited= false;
	DEFAULT_EASE= ::tweenx909::EaseX_obj::linear_dyn();
	DEFAULT_TIME= 0.3;
	DEFAULT_DELAY= (int)0;
	DEFAULT_REPEAT= (int)1;
	DEFAULT_INTERVAL= (int)0;
	DEFAULT_YOYO= false;
	DEFAULT_ZIGZAG= false;
	DEFAULT_AUTO_PLAY= true;
	DEFAULT_AUTO_FROM= true;
	defaultEase= ::tweenx909::TweenX_obj::DEFAULT_EASE_dyn();
	defaultTime= 0.3;
	defaultDelay= (int)0;
	defaultInterval= (int)0;
	defaultRepeat= (int)1;
	defaultYoyo= false;
	defaultZigZag= false;
	defaultAutoPlay= true;
	defaultAutoFrom= true;
	_rules= Dynamic( Array_obj<Dynamic>::__new().Add(hx::ClassOf< ::tweenx909::rule::BoolRuleX >()).Add(hx::ClassOf< ::tweenx909::rule::ArrayRuleX >()).Add(hx::ClassOf< ::tweenx909::rule::TimelineX >()).Add(hx::ClassOf< ::tweenx909::rule::RgbX >()).Add(hx::ClassOf< ::tweenx909::rule::HsvX >()).Add(hx::ClassOf< ::tweenx909::rule::ArgbX >()).Add(hx::ClassOf< ::tweenx909::rule::AhsvX >()).Add(hx::ClassOf< ::tweenx909::rule::QuakeX >()));
	topLevelTimeScale= (int)1;
	_groupDefaults= false;
	updateMode= ::tweenx909::advanced::UpdateModeX_obj::TIME((int)60);
	_initLog= Dynamic( Array_obj<Dynamic>::__new());
	dictionary= ::haxe::ds::ObjectMap_obj::__new();
	_objCounter= (int)0;
	_MIN= 1.4901161415892264e-008;
	_DELAY= (int)1;
	_FINISH= (int)8;
	_FOOT= (int)4;
	_HEAD= (int)2;
	_INTERVAL= (int)5;
	_PLAY= (int)0;
	_REPEAT= (int)6;
	_REST= (int)7;
	_STOP= (int)9;
	_UPDATE= (int)3;
	idCounter= (int)0;
}

} // end namespace tweenx909
