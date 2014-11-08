#ifndef INCLUDED_tweenx909_advanced_DefaultsX
#define INCLUDED_tweenx909_advanced_DefaultsX

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(tweenx909,advanced,DefaultsX)
namespace tweenx909{
namespace advanced{


class HXCPP_CLASS_ATTRIBUTES  DefaultsX_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DefaultsX_obj OBJ_;
		DefaultsX_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< DefaultsX_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DefaultsX_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("DefaultsX"); }

		Dynamic _ease;
		Dynamic &_ease_dyn() { return _ease;}
		Float _time;
		Float _delay;
		Float _interval;
		int _repeat;
		bool _yoyo;
		bool _zigzag;
		bool _autoPlay;
		virtual ::tweenx909::advanced::DefaultsX dump( );
		Dynamic dump_dyn();

		virtual Void apply( );
		Dynamic apply_dyn();

		virtual ::tweenx909::advanced::DefaultsX clone( );
		Dynamic clone_dyn();

		virtual ::tweenx909::advanced::DefaultsX time( Float value);
		Dynamic time_dyn();

		virtual ::tweenx909::advanced::DefaultsX ease( Dynamic value);
		Dynamic ease_dyn();

		virtual ::tweenx909::advanced::DefaultsX delay( Float value);
		Dynamic delay_dyn();

		virtual ::tweenx909::advanced::DefaultsX interval( Float value);
		Dynamic interval_dyn();

		virtual ::tweenx909::advanced::DefaultsX repeat( hx::Null< int >  value);
		Dynamic repeat_dyn();

		virtual ::tweenx909::advanced::DefaultsX yoyo( hx::Null< bool >  value);
		Dynamic yoyo_dyn();

		virtual ::tweenx909::advanced::DefaultsX zigzag( hx::Null< bool >  value);
		Dynamic zigzag_dyn();

		virtual ::tweenx909::advanced::DefaultsX autoPlay( hx::Null< bool >  value);
		Dynamic autoPlay_dyn();

};

} // end namespace tweenx909
} // end namespace advanced

#endif /* INCLUDED_tweenx909_advanced_DefaultsX */ 
