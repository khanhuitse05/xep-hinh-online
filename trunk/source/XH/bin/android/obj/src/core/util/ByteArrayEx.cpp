#include <hxcpp.h>

#ifndef INCLUDED_core_util_ByteArrayEx
#include <core/util/ByteArrayEx.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_ByteArray
#include <openfl/_v2/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_IDataInput
#include <openfl/_v2/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_IDataOutput
#include <openfl/_v2/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_IMemoryRange
#include <openfl/_v2/utils/IMemoryRange.h>
#endif
namespace core{
namespace util{

Void ByteArrayEx_obj::__construct()
{
HX_STACK_FRAME("core.util.ByteArrayEx","new",0x2fcd1e19,"core.util.ByteArrayEx.new","core/util/ByteArrayEx.hx",10,0xf1422bd7)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(12)
	this->_twoPower32 = 4294967296;
	HX_STACK_LINE(17)
	super::__construct(null());
	HX_STACK_LINE(18)
	this->set_endian(HX_CSTRING("bigEndian"));
}
;
	return null();
}

//ByteArrayEx_obj::~ByteArrayEx_obj() { }

Dynamic ByteArrayEx_obj::__CreateEmpty() { return  new ByteArrayEx_obj; }
hx::ObjectPtr< ByteArrayEx_obj > ByteArrayEx_obj::__new()
{  hx::ObjectPtr< ByteArrayEx_obj > result = new ByteArrayEx_obj();
	result->__construct();
	return result;}

Dynamic ByteArrayEx_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ByteArrayEx_obj > result = new ByteArrayEx_obj();
	result->__construct();
	return result;}

