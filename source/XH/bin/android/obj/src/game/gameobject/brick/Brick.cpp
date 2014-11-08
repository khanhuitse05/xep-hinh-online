#include <hxcpp.h>

#ifndef INCLUDED_core_resource_ResourceManager
#include <core/resource/ResourceManager.h>
#endif
#ifndef INCLUDED_game_data_DataCenter
#include <game/data/DataCenter.h>
#endif
#ifndef INCLUDED_game_data_PlayerData
#include <game/data/PlayerData.h>
#endif
#ifndef INCLUDED_game_gameobject_brick_Brick
#include <game/gameobject/brick/Brick.h>
#endif
#ifndef INCLUDED_game_tnk_Game
#include <game/tnk/Game.h>
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
#ifndef INCLUDED_tweenx909_TweenX
#include <tweenx909/TweenX.h>
#endif
#ifndef INCLUDED_tweenx909_advanced_CommandX
#include <tweenx909/advanced/CommandX.h>
#endif
#ifndef INCLUDED_tweenx909_advanced_StandardTweenX
#include <tweenx909/advanced/StandardTweenX.h>
#endif
namespace game{
namespace gameobject{
namespace brick{

Void Brick_obj::__construct()
{
HX_STACK_FRAME("game.gameobject.brick.Brick","new",0xeb069e65,"game.gameobject.brick.Brick.new","game/gameobject/brick/Brick.hx",27,0x7fad634c)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(28)
	super::__construct();
	HX_STACK_LINE(29)
	this->mType = (int)1;
	HX_STACK_LINE(30)
	this->init();
	HX_STACK_LINE(31)
	this->addEventListener(::openfl::_v2::events::Event_obj::ENTER_FRAME,this->gameLoop_dyn(),null(),null(),null());
}
;
	return null();
}

//Brick_obj::~Brick_obj() { }

Dynamic Brick_obj::__CreateEmpty() { return  new Brick_obj; }
hx::ObjectPtr< Brick_obj > Brick_obj::__new()
{  hx::ObjectPtr< Brick_obj > result = new Brick_obj();
	result->__construct();
	return result;}

Dynamic Brick_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Brick_obj > result = new Brick_obj();
	result->__construct();
	return result;}

Void Brick_obj::init( ){
{
		HX_STACK_FRAME("game.gameobject.brick.Brick","init",0xb77cb16b,"game.gameobject.brick.Brick.init","game/gameobject/brick/Brick.hx",34,0x7fad634c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(35)
		::openfl::_v2::display::BitmapData _bitmap = ::game::tnk::Game_obj::resource->getBitmap(::game::tnk::Game_obj::data->playerData->mBrickID);		HX_STACK_VAR(_bitmap,"_bitmap");
		HX_STACK_LINE(36)
		::openfl::_v2::display::Tilesheet _g = ::openfl::_v2::display::Tilesheet_obj::__new(_bitmap);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(36)
		this->tilesheet = _g;
		HX_STACK_LINE(37)
		{
			HX_STACK_LINE(37)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(37)
			while((true)){
				HX_STACK_LINE(37)
				if ((!(((_g1 < (int)10))))){
					HX_STACK_LINE(37)
					break;
				}
				HX_STACK_LINE(37)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(39)
				::openfl::_v2::geom::Rectangle _g11 = ::openfl::_v2::geom::Rectangle_obj::__new((i * (int)32),(int)0,(int)32,(int)32);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(39)
				this->tilesheet->addTileRect(_g11,null());
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Brick_obj,init,(void))

Void Brick_obj::setValue( int _x,int _y,int _type){
{
		HX_STACK_FRAME("game.gameobject.brick.Brick","setValue",0xd418284a,"game.gameobject.brick.Brick.setValue","game/gameobject/brick/Brick.hx",44,0x7fad634c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_x,"_x")
		HX_STACK_ARG(_y,"_y")
		HX_STACK_ARG(_type,"_type")
		HX_STACK_LINE(45)
		this->set_x(_x);
		HX_STACK_LINE(46)
		this->set_y(_y);
		HX_STACK_LINE(47)
		this->mType = _type;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Brick_obj,setValue,(void))

Void Brick_obj::gameLoop( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("game.gameobject.brick.Brick","gameLoop",0x4808e751,"game.gameobject.brick.Brick.gameLoop","game/gameobject/brick/Brick.hx",55,0x7fad634c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(55)
		this->gameDraw();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Brick_obj,gameLoop,(void))

Void Brick_obj::gameDraw( ){
{
		HX_STACK_FRAME("game.gameobject.brick.Brick","gameDraw",0x42c16cf1,"game.gameobject.brick.Brick.gameDraw","game/gameobject/brick/Brick.hx",60,0x7fad634c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(60)
		if (((this->mType > (int)0))){
			HX_STACK_LINE(62)
			this->get_graphics()->clear();
			HX_STACK_LINE(63)
			::openfl::_v2::display::Graphics _g = this->get_graphics();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(63)
			this->tilesheet->drawTiles(_g,Array_obj< Float >::__new().Add((int)0).Add((int)0).Add((this->mType - (int)1)),null(),null(),null());
		}
		else{
			HX_STACK_LINE(66)
			this->get_graphics()->clear();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Brick_obj,gameDraw,(void))

Void Brick_obj::MoveTo( Float duration,Float delay,Float targetX,Float targetY){
{
		HX_STACK_FRAME("game.gameobject.brick.Brick","MoveTo",0x7f114a27,"game.gameobject.brick.Brick.MoveTo","game/gameobject/brick/Brick.hx",73,0x7fad634c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(duration,"duration")
		HX_STACK_ARG(delay,"delay")
		HX_STACK_ARG(targetX,"targetX")
		HX_STACK_ARG(targetY,"targetY")
		HX_STACK_LINE(74)
		this->isMoving = true;
		struct _Function_1_1{
			inline static Dynamic Block( Float &targetY,Float &targetX){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","game/gameobject/brick/Brick.hx",75,0x7fad634c)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("x") , targetX,false);
					__result->Add(HX_CSTRING("y") , targetY,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(75)
		::tweenx909::TweenX_obj::to(hx::ObjectPtr<OBJ_>(this),_Function_1_1::Block(targetY,targetX),duration,null(),null(),null(),null(),null(),null(),null(),hx::SourceInfo(HX_CSTRING("Brick.hx"),75,HX_CSTRING("game.gameobject.brick.Brick"),HX_CSTRING("MoveTo")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Brick_obj,MoveTo,(void))

Void Brick_obj::falling( Dynamic onComplete){
{
		HX_STACK_FRAME("game.gameobject.brick.Brick","falling",0x6957c3cc,"game.gameobject.brick.Brick.falling","game/gameobject/brick/Brick.hx",78,0x7fad634c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(onComplete,"onComplete")
		HX_STACK_LINE(79)
		this->isMoving = true;
		HX_STACK_LINE(80)
		Float _g = this->get_x();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(80)
		Float _g1 = this->get_y();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(80)
		Float _g2 = (_g1 + (int)32);		HX_STACK_VAR(_g2,"_g2");
		struct _Function_1_1{
			inline static Dynamic Block( Float &_g,Float &_g2){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","game/gameobject/brick/Brick.hx",80,0x7fad634c)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("x") , _g,false);
					__result->Add(HX_CSTRING("y") , _g2,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(80)
		Dynamic _g3 = _Function_1_1::Block(_g,_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(80)
		::tweenx909::TweenX_obj::to(hx::ObjectPtr<OBJ_>(this),_g3,0.3,null(),null(),null(),null(),null(),null(),null(),hx::SourceInfo(HX_CSTRING("Brick.hx"),80,HX_CSTRING("game.gameobject.brick.Brick"),HX_CSTRING("falling")));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Brick_obj,falling,(void))

int Brick_obj::set_column( int value){
	HX_STACK_FRAME("game.gameobject.brick.Brick","set_column",0x1fef89ae,"game.gameobject.brick.Brick.set_column","game/gameobject/brick/Brick.hx",86,0x7fad634c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(86)
	return this->column = value;
}


HX_DEFINE_DYNAMIC_FUNC1(Brick_obj,set_column,return )

int Brick_obj::set_row( int value){
	HX_STACK_FRAME("game.gameobject.brick.Brick","set_row",0xb1fff042,"game.gameobject.brick.Brick.set_row","game/gameobject/brick/Brick.hx",92,0x7fad634c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(92)
	return this->row = value;
}


HX_DEFINE_DYNAMIC_FUNC1(Brick_obj,set_row,return )


Brick_obj::Brick_obj()
{
}

void Brick_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Brick);
	HX_MARK_MEMBER_NAME(mType,"mType");
	HX_MARK_MEMBER_NAME(mState,"mState");
	HX_MARK_MEMBER_NAME(column,"column");
	HX_MARK_MEMBER_NAME(row,"row");
	HX_MARK_MEMBER_NAME(special,"special");
	HX_MARK_MEMBER_NAME(isMoving,"isMoving");
	HX_MARK_MEMBER_NAME(tilesheet,"tilesheet");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Brick_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mType,"mType");
	HX_VISIT_MEMBER_NAME(mState,"mState");
	HX_VISIT_MEMBER_NAME(column,"column");
	HX_VISIT_MEMBER_NAME(row,"row");
	HX_VISIT_MEMBER_NAME(special,"special");
	HX_VISIT_MEMBER_NAME(isMoving,"isMoving");
	HX_VISIT_MEMBER_NAME(tilesheet,"tilesheet");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Brick_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"row") ) { return row; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mType") ) { return mType; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mState") ) { return mState; }
		if (HX_FIELD_EQ(inName,"column") ) { return column; }
		if (HX_FIELD_EQ(inName,"MoveTo") ) { return MoveTo_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"special") ) { return special; }
		if (HX_FIELD_EQ(inName,"falling") ) { return falling_dyn(); }
		if (HX_FIELD_EQ(inName,"set_row") ) { return set_row_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isMoving") ) { return isMoving; }
		if (HX_FIELD_EQ(inName,"setValue") ) { return setValue_dyn(); }
		if (HX_FIELD_EQ(inName,"gameLoop") ) { return gameLoop_dyn(); }
		if (HX_FIELD_EQ(inName,"gameDraw") ) { return gameDraw_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tilesheet") ) { return tilesheet; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_column") ) { return set_column_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Brick_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"row") ) { row=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mType") ) { mType=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mState") ) { mState=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"column") ) { column=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"special") ) { special=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isMoving") ) { isMoving=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tilesheet") ) { tilesheet=inValue.Cast< ::openfl::_v2::display::Tilesheet >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Brick_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("mType"));
	outFields->push(HX_CSTRING("mState"));
	outFields->push(HX_CSTRING("column"));
	outFields->push(HX_CSTRING("row"));
	outFields->push(HX_CSTRING("special"));
	outFields->push(HX_CSTRING("isMoving"));
	outFields->push(HX_CSTRING("tilesheet"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Brick_obj,mType),HX_CSTRING("mType")},
	{hx::fsInt,(int)offsetof(Brick_obj,mState),HX_CSTRING("mState")},
	{hx::fsInt,(int)offsetof(Brick_obj,column),HX_CSTRING("column")},
	{hx::fsInt,(int)offsetof(Brick_obj,row),HX_CSTRING("row")},
	{hx::fsInt,(int)offsetof(Brick_obj,special),HX_CSTRING("special")},
	{hx::fsBool,(int)offsetof(Brick_obj,isMoving),HX_CSTRING("isMoving")},
	{hx::fsObject /*::openfl::_v2::display::Tilesheet*/ ,(int)offsetof(Brick_obj,tilesheet),HX_CSTRING("tilesheet")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("mType"),
	HX_CSTRING("mState"),
	HX_CSTRING("column"),
	HX_CSTRING("row"),
	HX_CSTRING("special"),
	HX_CSTRING("isMoving"),
	HX_CSTRING("tilesheet"),
	HX_CSTRING("init"),
	HX_CSTRING("setValue"),
	HX_CSTRING("gameLoop"),
	HX_CSTRING("gameDraw"),
	HX_CSTRING("MoveTo"),
	HX_CSTRING("falling"),
	HX_CSTRING("set_column"),
	HX_CSTRING("set_row"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Brick_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Brick_obj::__mClass,"__mClass");
};

#endif

Class Brick_obj::__mClass;

void Brick_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("game.gameobject.brick.Brick"), hx::TCanCast< Brick_obj> ,sStaticFields,sMemberFields,
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

void Brick_obj::__boot()
{
}

} // end namespace game
} // end namespace gameobject
} // end namespace brick
