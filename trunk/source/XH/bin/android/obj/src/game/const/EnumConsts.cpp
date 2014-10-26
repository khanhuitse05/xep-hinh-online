#include <hxcpp.h>

#ifndef INCLUDED_game_const_EnumConsts
#include <game/const/EnumConsts.h>
#endif
namespace game{
namespace _const{

Void EnumConsts_obj::__construct(::String str)
{
HX_STACK_FRAME("game.const.EnumConsts","new",0x05314dca,"game.const.EnumConsts.new","game/const/EnumConsts.hx",20,0x0b3ef0e4)
HX_STACK_THIS(this)
HX_STACK_ARG(str,"str")
{
	HX_STACK_LINE(20)
	this->m_strConsts = str;
}
;
	return null();
}

//EnumConsts_obj::~EnumConsts_obj() { }

Dynamic EnumConsts_obj::__CreateEmpty() { return  new EnumConsts_obj; }
hx::ObjectPtr< EnumConsts_obj > EnumConsts_obj::__new(::String str)
{  hx::ObjectPtr< EnumConsts_obj > result = new EnumConsts_obj();
	result->__construct(str);
	return result;}

Dynamic EnumConsts_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< EnumConsts_obj > result = new EnumConsts_obj();
	result->__construct(inArgs[0]);
	return result;}

::String EnumConsts_obj::getConsts( ){
	HX_STACK_FRAME("game.const.EnumConsts","getConsts",0xffaf2fd0,"game.const.EnumConsts.getConsts","game/const/EnumConsts.hx",29,0x0b3ef0e4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(29)
	return this->m_strConsts;
}


HX_DEFINE_DYNAMIC_FUNC0(EnumConsts_obj,getConsts,return )

::game::_const::EnumConsts EnumConsts_obj::MiscTexts;

::game::_const::EnumConsts EnumConsts_obj::FontArialNormal;

::game::_const::EnumConsts EnumConsts_obj::FontArialBold;


EnumConsts_obj::EnumConsts_obj()
{
}

void EnumConsts_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(EnumConsts);
	HX_MARK_MEMBER_NAME(m_strConsts,"m_strConsts");
	HX_MARK_END_CLASS();
}

void EnumConsts_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_strConsts,"m_strConsts");
}

Dynamic EnumConsts_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"MiscTexts") ) { return MiscTexts; }
		if (HX_FIELD_EQ(inName,"getConsts") ) { return getConsts_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"m_strConsts") ) { return m_strConsts; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"FontArialBold") ) { return FontArialBold; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"FontArialNormal") ) { return FontArialNormal; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic EnumConsts_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"MiscTexts") ) { MiscTexts=inValue.Cast< ::game::_const::EnumConsts >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"m_strConsts") ) { m_strConsts=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"FontArialBold") ) { FontArialBold=inValue.Cast< ::game::_const::EnumConsts >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"FontArialNormal") ) { FontArialNormal=inValue.Cast< ::game::_const::EnumConsts >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EnumConsts_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("m_strConsts"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("MiscTexts"),
	HX_CSTRING("FontArialNormal"),
	HX_CSTRING("FontArialBold"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(EnumConsts_obj,m_strConsts),HX_CSTRING("m_strConsts")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("m_strConsts"),
	HX_CSTRING("getConsts"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EnumConsts_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(EnumConsts_obj::MiscTexts,"MiscTexts");
	HX_MARK_MEMBER_NAME(EnumConsts_obj::FontArialNormal,"FontArialNormal");
	HX_MARK_MEMBER_NAME(EnumConsts_obj::FontArialBold,"FontArialBold");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EnumConsts_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(EnumConsts_obj::MiscTexts,"MiscTexts");
	HX_VISIT_MEMBER_NAME(EnumConsts_obj::FontArialNormal,"FontArialNormal");
	HX_VISIT_MEMBER_NAME(EnumConsts_obj::FontArialBold,"FontArialBold");
};

#endif

Class EnumConsts_obj::__mClass;

void EnumConsts_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("game.const.EnumConsts"), hx::TCanCast< EnumConsts_obj> ,sStaticFields,sMemberFields,
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

void EnumConsts_obj::__boot()
{
	MiscTexts= ::game::_const::EnumConsts_obj::__new(HX_CSTRING("assets/text.xml"));
	FontArialNormal= ::game::_const::EnumConsts_obj::__new(HX_CSTRING("img/fonts/arial.ttf"));
	FontArialBold= ::game::_const::EnumConsts_obj::__new(HX_CSTRING("img/fonts/arialbd.ttf"));
}

} // end namespace game
} // end namespace const
