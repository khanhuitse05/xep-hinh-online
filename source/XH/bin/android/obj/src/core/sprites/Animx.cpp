#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_core_sprites_Animx
#include <core/sprites/Animx.h>
#endif
#ifndef INCLUDED_openfl__v2_Assets
#include <openfl/_v2/Assets.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObjectContainer
#include <openfl/_v2/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Graphics
#include <openfl/_v2/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Tilesheet
#include <openfl/_v2/display/Tilesheet.h>
#endif
#ifndef INCLUDED_openfl__v2_events_Event
#include <openfl/_v2/events/Event.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Point
#include <openfl/_v2/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif
namespace core{
namespace sprites{

Void Animx_obj::__construct(int _total,int _width,int _height,int _column)
{
HX_STACK_FRAME("core.sprites.Animx","new",0xfc4de72a,"core.sprites.Animx.new","core/sprites/Animx.hx",45,0x4cb1e688)
HX_STACK_THIS(this)
HX_STACK_ARG(_total,"_total")
HX_STACK_ARG(_width,"_width")
HX_STACK_ARG(_height,"_height")
HX_STACK_ARG(_column,"_column")
{
	HX_STACK_LINE(46)
	super::__construct();
	HX_STACK_LINE(47)
	this->mTotalFrame = _total;
	HX_STACK_LINE(48)
	this->mWidth = _width;
	HX_STACK_LINE(49)
	this->mHeight = _height;
	HX_STACK_LINE(50)
	this->mColumnFrame = _column;
	HX_STACK_LINE(51)
	this->mIndex = (int)0;
	HX_STACK_LINE(52)
	this->mRunning = false;
	HX_STACK_LINE(53)
	this->mDuration = (int)100;
	HX_STACK_LINE(54)
	this->mCount = (int)0;
	HX_STACK_LINE(55)
	this->mfirstIndex = (int)0;
	HX_STACK_LINE(56)
	this->mLastIndex = (this->mTotalFrame - (int)1);
	HX_STACK_LINE(57)
	this->mLoopTotal = (int)-1;
	HX_STACK_LINE(58)
	this->mLoopCount = (int)0;
	HX_STACK_LINE(59)
	this->mFlag = true;
	HX_STACK_LINE(60)
	this->addEventListener(::openfl::_v2::events::Event_obj::ENTER_FRAME,this->gameLoop_dyn(),null(),null(),null());
}
;
	return null();
}

//Animx_obj::~Animx_obj() { }

Dynamic Animx_obj::__CreateEmpty() { return  new Animx_obj; }
hx::ObjectPtr< Animx_obj > Animx_obj::__new(int _total,int _width,int _height,int _column)
{  hx::ObjectPtr< Animx_obj > result = new Animx_obj();
	result->__construct(_total,_width,_height,_column);
	return result;}

Dynamic Animx_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Animx_obj > result = new Animx_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void Animx_obj::Init( ::String _path){
{
		HX_STACK_FRAME("core.sprites.Animx","Init",0xaf6e4126,"core.sprites.Animx.Init","core/sprites/Animx.hx",68,0x4cb1e688)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_path,"_path")
		HX_STACK_LINE(69)
		::openfl::_v2::display::BitmapData bitmapData = ::openfl::_v2::Assets_obj::getBitmapData(_path,null());		HX_STACK_VAR(bitmapData,"bitmapData");
		HX_STACK_LINE(71)
		::openfl::_v2::display::Tilesheet _g = ::openfl::_v2::display::Tilesheet_obj::__new(bitmapData);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(71)
		this->tilesheet = _g;
		HX_STACK_LINE(72)
		{
			HX_STACK_LINE(72)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(72)
			int _g2 = this->mTotalFrame;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(72)
			while((true)){
				HX_STACK_LINE(72)
				if ((!(((_g1 < _g2))))){
					HX_STACK_LINE(72)
					break;
				}
				HX_STACK_LINE(72)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(74)
				int _g11 = ::Std_obj::_int((Float(i) / Float((int)4)));		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(74)
				int _g21 = (_g11 * this->mHeight);		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(74)
				::openfl::_v2::geom::Rectangle _g3 = ::openfl::_v2::geom::Rectangle_obj::__new((hx::Mod(i,(int)4) * this->mWidth),_g21,this->mWidth,this->mHeight);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(74)
				this->tilesheet->addTileRect(_g3,null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Animx_obj,Init,(void))

Void Animx_obj::gameLoop( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("core.sprites.Animx","gameLoop",0xabaab46c,"core.sprites.Animx.gameLoop","core/sprites/Animx.hx",83,0x4cb1e688)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(84)
		if (((this->mRunning == true))){
			HX_STACK_LINE(86)
			(this->mCount)++;
			HX_STACK_LINE(87)
			if (((this->mCount >= this->mDuration))){
				HX_STACK_LINE(89)
				this->mCount = (int)0;
				HX_STACK_LINE(90)
				if ((this->mFlag)){
					HX_STACK_LINE(92)
					(this->mIndex)++;
					HX_STACK_LINE(93)
					if (((this->mIndex > this->mLastIndex))){
						HX_STACK_LINE(95)
						this->mIndex = this->mfirstIndex;
						HX_STACK_LINE(96)
						if (((this->mLoopTotal != (int)-1))){
							HX_STACK_LINE(98)
							(this->mLoopCount)++;
							HX_STACK_LINE(99)
							if (((this->mLoopCount > this->mLoopTotal))){
								HX_STACK_LINE(101)
								this->stopAnimate1(this->mLastIndex);
							}
						}
					}
				}
				else{
					HX_STACK_LINE(108)
					(this->mIndex)--;
					HX_STACK_LINE(109)
					if (((this->mIndex < this->mfirstIndex))){
						HX_STACK_LINE(111)
						this->mIndex = this->mLastIndex;
						HX_STACK_LINE(112)
						if (((this->mLoopTotal != (int)-1))){
							HX_STACK_LINE(114)
							(this->mLoopCount)++;
							HX_STACK_LINE(115)
							if (((this->mLoopCount > this->mLoopTotal))){
								HX_STACK_LINE(117)
								this->stopAnimate1(this->mfirstIndex);
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(124)
		this->gameDraw();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Animx_obj,gameLoop,(void))

Void Animx_obj::gameDraw( ){
{
		HX_STACK_FRAME("core.sprites.Animx","gameDraw",0xa6633a0c,"core.sprites.Animx.gameDraw","core/sprites/Animx.hx",127,0x4cb1e688)
		HX_STACK_THIS(this)
		HX_STACK_LINE(129)
		this->get_graphics()->clear();
		HX_STACK_LINE(130)
		::openfl::_v2::display::Graphics _g = this->get_graphics();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(130)
		this->tilesheet->drawTiles(_g,Array_obj< Float >::__new().Add((int)0).Add((int)0).Add(this->mIndex),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Animx_obj,gameDraw,(void))

Void Animx_obj::animate5( int _duration,int _fist,int _last,int _loop,bool _flag){
{
		HX_STACK_FRAME("core.sprites.Animx","animate5",0x80bf7f6a,"core.sprites.Animx.animate5","core/sprites/Animx.hx",141,0x4cb1e688)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_duration,"_duration")
		HX_STACK_ARG(_fist,"_fist")
		HX_STACK_ARG(_last,"_last")
		HX_STACK_ARG(_loop,"_loop")
		HX_STACK_ARG(_flag,"_flag")
		HX_STACK_LINE(142)
		this->mRunning = true;
		HX_STACK_LINE(143)
		if ((_flag)){
			HX_STACK_LINE(145)
			this->mIndex = _fist;
		}
		else{
			HX_STACK_LINE(149)
			this->mIndex = _last;
		}
		HX_STACK_LINE(151)
		this->mDuration = _duration;
		HX_STACK_LINE(152)
		this->mCount = (int)0;
		HX_STACK_LINE(153)
		this->mfirstIndex = _fist;
		HX_STACK_LINE(154)
		this->mLastIndex = _last;
		HX_STACK_LINE(155)
		this->mLoopTotal = _loop;
		HX_STACK_LINE(156)
		this->mLoopCount = (int)0;
		HX_STACK_LINE(157)
		this->mFlag = _flag;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Animx_obj,animate5,(void))

Void Animx_obj::animate4( int _duration,int _fist,int _last,int _loop){
{
		HX_STACK_FRAME("core.sprites.Animx","animate4",0x80bf7f69,"core.sprites.Animx.animate4","core/sprites/Animx.hx",161,0x4cb1e688)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_duration,"_duration")
		HX_STACK_ARG(_fist,"_fist")
		HX_STACK_ARG(_last,"_last")
		HX_STACK_ARG(_loop,"_loop")
		HX_STACK_LINE(161)
		this->animate5(_duration,_fist,_last,_loop,true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Animx_obj,animate4,(void))

Void Animx_obj::animate3( int _duration,int _fist,int _last){
{
		HX_STACK_FRAME("core.sprites.Animx","animate3",0x80bf7f68,"core.sprites.Animx.animate3","core/sprites/Animx.hx",165,0x4cb1e688)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_duration,"_duration")
		HX_STACK_ARG(_fist,"_fist")
		HX_STACK_ARG(_last,"_last")
		HX_STACK_LINE(165)
		this->animate5(_duration,_fist,_last,(int)-1,true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Animx_obj,animate3,(void))

Void Animx_obj::animate2( int _duration,int _loop){
{
		HX_STACK_FRAME("core.sprites.Animx","animate2",0x80bf7f67,"core.sprites.Animx.animate2","core/sprites/Animx.hx",169,0x4cb1e688)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_duration,"_duration")
		HX_STACK_ARG(_loop,"_loop")
		HX_STACK_LINE(169)
		this->animate5(_duration,(int)0,(this->mTotalFrame - (int)1),_loop,true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Animx_obj,animate2,(void))

Void Animx_obj::animate( ){
{
		HX_STACK_FRAME("core.sprites.Animx","animate",0x1afb1e6b,"core.sprites.Animx.animate","core/sprites/Animx.hx",173,0x4cb1e688)
		HX_STACK_THIS(this)
		HX_STACK_LINE(173)
		this->animate5((int)10,(int)0,(this->mTotalFrame - (int)1),(int)-1,true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Animx_obj,animate,(void))

Void Animx_obj::stopAnimate( ){
{
		HX_STACK_FRAME("core.sprites.Animx","stopAnimate",0x8181e789,"core.sprites.Animx.stopAnimate","core/sprites/Animx.hx",180,0x4cb1e688)
		HX_STACK_THIS(this)
		HX_STACK_LINE(180)
		this->stopAnimate1(this->mIndex);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Animx_obj,stopAnimate,(void))

Void Animx_obj::stopAnimate1( int _i){
{
		HX_STACK_FRAME("core.sprites.Animx","stopAnimate1",0xd028b088,"core.sprites.Animx.stopAnimate1","core/sprites/Animx.hx",183,0x4cb1e688)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_i,"_i")
		HX_STACK_LINE(184)
		this->mIndex = _i;
		HX_STACK_LINE(185)
		this->mLoopCount = (int)0;
		HX_STACK_LINE(186)
		this->mLoopTotal = (int)0;
		HX_STACK_LINE(187)
		this->mRunning = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Animx_obj,stopAnimate1,(void))


Animx_obj::Animx_obj()
{
}

void Animx_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Animx);
	HX_MARK_MEMBER_NAME(mFrames,"mFrames");
	HX_MARK_MEMBER_NAME(mIndex,"mIndex");
	HX_MARK_MEMBER_NAME(mTotalFrame,"mTotalFrame");
	HX_MARK_MEMBER_NAME(mColumnFrame,"mColumnFrame");
	HX_MARK_MEMBER_NAME(mWidth,"mWidth");
	HX_MARK_MEMBER_NAME(mHeight,"mHeight");
	HX_MARK_MEMBER_NAME(mRunning,"mRunning");
	HX_MARK_MEMBER_NAME(mDuration,"mDuration");
	HX_MARK_MEMBER_NAME(mCount,"mCount");
	HX_MARK_MEMBER_NAME(mfirstIndex,"mfirstIndex");
	HX_MARK_MEMBER_NAME(mLastIndex,"mLastIndex");
	HX_MARK_MEMBER_NAME(mLoopTotal,"mLoopTotal");
	HX_MARK_MEMBER_NAME(mLoopCount,"mLoopCount");
	HX_MARK_MEMBER_NAME(mFlag,"mFlag");
	HX_MARK_MEMBER_NAME(tilesheet,"tilesheet");
	HX_MARK_MEMBER_NAME(radsa,"radsa");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Animx_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mFrames,"mFrames");
	HX_VISIT_MEMBER_NAME(mIndex,"mIndex");
	HX_VISIT_MEMBER_NAME(mTotalFrame,"mTotalFrame");
	HX_VISIT_MEMBER_NAME(mColumnFrame,"mColumnFrame");
	HX_VISIT_MEMBER_NAME(mWidth,"mWidth");
	HX_VISIT_MEMBER_NAME(mHeight,"mHeight");
	HX_VISIT_MEMBER_NAME(mRunning,"mRunning");
	HX_VISIT_MEMBER_NAME(mDuration,"mDuration");
	HX_VISIT_MEMBER_NAME(mCount,"mCount");
	HX_VISIT_MEMBER_NAME(mfirstIndex,"mfirstIndex");
	HX_VISIT_MEMBER_NAME(mLastIndex,"mLastIndex");
	HX_VISIT_MEMBER_NAME(mLoopTotal,"mLoopTotal");
	HX_VISIT_MEMBER_NAME(mLoopCount,"mLoopCount");
	HX_VISIT_MEMBER_NAME(mFlag,"mFlag");
	HX_VISIT_MEMBER_NAME(tilesheet,"tilesheet");
	HX_VISIT_MEMBER_NAME(radsa,"radsa");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Animx_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"Init") ) { return Init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mFlag") ) { return mFlag; }
		if (HX_FIELD_EQ(inName,"radsa") ) { return radsa; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mIndex") ) { return mIndex; }
		if (HX_FIELD_EQ(inName,"mWidth") ) { return mWidth; }
		if (HX_FIELD_EQ(inName,"mCount") ) { return mCount; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mFrames") ) { return mFrames; }
		if (HX_FIELD_EQ(inName,"mHeight") ) { return mHeight; }
		if (HX_FIELD_EQ(inName,"animate") ) { return animate_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mRunning") ) { return mRunning; }
		if (HX_FIELD_EQ(inName,"gameLoop") ) { return gameLoop_dyn(); }
		if (HX_FIELD_EQ(inName,"gameDraw") ) { return gameDraw_dyn(); }
		if (HX_FIELD_EQ(inName,"animate5") ) { return animate5_dyn(); }
		if (HX_FIELD_EQ(inName,"animate4") ) { return animate4_dyn(); }
		if (HX_FIELD_EQ(inName,"animate3") ) { return animate3_dyn(); }
		if (HX_FIELD_EQ(inName,"animate2") ) { return animate2_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mDuration") ) { return mDuration; }
		if (HX_FIELD_EQ(inName,"tilesheet") ) { return tilesheet; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mLastIndex") ) { return mLastIndex; }
		if (HX_FIELD_EQ(inName,"mLoopTotal") ) { return mLoopTotal; }
		if (HX_FIELD_EQ(inName,"mLoopCount") ) { return mLoopCount; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mTotalFrame") ) { return mTotalFrame; }
		if (HX_FIELD_EQ(inName,"mfirstIndex") ) { return mfirstIndex; }
		if (HX_FIELD_EQ(inName,"stopAnimate") ) { return stopAnimate_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mColumnFrame") ) { return mColumnFrame; }
		if (HX_FIELD_EQ(inName,"stopAnimate1") ) { return stopAnimate1_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Animx_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"mFlag") ) { mFlag=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"radsa") ) { radsa=inValue.Cast< ::openfl::_v2::display::Tilesheet >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mIndex") ) { mIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mWidth") ) { mWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mCount") ) { mCount=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mFrames") ) { mFrames=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mHeight") ) { mHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mRunning") ) { mRunning=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mDuration") ) { mDuration=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tilesheet") ) { tilesheet=inValue.Cast< ::openfl::_v2::display::Tilesheet >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mLastIndex") ) { mLastIndex=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mLoopTotal") ) { mLoopTotal=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mLoopCount") ) { mLoopCount=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mTotalFrame") ) { mTotalFrame=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mfirstIndex") ) { mfirstIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mColumnFrame") ) { mColumnFrame=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Animx_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("mFrames"));
	outFields->push(HX_CSTRING("mIndex"));
	outFields->push(HX_CSTRING("mTotalFrame"));
	outFields->push(HX_CSTRING("mColumnFrame"));
	outFields->push(HX_CSTRING("mWidth"));
	outFields->push(HX_CSTRING("mHeight"));
	outFields->push(HX_CSTRING("mRunning"));
	outFields->push(HX_CSTRING("mDuration"));
	outFields->push(HX_CSTRING("mCount"));
	outFields->push(HX_CSTRING("mfirstIndex"));
	outFields->push(HX_CSTRING("mLastIndex"));
	outFields->push(HX_CSTRING("mLoopTotal"));
	outFields->push(HX_CSTRING("mLoopCount"));
	outFields->push(HX_CSTRING("mFlag"));
	outFields->push(HX_CSTRING("tilesheet"));
	outFields->push(HX_CSTRING("radsa"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Animx_obj,mFrames),HX_CSTRING("mFrames")},
	{hx::fsInt,(int)offsetof(Animx_obj,mIndex),HX_CSTRING("mIndex")},
	{hx::fsInt,(int)offsetof(Animx_obj,mTotalFrame),HX_CSTRING("mTotalFrame")},
	{hx::fsInt,(int)offsetof(Animx_obj,mColumnFrame),HX_CSTRING("mColumnFrame")},
	{hx::fsInt,(int)offsetof(Animx_obj,mWidth),HX_CSTRING("mWidth")},
	{hx::fsInt,(int)offsetof(Animx_obj,mHeight),HX_CSTRING("mHeight")},
	{hx::fsBool,(int)offsetof(Animx_obj,mRunning),HX_CSTRING("mRunning")},
	{hx::fsInt,(int)offsetof(Animx_obj,mDuration),HX_CSTRING("mDuration")},
	{hx::fsInt,(int)offsetof(Animx_obj,mCount),HX_CSTRING("mCount")},
	{hx::fsInt,(int)offsetof(Animx_obj,mfirstIndex),HX_CSTRING("mfirstIndex")},
	{hx::fsInt,(int)offsetof(Animx_obj,mLastIndex),HX_CSTRING("mLastIndex")},
	{hx::fsInt,(int)offsetof(Animx_obj,mLoopTotal),HX_CSTRING("mLoopTotal")},
	{hx::fsInt,(int)offsetof(Animx_obj,mLoopCount),HX_CSTRING("mLoopCount")},
	{hx::fsBool,(int)offsetof(Animx_obj,mFlag),HX_CSTRING("mFlag")},
	{hx::fsObject /*::openfl::_v2::display::Tilesheet*/ ,(int)offsetof(Animx_obj,tilesheet),HX_CSTRING("tilesheet")},
	{hx::fsObject /*::openfl::_v2::display::Tilesheet*/ ,(int)offsetof(Animx_obj,radsa),HX_CSTRING("radsa")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("mFrames"),
	HX_CSTRING("mIndex"),
	HX_CSTRING("mTotalFrame"),
	HX_CSTRING("mColumnFrame"),
	HX_CSTRING("mWidth"),
	HX_CSTRING("mHeight"),
	HX_CSTRING("mRunning"),
	HX_CSTRING("mDuration"),
	HX_CSTRING("mCount"),
	HX_CSTRING("mfirstIndex"),
	HX_CSTRING("mLastIndex"),
	HX_CSTRING("mLoopTotal"),
	HX_CSTRING("mLoopCount"),
	HX_CSTRING("mFlag"),
	HX_CSTRING("tilesheet"),
	HX_CSTRING("radsa"),
	HX_CSTRING("Init"),
	HX_CSTRING("gameLoop"),
	HX_CSTRING("gameDraw"),
	HX_CSTRING("animate5"),
	HX_CSTRING("animate4"),
	HX_CSTRING("animate3"),
	HX_CSTRING("animate2"),
	HX_CSTRING("animate"),
	HX_CSTRING("stopAnimate"),
	HX_CSTRING("stopAnimate1"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Animx_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Animx_obj::__mClass,"__mClass");
};

#endif

Class Animx_obj::__mClass;

void Animx_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("core.sprites.Animx"), hx::TCanCast< Animx_obj> ,sStaticFields,sMemberFields,
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

void Animx_obj::__boot()
{
}

} // end namespace core
} // end namespace sprites
