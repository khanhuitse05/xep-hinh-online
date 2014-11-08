#ifndef INCLUDED_tweenx909_rule_QuakeX
#define INCLUDED_tweenx909_rule_QuakeX

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(tweenx909,TweenX)
HX_DECLARE_CLASS2(tweenx909,advanced,CommandX)
HX_DECLARE_CLASS2(tweenx909,rule,QuakeX)
namespace tweenx909{
namespace rule{


class HXCPP_CLASS_ATTRIBUTES  QuakeX_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef QuakeX_obj OBJ_;
		QuakeX_obj();
		Void __construct(Float value,Float scale,Dynamic ease);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< QuakeX_obj > __new(Float value,Float scale,Dynamic ease);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~QuakeX_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("QuakeX"); }

		Dynamic ease;
		Dynamic &ease_dyn() { return ease;}
		Float value;
		Float scale;
		virtual int none( Float t);
		Dynamic none_dyn();

		static Dynamic inputClass;
		static Float calc( ::tweenx909::rule::QuakeX _from,::tweenx909::rule::QuakeX _to,Float t1,Float t2,::tweenx909::TweenX tween);
		static Dynamic calc_dyn();

		static ::tweenx909::rule::QuakeX defaultFrom( Float value,::tweenx909::rule::QuakeX _to,::tweenx909::TweenX tween);
		static Dynamic defaultFrom_dyn();

};

} // end namespace tweenx909
} // end namespace rule

#endif /* INCLUDED_tweenx909_rule_QuakeX */ 
