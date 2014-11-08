#ifndef INCLUDED_tweenx909_rule_ArrayRuleX
#define INCLUDED_tweenx909_rule_ArrayRuleX

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(tweenx909,TweenX)
HX_DECLARE_CLASS2(tweenx909,advanced,CommandX)
HX_DECLARE_CLASS2(tweenx909,rule,ArrayRuleX)
namespace tweenx909{
namespace rule{


class HXCPP_CLASS_ATTRIBUTES  ArrayRuleX_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ArrayRuleX_obj OBJ_;
		ArrayRuleX_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ArrayRuleX_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ArrayRuleX_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("ArrayRuleX"); }

		static Dynamic inputClass;
		static Dynamic calc( Dynamic _from,Dynamic _to,Float t1,Float t2,::tweenx909::TweenX tween);
		static Dynamic calc_dyn();

		static Dynamic _calc( Dynamic _from,Dynamic _to,Float t1,Float t2,::tweenx909::TweenX tween);
		static Dynamic _calc_dyn();

		static Dynamic defaultFrom( Dynamic value,Dynamic _to,::tweenx909::TweenX tween);
		static Dynamic defaultFrom_dyn();

		static Dynamic _defaultFrom( Dynamic value,Dynamic _to,::tweenx909::TweenX tween);
		static Dynamic _defaultFrom_dyn();

};

} // end namespace tweenx909
} // end namespace rule

#endif /* INCLUDED_tweenx909_rule_ArrayRuleX */ 
