#include <hxcpp.h>

#ifndef INCLUDED_core_resource_ResourceManager
#include <core/resource/ResourceManager.h>
#endif
#ifndef INCLUDED_core_sprites_Animx
#include <core/sprites/Animx.h>
#endif
#ifndef INCLUDED_openfl__v2_Assets
#include <openfl/_v2/Assets.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Bitmap
#include <openfl/_v2/display/Bitmap.h>
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
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
namespace core{
namespace resource{

Void ResourceManager_obj::__construct()
{
HX_STACK_FRAME("core.resource.ResourceManager","new",0xb95cf260,"core.resource.ResourceManager.new","core/resource/ResourceManager.hx",29,0x149768f0)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(30)
	this->initAnim();
	HX_STACK_LINE(31)
	this->initSprite();
	HX_STACK_LINE(32)
	this->initAudio();
}
;
	return null();
}

//ResourceManager_obj::~ResourceManager_obj() { }

Dynamic ResourceManager_obj::__CreateEmpty() { return  new ResourceManager_obj; }
hx::ObjectPtr< ResourceManager_obj > ResourceManager_obj::__new()
{  hx::ObjectPtr< ResourceManager_obj > result = new ResourceManager_obj();
	result->__construct();
	return result;}

Dynamic ResourceManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ResourceManager_obj > result = new ResourceManager_obj();
	result->__construct();
	return result;}

