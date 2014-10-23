#ifndef INCLUDED_openfl_errors_SecurityError
#define INCLUDED_openfl_errors_SecurityError

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/errors/Error.h>
HX_DECLARE_CLASS2(openfl,errors,Error)
HX_DECLARE_CLASS2(openfl,errors,SecurityError)
namespace openfl{
namespace errors{


class HXCPP_CLASS_ATTRIBUTES  SecurityError_obj : public ::openfl::errors::Error_obj{
	public:
		typedef ::openfl::errors::Error_obj super;
		typedef SecurityError_obj OBJ_;
		SecurityError_obj();
		Void __construct(::String __o_inMessage);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< SecurityError_obj > __new(::String __o_inMessage);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SecurityError_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("SecurityError"); }

};

} // end namespace openfl
} // end namespace errors

#endif /* INCLUDED_openfl_errors_SecurityError */ 
