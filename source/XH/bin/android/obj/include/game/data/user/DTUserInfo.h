#ifndef INCLUDED_game_data_user_DTUserInfo
#define INCLUDED_game_data_user_DTUserInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(game,data,InventoryData)
HX_DECLARE_CLASS3(game,data,user,DTUserInfo)
namespace game{
namespace data{
namespace user{


class HXCPP_CLASS_ATTRIBUTES  DTUserInfo_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DTUserInfo_obj OBJ_;
		DTUserInfo_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< DTUserInfo_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DTUserInfo_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("DTUserInfo"); }

		::String playerName;
		int level;
		int scores;
		int gold;
		::game::data::InventoryData inventory;
};

} // end namespace game
} // end namespace data
} // end namespace user

#endif /* INCLUDED_game_data_user_DTUserInfo */ 