Void ResourceManager_obj::initAnim( ){
{
		HX_STACK_FRAME("core.resource.ResourceManager","initAnim",0x4dc45341,"core.resource.ResourceManager.initAnim","core/resource/ResourceManager.hx",38,0x149768f0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(39)
		::core::sprites::Animx _g = ::core::sprites::Animx_obj::__new((int)22,(int)64,(int)32,(int)4);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(39)
		this->aLoadingAnim = _g;
		HX_STACK_LINE(40)
		this->aLoadingAnim->Init(HX_CSTRING("img/animloading.png"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ResourceManager_obj,initAnim,(void))

Void ResourceManager_obj::initSprite( ){
{
		HX_STACK_FRAME("core.resource.ResourceManager","initSprite",0xe51a5535,"core.resource.ResourceManager.initSprite","core/resource/ResourceManager.hx",43,0x149768f0)
		HX_STACK_THIS(this)
		HX_STACK_LINE(44)
		::openfl::_v2::display::Sprite _g = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(44)
		this->sHomeBG = _g;
		HX_STACK_LINE(45)
		::openfl::_v2::display::BitmapData _g1 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/bghome.png"),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(45)
		::openfl::_v2::display::Bitmap _g2 = ::openfl::_v2::display::Bitmap_obj::__new(_g1,null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(45)
		this->sHomeBG->addChild(_g2);
		HX_STACK_LINE(46)
		::openfl::_v2::display::Sprite _g3 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(46)
		this->sSingleBG = _g3;
		HX_STACK_LINE(47)
		::openfl::_v2::display::BitmapData _g4 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/SinglePlayer background.png"),null());		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(47)
		::openfl::_v2::display::Bitmap _g5 = ::openfl::_v2::display::Bitmap_obj::__new(_g4,null(),null());		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(47)
		this->sSingleBG->addChild(_g5);
		HX_STACK_LINE(48)
		::openfl::_v2::display::Sprite _g6 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(48)
		this->sBattlesBG = _g6;
		HX_STACK_LINE(49)
		::openfl::_v2::display::BitmapData _g7 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/BattlesBackground.png"),null());		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(49)
		::openfl::_v2::display::Bitmap _g8 = ::openfl::_v2::display::Bitmap_obj::__new(_g7,null(),null());		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(49)
		this->sBattlesBG->addChild(_g8);
		HX_STACK_LINE(50)
		::openfl::_v2::display::Sprite _g9 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(50)
		this->sFriendBG = _g9;
		HX_STACK_LINE(51)
		::openfl::_v2::display::BitmapData _g10 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/WithfriendBackground.png"),null());		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(51)
		::openfl::_v2::display::Bitmap _g11 = ::openfl::_v2::display::Bitmap_obj::__new(_g10,null(),null());		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(51)
		this->sFriendBG->addChild(_g11);
		HX_STACK_LINE(52)
		::openfl::_v2::display::Sprite _g12 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(52)
		this->sMissionBG = _g12;
		HX_STACK_LINE(53)
		::openfl::_v2::display::BitmapData _g13 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/MissionBackground.png"),null());		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(53)
		::openfl::_v2::display::Bitmap _g14 = ::openfl::_v2::display::Bitmap_obj::__new(_g13,null(),null());		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(53)
		this->sMissionBG->addChild(_g14);
		HX_STACK_LINE(54)
		::openfl::_v2::display::Sprite _g15 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(54)
		this->sSingle_btn = _g15;
		HX_STACK_LINE(55)
		::openfl::_v2::display::BitmapData _g16 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/Single player.png"),null());		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(55)
		::openfl::_v2::display::Bitmap _g17 = ::openfl::_v2::display::Bitmap_obj::__new(_g16,null(),null());		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(55)
		this->sSingle_btn->addChild(_g17);
		HX_STACK_LINE(56)
		::openfl::_v2::display::Sprite _g18 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g18,"_g18");
		HX_STACK_LINE(56)
		this->sBattles_btn = _g18;
		HX_STACK_LINE(57)
		::openfl::_v2::display::BitmapData _g19 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/Battles.png"),null());		HX_STACK_VAR(_g19,"_g19");
		HX_STACK_LINE(57)
		::openfl::_v2::display::Bitmap _g20 = ::openfl::_v2::display::Bitmap_obj::__new(_g19,null(),null());		HX_STACK_VAR(_g20,"_g20");
		HX_STACK_LINE(57)
		this->sBattles_btn->addChild(_g20);
		HX_STACK_LINE(58)
		::openfl::_v2::display::Sprite _g21 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g21,"_g21");
		HX_STACK_LINE(58)
		this->sFriend_btn = _g21;
		HX_STACK_LINE(59)
		::openfl::_v2::display::BitmapData _g22 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/With friend.png"),null());		HX_STACK_VAR(_g22,"_g22");
		HX_STACK_LINE(59)
		::openfl::_v2::display::Bitmap _g23 = ::openfl::_v2::display::Bitmap_obj::__new(_g22,null(),null());		HX_STACK_VAR(_g23,"_g23");
		HX_STACK_LINE(59)
		this->sFriend_btn->addChild(_g23);
		HX_STACK_LINE(60)
		::openfl::_v2::display::Sprite _g24 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g24,"_g24");
		HX_STACK_LINE(60)
		this->sMission_btn = _g24;
		HX_STACK_LINE(61)
		::openfl::_v2::display::BitmapData _g25 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/Mission.png"),null());		HX_STACK_VAR(_g25,"_g25");
		HX_STACK_LINE(61)
		::openfl::_v2::display::Bitmap _g26 = ::openfl::_v2::display::Bitmap_obj::__new(_g25,null(),null());		HX_STACK_VAR(_g26,"_g26");
		HX_STACK_LINE(61)
		this->sMission_btn->addChild(_g26);
		HX_STACK_LINE(62)
		::openfl::_v2::display::Sprite _g27 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g27,"_g27");
		HX_STACK_LINE(62)
		this->sBack_btn = _g27;
		HX_STACK_LINE(63)
		::openfl::_v2::display::BitmapData _g28 = ::openfl::_v2::Assets_obj::getBitmapData(HX_CSTRING("img/btnback.png"),null());		HX_STACK_VAR(_g28,"_g28");
		HX_STACK_LINE(63)
		::openfl::_v2::display::Bitmap _g29 = ::openfl::_v2::display::Bitmap_obj::__new(_g28,null(),null());		HX_STACK_VAR(_g29,"_g29");
		HX_STACK_LINE(63)
		this->sBack_btn->addChild(_g29);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ResourceManager_obj,initSprite,(void))

Void ResourceManager_obj::initAudio( ){
{
		HX_STACK_FRAME("core.resource.ResourceManager","initAudio",0xc2a135a6,"core.resource.ResourceManager.initAudio","core/resource/ResourceManager.hx",66,0x149768f0)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ResourceManager_obj,initAudio,(void))

::openfl::_v2::display::Sprite ResourceManager_obj::getSprite( int _id){
	HX_STACK_FRAME("core.resource.ResourceManager","getSprite",0xbf7b073b,"core.resource.ResourceManager.getSprite","core/resource/ResourceManager.hx",70,0x149768f0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(71)
	switch( (int)(_id)){
		case (int)3: {
			HX_STACK_LINE(74)
			return this->sHomeBG;
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(76)
			return this->sSingleBG;
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(78)
			return this->sBattlesBG;
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(80)
			return this->sFriendBG;
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(82)
			return this->sMissionBG;
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(84)
			return this->sSingle_btn;
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(86)
			return this->sBattles_btn;
		}
		;break;
		case (int)10: {
			HX_STACK_LINE(88)
			return this->sFriend_btn;
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(90)
			return this->sMission_btn;
		}
		;break;
		case (int)12: {
			HX_STACK_LINE(92)
			return this->sBack_btn;
		}
		;break;
		default: {
		}
	}
	HX_STACK_LINE(95)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ResourceManager_obj,getSprite,return )

::core::sprites::Animx ResourceManager_obj::getAnim( int _id){
	HX_STACK_FRAME("core.resource.ResourceManager","getAnim",0x243657c7,"core.resource.ResourceManager.getAnim","core/resource/ResourceManager.hx",98,0x149768f0)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_id,"_id")
	HX_STACK_LINE(99)
	switch( (int)(_id)){
		case (int)1: {
			HX_STACK_LINE(102)
			return this->aLoadingAnim;
		}
		;break;
		default: {
		}
	}
	HX_STACK_LINE(105)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ResourceManager_obj,getAnim,return )


ResourceManager_obj::ResourceManager_obj()
{
}

void ResourceManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ResourceManager);
	HX_MARK_MEMBER_NAME(aLoadingAnim,"aLoadingAnim");
	HX_MARK_MEMBER_NAME(sHomeBG,"sHomeBG");
	HX_MARK_MEMBER_NAME(sSingleBG,"sSingleBG");
	HX_MARK_MEMBER_NAME(sBattlesBG,"sBattlesBG");
	HX_MARK_MEMBER_NAME(sFriendBG,"sFriendBG");
	HX_MARK_MEMBER_NAME(sMissionBG,"sMissionBG");
	HX_MARK_MEMBER_NAME(sSingle_btn,"sSingle_btn");
	HX_MARK_MEMBER_NAME(sBattles_btn,"sBattles_btn");
	HX_MARK_MEMBER_NAME(sFriend_btn,"sFriend_btn");
	HX_MARK_MEMBER_NAME(sMission_btn,"sMission_btn");
	HX_MARK_MEMBER_NAME(sBack_btn,"sBack_btn");
	HX_MARK_END_CLASS();
}

void ResourceManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(aLoadingAnim,"aLoadingAnim");
	HX_VISIT_MEMBER_NAME(sHomeBG,"sHomeBG");
	HX_VISIT_MEMBER_NAME(sSingleBG,"sSingleBG");
	HX_VISIT_MEMBER_NAME(sBattlesBG,"sBattlesBG");
	HX_VISIT_MEMBER_NAME(sFriendBG,"sFriendBG");
	HX_VISIT_MEMBER_NAME(sMissionBG,"sMissionBG");
	HX_VISIT_MEMBER_NAME(sSingle_btn,"sSingle_btn");
	HX_VISIT_MEMBER_NAME(sBattles_btn,"sBattles_btn");
	HX_VISIT_MEMBER_NAME(sFriend_btn,"sFriend_btn");
	HX_VISIT_MEMBER_NAME(sMission_btn,"sMission_btn");
	HX_VISIT_MEMBER_NAME(sBack_btn,"sBack_btn");
}

