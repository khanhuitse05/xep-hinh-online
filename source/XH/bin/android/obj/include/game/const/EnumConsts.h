#ifndef INCLUDED_game_const_EnumConsts
#define INCLUDED_game_const_EnumConsts

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(game,_const,EnumConsts)
namespace game{
namespace _const{


class HXCPP_CLASS_ATTRIBUTES  EnumConsts_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef EnumConsts_obj OBJ_;
		EnumConsts_obj();
		Void __construct(::String str);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< EnumConsts_obj > __new(::String str);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~EnumConsts_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("EnumConsts"); }

		::String m_strConsts;
		virtual ::String getConsts( );
		Dynamic getConsts_dyn();

		static ::game::_const::EnumConsts MiscTexts;
		static ::game::_const::EnumConsts FontArialNormal;
		static ::game::_const::EnumConsts FontArialBold;
};

} // end namespace game
} // end namespace const

#endif /* INCLUDED_game_const_EnumConsts */ 
