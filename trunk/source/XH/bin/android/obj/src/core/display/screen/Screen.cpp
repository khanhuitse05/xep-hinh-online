#include <hxcpp.h>

#ifndef INCLUDED_core_display_screen_Screen
#include <core/display/screen/Screen.h>
#endif
namespace core{
namespace display{
namespace screen{

Void Screen_obj::__construct(int layer,::Class baseName,::Class viewName)
{
HX_STACK_FRAME("core.display.screen.Screen","new",0x096c8545,"core.display.screen.Screen.new","core/display/screen/Screen.hx",21,0xb1560eac)
HX_STACK_THIS(this)
HX_STACK_ARG(layer,"layer")
HX_STACK_ARG(baseName,"baseName")
HX_STACK_ARG(viewName,"viewName")
{
	HX_STACK_LINE(22)
	this->m_pBaseClass = baseName;
	HX_STACK_LINE(23)
	this->m_pViewClass = viewName;
	HX_STACK_LINE(24)
	this->m_nLayer = layer;
}
;
	return null();
}

//Screen_obj::~Screen_obj() { }

Dynamic Screen_obj::__CreateEmpty() { return  new Screen_obj; }
hx::ObjectPtr< Screen_obj > Screen_obj::__new(int layer,::Class baseName,::Class viewName)
{  hx::ObjectPtr< Screen_obj > result = new Screen_obj();
	result->__construct(layer,baseName,viewName);
	return result;}

Dynamic Screen_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Screen_obj > result = new Screen_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}


Screen_obj::Screen_obj()
{
}

void Screen_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Screen);
	HX_MARK_MEMBER_NAME(m_pBaseClass,"m_pBaseClass");
	HX_MARK_MEMBER_NAME(m_pViewClass,"m_pViewClass");
	HX_MARK_MEMBER_NAME(m_nLayer,"m_nLayer");
	HX_MARK_END_CLASS();
}

void Screen_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_pBaseClass,"m_pBaseClass");
	HX_VISIT_MEMBER_NAME(m_pViewClass,"m_pViewClass");
	HX_VISIT_MEMBER_NAME(m_nLayer,"m_nLayer");
}

Dynamic Screen_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"m_nLayer") ) { return m_nLayer; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"m_pBaseClass") ) { return m_pBaseClass; }
		if (HX_FIELD_EQ(inName,"m_pViewClass") ) { return m_pViewClass; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Screen_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"m_nLayer") ) { m_nLayer=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"m_pBaseClass") ) { m_pBaseClass=inValue.Cast< ::Class >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_pViewClass") ) { m_pViewClass=inValue.Cast< ::Class >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Screen_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("m_pBaseClass"));
	outFields->push(HX_CSTRING("m_pViewClass"));
	outFields->push(HX_CSTRING("m_nLayer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Class*/ ,(int)offsetof(Screen_obj,m_pBaseClass),HX_CSTRING("m_pBaseClass")},
	{hx::fsObject /*::Class*/ ,(int)offsetof(Screen_obj,m_pViewClass),HX_CSTRING("m_pViewClass")},
	{hx::fsInt,(int)offsetof(Screen_obj,m_nLayer),HX_CSTRING("m_nLayer")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("m_pBaseClass"),
	HX_CSTRING("m_pViewClass"),
	HX_CSTRING("m_nLayer"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Screen_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Screen_obj::__mClass,"__mClass");
};

#endif

Class Screen_obj::__mClass;

void Screen_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("core.display.screen.Screen"), hx::TCanCast< Screen_obj> ,sStaticFields,sMemberFields,
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

void Screen_obj::__boot()
{
}

} // end namespace core
} // end namespace display
} // end namespace screen
