#ifndef INCLUDED_tweenx909_advanced_GroupX
#define INCLUDED_tweenx909_advanced_GroupX

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(tweenx909,TweenX)
HX_DECLARE_CLASS2(tweenx909,advanced,CommandX)
HX_DECLARE_CLASS2(tweenx909,advanced,DefaultsX)
HX_DECLARE_CLASS2(tweenx909,advanced,GroupX)
HX_DECLARE_CLASS3(tweenx909,advanced,_GroupX,GroupTypeX)
namespace tweenx909{
namespace advanced{


class HXCPP_CLASS_ATTRIBUTES  GroupX_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GroupX_obj OBJ_;
		GroupX_obj();
		Void __construct(Dynamic source,::tweenx909::advanced::_GroupX::GroupTypeX type,::tweenx909::advanced::DefaultsX defaults);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< GroupX_obj > __new(Dynamic source,::tweenx909::advanced::_GroupX::GroupTypeX type,::tweenx909::advanced::DefaultsX defaults);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GroupX_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("GroupX"); }

		Float current;
		Array< ::Dynamic > tweens;
		Dynamic source;
		::tweenx909::advanced::_GroupX::GroupTypeX type;
		::tweenx909::advanced::DefaultsX defaults;
};

} // end namespace tweenx909
} // end namespace advanced

#endif /* INCLUDED_tweenx909_advanced_GroupX */ 
