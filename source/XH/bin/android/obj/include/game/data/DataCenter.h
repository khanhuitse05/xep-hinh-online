#ifndef INCLUDED_game_data_DataCenter
#define INCLUDED_game_data_DataCenter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(game,data,DataCenter)
HX_DECLARE_CLASS2(game,data,PlayerData)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
namespace game{
namespace data{


class HXCPP_CLASS_ATTRIBUTES  DataCenter_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DataCenter_obj OBJ_;
		DataCenter_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< DataCenter_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DataCenter_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("DataCenter"); }

		::game::data::PlayerData playerData;
};

} // end namespace game
} // end namespace data

#endif /* INCLUDED_game_data_DataCenter */ 
