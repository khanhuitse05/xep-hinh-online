#ifndef INCLUDED_game_gameobject_board_Board
#define INCLUDED_game_gameobject_board_Board

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/_v2/display/Sprite.h>
HX_DECLARE_CLASS3(core,display,ex,ExSprite)
HX_DECLARE_CLASS3(game,data,gameplay,InfoBlock)
HX_DECLARE_CLASS3(game,gameobject,board,Board)
HX_DECLARE_CLASS3(game,gameobject,board,BoardBG)
HX_DECLARE_CLASS3(game,gameobject,board,CBlock)
HX_DECLARE_CLASS3(game,gameobject,board,VirtualBlock)
HX_DECLARE_CLASS3(game,gameobject,brick,Brick)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_v2,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_v2,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_v2,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_v2,display,Sprite)
HX_DECLARE_CLASS3(openfl,_v2,events,Event)
HX_DECLARE_CLASS3(openfl,_v2,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_v2,events,IEventDispatcher)
namespace game{
namespace gameobject{
namespace board{


class HXCPP_CLASS_ATTRIBUTES  Board_obj : public ::openfl::_v2::display::Sprite_obj{
	public:
		typedef ::openfl::_v2::display::Sprite_obj super;
		typedef Board_obj OBJ_;
		Board_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Board_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Board_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Board"); }

		int mMaxCount;
		int mCount;
		int mState;
		::game::gameobject::board::BoardBG mBg;
		::openfl::_v2::display::Sprite mBoard;
		Array< ::Dynamic > mListID;
		Array< ::Dynamic > mListBrick;
		Array< ::Dynamic > mListRow;
		int mMinRow;
		Array< int > mListClear;
		::game::gameobject::board::CBlock mCurentBlock;
		Array< ::Dynamic > mListCase;
		::core::display::ex::ExSprite mCaseBG;
		::core::display::ex::ExSprite mClearBG;
		virtual Void init( );
		Dynamic init_dyn();

		virtual Void gameLoop( ::openfl::_v2::events::Event e);
		Dynamic gameLoop_dyn();

		virtual Void initData( );
		Dynamic initData_dyn();

		virtual Void setBrickBeging( );
		Dynamic setBrickBeging_dyn();

		virtual Void onStartGame( );
		Dynamic onStartGame_dyn();

		virtual Void ChangeBlock( ::game::data::gameplay::InfoBlock _info);
		Dynamic ChangeBlock_dyn();

		virtual Void NextBlock( );
		Dynamic NextBlock_dyn();

		virtual Void SetCase( );
		Dynamic SetCase_dyn();

		virtual bool checkExist( Array< int > _arr,int _x);
		Dynamic checkExist_dyn();

		virtual Void SetListRowCurrent( );
		Dynamic SetListRowCurrent_dyn();

		virtual Array< ::Dynamic > GetMinRowCurrent( int _column);
		Dynamic GetMinRowCurrent_dyn();

		virtual int GetRowCurrent( int _column);
		Dynamic GetRowCurrent_dyn();

		virtual int getHeightColumn( int _column);
		Dynamic getHeightColumn_dyn();

		int _rowTemp;
		int _columnTemp;
		virtual Void ApplyEffect( );
		Dynamic ApplyEffect_dyn();

		virtual Void OnApplyToCompleteQuarter( );
		Dynamic OnApplyToCompleteQuarter_dyn();

		virtual Void OnApplyToCompleteSemi( );
		Dynamic OnApplyToCompleteSemi_dyn();

		virtual Void OnApplyToCompleteFinal( );
		Dynamic OnApplyToCompleteFinal_dyn();

		virtual Void CheckClear( int _row);
		Dynamic CheckClear_dyn();

		virtual bool CheckClearRow( int _row);
		Dynamic CheckClearRow_dyn();

		virtual Void createEffectClear( int _row);
		Dynamic createEffectClear_dyn();

		virtual Void onRemoveEffect( );
		Dynamic onRemoveEffect_dyn();

		virtual Void onBrickDown( );
		Dynamic onBrickDown_dyn();

		virtual Void onBrickDownAt( int _row);
		Dynamic onBrickDownAt_dyn();

		virtual Void visibleRow( int _row);
		Dynamic visibleRow_dyn();

		static int STATE_PREPARE;
		static int STATE_START;
		static int STATE_NORMAL;
		static int STATE_END;
		static Float TIME_FALL;
		static int TIME_CLEAR;
};

} // end namespace game
} // end namespace gameobject
} // end namespace board

#endif /* INCLUDED_game_gameobject_board_Board */ 
