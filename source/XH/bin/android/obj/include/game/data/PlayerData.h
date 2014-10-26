#ifndef INCLUDED_game_data_PlayerData
#define INCLUDED_game_data_PlayerData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/events/EventDispatcher.h>
HX_DECLARE_CLASS2(core,event,EventEx)
HX_DECLARE_CLASS2(game,data,InventoryData)
HX_DECLARE_CLASS2(game,data,PlayerData)
HX_DECLARE_CLASS3(openfl,_v2,events,Event)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
namespace game{
namespace data{


class HXCPP_CLASS_ATTRIBUTES  PlayerData_obj : public ::openfl::_v2::events::EventDispatcher_obj{
	public:
		typedef ::openfl::_v2::events::EventDispatcher_obj super;
		typedef PlayerData_obj OBJ_;
		PlayerData_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PlayerData_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PlayerData_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PlayerData"); }

		::String playerName;
		int level;
		int scores;
		int gold;
		::game::data::InventoryData inventory;
		virtual Void onServerData( ::core::event::EventEx e);
		Dynamic onServerData_dyn();

};

} // end namespace game
} // end namespace data

#endif /* INCLUDED_game_data_PlayerData */ 
