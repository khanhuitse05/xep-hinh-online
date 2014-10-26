#ifndef INCLUDED_game_data_InventoryData
#define INCLUDED_game_data_InventoryData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(game,data,DTItem)
HX_DECLARE_CLASS2(game,data,InventoryData)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(openfl,_v2,utils,ByteArray)
HX_DECLARE_CLASS3(openfl,_v2,utils,IDataInput)
HX_DECLARE_CLASS3(openfl,_v2,utils,IDataOutput)
HX_DECLARE_CLASS3(openfl,_v2,utils,IMemoryRange)
namespace game{
namespace data{


class HXCPP_CLASS_ATTRIBUTES  InventoryData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef InventoryData_obj OBJ_;
		InventoryData_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< InventoryData_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~InventoryData_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("InventoryData"); }

		Array< ::Dynamic > pItems;
		virtual Void readItem( ::openfl::_v2::utils::ByteArray data);
		Dynamic readItem_dyn();

};

} // end namespace game
} // end namespace data

#endif /* INCLUDED_game_data_InventoryData */ 
