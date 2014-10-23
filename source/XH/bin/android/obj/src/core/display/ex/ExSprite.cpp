#include <hxcpp.h>

#ifndef INCLUDED_core_display_ex_ExSprite
#include <core/display/ex/ExSprite.h>
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
namespace ex{

Void ExSprite_obj::__construct()
{
HX_STACK_FRAME("core.display.ex.ExSprite","new",0x904c7c8a,"core.display.ex.ExSprite.new","core/display/ex/ExSprite.hx",15,0x68cbb847)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(15)
	super::__construct();
}
;
	return null();
}

//ExSprite_obj::~ExSprite_obj() { }

Dynamic ExSprite_obj::__CreateEmpty() { return  new ExSprite_obj; }
hx::ObjectPtr< ExSprite_obj > ExSprite_obj::__new()
{  hx::ObjectPtr< ExSprite_obj > result = new ExSprite_obj();
	result->__construct();
	return result;}

Dynamic ExSprite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ExSprite_obj > result = new ExSprite_obj();
	result->__construct();
	return result;}

Void ExSprite_obj::addChildForDel( ::openfl::_v2::display::DisplayObject child){
{
		HX_STACK_FRAME("core.display.ex.ExSprite","addChildForDel",0x0ae48873,"core.display.ex.ExSprite.addChildForDel","core/display/ex/ExSprite.hx",23,0x68cbb847)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child,"child")
		HX_STACK_LINE(24)
		this->super::addChild(child);
		HX_STACK_LINE(26)
		if (((this->m_pChilds == null()))){
			HX_STACK_LINE(28)
			Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(28)
			this->m_pChilds = _g;
		}
		HX_STACK_LINE(30)
		this->m_pChilds->push(child);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ExSprite_obj,addChildForDel,(void))

Void ExSprite_obj::removeAndDelChild( ::openfl::_v2::display::DisplayObject child){
{
		HX_STACK_FRAME("core.display.ex.ExSprite","removeAndDelChild",0x4849e18e,"core.display.ex.ExSprite.removeAndDelChild","core/display/ex/ExSprite.hx",38,0x68cbb847)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child,"child")
		HX_STACK_LINE(39)
		this->super::removeChild(child);
		HX_STACK_LINE(40)
		if ((this->m_pChilds->remove(child))){
			HX_STACK_LINE(42)
			child = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ExSprite_obj,removeAndDelChild,(void))


ExSprite_obj::ExSprite_obj()
{
}

void ExSprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ExSprite);
	HX_MARK_MEMBER_NAME(m_pChilds,"m_pChilds");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ExSprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_pChilds,"m_pChilds");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic ExSprite_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"m_pChilds") ) { return m_pChilds; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"addChildForDel") ) { return addChildForDel_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"removeAndDelChild") ) { return removeAndDelChild_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ExSprite_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"m_pChilds") ) { m_pChilds=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ExSprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("m_pChilds"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(ExSprite_obj,m_pChilds),HX_CSTRING("m_pChilds")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("m_pChilds"),
	HX_CSTRING("addChildForDel"),
	HX_CSTRING("removeAndDelChild"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ExSprite_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ExSprite_obj::__mClass,"__mClass");
};

#endif

Class ExSprite_obj::__mClass;

void ExSprite_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("core.display.ex.ExSprite"), hx::TCanCast< ExSprite_obj> ,sStaticFields,sMemberFields,
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

void ExSprite_obj::__boot()
{
}

} // end namespace core
} // end namespace display
} // end namespace ex
