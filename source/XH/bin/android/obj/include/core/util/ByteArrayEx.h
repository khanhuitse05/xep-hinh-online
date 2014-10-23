#ifndef INCLUDED_core_util_ByteArrayEx
#define INCLUDED_core_util_ByteArrayEx

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/utils/ByteArray.h>
HX_DECLARE_CLASS2(core,util,ByteArrayEx)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(openfl,_v2,utils,ByteArray)
HX_DECLARE_CLASS3(openfl,_v2,utils,IDataInput)
HX_DECLARE_CLASS3(openfl,_v2,utils,IDataOutput)
HX_DECLARE_CLASS3(openfl,_v2,utils,IMemoryRange)
namespace core{
namespace util{


class HXCPP_CLASS_ATTRIBUTES  ByteArrayEx_obj : public ::openfl::_v2::utils::ByteArray_obj{
	public:
		typedef ::openfl::_v2::utils::ByteArray_obj super;
		typedef ByteArrayEx_obj OBJ_;
		ByteArrayEx_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ByteArrayEx_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ByteArrayEx_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("ByteArrayEx"); }

		Float _twoPower32;
		virtual ::String readStr( );
		Dynamic readStr_dyn();

		virtual Float readLong( );
		Dynamic readLong_dyn();

		virtual Void writeStr( ::String string);
		Dynamic writeStr_dyn();

		virtual Void wireArrBinary( Array< int > arrByte);
		Dynamic wireArrBinary_dyn();

		virtual Void wireArrInteger( Array< int > arrByte);
		Dynamic wireArrInteger_dyn();

};

} // end namespace core
} // end namespace util

#endif /* INCLUDED_core_util_ByteArrayEx */ 
