#ifndef INCLUDED_game_data_gameplay_DTgameplay
#define INCLUDED_game_data_gameplay_DTgameplay

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(game,data,gameplay,DTgameplay)
HX_DECLARE_CLASS3(game,data,gameplay,InfoBlock)
namespace game{
namespace data{
namespace gameplay{


class HXCPP_CLASS_ATTRIBUTES  DTgameplay_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DTgameplay_obj OBJ_;
		DTgameplay_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< DTgameplay_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DTgameplay_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("DTgameplay"); }

		Array< ::Dynamic > mStackBlock;
		::game::data::gameplay::InfoBlock mcurrentBlock;
		Array< ::Dynamic > mHoldBlock;
		int mMaxStack;
		int mMaxHold;
		int mScore;
		int mTimeTotal;
		int mTimeCurrent;
		int mX;
		Array< int > mSkillCurrent;
		Array< int > mListSkill;
		virtual Void RefreshBlock( );
		Dynamic RefreshBlock_dyn();

		virtual Void NextBlock( );
		Dynamic NextBlock_dyn();

		virtual Void HoldBlock( int _index);
		Dynamic HoldBlock_dyn();

};

} // end namespace game
} // end namespace data
} // end namespace gameplay

#endif /* INCLUDED_game_data_gameplay_DTgameplay */ 
