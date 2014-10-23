#ifndef INCLUDED_core_util_Log
#define INCLUDED_core_util_Log

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(core,util,Log)
namespace core{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  Log_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Log_obj OBJ_;
		Log_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Log_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Log_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Log"); }

		static ::String INFO;
		static ::String ERROR;
		static Void info( ::String message);
		static Dynamic info_dyn();

		static Void error( ::String message);
		static Dynamic error_dyn();

};

} // end namespace core
} // end namespace util

#endif /* INCLUDED_core_util_Log */ 
