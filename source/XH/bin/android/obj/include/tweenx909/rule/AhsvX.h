#ifndef INCLUDED_tweenx909_rule_AhsvX
#define INCLUDED_tweenx909_rule_AhsvX

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(tweenx909,TweenX)
HX_DECLARE_CLASS2(tweenx909,advanced,CommandX)
HX_DECLARE_CLASS2(tweenx909,rule,AhsvX)
namespace tweenx909{
namespace rule{


class HXCPP_CLASS_ATTRIBUTES  AhsvX_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef AhsvX_obj OBJ_;
		AhsvX_obj();
		Void __construct(Float alpha,Float hue,Float saturation,Float value);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AhsvX_obj > __new(Float alpha,Float hue,Float saturation,Float value);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AhsvX_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("AhsvX"); }

		Float a;
		Float h;
		Float s;
		Float v;
		static Dynamic inputClass;
		static int calc( ::tweenx909::rule::AhsvX _from,::tweenx909::rule::AhsvX _to,Float t1,Float t2,::tweenx909::TweenX tween);
		static Dynamic calc_dyn();

		static ::tweenx909::rule::AhsvX defaultFrom( int value,::tweenx909::rule::AhsvX _to,::tweenx909::TweenX tween);
		static Dynamic defaultFrom_dyn();

		static ::tweenx909::rule::AhsvX of( int color,hx::Null< int >  hueIndex);
		static Dynamic of_dyn();

};

} // end namespace tweenx909
} // end namespace rule

#endif /* INCLUDED_tweenx909_rule_AhsvX */ 
