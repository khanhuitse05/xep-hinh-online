#ifndef INCLUDED_game_data_gameplay_DTingame
#define INCLUDED_game_data_gameplay_DTingame

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(game,data,gameplay,DTingame)
HX_DECLARE_CLASS3(game,data,gameplay,InfoBlock)
namespace game{
namespace data{
namespace gameplay{


class HXCPP_CLASS_ATTRIBUTES  DTingame_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DTingame_obj OBJ_;
		DTingame_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< DTingame_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DTingame_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("DTingame"); }

		bool isPlay;
		bool isChose;
		::game::data::gameplay::InfoBlock infoChose;
		bool isCycle;
		bool isUpdateStack;
		bool isHolding;
		bool isHolded;
		int indexHold;
		::game::data::gameplay::InfoBlock infoHold;
		virtual Void onClickVirtual( ::game::data::gameplay::InfoBlock _info);
		Dynamic onClickVirtual_dyn();

		virtual Void onClickHold( ::game::data::gameplay::InfoBlock _info,int _i);
		Dynamic onClickHold_dyn();

};

} // end namespace game
} // end namespace data
} // end namespace gameplay

#endif /* INCLUDED_game_data_gameplay_DTingame */ 
