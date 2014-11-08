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
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_tweenx909_EventX
#include <tweenx909/EventX.h>
#endif
#ifndef INCLUDED_tweenx909_TweenX
#include <tweenx909/TweenX.h>
#endif
#ifndef INCLUDED_tweenx909_advanced_CommandX
#include <tweenx909/advanced/CommandX.h>
#endif
#ifndef INCLUDED_tweenx909_advanced_StandardTweenX
#include <tweenx909/advanced/StandardTweenX.h>
#endif
#ifndef INCLUDED_tweenx909_advanced_TweenTypeX
#include <tweenx909/advanced/TweenTypeX.h>
#endif
namespace tweenx909{
namespace advanced{

Void StandardTweenX_obj::__construct(::tweenx909::advanced::TweenTypeX type,Dynamic time,Dynamic ease,Dynamic delay,Dynamic repeat,Dynamic yoyo,Dynamic zigzag,Dynamic interval,Dynamic autoPlay,Dynamic posInfos)
{
HX_STACK_FRAME("tweenx909.advanced.StandardTweenX","new",0x18e0610f,"tweenx909.advanced.StandardTweenX.new","tweenx909/advanced/StandardTweenX.hx",10,0x11736161)
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
	HX_STACK_LINE(11)
	this->_autoFrom = true;
	HX_STACK_LINE(13)
	switch( (int)(type->__Index())){
		case (int)1: {
			HX_STACK_LINE(13)
			Dynamic toArr = (::tweenx909::advanced::TweenTypeX(type))->__Param(2);		HX_STACK_VAR(toArr,"toArr");
			HX_STACK_LINE(13)
			Dynamic fromArr = (::tweenx909::advanced::TweenTypeX(type))->__Param(1);		HX_STACK_VAR(fromArr,"fromArr");
			HX_STACK_LINE(13)
			Dynamic targets = (::tweenx909::advanced::TweenTypeX(type))->__Param(0);		HX_STACK_VAR(targets,"targets");
			HX_STACK_LINE(14)
			{
				HX_STACK_LINE(15)
				Dynamic _from = fromArr->__Field(HX_CSTRING("pop"),true)();		HX_STACK_VAR(_from,"_from");
				HX_STACK_LINE(16)
				Dynamic _to = toArr->__Field(HX_CSTRING("pop"),true)();		HX_STACK_VAR(_to,"_to");
				HX_STACK_LINE(17)
				for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(targets->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
					Dynamic t = __it->next();
					{
						HX_STACK_LINE(18)
						Dynamic _g = ::tweenx909::advanced::StandardTweenX_obj::clone(_to);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(18)
						toArr->__Field(HX_CSTRING("push"),true)(_g);
						HX_STACK_LINE(19)
						Dynamic _g1 = ::tweenx909::advanced::StandardTweenX_obj::clone(_from);		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(19)
						fromArr->__Field(HX_CSTRING("push"),true)(_g1);
					}
;
				}
			}
		}
		;break;
		default: {
		}
	}
	HX_STACK_LINE(23)
	super::__construct(type,time,ease,delay,repeat,yoyo,zigzag,interval,autoPlay,posInfos);
}
;
	return null();
}

//StandardTweenX_obj::~StandardTweenX_obj() { }

Dynamic StandardTweenX_obj::__CreateEmpty() { return  new StandardTweenX_obj; }
hx::ObjectPtr< StandardTweenX_obj > StandardTweenX_obj::__new(::tweenx909::advanced::TweenTypeX type,Dynamic time,Dynamic ease,Dynamic delay,Dynamic repeat,Dynamic yoyo,Dynamic zigzag,Dynamic interval,Dynamic autoPlay,Dynamic posInfos)
{  hx::ObjectPtr< StandardTweenX_obj > result = new StandardTweenX_obj();
	result->__construct(type,time,ease,delay,repeat,yoyo,zigzag,interval,autoPlay,posInfos);
	return result;}

Dynamic StandardTweenX_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StandardTweenX_obj > result = new StandardTweenX_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9]);
	return result;}

