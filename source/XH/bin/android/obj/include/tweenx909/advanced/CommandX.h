#ifndef INCLUDED_tweenx909_advanced_CommandX
#define INCLUDED_tweenx909_advanced_CommandX

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tweenx909,advanced,CommandTypeX)
HX_DECLARE_CLASS2(tweenx909,advanced,CommandX)
namespace tweenx909{
namespace advanced{


class HXCPP_CLASS_ATTRIBUTES  CommandX_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CommandX_obj OBJ_;
		CommandX_obj();
		Void __construct(::tweenx909::advanced::CommandTypeX command,Dynamic posInfos);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< CommandX_obj > __new(::tweenx909::advanced::CommandTypeX command,Dynamic posInfos);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CommandX_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("CommandX"); }

		::tweenx909::advanced::CommandTypeX command;
		Dynamic definedPosInfos;
};

} // end namespace tweenx909
} // end namespace advanced

#endif /* INCLUDED_tweenx909_advanced_CommandX */ 
