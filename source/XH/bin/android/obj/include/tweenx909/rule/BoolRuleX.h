#ifndef INCLUDED_tweenx909_rule_BoolRuleX
#define INCLUDED_tweenx909_rule_BoolRuleX

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(tweenx909,TweenX)
HX_DECLARE_CLASS2(tweenx909,advanced,CommandX)
HX_DECLARE_CLASS2(tweenx909,rule,BoolRuleX)
namespace tweenx909{
namespace rule{


class HXCPP_CLASS_ATTRIBUTES  BoolRuleX_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BoolRuleX_obj OBJ_;
		BoolRuleX_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< BoolRuleX_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BoolRuleX_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("BoolRuleX"); }

		static Dynamic inputClass;
		static bool calc( bool _from,bool _to,Float t1,Float t2,::tweenx909::TweenX tween);
		static Dynamic calc_dyn();

		static bool defaultFrom( bool value,bool _to,::tweenx909::TweenX tween);
		static Dynamic defaultFrom_dyn();

};

} // end namespace tweenx909
} // end namespace rule

#endif /* INCLUDED_tweenx909_rule_BoolRuleX */ 
