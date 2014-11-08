#ifndef INCLUDED_tweenx909_rule_HsvX
#define INCLUDED_tweenx909_rule_HsvX

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(tweenx909,TweenX)
HX_DECLARE_CLASS2(tweenx909,advanced,CommandX)
HX_DECLARE_CLASS2(tweenx909,rule,HsvX)
namespace tweenx909{
namespace rule{


class HXCPP_CLASS_ATTRIBUTES  HsvX_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef HsvX_obj OBJ_;
		HsvX_obj();
		Void __construct(Float hue,Float saturation,Float value);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< HsvX_obj > __new(Float hue,Float saturation,Float value);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HsvX_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("HsvX"); }

		Float h;
		Float s;
		Float v;
		static Dynamic inputClass;
		static int calc( ::tweenx909::rule::HsvX _from,::tweenx909::rule::HsvX _to,Float t1,Float t2,::tweenx909::TweenX tween);
		static Dynamic calc_dyn();

		static ::tweenx909::rule::HsvX defaultFrom( int value,::tweenx909::rule::HsvX _to,::tweenx909::TweenX tween);
		static Dynamic defaultFrom_dyn();

		static ::tweenx909::rule::HsvX of( int color,hx::Null< int >  hueIndex);
		static Dynamic of_dyn();

};

} // end namespace tweenx909
} // end namespace rule

#endif /* INCLUDED_tweenx909_rule_HsvX */ 
