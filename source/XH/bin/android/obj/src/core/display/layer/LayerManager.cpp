#include <hxcpp.h>

#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_core_display_layer_Layer
#include <core/display/layer/Layer.h>
#endif
#ifndef INCLUDED_core_display_layer_LayerManager
#include <core/display/layer/LayerManager.h>
#endif
#ifndef INCLUDED_core_util_Log
#include <core/util/Log.h>
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

Void LayerManager_obj::__construct(::Main main)
{
HX_STACK_FRAME("core.display.layer.LayerManager","new",0xfda4f7c6,"core.display.layer.LayerManager.new","core/display/layer/LayerManager.hx",9,0xe40a5747)
HX_STACK_THIS(this)
HX_STACK_ARG(main,"main")
{
	HX_STACK_LINE(17)
	this->_layers = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(22)
	::core::util::Log_obj::error(HX_CSTRING("new layer"));
	HX_STACK_LINE(23)
	{
		HX_STACK_LINE(23)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(23)
		while((true)){
			HX_STACK_LINE(23)
			if ((!(((_g < (int)4))))){
				HX_STACK_LINE(23)
				break;
			}
			HX_STACK_LINE(23)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(25)
			::core::display::layer::Layer layer = ::core::display::layer::Layer_obj::__new();		HX_STACK_VAR(layer,"layer");
			HX_STACK_LINE(26)
			main->addChild(layer);
			HX_STACK_LINE(27)
			this->_layers->push(layer);
		}
	}
}
;
	return null();
}

//LayerManager_obj::~LayerManager_obj() { }

Dynamic LayerManager_obj::__CreateEmpty() { return  new LayerManager_obj; }
hx::ObjectPtr< LayerManager_obj > LayerManager_obj::__new(::Main main)
{  hx::ObjectPtr< LayerManager_obj > result = new LayerManager_obj();
	result->__construct(main);
	return result;}

Dynamic LayerManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LayerManager_obj > result = new LayerManager_obj();
	result->__construct(inArgs[0]);
	return result;}

::core::display::layer::Layer LayerManager_obj::getLayer( int layerIndex){
	HX_STACK_FRAME("core.display.layer.LayerManager","getLayer",0xa01fd835,"core.display.layer.LayerManager.getLayer","core/display/layer/LayerManager.hx",34,0xe40a5747)
	HX_STACK_THIS(this)
	HX_STACK_ARG(layerIndex,"layerIndex")
	HX_STACK_LINE(34)
	if (((bool((layerIndex >= (int)0)) && bool((layerIndex < (int)4))))){
		HX_STACK_LINE(35)
		return this->_layers->__get(layerIndex).StaticCast< ::core::display::layer::Layer >();
	}
	else{
		HX_STACK_LINE(39)
		::core::util::Log_obj::error((HX_CSTRING("core.display.layer.LayerManager ==>> Can not get layer with layerIndex : ") + layerIndex));
		HX_STACK_LINE(40)
		return this->_layers->__get((int)3).StaticCast< ::core::display::layer::Layer >();
	}
	HX_STACK_LINE(34)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(LayerManager_obj,getLayer,return )

Void LayerManager_obj::addToLayer( ::openfl::_v2::display::DisplayObject target,int layerIndex){
{
		HX_STACK_FRAME("core.display.layer.LayerManager","addToLayer",0xdc1a2b8f,"core.display.layer.LayerManager.addToLayer","core/display/layer/LayerManager.hx",47,0xe40a5747)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(layerIndex,"layerIndex")
		HX_STACK_LINE(47)
		this->getLayer(layerIndex)->add(target);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(LayerManager_obj,addToLayer,(void))

int LayerManager_obj::LAYER_SCREEN;

int LayerManager_obj::LAYER_DIALOG;

int LayerManager_obj::LAYER_POPUP;

int LayerManager_obj::LAYER_TOP;

int LayerManager_obj::LAYER_COUNT;


LayerManager_obj::LayerManager_obj()
{
}

void LayerManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LayerManager);
	HX_MARK_MEMBER_NAME(_layers,"_layers");
	HX_MARK_END_CLASS();
}

void LayerManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_layers,"_layers");
}

Dynamic LayerManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_layers") ) { return _layers; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getLayer") ) { return getLayer_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addToLayer") ) { return addToLayer_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LayerManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_layers") ) { _layers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LayerManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_layers"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("LAYER_SCREEN"),
	HX_CSTRING("LAYER_DIALOG"),
	HX_CSTRING("LAYER_POPUP"),
	HX_CSTRING("LAYER_TOP"),
	HX_CSTRING("LAYER_COUNT"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(LayerManager_obj,_layers),HX_CSTRING("_layers")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_layers"),
	HX_CSTRING("getLayer"),
	HX_CSTRING("addToLayer"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LayerManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(LayerManager_obj::LAYER_SCREEN,"LAYER_SCREEN");
	HX_MARK_MEMBER_NAME(LayerManager_obj::LAYER_DIALOG,"LAYER_DIALOG");
	HX_MARK_MEMBER_NAME(LayerManager_obj::LAYER_POPUP,"LAYER_POPUP");
	HX_MARK_MEMBER_NAME(LayerManager_obj::LAYER_TOP,"LAYER_TOP");
	HX_MARK_MEMBER_NAME(LayerManager_obj::LAYER_COUNT,"LAYER_COUNT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LayerManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(LayerManager_obj::LAYER_SCREEN,"LAYER_SCREEN");
	HX_VISIT_MEMBER_NAME(LayerManager_obj::LAYER_DIALOG,"LAYER_DIALOG");
	HX_VISIT_MEMBER_NAME(LayerManager_obj::LAYER_POPUP,"LAYER_POPUP");
	HX_VISIT_MEMBER_NAME(LayerManager_obj::LAYER_TOP,"LAYER_TOP");
	HX_VISIT_MEMBER_NAME(LayerManager_obj::LAYER_COUNT,"LAYER_COUNT");
};

#endif

Class LayerManager_obj::__mClass;

void LayerManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("core.display.layer.LayerManager"), hx::TCanCast< LayerManager_obj> ,sStaticFields,sMemberFields,
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

void LayerManager_obj::__boot()
{
	LAYER_SCREEN= (int)0;
	LAYER_DIALOG= (int)1;
	LAYER_POPUP= (int)2;
	LAYER_TOP= (int)3;
	LAYER_COUNT= (int)4;
}

} // end namespace core
} // end namespace display
} // end namespace layer