Dynamic ResourceManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"sHomeBG") ) { return sHomeBG; }
		if (HX_FIELD_EQ(inName,"getAnim") ) { return getAnim_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"initAnim") ) { return initAnim_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"sSingleBG") ) { return sSingleBG; }
		if (HX_FIELD_EQ(inName,"sFriendBG") ) { return sFriendBG; }
		if (HX_FIELD_EQ(inName,"sBack_btn") ) { return sBack_btn; }
		if (HX_FIELD_EQ(inName,"initAudio") ) { return initAudio_dyn(); }
		if (HX_FIELD_EQ(inName,"getSprite") ) { return getSprite_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sBattlesBG") ) { return sBattlesBG; }
		if (HX_FIELD_EQ(inName,"sMissionBG") ) { return sMissionBG; }
		if (HX_FIELD_EQ(inName,"initSprite") ) { return initSprite_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"sSingle_btn") ) { return sSingle_btn; }
		if (HX_FIELD_EQ(inName,"sFriend_btn") ) { return sFriend_btn; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"aLoadingAnim") ) { return aLoadingAnim; }
		if (HX_FIELD_EQ(inName,"sBattles_btn") ) { return sBattles_btn; }
		if (HX_FIELD_EQ(inName,"sMission_btn") ) { return sMission_btn; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ResourceManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"sHomeBG") ) { sHomeBG=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"sSingleBG") ) { sSingleBG=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sFriendBG") ) { sFriendBG=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sBack_btn") ) { sBack_btn=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sBattlesBG") ) { sBattlesBG=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sMissionBG") ) { sMissionBG=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"sSingle_btn") ) { sSingle_btn=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sFriend_btn") ) { sFriend_btn=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"aLoadingAnim") ) { aLoadingAnim=inValue.Cast< ::core::sprites::Animx >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sBattles_btn") ) { sBattles_btn=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sMission_btn") ) { sMission_btn=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ResourceManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("aLoadingAnim"));
	outFields->push(HX_CSTRING("sHomeBG"));
	outFields->push(HX_CSTRING("sSingleBG"));
	outFields->push(HX_CSTRING("sBattlesBG"));
	outFields->push(HX_CSTRING("sFriendBG"));
	outFields->push(HX_CSTRING("sMissionBG"));
	outFields->push(HX_CSTRING("sSingle_btn"));
	outFields->push(HX_CSTRING("sBattles_btn"));
	outFields->push(HX_CSTRING("sFriend_btn"));
	outFields->push(HX_CSTRING("sMission_btn"));
	outFields->push(HX_CSTRING("sBack_btn"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::core::sprites::Animx*/ ,(int)offsetof(ResourceManager_obj,aLoadingAnim),HX_CSTRING("aLoadingAnim")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(ResourceManager_obj,sHomeBG),HX_CSTRING("sHomeBG")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(ResourceManager_obj,sSingleBG),HX_CSTRING("sSingleBG")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(ResourceManager_obj,sBattlesBG),HX_CSTRING("sBattlesBG")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(ResourceManager_obj,sFriendBG),HX_CSTRING("sFriendBG")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(ResourceManager_obj,sMissionBG),HX_CSTRING("sMissionBG")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(ResourceManager_obj,sSingle_btn),HX_CSTRING("sSingle_btn")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(ResourceManager_obj,sBattles_btn),HX_CSTRING("sBattles_btn")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(ResourceManager_obj,sFriend_btn),HX_CSTRING("sFriend_btn")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(ResourceManager_obj,sMission_btn),HX_CSTRING("sMission_btn")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(ResourceManager_obj,sBack_btn),HX_CSTRING("sBack_btn")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("aLoadingAnim"),
	HX_CSTRING("sHomeBG"),
	HX_CSTRING("sSingleBG"),
	HX_CSTRING("sBattlesBG"),
	HX_CSTRING("sFriendBG"),
	HX_CSTRING("sMissionBG"),
	HX_CSTRING("sSingle_btn"),
	HX_CSTRING("sBattles_btn"),
	HX_CSTRING("sFriend_btn"),
	HX_CSTRING("sMission_btn"),
	HX_CSTRING("sBack_btn"),
	HX_CSTRING("initAnim"),
	HX_CSTRING("initSprite"),
	HX_CSTRING("initAudio"),
	HX_CSTRING("getSprite"),
	HX_CSTRING("getAnim"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ResourceManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ResourceManager_obj::__mClass,"__mClass");
};

#endif

Class ResourceManager_obj::__mClass;

void ResourceManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("core.resource.ResourceManager"), hx::TCanCast< ResourceManager_obj> ,sStaticFields,sMemberFields,
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

void ResourceManager_obj::__boot()
{
}

} // end namespace core
} // end namespace resource
