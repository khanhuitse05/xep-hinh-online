#include <hxcpp.h>

#ifndef INCLUDED_core_display_layer_Layer
#include <core/display/layer/Layer.h>
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
namespace core{
namespace display{
namespace layer{

Void Layer_obj::__construct()
{
HX_STACK_FRAME("core.display.layer.Layer","new",0x9cda340b,"core.display.layer.Layer.new","core/display/layer/Layer.hx",14,0x65f52748)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(14)
	super::__construct();
}
;
	return null();
}

//Layer_obj::~Layer_obj() { }

Dynamic Layer_obj::__CreateEmpty() { return  new Layer_obj; }
hx::ObjectPtr< Layer_obj > Layer_obj::__new()
{  hx::ObjectPtr< Layer_obj > result = new Layer_obj();
	result->__construct();
	return result;}

Dynamic Layer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Layer_obj > result = new Layer_obj();
	result->__construct();
	return result;}

Void Layer_obj::add( ::openfl::_v2::display::DisplayObject target){
{
		HX_STACK_FRAME("core.display.layer.Layer","add",0x9cd055cc,"core.display.layer.Layer.add","core/display/layer/Layer.hx",19,0x65f52748)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_LINE(19)
		this->addChild(target);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Layer_obj,add,(void))

Void Layer_obj::remove( ::openfl::_v2::display::DisplayObject target){
{
		HX_STACK_FRAME("core.display.layer.Layer","remove",0x60e99579,"core.display.layer.Layer.remove","core/display/layer/Layer.hx",24,0x65f52748)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_LINE(24)
		if ((this->contains(target))){
			HX_STACK_LINE(24)
			this->removeChild(target);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Layer_obj,remove,(void))


Layer_obj::Layer_obj()
{
}

Dynamic Layer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Layer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Layer_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("add"),
	HX_CSTRING("remove"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Layer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Layer_obj::__mClass,"__mClass");
};

#endif

Class Layer_obj::__mClass;

void Layer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("core.display.layer.Layer"), hx::TCanCast< Layer_obj> ,sStaticFields,sMemberFields,
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

void Layer_obj::__boot()
{
}

} // end namespace core
} // end namespace display
} // end namespace layer
