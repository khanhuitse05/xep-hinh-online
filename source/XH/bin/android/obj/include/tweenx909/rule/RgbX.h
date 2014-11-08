#ifndef INCLUDED_tweenx909_rule_RgbX
#define INCLUDED_tweenx909_rule_RgbX

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(tweenx909,TweenX)
HX_DECLARE_CLASS2(tweenx909,advanced,CommandX)
HX_DECLARE_CLASS2(tweenx909,rule,RgbX)
namespace tweenx909{
namespace rule{


class HXCPP_CLASS_ATTRIBUTES  RgbX_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef RgbX_obj OBJ_;
		RgbX_obj();
		Void __construct(Float red,Float green,Float blue);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< RgbX_obj > __new(Float red,Float green,Float blue);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RgbX_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("RgbX"); }

		Float r;
		Float g;
		Float b;
		static Dynamic inputClass;
		static int calc( ::tweenx909::rule::RgbX _from,::tweenx909::rule::RgbX _to,Float t1,Float t2,::tweenx909::TweenX tween);
		static Dynamic calc_dyn();

		static ::tweenx909::rule::RgbX defaultFrom( int value,::tweenx909::rule::RgbX _to,::tweenx909::TweenX tween);
		static Dynamic defaultFrom_dyn();

		static ::tweenx909::rule::RgbX of( int color);
		static Dynamic of_dyn();

};

} // end namespace tweenx909
} // end namespace rule

#endif /* INCLUDED_tweenx909_rule_RgbX */ 