Void StandardTweenX_obj::checkField( Dynamic target,::String key){
{
		HX_STACK_FRAME("tweenx909.advanced.StandardTweenX","checkField",0xdb250a03,"tweenx909.advanced.StandardTweenX.checkField","tweenx909/advanced/StandardTweenX.hx",32,0x11736161)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(key,"key")
		HX_STACK_LINE(37)
		Dynamic _g = ::Reflect_obj::field(target,key);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(37)
		if ((!(::Std_obj::is(_g,hx::ClassOf< ::Dynamic >())))){
			HX_STACK_LINE(38)
			::Class _g1 = ::Type_obj::getClass(target);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(38)
			::String _g2 = ::Type_obj::getClassName(_g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(38)
			::String _g3 = (_g2 + HX_CSTRING(" does not have field '"));		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(38)
			::String _g4 = (_g3 + key);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(38)
			::String _g5 = (_g4 + HX_CSTRING("'"));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(38)
			HX_STACK_DO_THROW(this->error(_g5));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(StandardTweenX_obj,checkField,(void))

Dynamic StandardTweenX_obj::_getTarget( ){
	HX_STACK_FRAME("tweenx909.advanced.StandardTweenX","_getTarget",0x29876b79,"tweenx909.advanced.StandardTweenX._getTarget","tweenx909/advanced/StandardTweenX.hx",42,0x11736161)
	HX_STACK_THIS(this)
	HX_STACK_LINE(42)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(StandardTweenX_obj,_getTarget,return )

Void StandardTweenX_obj::_setTo( ::String key,Dynamic value){
{
		HX_STACK_FRAME("tweenx909.advanced.StandardTweenX","_setTo",0xdf709faf,"tweenx909.advanced.StandardTweenX._setTo","tweenx909/advanced/StandardTweenX.hx",43,0x11736161)
		HX_STACK_THIS(this)
		HX_STACK_ARG(key,"key")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(44)
		this->checkInited();
		HX_STACK_LINE(45)
		{
			HX_STACK_LINE(45)
			::tweenx909::advanced::TweenTypeX _g = this->_type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(45)
			switch( (int)(_g->__Index())){
				case (int)2: {
					HX_STACK_LINE(45)
					Dynamic _to = (::tweenx909::advanced::TweenTypeX(_g))->__Param(2);		HX_STACK_VAR(_to,"_to");
					HX_STACK_LINE(45)
					Dynamic _from = (::tweenx909::advanced::TweenTypeX(_g))->__Param(1);		HX_STACK_VAR(_from,"_from");
					HX_STACK_LINE(45)
					Dynamic target = (::tweenx909::advanced::TweenTypeX(_g))->__Param(0);		HX_STACK_VAR(target,"target");
					HX_STACK_LINE(46)
					{
						HX_STACK_LINE(47)
						{
							HX_STACK_LINE(47)
							Dynamic _g1 = ::Reflect_obj::field(target,key);		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(47)
							if ((!(::Std_obj::is(_g1,hx::ClassOf< ::Dynamic >())))){
								HX_STACK_LINE(47)
								::Class _g11 = ::Type_obj::getClass(target);		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(47)
								::String _g2 = ::Type_obj::getClassName(_g11);		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(47)
								::String _g3 = (_g2 + HX_CSTRING(" does not have field '"));		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(47)
								::String _g4 = (_g3 + key);		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(47)
								::String _g5 = (_g4 + HX_CSTRING("'"));		HX_STACK_VAR(_g5,"_g5");
								HX_STACK_LINE(47)
								HX_STACK_DO_THROW(this->error(_g5));
							}
						}
						HX_STACK_LINE(48)
						::Reflect_obj::deleteField(_to,(HX_CSTRING("$$$$") + key));
						HX_STACK_LINE(49)
						if (((_to != null()))){
							HX_STACK_LINE(49)
							_to->__SetField(key,value,true);
						}
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(45)
					Dynamic toArr = (::tweenx909::advanced::TweenTypeX(_g))->__Param(2);		HX_STACK_VAR(toArr,"toArr");
					HX_STACK_LINE(45)
					Dynamic fromArr = (::tweenx909::advanced::TweenTypeX(_g))->__Param(1);		HX_STACK_VAR(fromArr,"fromArr");
					HX_STACK_LINE(45)
					Dynamic targets = (::tweenx909::advanced::TweenTypeX(_g))->__Param(0);		HX_STACK_VAR(targets,"targets");
					HX_STACK_LINE(50)
					{
						HX_STACK_LINE(51)
						int i = (int)0;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(52)
						for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(targets->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
							Dynamic t = __it->next();
							{
								HX_STACK_LINE(53)
								{
									HX_STACK_LINE(53)
									Dynamic _g6 = ::Reflect_obj::field(t,key);		HX_STACK_VAR(_g6,"_g6");
									HX_STACK_LINE(53)
									if ((!(::Std_obj::is(_g6,hx::ClassOf< ::Dynamic >())))){
										HX_STACK_LINE(53)
										::Class _g7 = ::Type_obj::getClass(t);		HX_STACK_VAR(_g7,"_g7");
										HX_STACK_LINE(53)
										::String _g8 = ::Type_obj::getClassName(_g7);		HX_STACK_VAR(_g8,"_g8");
										HX_STACK_LINE(53)
										::String _g9 = (_g8 + HX_CSTRING(" does not have field '"));		HX_STACK_VAR(_g9,"_g9");
										HX_STACK_LINE(53)
										::String _g10 = (_g9 + key);		HX_STACK_VAR(_g10,"_g10");
										HX_STACK_LINE(53)
										::String _g11 = (_g10 + HX_CSTRING("'"));		HX_STACK_VAR(_g11,"_g11");
										HX_STACK_LINE(53)
										HX_STACK_DO_THROW(this->error(_g11));
									}
								}
								HX_STACK_LINE(54)
								int _g12 = (i)++;		HX_STACK_VAR(_g12,"_g12");
								HX_STACK_LINE(54)
								Dynamic _to = toArr->__GetItem(_g12);		HX_STACK_VAR(_to,"_to");
								HX_STACK_LINE(55)
								::Reflect_obj::deleteField(_to,(HX_CSTRING("$$$$") + key));
								HX_STACK_LINE(56)
								if (((_to != null()))){
									HX_STACK_LINE(56)
									_to->__SetField(key,value,true);
								}
							}
;
						}
					}
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(StandardTweenX_obj,_setTo,(void))

Void StandardTweenX_obj::_setRelativeTo( ::String key,Dynamic value){
{
		HX_STACK_FRAME("tweenx909.advanced.StandardTweenX","_setRelativeTo",0x3c5a5f9b,"tweenx909.advanced.StandardTweenX._setRelativeTo","tweenx909/advanced/StandardTweenX.hx",61,0x11736161)
		HX_STACK_THIS(this)
		HX_STACK_ARG(key,"key")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(62)
		this->checkInited();
		HX_STACK_LINE(63)
		{
			HX_STACK_LINE(63)
			::tweenx909::advanced::TweenTypeX _g = this->_type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(63)
			switch( (int)(_g->__Index())){
				case (int)2: {
					HX_STACK_LINE(63)
					Dynamic _to = (::tweenx909::advanced::TweenTypeX(_g))->__Param(2);		HX_STACK_VAR(_to,"_to");
					HX_STACK_LINE(63)
					Dynamic _from = (::tweenx909::advanced::TweenTypeX(_g))->__Param(1);		HX_STACK_VAR(_from,"_from");
					HX_STACK_LINE(63)
					Dynamic target = (::tweenx909::advanced::TweenTypeX(_g))->__Param(0);		HX_STACK_VAR(target,"target");
					HX_STACK_LINE(64)
					{
						HX_STACK_LINE(65)
						{
							HX_STACK_LINE(65)
							Dynamic _g1 = ::Reflect_obj::field(target,key);		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(65)
							if ((!(::Std_obj::is(_g1,hx::ClassOf< ::Dynamic >())))){
								HX_STACK_LINE(65)
								::Class _g11 = ::Type_obj::getClass(target);		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(65)
								::String _g2 = ::Type_obj::getClassName(_g11);		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(65)
								::String _g3 = (_g2 + HX_CSTRING(" does not have field '"));		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(65)
								::String _g4 = (_g3 + key);		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(65)
								::String _g5 = (_g4 + HX_CSTRING("'"));		HX_STACK_VAR(_g5,"_g5");
								HX_STACK_LINE(65)
								HX_STACK_DO_THROW(this->error(_g5));
							}
						}
						HX_STACK_LINE(66)
						::Reflect_obj::deleteField(_to,(HX_CSTRING("$$$$") + key));
						HX_STACK_LINE(67)
						{
							HX_STACK_LINE(67)
							Dynamic _g6;		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(67)
							_g6 = (  (((target == null()))) ? Dynamic(null()) : Dynamic(target->__Field(key,true)) );
							HX_STACK_LINE(67)
							Dynamic value1 = (_g6 + value);		HX_STACK_VAR(value1,"value1");
							HX_STACK_LINE(67)
							if (((_to != null()))){
								HX_STACK_LINE(67)
								_to->__SetField(key,value1,true);
							}
						}
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(63)
					Dynamic toArr = (::tweenx909::advanced::TweenTypeX(_g))->__Param(2);		HX_STACK_VAR(toArr,"toArr");
					HX_STACK_LINE(63)
					Dynamic fromArr = (::tweenx909::advanced::TweenTypeX(_g))->__Param(1);		HX_STACK_VAR(fromArr,"fromArr");
					HX_STACK_LINE(63)
					Dynamic targets = (::tweenx909::advanced::TweenTypeX(_g))->__Param(0);		HX_STACK_VAR(targets,"targets");
					HX_STACK_LINE(68)
					{
						HX_STACK_LINE(69)
						int i = (int)0;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(70)
						for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(targets->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
							Dynamic t = __it->next();
							{
								HX_STACK_LINE(71)
								{
									HX_STACK_LINE(71)
									Dynamic _g7 = ::Reflect_obj::field(t,key);		HX_STACK_VAR(_g7,"_g7");
									HX_STACK_LINE(71)
									if ((!(::Std_obj::is(_g7,hx::ClassOf< ::Dynamic >())))){
										HX_STACK_LINE(71)
										::Class _g8 = ::Type_obj::getClass(t);		HX_STACK_VAR(_g8,"_g8");
										HX_STACK_LINE(71)
										::String _g9 = ::Type_obj::getClassName(_g8);		HX_STACK_VAR(_g9,"_g9");
										HX_STACK_LINE(71)
										::String _g10 = (_g9 + HX_CSTRING(" does not have field '"));		HX_STACK_VAR(_g10,"_g10");
										HX_STACK_LINE(71)
										::String _g11 = (_g10 + key);		HX_STACK_VAR(_g11,"_g11");
										HX_STACK_LINE(71)
										::String _g12 = (_g11 + HX_CSTRING("'"));		HX_STACK_VAR(_g12,"_g12");
										HX_STACK_LINE(71)
										HX_STACK_DO_THROW(this->error(_g12));
									}
								}
								HX_STACK_LINE(72)
								int _g13 = (i)++;		HX_STACK_VAR(_g13,"_g13");
								HX_STACK_LINE(72)
								Dynamic _to = toArr->__GetItem(_g13);		HX_STACK_VAR(_to,"_to");
								HX_STACK_LINE(73)
								::Reflect_obj::deleteField(_to,(HX_CSTRING("$$$$") + key));
								HX_STACK_LINE(74)
								{
									HX_STACK_LINE(74)
									Dynamic _g14;		HX_STACK_VAR(_g14,"_g14");
									HX_STACK_LINE(74)
									_g14 = (  (((t == null()))) ? Dynamic(null()) : Dynamic(t->__Field(key,true)) );
									HX_STACK_LINE(74)
									Dynamic value1 = (_g14 + value);		HX_STACK_VAR(value1,"value1");
									HX_STACK_LINE(74)
									if (((_to != null()))){
										HX_STACK_LINE(74)
										_to->__SetField(key,value1,true);
									}
								}
							}
;
						}
					}
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(StandardTweenX_obj,_setRelativeTo,(void))

Void StandardTweenX_obj::_setRelativeTo2( ::String key,Dynamic value){
{
		HX_STACK_FRAME("tweenx909.advanced.StandardTweenX","_setRelativeTo2",0x92b94837,"tweenx909.advanced.StandardTweenX._setRelativeTo2","tweenx909/advanced/StandardTweenX.hx",79,0x11736161)
		HX_STACK_THIS(this)
		HX_STACK_ARG(key,"key")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(80)
		this->checkInited();
		HX_STACK_LINE(81)
		{
			HX_STACK_LINE(81)
			::tweenx909::advanced::TweenTypeX _g = this->_type;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(81)
			switch( (int)(_g->__Index())){
				case (int)2: {
					HX_STACK_LINE(81)
					Dynamic _to = (::tweenx909::advanced::TweenTypeX(_g))->__Param(2);		HX_STACK_VAR(_to,"_to");
					HX_STACK_LINE(81)
					Dynamic _from = (::tweenx909::advanced::TweenTypeX(_g))->__Param(1);		HX_STACK_VAR(_from,"_from");
					HX_STACK_LINE(81)
					Dynamic target = (::tweenx909::advanced::TweenTypeX(_g))->__Param(0);		HX_STACK_VAR(target,"target");
					HX_STACK_LINE(82)
					{
						HX_STACK_LINE(83)
						{
							HX_STACK_LINE(83)
							Dynamic _g1 = ::Reflect_obj::field(target,key);		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(83)
							if ((!(::Std_obj::is(_g1,hx::ClassOf< ::Dynamic >())))){
								HX_STACK_LINE(83)
								::Class _g11 = ::Type_obj::getClass(target);		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(83)
								::String _g2 = ::Type_obj::getClassName(_g11);		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(83)
								::String _g3 = (_g2 + HX_CSTRING(" does not have field '"));		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(83)
								::String _g4 = (_g3 + key);		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(83)
								::String _g5 = (_g4 + HX_CSTRING("'"));		HX_STACK_VAR(_g5,"_g5");
								HX_STACK_LINE(83)
								HX_STACK_DO_THROW(this->error(_g5));
							}
						}
						HX_STACK_LINE(84)
						::Reflect_obj::deleteField(_to,key);
						HX_STACK_LINE(85)
						if (((_to != null()))){
							HX_STACK_LINE(85)
							_to->__SetField((HX_CSTRING("$$$$") + key),value,true);
						}
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(81)
					Dynamic toArr = (::tweenx909::advanced::TweenTypeX(_g))->__Param(2);		HX_STACK_VAR(toArr,"toArr");
					HX_STACK_LINE(81)
					Dynamic fromArr = (::tweenx909::advanced::TweenTypeX(_g))->__Param(1);		HX_STACK_VAR(fromArr,"fromArr");
					HX_STACK_LINE(81)
					Dynamic targets = (::tweenx909::advanced::TweenTypeX(_g))->__Param(0);		HX_STACK_VAR(targets,"targets");
					HX_STACK_LINE(86)
					{
						HX_STACK_LINE(87)
						int i = (int)0;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(88)
						for(::cpp::FastIterator_obj< Dynamic > *__it = ::cpp::CreateFastIterator< Dynamic >(targets->__Field(HX_CSTRING("iterator"),true)());  __it->hasNext(); ){
							Dynamic t = __it->next();
							{
								HX_STACK_LINE(89)
								{
									HX_STACK_LINE(89)
									Dynamic _g6 = ::Reflect_obj::field(t,key);		HX_STACK_VAR(_g6,"_g6");
									HX_STACK_LINE(89)
									if ((!(::Std_obj::is(_g6,hx::ClassOf< ::Dynamic >())))){
										HX_STACK_LINE(89)
										::Class _g7 = ::Type_obj::getClass(t);		HX_STACK_VAR(_g7,"_g7");
										HX_STACK_LINE(89)
										::String _g8 = ::Type_obj::getClassName(_g7);		HX_STACK_VAR(_g8,"_g8");
										HX_STACK_LINE(89)
										::String _g9 = (_g8 + HX_CSTRING(" does not have field '"));		HX_STACK_VAR(_g9,"_g9");
										HX_STACK_LINE(89)
										::String _g10 = (_g9 + key);		HX_STACK_VAR(_g10,"_g10");
										HX_STACK_LINE(89)
										::String _g11 = (_g10 + HX_CSTRING("'"));		HX_STACK_VAR(_g11,"_g11");
										HX_STACK_LINE(89)
										HX_STACK_DO_THROW(this->error(_g11));
									}
								}
								HX_STACK_LINE(90)
								int _g12 = (i)++;		HX_STACK_VAR(_g12,"_g12");
								HX_STACK_LINE(90)
								Dynamic _to = toArr->__GetItem(_g12);		HX_STACK_VAR(_to,"_to");
								HX_STACK_LINE(91)
								::Reflect_obj::deleteField(_to,key);
								HX_STACK_LINE(92)
								if (((_to != null()))){
									HX_STACK_LINE(92)
									_to->__SetField((HX_CSTRING("$$$$") + key),value,true);
								}
							}
;
						}
					}
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(StandardTweenX_obj,_setRelativeTo2,(void))

Void StandardTweenX_obj::_initFromTo( Dynamic target,Dynamic _from,Dynamic _to){
{
		HX_STACK_FRAME("tweenx909.advanced.StandardTweenX","_initFromTo",0x0f391d83,"tweenx909.advanced.StandardTweenX._initFromTo","tweenx909/advanced/StandardTweenX.hx",98,0x11736161)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(_from,"_from")
		HX_STACK_ARG(_to,"_to")
		HX_STACK_LINE(99)
		if (((this->_autoFrom == null()))){
			HX_STACK_LINE(99)
			this->_autoFrom = ::tweenx909::TweenX_obj::defaultAutoFrom;
		}
		HX_STACK_LINE(100)
		{
			HX_STACK_LINE(100)
			Dynamic data = null();		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(100)
			{
				HX_STACK_LINE(100)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(100)
				Array< ::String > _g1 = ::Reflect_obj::fields(_to);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(100)
				while((true)){
					HX_STACK_LINE(100)
					if ((!(((_g < _g1->length))))){
						HX_STACK_LINE(100)
						break;
					}
					HX_STACK_LINE(100)
					::String key0 = _g1->__get(_g);		HX_STACK_VAR(key0,"key0");
					HX_STACK_LINE(100)
					++(_g);
					HX_STACK_LINE(100)
					Dynamic _g2;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(100)
					_g2 = (  (((_to == null()))) ? Dynamic(null()) : Dynamic(_to->__Field(key0,true)) );
					HX_STACK_LINE(100)
					if ((!(::Std_obj::is(_g2,hx::ClassOf< ::Float >())))){
						HX_STACK_LINE(100)
						this->_fastMode = false;
					}
					HX_STACK_LINE(100)
					::String _g11 = key0.substr((int)0,(int)4);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(100)
					bool relative = (_g11 == HX_CSTRING("$$$$"));		HX_STACK_VAR(relative,"relative");
					HX_STACK_LINE(100)
					::String key;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(100)
					if ((relative)){
						HX_STACK_LINE(100)
						key = key0.substr((int)4,null());
					}
					else{
						HX_STACK_LINE(100)
						key = key0;
					}
					HX_STACK_LINE(100)
					Dynamic fromValue;		HX_STACK_VAR(fromValue,"fromValue");
					HX_STACK_LINE(100)
					Dynamic toValue;		HX_STACK_VAR(toValue,"toValue");
					HX_STACK_LINE(100)
					toValue = (  (((_to == null()))) ? Dynamic(null()) : Dynamic(_to->__Field(key0,true)) );
					HX_STACK_LINE(100)
					if ((!(::Reflect_obj::hasField(_from,key)))){
						HX_STACK_LINE(100)
						if ((this->_autoFrom)){
							HX_STACK_LINE(100)
							if (((data == null()))){
								struct _Function_7_1{
									inline static Dynamic Block( ){
										HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","tweenx909/advanced/StandardTweenX.hx",100,0x11736161)
										{
											hx::Anon __result = hx::Anon_obj::Create();
											return __result;
										}
										return null();
									}
								};
								HX_STACK_LINE(100)
								data = _Function_7_1::Block();
								HX_STACK_LINE(100)
								Dynamic _g21 = ::tweenx909::TweenX_obj::dictionary->get(target);		HX_STACK_VAR(_g21,"_g21");
								HX_STACK_LINE(100)
								Dynamic _g3;		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(100)
								if (((_g21 != null()))){
									HX_STACK_LINE(100)
									_g3 = ::tweenx909::TweenX_obj::dictionary->get(target);
								}
								else{
									HX_STACK_LINE(100)
									::tweenx909::TweenX_obj::_objCounter = ((int)1 + hx::Mod(::tweenx909::TweenX_obj::_objCounter,(int)33029));
									HX_STACK_LINE(100)
									::tweenx909::TweenX_obj::dictionary->set(target,::tweenx909::TweenX_obj::_objCounter);
									HX_STACK_LINE(100)
									_g3 = ::tweenx909::TweenX_obj::_objCounter;
								}
								HX_STACK_LINE(100)
								Dynamic logs = ::tweenx909::TweenX_obj::_initLog->__GetItem(_g3);		HX_STACK_VAR(logs,"logs");
								HX_STACK_LINE(100)
								if (((logs != null()))){
									HX_STACK_LINE(100)
									int _g22 = (int)0;		HX_STACK_VAR(_g22,"_g22");
									HX_STACK_LINE(100)
									while((true)){
										HX_STACK_LINE(100)
										if ((!(((_g22 < logs->__Field(HX_CSTRING("length"),true)))))){
											HX_STACK_LINE(100)
											break;
										}
										HX_STACK_LINE(100)
										Dynamic log = logs->__GetItem(_g22);		HX_STACK_VAR(log,"log");
										HX_STACK_LINE(100)
										++(_g22);
										HX_STACK_LINE(100)
										if (((log->__Field(HX_CSTRING("target"),true) == target))){
											HX_STACK_LINE(100)
											data = log->__Field(HX_CSTRING("data"),true);
										}
									}
								}
							}
							HX_STACK_LINE(100)
							if ((::Reflect_obj::hasField(data,key))){
								HX_STACK_LINE(100)
								Dynamic _g4;		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(100)
								_g4 = (  (((data == null()))) ? Dynamic(null()) : Dynamic(data->__Field(key,true)) );
								HX_STACK_LINE(100)
								Dynamic _g5 = this->_defaultFrom(_g4,toValue);		HX_STACK_VAR(_g5,"_g5");
								HX_STACK_LINE(100)
								fromValue = _g5;
							}
							else{
								HX_STACK_LINE(100)
								Dynamic _g6;		HX_STACK_VAR(_g6,"_g6");
								HX_STACK_LINE(100)
								_g6 = (  (((target == null()))) ? Dynamic(null()) : Dynamic(target->__Field(key,true)) );
								HX_STACK_LINE(100)
								Dynamic _g7 = this->_defaultFrom(_g6,toValue);		HX_STACK_VAR(_g7,"_g7");
								HX_STACK_LINE(100)
								fromValue = _g7;
							}
						}
						else{
							HX_STACK_LINE(100)
							Dynamic _g8;		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(100)
							_g8 = (  (((target == null()))) ? Dynamic(null()) : Dynamic(target->__Field(key,true)) );
							HX_STACK_LINE(100)
							Dynamic _g9 = this->_defaultFrom(_g8,toValue);		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(100)
							fromValue = _g9;
						}
						HX_STACK_LINE(100)
						if (((_from != null()))){
							HX_STACK_LINE(100)
							_from->__SetField(key,fromValue,true);
						}
					}
					else{
						HX_STACK_LINE(100)
						Dynamic _g10;		HX_STACK_VAR(_g10,"_g10");
						HX_STACK_LINE(100)
						_g10 = (  (((_from == null()))) ? Dynamic(null()) : Dynamic(_from->__Field(key,true)) );
						HX_STACK_LINE(100)
						fromValue = _g10;
					}
					HX_STACK_LINE(100)
					if ((relative)){
						HX_STACK_LINE(100)
						if (((_to != null()))){
							HX_STACK_LINE(100)
							_to->__SetField(key,(toValue + fromValue),true);
						}
						HX_STACK_LINE(100)
						::Reflect_obj::deleteField(_to,key0);
					}
				}
			}
		}
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","tweenx909/advanced/StandardTweenX.hx",102,0x11736161)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(102)
		Dynamic data = _Function_1_1::Block();		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(103)
		Array< ::String > fs = ::Reflect_obj::fields(_from);		HX_STACK_VAR(fs,"fs");
		HX_STACK_LINE(104)
		{
			HX_STACK_LINE(104)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(104)
			while((true)){
				HX_STACK_LINE(104)
				if ((!(((_g < fs->length))))){
					HX_STACK_LINE(104)
					break;
				}
				HX_STACK_LINE(104)
				::String key = fs->__get(_g);		HX_STACK_VAR(key,"key");
				HX_STACK_LINE(104)
				++(_g);
				HX_STACK_LINE(105)
				if ((!(::Reflect_obj::hasField(_to,key)))){
					HX_STACK_LINE(106)
					Dynamic value;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(106)
					value = (  (((_from == null()))) ? Dynamic(null()) : Dynamic(_from->__Field(key,true)) );
					HX_STACK_LINE(106)
					if (((_to != null()))){
						HX_STACK_LINE(106)
						_to->__SetField(key,value,true);
					}
				}
				HX_STACK_LINE(109)
				Float t;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(109)
				{
					HX_STACK_LINE(109)
					bool back = (hx::Mod(this->_repeat,(int)2) == (int)0);		HX_STACK_VAR(back,"back");
					HX_STACK_LINE(109)
					Float t1 = (Float(this->_time) / Float(this->_time));		HX_STACK_VAR(t1,"t1");
					HX_STACK_LINE(109)
					if ((this->_odd)){
						HX_STACK_LINE(109)
						back = !(back);
					}
					HX_STACK_LINE(109)
					if ((this->_inverted)){
						HX_STACK_LINE(109)
						t1 = ((int)1 - t1);
					}
					HX_STACK_LINE(109)
					if ((back)){
						HX_STACK_LINE(109)
						if ((this->_yoyo)){
							HX_STACK_LINE(109)
							t1 = ((int)1 - t1);
						}
						HX_STACK_LINE(109)
						Float _g11 = this->_ease(t1);		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(109)
						t1 = _g11;
						HX_STACK_LINE(109)
						if ((this->_zigzag)){
							HX_STACK_LINE(109)
							t1 = ((int)1 - t1);
						}
					}
					else{
						HX_STACK_LINE(109)
						Float _g12 = this->_ease(t1);		HX_STACK_VAR(_g12,"_g12");
						HX_STACK_LINE(109)
						t1 = _g12;
					}
					HX_STACK_LINE(109)
					t = t1;
				}
				HX_STACK_LINE(110)
				{
					HX_STACK_LINE(110)
					Dynamic value;		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(110)
					{
						HX_STACK_LINE(110)
						Dynamic _from1;		HX_STACK_VAR(_from1,"_from1");
						HX_STACK_LINE(110)
						_from1 = (  (((_from == null()))) ? Dynamic(null()) : Dynamic(_from->__Field(key,true)) );
						HX_STACK_LINE(110)
						Dynamic _to1;		HX_STACK_VAR(_to1,"_to1");
						HX_STACK_LINE(110)
						_to1 = (  (((_to == null()))) ? Dynamic(null()) : Dynamic(_to->__Field(key,true)) );
						HX_STACK_LINE(110)
						Float t2 = ((int)1 - t);		HX_STACK_VAR(t2,"t2");
						HX_STACK_LINE(110)
						if ((::Std_obj::is(_to1,hx::ClassOf< ::Float >()))){
							HX_STACK_LINE(110)
							Dynamic d = ((_from1 * t2) + (_to1 * t));		HX_STACK_VAR(d,"d");
							HX_STACK_LINE(110)
							value = d;
						}
						else{
							HX_STACK_LINE(110)
							int i = (int)0;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(110)
							int l = ::tweenx909::TweenX_obj::_rules->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(l,"l");
							HX_STACK_LINE(110)
							Dynamic f;		HX_STACK_VAR(f,"f");
							HX_STACK_LINE(110)
							Dynamic result = null();		HX_STACK_VAR(result,"result");
							HX_STACK_LINE(110)
							bool ok = false;		HX_STACK_VAR(ok,"ok");
							HX_STACK_LINE(110)
							while((true)){
								HX_STACK_LINE(110)
								if ((!(((i < l))))){
									HX_STACK_LINE(110)
									break;
								}
								HX_STACK_LINE(110)
								if ((::Std_obj::is(_to1,(f = ::tweenx909::TweenX_obj::_rules->__GetItem((i)++))->__Field(HX_CSTRING("inputClass"),true)))){
									HX_STACK_LINE(110)
									ok = true;
									HX_STACK_LINE(110)
									Dynamic _g13 = f->__Field(HX_CSTRING("calc"),true)(_from1,_to1,t,t2,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g13,"_g13");
									HX_STACK_LINE(110)
									result = _g13;
									HX_STACK_LINE(110)
									break;
								}
							}
							HX_STACK_LINE(110)
							if ((!(ok))){
								HX_STACK_LINE(110)
								::Class _g14 = ::Type_obj::getClass(_to1);		HX_STACK_VAR(_g14,"_g14");
								HX_STACK_LINE(110)
								::String _g15 = ::Type_obj::getClassName(_g14);		HX_STACK_VAR(_g15,"_g15");
								HX_STACK_LINE(110)
								::String _g16 = (HX_CSTRING("The tween rule for ") + _g15);		HX_STACK_VAR(_g16,"_g16");
								HX_STACK_LINE(110)
								::String _g17 = (_g16 + HX_CSTRING(" is not defined"));		HX_STACK_VAR(_g17,"_g17");
								HX_STACK_LINE(110)
								HX_STACK_DO_THROW(this->error(_g17));
							}
							HX_STACK_LINE(110)
							value = result;
						}
					}
					HX_STACK_LINE(110)
					if (((data != null()))){
						HX_STACK_LINE(110)
						data->__SetField(key,value,true);
					}
				}
			}
		}
		HX_STACK_LINE(113)
		Dynamic _g18 = ::tweenx909::TweenX_obj::dictionary->get(target);		HX_STACK_VAR(_g18,"_g18");
		HX_STACK_LINE(113)
		Dynamic id;		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(113)
		if (((_g18 != null()))){
			HX_STACK_LINE(113)
			id = ::tweenx909::TweenX_obj::dictionary->get(target);
		}
		else{
			HX_STACK_LINE(113)
			::tweenx909::TweenX_obj::_objCounter = ((int)1 + hx::Mod(::tweenx909::TweenX_obj::_objCounter,(int)33029));
			HX_STACK_LINE(113)
			::tweenx909::TweenX_obj::dictionary->set(target,::tweenx909::TweenX_obj::_objCounter);
			HX_STACK_LINE(113)
			id = ::tweenx909::TweenX_obj::_objCounter;
		}
		HX_STACK_LINE(114)
		if (((::tweenx909::TweenX_obj::_initLog->__GetItem(id) == null()))){
			struct _Function_2_1{
				inline static Dynamic Block( Dynamic &target,Dynamic &data){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","tweenx909/advanced/StandardTweenX.hx",115,0x11736161)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						__result->Add(HX_CSTRING("target") , target,false);
						__result->Add(HX_CSTRING("data") , data,false);
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(115)
			hx::IndexRef((::tweenx909::TweenX_obj::_initLog).mPtr,id) = Dynamic( Array_obj<Dynamic>::__new().Add(_Function_2_1::Block(target,data)));
		}
		else{
			HX_STACK_LINE(117)
			bool flag = false;		HX_STACK_VAR(flag,"flag");
			HX_STACK_LINE(118)
			{
				HX_STACK_LINE(118)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(118)
				Dynamic _g1 = ::tweenx909::TweenX_obj::_initLog->__GetItem(id);		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(118)
				while((true)){
					HX_STACK_LINE(118)
					if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
						HX_STACK_LINE(118)
						break;
					}
					HX_STACK_LINE(118)
					Dynamic log = _g1->__GetItem(_g);		HX_STACK_VAR(log,"log");
					HX_STACK_LINE(118)
					++(_g);
					HX_STACK_LINE(119)
					if (((log->__Field(HX_CSTRING("target"),true) == target))){
						HX_STACK_LINE(120)
						{
							HX_STACK_LINE(120)
							int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(120)
							Array< ::String > _g3 = ::Reflect_obj::fields(data);		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(120)
							while((true)){
								HX_STACK_LINE(120)
								if ((!(((_g2 < _g3->length))))){
									HX_STACK_LINE(120)
									break;
								}
								HX_STACK_LINE(120)
								::String key = _g3->__get(_g2);		HX_STACK_VAR(key,"key");
								HX_STACK_LINE(120)
								++(_g2);
								HX_STACK_LINE(120)
								{
									HX_STACK_LINE(120)
									Dynamic o = log->__Field(HX_CSTRING("data"),true);		HX_STACK_VAR(o,"o");
									HX_STACK_LINE(120)
									Dynamic value;		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(120)
									value = (  (((data == null()))) ? Dynamic(null()) : Dynamic(data->__Field(key,true)) );
									HX_STACK_LINE(120)
									if (((o != null()))){
										HX_STACK_LINE(120)
										o->__SetField(key,value,true);
									}
								}
							}
						}
						HX_STACK_LINE(121)
						flag = true;
						HX_STACK_LINE(122)
						break;
					}
				}
			}
			HX_STACK_LINE(125)
			if ((!(flag))){
				struct _Function_3_1{
					inline static Dynamic Block( Dynamic &target,Dynamic &data){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","tweenx909/advanced/StandardTweenX.hx",126,0x11736161)
						{
							hx::Anon __result = hx::Anon_obj::Create();
							__result->Add(HX_CSTRING("target") , target,false);
							__result->Add(HX_CSTRING("data") , data,false);
							return __result;
						}
						return null();
					}
				};
				HX_STACK_LINE(126)
				::tweenx909::TweenX_obj::_initLog->__GetItem(id)->__Field(HX_CSTRING("push"),true)(_Function_3_1::Block(target,data));
			}
		}
	}
return null();
}


Void StandardTweenX_obj::_initFrom( Dynamic target,Dynamic _from,Dynamic _to){
{
		HX_STACK_FRAME("tweenx909.advanced.StandardTweenX","_initFrom",0x199489e8,"tweenx909.advanced.StandardTweenX._initFrom","tweenx909/advanced/StandardTweenX.hx",131,0x11736161)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(_from,"_from")
		HX_STACK_ARG(_to,"_to")
		HX_STACK_LINE(132)
		Dynamic data = null();		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(133)
		{
			HX_STACK_LINE(133)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(133)
			Array< ::String > _g1 = ::Reflect_obj::fields(_to);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(133)
			while((true)){
				HX_STACK_LINE(133)
				if ((!(((_g < _g1->length))))){
					HX_STACK_LINE(133)
					break;
				}
				HX_STACK_LINE(133)
				::String key0 = _g1->__get(_g);		HX_STACK_VAR(key0,"key0");
				HX_STACK_LINE(133)
				++(_g);
				HX_STACK_LINE(134)
				Dynamic _g2;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(134)
				_g2 = (  (((_to == null()))) ? Dynamic(null()) : Dynamic(_to->__Field(key0,true)) );
				HX_STACK_LINE(134)
				if ((!(::Std_obj::is(_g2,hx::ClassOf< ::Float >())))){
					HX_STACK_LINE(134)
					this->_fastMode = false;
				}
				HX_STACK_LINE(136)
				::String _g11 = key0.substr((int)0,(int)4);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(136)
				bool relative = (_g11 == HX_CSTRING("$$$$"));		HX_STACK_VAR(relative,"relative");
				HX_STACK_LINE(137)
				::String key;		HX_STACK_VAR(key,"key");
				HX_STACK_LINE(137)
				if ((relative)){
					HX_STACK_LINE(137)
					key = key0.substr((int)4,null());
				}
				else{
					HX_STACK_LINE(137)
					key = key0;
				}
				HX_STACK_LINE(139)
				Dynamic fromValue;		HX_STACK_VAR(fromValue,"fromValue");
				HX_STACK_LINE(139)
				Dynamic toValue;		HX_STACK_VAR(toValue,"toValue");
				HX_STACK_LINE(139)
				toValue = (  (((_to == null()))) ? Dynamic(null()) : Dynamic(_to->__Field(key0,true)) );
				HX_STACK_LINE(140)
				if ((!(::Reflect_obj::hasField(_from,key)))){
					HX_STACK_LINE(141)
					if ((this->_autoFrom)){
						HX_STACK_LINE(142)
						if (((data == null()))){
							struct _Function_6_1{
								inline static Dynamic Block( ){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","tweenx909/advanced/StandardTweenX.hx",143,0x11736161)
									{
										hx::Anon __result = hx::Anon_obj::Create();
										return __result;
									}
									return null();
								}
							};
							HX_STACK_LINE(143)
							data = _Function_6_1::Block();
							HX_STACK_LINE(144)
							Dynamic _g21 = ::tweenx909::TweenX_obj::dictionary->get(target);		HX_STACK_VAR(_g21,"_g21");
							HX_STACK_LINE(144)
							Dynamic _g3;		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(144)
							if (((_g21 != null()))){
								HX_STACK_LINE(144)
								_g3 = ::tweenx909::TweenX_obj::dictionary->get(target);
							}
							else{
								HX_STACK_LINE(144)
								::tweenx909::TweenX_obj::_objCounter = ((int)1 + hx::Mod(::tweenx909::TweenX_obj::_objCounter,(int)33029));
								HX_STACK_LINE(144)
								::tweenx909::TweenX_obj::dictionary->set(target,::tweenx909::TweenX_obj::_objCounter);
								HX_STACK_LINE(144)
								_g3 = ::tweenx909::TweenX_obj::_objCounter;
							}
							HX_STACK_LINE(144)
							Dynamic logs = ::tweenx909::TweenX_obj::_initLog->__GetItem(_g3);		HX_STACK_VAR(logs,"logs");
							HX_STACK_LINE(145)
							if (((logs != null()))){
								HX_STACK_LINE(146)
								int _g22 = (int)0;		HX_STACK_VAR(_g22,"_g22");
								HX_STACK_LINE(146)
								while((true)){
									HX_STACK_LINE(146)
									if ((!(((_g22 < logs->__Field(HX_CSTRING("length"),true)))))){
										HX_STACK_LINE(146)
										break;
									}
									HX_STACK_LINE(146)
									Dynamic log = logs->__GetItem(_g22);		HX_STACK_VAR(log,"log");
									HX_STACK_LINE(146)
									++(_g22);
									HX_STACK_LINE(147)
									if (((log->__Field(HX_CSTRING("target"),true) == target))){
										HX_STACK_LINE(147)
										data = log->__Field(HX_CSTRING("data"),true);
									}
								}
							}
						}
						HX_STACK_LINE(150)
						if ((::Reflect_obj::hasField(data,key))){
							HX_STACK_LINE(151)
							Dynamic _g4;		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(151)
							_g4 = (  (((data == null()))) ? Dynamic(null()) : Dynamic(data->__Field(key,true)) );
							HX_STACK_LINE(151)
							Dynamic _g5 = this->_defaultFrom(_g4,toValue);		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(151)
							fromValue = _g5;
						}
						else{
							HX_STACK_LINE(153)
							Dynamic _g6;		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(153)
							_g6 = (  (((target == null()))) ? Dynamic(null()) : Dynamic(target->__Field(key,true)) );
							HX_STACK_LINE(153)
							Dynamic _g7 = this->_defaultFrom(_g6,toValue);		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(153)
							fromValue = _g7;
						}
					}
					else{
						HX_STACK_LINE(156)
						Dynamic _g8;		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(156)
						_g8 = (  (((target == null()))) ? Dynamic(null()) : Dynamic(target->__Field(key,true)) );
						HX_STACK_LINE(156)
						Dynamic _g9 = this->_defaultFrom(_g8,toValue);		HX_STACK_VAR(_g9,"_g9");
						HX_STACK_LINE(156)
						fromValue = _g9;
					}
					HX_STACK_LINE(158)
					if (((_from != null()))){
						HX_STACK_LINE(158)
						_from->__SetField(key,fromValue,true);
					}
				}
				else{
					HX_STACK_LINE(160)
					Dynamic _g10;		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(160)
					_g10 = (  (((_from == null()))) ? Dynamic(null()) : Dynamic(_from->__Field(key,true)) );
					HX_STACK_LINE(160)
					fromValue = _g10;
				}
				HX_STACK_LINE(163)
				if ((relative)){
					HX_STACK_LINE(164)
					if (((_to != null()))){
						HX_STACK_LINE(164)
						_to->__SetField(key,(toValue + fromValue),true);
					}
					HX_STACK_LINE(165)
					::Reflect_obj::deleteField(_to,key0);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(StandardTweenX_obj,_initFrom,(void))

Dynamic StandardTweenX_obj::_defaultFrom( Dynamic value,Dynamic _to){
	HX_STACK_FRAME("tweenx909.advanced.StandardTweenX","_defaultFrom",0x47d4ae3d,"tweenx909.advanced.StandardTweenX._defaultFrom","tweenx909/advanced/StandardTweenX.hx",170,0x11736161)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_ARG(_to,"_to")
	HX_STACK_LINE(171)
	if ((::Std_obj::is(_to,hx::ClassOf< ::Float >()))){
		HX_STACK_LINE(171)
		return value;
	}
	HX_STACK_LINE(172)
	{
		HX_STACK_LINE(172)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(172)
		Dynamic _g1 = ::tweenx909::TweenX_obj::_rules;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(172)
		while((true)){
			HX_STACK_LINE(172)
			if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
				HX_STACK_LINE(172)
				break;
			}
			HX_STACK_LINE(172)
			Dynamic r = _g1->__GetItem(_g);		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(172)
			++(_g);
			HX_STACK_LINE(173)
			if ((::Std_obj::is(_to,r->__Field(HX_CSTRING("inputClass"),true)))){
				HX_STACK_LINE(174)
				return r->__Field(HX_CSTRING("defaultFrom"),true)(value,_to,hx::ObjectPtr<OBJ_>(this));
			}
		}
	}
	HX_STACK_LINE(177)
	::Class _g = ::Type_obj::getClass(_to);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(177)
	::String _g1 = ::Type_obj::getClassName(_g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(177)
	::String _g2 = (HX_CSTRING("The tween rule for ") + _g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(177)
	::String _g3 = (_g2 + HX_CSTRING(" is not defined"));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(177)
	HX_STACK_DO_THROW(this->error(_g3));
	HX_STACK_LINE(178)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(StandardTweenX_obj,_defaultFrom,return )

::tweenx909::TweenX StandardTweenX_obj::play( ){
	HX_STACK_FRAME("tweenx909.advanced.StandardTweenX","play",0xaccc3665,"tweenx909.advanced.StandardTweenX.play","tweenx909/advanced/StandardTweenX.hx",182,0x11736161)
	HX_STACK_THIS(this)
	HX_STACK_LINE(183)
	this->super::play();
	HX_STACK_LINE(184)
	return hx::ObjectPtr<OBJ_>(this);
}


::tweenx909::TweenX StandardTweenX_obj::stop( ){
	HX_STACK_FRAME("tweenx909.advanced.StandardTweenX","stop",0xaecdf873,"tweenx909.advanced.StandardTweenX.stop","tweenx909/advanced/StandardTweenX.hx",186,0x11736161)
	HX_STACK_THIS(this)
	HX_STACK_LINE(187)
	this->super::stop();
	HX_STACK_LINE(188)
	return hx::ObjectPtr<OBJ_>(this);
}


::tweenx909::TweenX StandardTweenX_obj::update( Float time){
	HX_STACK_FRAME("tweenx909.advanced.StandardTweenX","update",0xf05f4cba,"tweenx909.advanced.StandardTweenX.update","tweenx909/advanced/StandardTweenX.hx",190,0x11736161)
	HX_STACK_THIS(this)
	HX_STACK_ARG(time,"time")
	HX_STACK_LINE(191)
	this->super::update(time);
	HX_STACK_LINE(192)
	return hx::ObjectPtr<OBJ_>(this);
}


::tweenx909::TweenX StandardTweenX_obj::_goto( hx::Null< Float >  __o_time,hx::Null< bool >  __o_andPlay){
Float time = __o_time.Default(0);
bool andPlay = __o_andPlay.Default(false);
	HX_STACK_FRAME("tweenx909.advanced.StandardTweenX","goto",0xa6dba214,"tweenx909.advanced.StandardTweenX.goto","tweenx909/advanced/StandardTweenX.hx",194,0x11736161)
	HX_STACK_THIS(this)
	HX_STACK_ARG(time,"time")
	HX_STACK_ARG(andPlay,"andPlay")
{
		HX_STACK_LINE(195)
		this->super::_goto(time,andPlay);
		HX_STACK_LINE(196)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


::tweenx909::TweenX StandardTweenX_obj::onDelay( Dynamic handler){
	HX_STACK_FRAME("tweenx909.advanced.StandardTweenX","onDelay",0x32988a13,"tweenx909.advanced.StandardTweenX.onDelay","tweenx909/advanced/StandardTweenX.hx",198,0x11736161)
	HX_STACK_THIS(this)
	HX_STACK_ARG(handler,"handler")
	HX_STACK_LINE(199)
	this->super::onDelay(handler);
	HX_STACK_LINE(200)
	return hx::ObjectPtr<OBJ_>(this);
}


::tweenx909::TweenX StandardTweenX_obj::onFinish( Dynamic handler){
	HX_STACK_FRAME("tweenx909.advanced.StandardTweenX","onFinish",0x2e89cbc3,"tweenx909.advanced.StandardTweenX.onFinish","tweenx909/advanced/StandardTweenX.hx",202,0x11736161)
	HX_STACK_THIS(this)
	HX_STACK_ARG(handler,"handler")
	HX_STACK_LINE(203)
	this->super::onFinish(handler);
	HX_STACK_LINE(204)
	return hx::ObjectPtr<OBJ_>(this);
}


::tweenx909::TweenX StandardTweenX_obj::onFoot( Dynamic handler){
	HX_STACK_FRAME("tweenx909.advanced.StandardTweenX","onFoot",0x4fa42e1e,"tweenx909.advanced.StandardTweenX.onFoot","tweenx909/advanced/StandardTweenX.hx",206,0x11736161)
	HX_STACK_THIS(this)
	HX_STACK_ARG(handler,"handler")
	HX_STACK_LINE(207)
	this->super::onFoot(handler);
	HX_STACK_LINE(208)
	return hx::ObjectPtr<OBJ_>(this);
}


::tweenx909::TweenX StandardTweenX_obj::onHead( Dynamic handler){
	HX_STACK_FRAME("tweenx909.advanced.StandardTweenX","onHead",0x50eef890,"tweenx909.advanced.StandardTweenX.onHead","tweenx909/advanced/StandardTweenX.hx",210,0x11736161)
	HX_STACK_THIS(this)
	HX_STACK_ARG(handler,"handler")
	HX_STACK_LINE(211)
	this->super::onHead(handler);
	HX_STACK_LINE(212)
	return hx::ObjectPtr<OBJ_>(this);
}


::tweenx909::TweenX StandardTweenX_obj::onInterval( Dynamic handler){
	HX_STACK_FRAME("tweenx909.advanced.StandardTweenX","onInterval",0xd0d4c0b5,"tweenx909.advanced.StandardTweenX.onInterval","tweenx909/advanced/StandardTweenX.hx",214,0x11736161)
	HX_STACK_THIS(this)
	HX_STACK_ARG(handler,"handler")
	HX_STACK_LINE(215)
	this->super::onInterval(handler);
	HX_STACK_LINE(216)
	return hx::ObjectPtr<OBJ_>(this);
}


::tweenx909::TweenX StandardTweenX_obj::onStop( Dynamic handler){
	HX_STACK_FRAME("tweenx909.advanced.StandardTweenX","onStop",0x583fbf72,"tweenx909.advanced.StandardTweenX.onStop","tweenx909/advanced/StandardTweenX.hx",218,0x11736161)
	HX_STACK_THIS(this)
	HX_STACK_ARG(handler,"handler")
	HX_STACK_LINE(219)
	this->super::onStop(handler);
	HX_STACK_LINE(220)
	return hx::ObjectPtr<OBJ_>(this);
}


::tweenx909::TweenX StandardTweenX_obj::onPlay( Dynamic handler){
	HX_STACK_FRAME("tweenx909.advanced.StandardTweenX","onPlay",0x563dfd64,"tweenx909.advanced.StandardTweenX.onPlay","tweenx909/advanced/StandardTweenX.hx",222,0x11736161)
	HX_STACK_THIS(this)
	HX_STACK_ARG(handler,"handler")
	HX_STACK_LINE(223)
	this->super::onPlay(handler);
	HX_STACK_LINE(224)
	return hx::ObjectPtr<OBJ_>(this);
}


::tweenx909::TweenX StandardTweenX_obj::onRepeat( Dynamic handler){
	HX_STACK_FRAME("tweenx909.advanced.StandardTweenX","onRepeat",0xae8722cb,"tweenx909.advanced.StandardTweenX.onRepeat","tweenx909/advanced/StandardTweenX.hx",226,0x11736161)
	HX_STACK_THIS(this)
	HX_STACK_ARG(handler,"handler")
	HX_STACK_LINE(227)
	this->super::onRepeat(handler);
	HX_STACK_LINE(228)
	return hx::ObjectPtr<OBJ_>(this);
}


::tweenx909::TweenX StandardTweenX_obj::onRest( Dynamic handler){
	HX_STACK_FRAME("tweenx909.advanced.StandardTweenX","onRest",0x578b2a84,"tweenx909.advanced.StandardTweenX.onRest","tweenx909/advanced/StandardTweenX.hx",230,0x11736161)
	HX_STACK_THIS(this)
	HX_STACK_ARG(handler,"handler")
	HX_STACK_LINE(231)
	this->super::onRest(handler);
	HX_STACK_LINE(232)
	return hx::ObjectPtr<OBJ_>(this);
}


::tweenx909::TweenX StandardTweenX_obj::onUpdate( Dynamic handler){
	HX_STACK_FRAME("tweenx909.advanced.StandardTweenX","onUpdate",0x2f101179,"tweenx909.advanced.StandardTweenX.onUpdate","tweenx909/advanced/StandardTweenX.hx",234,0x11736161)
	HX_STACK_THIS(this)
	HX_STACK_ARG(handler,"handler")
	HX_STACK_LINE(235)
	this->super::onUpdate(handler);
	HX_STACK_LINE(236)
	return hx::ObjectPtr<OBJ_>(this);
}


::tweenx909::TweenX StandardTweenX_obj::addEventListener( ::tweenx909::EventX type,Dynamic _tmp_listener){
	HX_STACK_FRAME("tweenx909.advanced.StandardTweenX","addEventListener",0x04b979be,"tweenx909.advanced.StandardTweenX.addEventListener","tweenx909/advanced/StandardTweenX.hx",238,0x11736161)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(_tmp_listener,"_tmp_listener")
	HX_STACK_LINE(239)
	Dynamic listener = _tmp_listener;		HX_STACK_VAR(listener,"listener");
	HX_STACK_LINE(239)
	{
		HX_STACK_LINE(239)
		int i = type->__Index();		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(239)
		Dynamic arr;		HX_STACK_VAR(arr,"arr");
		HX_STACK_LINE(239)
		if (((this->_eventListeners->__GetItem(i) == null()))){
			HX_STACK_LINE(239)
			arr = hx::IndexRef((this->_eventListeners).mPtr,i) = Dynamic( Array_obj<Dynamic>::__new());
		}
		else{
			HX_STACK_LINE(239)
			arr = this->_eventListeners->__GetItem(i);
		}
		HX_STACK_LINE(239)
		if ((!(::Lambda_obj::has(arr,listener)))){
			HX_STACK_LINE(239)
			arr->__Field(HX_CSTRING("push"),true)(listener);
		}
	}
	HX_STACK_LINE(240)
	return hx::ObjectPtr<OBJ_>(this);
}


::tweenx909::TweenX StandardTweenX_obj::removeEventListener( ::tweenx909::EventX type,Dynamic _tmp_listener){
	HX_STACK_FRAME("tweenx909.advanced.StandardTweenX","removeEventListener",0xf0cea679,"tweenx909.advanced.StandardTweenX.removeEventListener","tweenx909/advanced/StandardTweenX.hx",242,0x11736161)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(_tmp_listener,"_tmp_listener")
	HX_STACK_LINE(243)
	Dynamic listener = _tmp_listener;		HX_STACK_VAR(listener,"listener");
	HX_STACK_LINE(243)
	{
		HX_STACK_LINE(243)
		int i = type->__Index();		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(243)
		if (((this->_eventListeners->__GetItem(i) != null()))){
			HX_STACK_LINE(243)
			this->_eventListeners->__GetItem(i)->__Field(HX_CSTRING("remove"),true)(listener);
		}
	}
	HX_STACK_LINE(244)
	return hx::ObjectPtr<OBJ_>(this);
}


::tweenx909::TweenX StandardTweenX_obj::time( Float value){
	HX_STACK_FRAME("tweenx909.advanced.StandardTweenX","time",0xaf6ed47e,"tweenx909.advanced.StandardTweenX.time","tweenx909/advanced/StandardTweenX.hx",250,0x11736161)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(251)
	this->super::time(value);
	HX_STACK_LINE(252)
	return hx::ObjectPtr<OBJ_>(this);
}


::tweenx909::TweenX StandardTweenX_obj::ease( Dynamic value){
	HX_STACK_FRAME("tweenx909.advanced.StandardTweenX","ease",0xa57e945f,"tweenx909.advanced.StandardTweenX.ease","tweenx909/advanced/StandardTweenX.hx",254,0x11736161)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(255)
	this->super::ease(value);
	HX_STACK_LINE(256)
	return hx::ObjectPtr<OBJ_>(this);
}


::tweenx909::TweenX StandardTweenX_obj::delay( Float value){
	HX_STACK_FRAME("tweenx909.advanced.StandardTweenX","delay",0x987c31f2,"tweenx909.advanced.StandardTweenX.delay","tweenx909/advanced/StandardTweenX.hx",258,0x11736161)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(259)
	this->super::delay(value);
	HX_STACK_LINE(260)
	return hx::ObjectPtr<OBJ_>(this);
}


::tweenx909::TweenX StandardTweenX_obj::rest( Float value){
	HX_STACK_FRAME("tweenx909.advanced.StandardTweenX","rest",0xae196385,"tweenx909.advanced.StandardTweenX.rest","tweenx909/advanced/StandardTweenX.hx",262,0x11736161)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(263)
	this->super::rest(value);
	HX_STACK_LINE(264)
	return hx::ObjectPtr<OBJ_>(this);
}


::tweenx909::TweenX StandardTweenX_obj::interval( Float value){
	HX_STACK_FRAME("tweenx909.advanced.StandardTweenX","interval",0xf0da0e36,"tweenx909.advanced.StandardTweenX.interval","tweenx909/advanced/StandardTweenX.hx",266,0x11736161)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(267)
	this->super::interval(value);
	HX_STACK_LINE(268)
	return hx::ObjectPtr<OBJ_>(this);
}


::tweenx909::TweenX StandardTweenX_obj::repeat( hx::Null< int >  __o_value){
int value = __o_value.Default(1);
	HX_STACK_FRAME("tweenx909.advanced.StandardTweenX","repeat",0x6fd65e0c,"tweenx909.advanced.StandardTweenX.repeat","tweenx909/advanced/StandardTweenX.hx",270,0x11736161)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
{
		HX_STACK_LINE(271)
		this->super::repeat(value);
		HX_STACK_LINE(272)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


::tweenx909::TweenX StandardTweenX_obj::yoyo( hx::Null< bool >  __o_value){
bool value = __o_value.Default(true);
	HX_STACK_FRAME("tweenx909.advanced.StandardTweenX","yoyo",0xb2c17d9d,"tweenx909.advanced.StandardTweenX.yoyo","tweenx909/advanced/StandardTweenX.hx",274,0x11736161)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
{
		HX_STACK_LINE(275)
		this->super::yoyo(value);
		HX_STACK_LINE(276)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


::tweenx909::TweenX StandardTweenX_obj::zigzag( hx::Null< bool >  __o_value){
bool value = __o_value.Default(true);
	HX_STACK_FRAME("tweenx909.advanced.StandardTweenX","zigzag",0xea6896b9,"tweenx909.advanced.StandardTweenX.zigzag","tweenx909/advanced/StandardTweenX.hx",278,0x11736161)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
{
		HX_STACK_LINE(279)
		this->super::zigzag(value);
		HX_STACK_LINE(280)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


::tweenx909::TweenX StandardTweenX_obj::autoPlay( hx::Null< bool >  __o_value){
bool value = __o_value.Default(true);
	HX_STACK_FRAME("tweenx909.advanced.StandardTweenX","autoPlay",0xf5ddb1f4,"tweenx909.advanced.StandardTweenX.autoPlay","tweenx909/advanced/StandardTweenX.hx",282,0x11736161)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
{
		HX_STACK_LINE(283)
		this->super::autoPlay(value);
		HX_STACK_LINE(284)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


::tweenx909::TweenX StandardTweenX_obj::setTimeScale( hx::Null< Float >  __o_value){
Float value = __o_value.Default(0);
	HX_STACK_FRAME("tweenx909.advanced.StandardTweenX","setTimeScale",0x1e58c4ac,"tweenx909.advanced.StandardTweenX.setTimeScale","tweenx909/advanced/StandardTweenX.hx",286,0x11736161)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
{
		HX_STACK_LINE(287)
		this->super::setTimeScale(value);
		HX_STACK_LINE(288)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


::tweenx909::TweenX StandardTweenX_obj::skip( hx::Null< Float >  __o_delay){
Float delay = __o_delay.Default(0);
	HX_STACK_FRAME("tweenx909.advanced.StandardTweenX","skip",0xaec71ef0,"tweenx909.advanced.StandardTweenX.skip","tweenx909/advanced/StandardTweenX.hx",290,0x11736161)
	HX_STACK_THIS(this)
	HX_STACK_ARG(delay,"delay")
{
		HX_STACK_LINE(291)
		this->super::skip(null());
		HX_STACK_LINE(292)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


::tweenx909::advanced::StandardTweenX StandardTweenX_obj::autoFrom( hx::Null< bool >  __o_value){
bool value = __o_value.Default(true);
	HX_STACK_FRAME("tweenx909.advanced.StandardTweenX","autoFrom",0xef46296a,"tweenx909.advanced.StandardTweenX.autoFrom","tweenx909/advanced/StandardTweenX.hx",294,0x11736161)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
{
		HX_STACK_LINE(295)
		this->checkInited();
		HX_STACK_LINE(296)
		this->_autoFrom = value;
		HX_STACK_LINE(297)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC1(StandardTweenX_obj,autoFrom,return )

Dynamic StandardTweenX_obj::clone( Dynamic obj){
	HX_STACK_FRAME("tweenx909.advanced.StandardTweenX","clone",0x09b86dcc,"tweenx909.advanced.StandardTweenX.clone","tweenx909/advanced/StandardTweenX.hx",26,0x11736161)
	HX_STACK_ARG(obj,"obj")
	struct _Function_1_1{
		inline static Dynamic Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","tweenx909/advanced/StandardTweenX.hx",27,0x11736161)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(27)
	Dynamic result = _Function_1_1::Block();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(28)
	{
		HX_STACK_LINE(28)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(28)
		Array< ::String > _g1 = ::Reflect_obj::fields(obj);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(28)
		while((true)){
			HX_STACK_LINE(28)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(28)
				break;
			}
			HX_STACK_LINE(28)
			::String key = _g1->__get(_g);		HX_STACK_VAR(key,"key");
			HX_STACK_LINE(28)
			++(_g);
			HX_STACK_LINE(28)
			Dynamic value;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(28)
			value = (  (((obj == null()))) ? Dynamic(null()) : Dynamic(obj->__Field(key,true)) );
			HX_STACK_LINE(28)
			if (((result != null()))){
				HX_STACK_LINE(28)
				result->__SetField(key,value,true);
			}
		}
	}
	HX_STACK_LINE(29)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(StandardTweenX_obj,clone,return )


StandardTweenX_obj::StandardTweenX_obj()
{
}

void StandardTweenX_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StandardTweenX);
	HX_MARK_MEMBER_NAME(_autoFrom,"_autoFrom");
	::tweenx909::TweenX_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StandardTweenX_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_autoFrom,"_autoFrom");
	::tweenx909::TweenX_obj::__Visit(HX_VISIT_ARG);
}

Dynamic StandardTweenX_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
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
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"delay") ) { return delay_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_setTo") ) { return _setTo_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"onFoot") ) { return onFoot_dyn(); }
		if (HX_FIELD_EQ(inName,"onHead") ) { return onHead_dyn(); }
		if (HX_FIELD_EQ(inName,"onStop") ) { return onStop_dyn(); }
		if (HX_FIELD_EQ(inName,"onPlay") ) { return onPlay_dyn(); }
		if (HX_FIELD_EQ(inName,"onRest") ) { return onRest_dyn(); }
		if (HX_FIELD_EQ(inName,"repeat") ) { return repeat_dyn(); }
		if (HX_FIELD_EQ(inName,"zigzag") ) { return zigzag_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onDelay") ) { return onDelay_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onFinish") ) { return onFinish_dyn(); }
		if (HX_FIELD_EQ(inName,"onRepeat") ) { return onRepeat_dyn(); }
		if (HX_FIELD_EQ(inName,"onUpdate") ) { return onUpdate_dyn(); }
		if (HX_FIELD_EQ(inName,"interval") ) { return interval_dyn(); }
		if (HX_FIELD_EQ(inName,"autoPlay") ) { return autoPlay_dyn(); }
		if (HX_FIELD_EQ(inName,"autoFrom") ) { return autoFrom_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_autoFrom") ) { return _autoFrom; }
		if (HX_FIELD_EQ(inName,"_initFrom") ) { return _initFrom_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"checkField") ) { return checkField_dyn(); }
		if (HX_FIELD_EQ(inName,"_getTarget") ) { return _getTarget_dyn(); }
		if (HX_FIELD_EQ(inName,"onInterval") ) { return onInterval_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_initFromTo") ) { return _initFromTo_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_defaultFrom") ) { return _defaultFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"setTimeScale") ) { return setTimeScale_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_setRelativeTo") ) { return _setRelativeTo_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_setRelativeTo2") ) { return _setRelativeTo2_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addEventListener") ) { return addEventListener_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"removeEventListener") ) { return removeEventListener_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StandardTweenX_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_autoFrom") ) { _autoFrom=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StandardTweenX_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_autoFrom"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("clone"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(StandardTweenX_obj,_autoFrom),HX_CSTRING("_autoFrom")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_autoFrom"),
	HX_CSTRING("checkField"),
	HX_CSTRING("_getTarget"),
	HX_CSTRING("_setTo"),
	HX_CSTRING("_setRelativeTo"),
	HX_CSTRING("_setRelativeTo2"),
	HX_CSTRING("_initFromTo"),
	HX_CSTRING("_initFrom"),
	HX_CSTRING("_defaultFrom"),
	HX_CSTRING("play"),
	HX_CSTRING("stop"),
	HX_CSTRING("update"),
	HX_CSTRING("goto"),
	HX_CSTRING("onDelay"),
	HX_CSTRING("onFinish"),
	HX_CSTRING("onFoot"),
	HX_CSTRING("onHead"),
	HX_CSTRING("onInterval"),
	HX_CSTRING("onStop"),
	HX_CSTRING("onPlay"),
	HX_CSTRING("onRepeat"),
	HX_CSTRING("onRest"),
	HX_CSTRING("onUpdate"),
	HX_CSTRING("addEventListener"),
	HX_CSTRING("removeEventListener"),
	HX_CSTRING("time"),
	HX_CSTRING("ease"),
	HX_CSTRING("delay"),
	HX_CSTRING("rest"),
	HX_CSTRING("interval"),
	HX_CSTRING("repeat"),
	HX_CSTRING("yoyo"),
	HX_CSTRING("zigzag"),
	HX_CSTRING("autoPlay"),
	HX_CSTRING("setTimeScale"),
	HX_CSTRING("skip"),
	HX_CSTRING("autoFrom"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StandardTweenX_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StandardTweenX_obj::__mClass,"__mClass");
};

#endif

Class StandardTweenX_obj::__mClass;

void StandardTweenX_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("tweenx909.advanced.StandardTweenX"), hx::TCanCast< StandardTweenX_obj> ,sStaticFields,sMemberFields,
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

void StandardTweenX_obj::__boot()
{
}

} // end namespace tweenx909
} // end namespace advanced
