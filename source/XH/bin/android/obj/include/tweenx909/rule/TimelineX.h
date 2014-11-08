#ifndef INCLUDED_tweenx909_rule_TimelineX
#define INCLUDED_tweenx909_rule_TimelineX

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(tweenx909,TweenX)
HX_DECLARE_CLASS2(tweenx909,advanced,CommandX)
HX_DECLARE_CLASS2(tweenx909,rule,TimelineX)
namespace tweenx909{
namespace rule{


class HXCPP_CLASS_ATTRIBUTES  TimelineX_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TimelineX_obj OBJ_;
		TimelineX_obj();
		Void __construct(Dynamic data,Dynamic intervals);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TimelineX_obj > __new(Dynamic data,Dynamic intervals);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TimelineX_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TimelineX"); }

		Float length;
		Dynamic data;
		Array< Float > timeline;
		static Dynamic inputClass;
		static Dynamic calc( ::tweenx909::rule::TimelineX _from,::tweenx909::rule::TimelineX _to,Float t1,Float t2,::tweenx909::TweenX tween);
		static Dynamic calc_dyn();

		static Dynamic defaultFrom( Dynamic value,::tweenx909::rule::TimelineX _to,::tweenx909::TweenX tween);
		static Dynamic defaultFrom_dyn();

};

} // end namespace tweenx909
} // end namespace rule

#endif /* INCLUDED_tweenx909_rule_TimelineX */ 
