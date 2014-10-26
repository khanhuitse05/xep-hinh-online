#ifndef INCLUDED_game_data_DTItem
#define INCLUDED_game_data_DTItem

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(game,data,DTItem)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(openfl,_v2,utils,ByteArray)
HX_DECLARE_CLASS3(openfl,_v2,utils,IDataInput)
HX_DECLARE_CLASS3(openfl,_v2,utils,IDataOutput)
HX_DECLARE_CLASS3(openfl,_v2,utils,IMemoryRange)
namespace game{
namespace data{


class HXCPP_CLASS_ATTRIBUTES  DTItem_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DTItem_obj OBJ_;
		DTItem_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< DTItem_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DTItem_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("DTItem"); }

		int nID;
		int nStorageStatus;
		int nExpiredTime;
		virtual Void read( ::openfl::_v2::utils::ByteArray data);
		Dynamic read_dyn();

};

} // end namespace game
} // end namespace data

#endif /* INCLUDED_game_data_DTItem */ 