::String ByteArrayEx_obj::readStr( ){
	HX_STACK_FRAME("core.util.ByteArrayEx","readStr",0x42966d34,"core.util.ByteArrayEx.readStr","core/util/ByteArrayEx.hx",24,0xf1422bd7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(24)
	return this->readUTF();
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayEx_obj,readStr,return )

Float ByteArrayEx_obj::readLong( ){
	HX_STACK_FRAME("core.util.ByteArrayEx","readLong",0xfc64d399,"core.util.ByteArrayEx.readLong","core/util/ByteArrayEx.hx",43,0xf1422bd7)
	HX_STACK_THIS(this)
	HX_STACK_LINE(44)
	int uintH = this->readUnsignedInt();		HX_STACK_VAR(uintH,"uintH");
	HX_STACK_LINE(45)
	int uintL = this->readUnsignedInt();		HX_STACK_VAR(uintL,"uintL");
	struct _Function_1_1{
		inline static Float Block( int &uintL){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","core/util/ByteArrayEx.hx",48,0xf1422bd7)
			{
				HX_STACK_LINE(48)
				int _int = uintL;		HX_STACK_VAR(_int,"int");
				HX_STACK_LINE(48)
				return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static Float Block( int &uintH){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","core/util/ByteArrayEx.hx",48,0xf1422bd7)
			{
				HX_STACK_LINE(48)
				int _int = uintH;		HX_STACK_VAR(_int,"int");
				HX_STACK_LINE(48)
				return (  (((_int < (int)0))) ? Float((4294967296.0 + _int)) : Float((_int + 0.0)) );
			}
			return null();
		}
	};
	HX_STACK_LINE(48)
	return (_Function_1_1::Block(uintL) + (_Function_1_2::Block(uintH) * this->_twoPower32));
}


HX_DEFINE_DYNAMIC_FUNC0(ByteArrayEx_obj,readLong,return )

Void ByteArrayEx_obj::writeStr( ::String string){
{
		HX_STACK_FRAME("core.util.ByteArrayEx","writeStr",0xb0ad5cb9,"core.util.ByteArrayEx.writeStr","core/util/ByteArrayEx.hx",52,0xf1422bd7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(string,"string")
		HX_STACK_LINE(53)
		if (((string == null()))){
			HX_STACK_LINE(53)
			return null();
		}
		HX_STACK_LINE(55)
		this->writeUTF(string);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayEx_obj,writeStr,(void))

Void ByteArrayEx_obj::wireArrBinary( Array< int > arrByte){
{
		HX_STACK_FRAME("core.util.ByteArrayEx","wireArrBinary",0xfa13f736,"core.util.ByteArrayEx.wireArrBinary","core/util/ByteArrayEx.hx",59,0xf1422bd7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(arrByte,"arrByte")
		HX_STACK_LINE(60)
		if (((arrByte == null()))){
			HX_STACK_LINE(62)
			return null();
		}
		HX_STACK_LINE(64)
		this->writeShort(arrByte->length);
		HX_STACK_LINE(65)
		{
			HX_STACK_LINE(65)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(65)
			while((true)){
				HX_STACK_LINE(65)
				if ((!(((_g < arrByte->length))))){
					HX_STACK_LINE(65)
					break;
				}
				HX_STACK_LINE(65)
				int byte = arrByte->__get(_g);		HX_STACK_VAR(byte,"byte");
				HX_STACK_LINE(65)
				++(_g);
				HX_STACK_LINE(67)
				{
					HX_STACK_LINE(67)
					this->ensureElem(this->position,true);
					HX_STACK_LINE(67)
					int _g1 = (this->position)++;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(67)
					this->b[_g1] = byte;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayEx_obj,wireArrBinary,(void))

Void ByteArrayEx_obj::wireArrInteger( Array< int > arrByte){
{
		HX_STACK_FRAME("core.util.ByteArrayEx","wireArrInteger",0x714750e9,"core.util.ByteArrayEx.wireArrInteger","core/util/ByteArrayEx.hx",72,0xf1422bd7)
		HX_STACK_THIS(this)
		HX_STACK_ARG(arrByte,"arrByte")
		HX_STACK_LINE(73)
		if (((arrByte == null()))){
			HX_STACK_LINE(75)
			return null();
		}
		HX_STACK_LINE(77)
		this->writeShort(arrByte->length);
		HX_STACK_LINE(78)
		{
			HX_STACK_LINE(78)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(78)
			while((true)){
				HX_STACK_LINE(78)
				if ((!(((_g < arrByte->length))))){
					HX_STACK_LINE(78)
					break;
				}
				HX_STACK_LINE(78)
				int val = arrByte->__get(_g);		HX_STACK_VAR(val,"val");
				HX_STACK_LINE(78)
				++(_g);
				HX_STACK_LINE(80)
				this->writeInt(val);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ByteArrayEx_obj,wireArrInteger,(void))


ByteArrayEx_obj::ByteArrayEx_obj()
{
}

Dynamic ByteArrayEx_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"readStr") ) { return readStr_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readLong") ) { return readLong_dyn(); }
		if (HX_FIELD_EQ(inName,"writeStr") ) { return writeStr_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_twoPower32") ) { return _twoPower32; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"wireArrBinary") ) { return wireArrBinary_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"wireArrInteger") ) { return wireArrInteger_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ByteArrayEx_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"_twoPower32") ) { _twoPower32=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ByteArrayEx_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_twoPower32"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(ByteArrayEx_obj,_twoPower32),HX_CSTRING("_twoPower32")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_twoPower32"),
	HX_CSTRING("readStr"),
	HX_CSTRING("readLong"),
	HX_CSTRING("writeStr"),
	HX_CSTRING("wireArrBinary"),
	HX_CSTRING("wireArrInteger"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ByteArrayEx_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ByteArrayEx_obj::__mClass,"__mClass");
};

#endif

Class ByteArrayEx_obj::__mClass;

void ByteArrayEx_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("core.util.ByteArrayEx"), hx::TCanCast< ByteArrayEx_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void ByteArrayEx_obj::__boot()
{
}

} // end namespace core
} // end namespace util
