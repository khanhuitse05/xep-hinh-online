#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_core_display_ex_ExSprite
#include <core/display/ex/ExSprite.h>
#endif
#ifndef INCLUDED_core_resource_ResourceManager
#include <core/resource/ResourceManager.h>
#endif
#ifndef INCLUDED_core_sprites_Animx
#include <core/sprites/Animx.h>
#endif
#ifndef INCLUDED_game_data_DataCenter
#include <game/data/DataCenter.h>
#endif
#ifndef INCLUDED_game_data_PlayerData
#include <game/data/PlayerData.h>
#endif
#ifndef INCLUDED_game_data_gameplay_DTgameplay
#include <game/data/gameplay/DTgameplay.h>
#endif
#ifndef INCLUDED_game_data_gameplay_DTingame
#include <game/data/gameplay/DTingame.h>
#endif
#ifndef INCLUDED_game_data_gameplay_InfoBlock
#include <game/data/gameplay/InfoBlock.h>
#endif
#ifndef INCLUDED_game_gameobject_board_Board
#include <game/gameobject/board/Board.h>
#endif
#ifndef INCLUDED_game_gameobject_board_BoardBG
#include <game/gameobject/board/BoardBG.h>
#endif
#ifndef INCLUDED_game_gameobject_board_CBlock
#include <game/gameobject/board/CBlock.h>
#endif
#ifndef INCLUDED_game_gameobject_board_VirtualBlock
#include <game/gameobject/board/VirtualBlock.h>
#endif
#ifndef INCLUDED_game_gameobject_brick_Block
#include <game/gameobject/brick/Block.h>
#endif
#ifndef INCLUDED_game_gameobject_brick_BlockDirect
#include <game/gameobject/brick/BlockDirect.h>
#endif
#ifndef INCLUDED_game_gameobject_brick_BlockType
#include <game/gameobject/brick/BlockType.h>
#endif
#ifndef INCLUDED_game_gameobject_brick_Brick
#include <game/gameobject/brick/Brick.h>
#endif
#ifndef INCLUDED_game_gameobject_brick_BrickType
#include <game/gameobject/brick/BrickType.h>
#endif
#ifndef INCLUDED_game_tnk_Game
#include <game/tnk/Game.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObjectContainer
#include <openfl/_v2/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_events_Event
#include <openfl/_v2/events/Event.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_ColorTransform
#include <openfl/_v2/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Transform
#include <openfl/_v2/geom/Transform.h>
#endif
#ifndef INCLUDED_tweenx909_TweenX
#include <tweenx909/TweenX.h>
#endif
#ifndef INCLUDED_tweenx909_advanced_CommandX
#include <tweenx909/advanced/CommandX.h>
#endif
#ifndef INCLUDED_tweenx909_advanced_StandardTweenX
#include <tweenx909/advanced/StandardTweenX.h>
#endif
namespace game{
namespace gameobject{
namespace board{

Void Board_obj::__construct()
{
HX_STACK_FRAME("game.gameobject.board.Board","new",0xc866836f,"game.gameobject.board.Board.new","game/gameobject/board/Board.hx",51,0xda366d82)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(52)
	super::__construct();
	HX_STACK_LINE(53)
	this->mState = ::game::gameobject::board::Board_obj::STATE_PREPARE;
	HX_STACK_LINE(54)
	this->mState = ::game::gameobject::board::Board_obj::STATE_START;
	HX_STACK_LINE(55)
	this->init();
	HX_STACK_LINE(56)
	this->initData();
	HX_STACK_LINE(57)
	this->setBrickBeging();
	HX_STACK_LINE(58)
	this->addEventListener(::openfl::_v2::events::Event_obj::ENTER_FRAME,this->gameLoop_dyn(),null(),null(),null());
}
;
	return null();
}

//Board_obj::~Board_obj() { }

Dynamic Board_obj::__CreateEmpty() { return  new Board_obj; }
hx::ObjectPtr< Board_obj > Board_obj::__new()
{  hx::ObjectPtr< Board_obj > result = new Board_obj();
	result->__construct();
	return result;}

Dynamic Board_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Board_obj > result = new Board_obj();
	result->__construct();
	return result;}

Void Board_obj::init( ){
{
		HX_STACK_FRAME("game.gameobject.board.Board","init",0x8e053521,"game.gameobject.board.Board.init","game/gameobject/board/Board.hx",64,0xda366d82)
		HX_STACK_THIS(this)
		HX_STACK_LINE(65)
		::game::gameobject::board::BoardBG _g = ::game::gameobject::board::BoardBG_obj::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(65)
		this->mBg = _g;
		HX_STACK_LINE(66)
		this->addChild(this->mBg);
		HX_STACK_LINE(68)
		::openfl::_v2::display::Sprite _g1 = ::openfl::_v2::display::Sprite_obj::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(68)
		this->mBoard = _g1;
		HX_STACK_LINE(69)
		this->mBoard->set_x((int)0);
		HX_STACK_LINE(70)
		this->mBoard->set_y((int)0);
		HX_STACK_LINE(71)
		this->addChild(this->mBoard);
		HX_STACK_LINE(73)
		::core::display::ex::ExSprite _g2 = ::core::display::ex::ExSprite_obj::__new();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(73)
		this->mClearBG = _g2;
		HX_STACK_LINE(74)
		this->mClearBG->set_x((int)0);
		HX_STACK_LINE(75)
		this->mClearBG->set_y((int)0);
		HX_STACK_LINE(76)
		this->mBoard->addChild(this->mClearBG);
		HX_STACK_LINE(78)
		::core::display::ex::ExSprite _g3 = ::core::display::ex::ExSprite_obj::__new();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(78)
		this->mCaseBG = _g3;
		HX_STACK_LINE(79)
		this->mCaseBG->set_x((int)0);
		HX_STACK_LINE(80)
		this->mCaseBG->set_y((int)0);
		HX_STACK_LINE(81)
		this->mBoard->addChild(this->mCaseBG);
		HX_STACK_LINE(83)
		::game::gameobject::board::CBlock _g4 = ::game::gameobject::board::CBlock_obj::__new(::game::gameobject::brick::BlockType_obj::O,::game::gameobject::brick::BlockDirect_obj::TOP);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(83)
		this->mCurentBlock = _g4;
		HX_STACK_LINE(84)
		Array< ::Dynamic > _g5 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(84)
		this->mListCase = _g5;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Board_obj,init,(void))

Void Board_obj::gameLoop( ::openfl::_v2::events::Event e){
{
		HX_STACK_FRAME("game.gameobject.board.Board","gameLoop",0x4b7c7e07,"game.gameobject.board.Board.gameLoop","game/gameobject/board/Board.hx",92,0xda366d82)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(92)
		if (((this->mState == ::game::gameobject::board::Board_obj::STATE_NORMAL))){
			HX_STACK_LINE(94)
			if (((::game::tnk::Game_obj::data->playerData->mDTingame->isChose == true))){
				HX_STACK_LINE(96)
				this->ApplyEffect();
				HX_STACK_LINE(97)
				::game::tnk::Game_obj::data->playerData->mDTingame->isChose = false;
			}
			HX_STACK_LINE(99)
			if (((::game::tnk::Game_obj::data->playerData->mDTingame->isCycle == true))){
				HX_STACK_LINE(101)
				this->mCaseBG->removeAllAndDelChild();
				HX_STACK_LINE(102)
				this->SetCase();
				HX_STACK_LINE(103)
				::game::tnk::Game_obj::data->playerData->mDTingame->isCycle = false;
			}
			HX_STACK_LINE(105)
			if (((::game::tnk::Game_obj::data->playerData->mDTingame->isHolding == true))){
				HX_STACK_LINE(107)
				::game::tnk::Game_obj::data->playerData->mDTingame->isHolding = false;
				HX_STACK_LINE(108)
				::game::tnk::Game_obj::data->playerData->mDTingame->isHolded = true;
				HX_STACK_LINE(110)
				if (((::game::tnk::Game_obj::data->playerData->mDTingame->infoHold == null()))){
					HX_STACK_LINE(113)
					::game::data::gameplay::InfoBlock _g = ::game::data::gameplay::InfoBlock_obj::__new(this->mCurentBlock->mBlock->mType,::game::gameobject::brick::BlockDirect_obj::TOP);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(112)
					::game::tnk::Game_obj::data->playerData->mDTingame->infoHold = _g;
					HX_STACK_LINE(114)
					this->mCaseBG->removeAllAndDelChild();
					HX_STACK_LINE(115)
					this->NextBlock();
				}
				else{
					HX_STACK_LINE(119)
					::game::data::gameplay::InfoBlock _infoHold = ::game::data::gameplay::InfoBlock_obj::__new(this->mCurentBlock->mBlock->mType,::game::gameobject::brick::BlockDirect_obj::TOP);		HX_STACK_VAR(_infoHold,"_infoHold");
					HX_STACK_LINE(120)
					this->ChangeBlock(::game::tnk::Game_obj::data->playerData->mDTingame->infoHold);
					HX_STACK_LINE(121)
					::game::tnk::Game_obj::data->playerData->mDTingame->infoHold = _infoHold;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Board_obj,gameLoop,(void))

Void Board_obj::initData( ){
{
		HX_STACK_FRAME("game.gameobject.board.Board","initData",0xdeb95beb,"game.gameobject.board.Board.initData","game/gameobject/board/Board.hx",130,0xda366d82)
		HX_STACK_THIS(this)
		HX_STACK_LINE(131)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(131)
		this->mListID = _g;
		HX_STACK_LINE(132)
		Array< ::Dynamic > _g1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(132)
		this->mListBrick = _g1;
		HX_STACK_LINE(133)
		{
			HX_STACK_LINE(133)
			int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(133)
			while((true)){
				HX_STACK_LINE(133)
				if ((!(((_g2 < (int)22))))){
					HX_STACK_LINE(133)
					break;
				}
				HX_STACK_LINE(133)
				int i = (_g2)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(135)
				this->mListID[i] = Array_obj< int >::__new();
				HX_STACK_LINE(136)
				this->mListBrick[i] = Array_obj< ::Dynamic >::__new();
				HX_STACK_LINE(137)
				{
					HX_STACK_LINE(137)
					int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(137)
					while((true)){
						HX_STACK_LINE(137)
						if ((!(((_g11 < (int)10))))){
							HX_STACK_LINE(137)
							break;
						}
						HX_STACK_LINE(137)
						int j = (_g11)++;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(139)
						this->mListID->__get(i).StaticCast< Array< int > >()[j] = (int)0;
						HX_STACK_LINE(140)
						::game::gameobject::brick::Brick _brick = ::game::gameobject::brick::Brick_obj::__new();		HX_STACK_VAR(_brick,"_brick");
						HX_STACK_LINE(141)
						_brick->setValue((j * (int)32),((int)672 - (i * (int)32)),(int)0);
						HX_STACK_LINE(144)
						this->mListBrick->__get(i).StaticCast< Array< ::Dynamic > >()[j] = _brick;
						HX_STACK_LINE(145)
						this->mBoard->addChild(_brick);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Board_obj,initData,(void))

Void Board_obj::setBrickBeging( ){
{
		HX_STACK_FRAME("game.gameobject.board.Board","setBrickBeging",0x1382894e,"game.gameobject.board.Board.setBrickBeging","game/gameobject/board/Board.hx",153,0xda366d82)
		HX_STACK_THIS(this)
		HX_STACK_LINE(154)
		int _col = ::Std_obj::random((int)10);		HX_STACK_VAR(_col,"_col");
		HX_STACK_LINE(155)
		Float _tempY = (int)0;		HX_STACK_VAR(_tempY,"_tempY");
		HX_STACK_LINE(156)
		Float _V = (int)0;		HX_STACK_VAR(_V,"_V");
		HX_STACK_LINE(157)
		{
			HX_STACK_LINE(157)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(157)
			while((true)){
				HX_STACK_LINE(157)
				if ((!(((_g < (int)10))))){
					HX_STACK_LINE(157)
					break;
				}
				HX_STACK_LINE(157)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(159)
				if (((i != _col))){
					HX_STACK_LINE(161)
					int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(161)
					int _g1 = ::Std_obj::random((int)4);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(161)
					int _g11 = (_g1 + (int)5);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(161)
					while((true)){
						HX_STACK_LINE(161)
						if ((!(((_g2 < _g11))))){
							HX_STACK_LINE(161)
							break;
						}
						HX_STACK_LINE(161)
						int j = (_g2)++;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(163)
						int _g12 = ::Std_obj::random((int)8);		HX_STACK_VAR(_g12,"_g12");
						HX_STACK_LINE(163)
						this->mListID->__get(j).StaticCast< Array< int > >()[i] = (_g12 + (int)1);
						HX_STACK_LINE(164)
						this->mListBrick->__get(j).StaticCast< Array< ::Dynamic > >()->__get(i).StaticCast< ::game::gameobject::brick::Brick >()->mType = this->mListID->__get(j).StaticCast< Array< int > >()->__get(i);
						HX_STACK_LINE(165)
						if (((j == (int)0))){
							HX_STACK_LINE(167)
							int _g21 = ::Std_obj::random((int)100);		HX_STACK_VAR(_g21,"_g21");
							HX_STACK_LINE(167)
							int _g3 = ((int)0 - _g21);		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(167)
							this->mListBrick->__get(j).StaticCast< Array< ::Dynamic > >()->__get(i).StaticCast< ::game::gameobject::brick::Brick >()->set_y(_g3);
							HX_STACK_LINE(168)
							Float _g4 = this->mListBrick->__get(j).StaticCast< Array< ::Dynamic > >()->__get(i).StaticCast< ::game::gameobject::brick::Brick >()->get_y();		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(168)
							_tempY = _g4;
							HX_STACK_LINE(169)
							int _g5 = ::Std_obj::random((int)10);		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(169)
							Float _g6 = (Float(_g5) / Float((int)20));		HX_STACK_VAR(_g6,"_g6");
							HX_STACK_LINE(169)
							_V = _g6;
						}
						else{
							HX_STACK_LINE(172)
							int _g7 = ::Std_obj::random((int)100);		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(172)
							Float _g8 = (_tempY - _g7);		HX_STACK_VAR(_g8,"_g8");
							HX_STACK_LINE(172)
							Float _g9 = (_g8 - (int)100);		HX_STACK_VAR(_g9,"_g9");
							HX_STACK_LINE(172)
							this->mListBrick->__get(j).StaticCast< Array< ::Dynamic > >()->__get(i).StaticCast< ::game::gameobject::brick::Brick >()->set_y(_g9);
							HX_STACK_LINE(173)
							Float _g10 = this->mListBrick->__get(j).StaticCast< Array< ::Dynamic > >()->__get(i).StaticCast< ::game::gameobject::brick::Brick >()->get_y();		HX_STACK_VAR(_g10,"_g10");
							HX_STACK_LINE(173)
							_tempY = _g10;
							HX_STACK_LINE(174)
							int _g111 = ::Std_obj::random((int)10);		HX_STACK_VAR(_g111,"_g111");
							HX_STACK_LINE(174)
							Float _g121 = (Float(_g111) / Float((int)40));		HX_STACK_VAR(_g121,"_g121");
							HX_STACK_LINE(174)
							Float _g13 = (_V + _g121);		HX_STACK_VAR(_g13,"_g13");
							HX_STACK_LINE(174)
							_V = _g13;
						}
						HX_STACK_LINE(176)
						Float _g14 = this->mListBrick->__get(j).StaticCast< Array< ::Dynamic > >()->__get(i).StaticCast< ::game::gameobject::brick::Brick >()->get_x();		HX_STACK_VAR(_g14,"_g14");
						HX_STACK_LINE(176)
						this->mListBrick->__get(j).StaticCast< Array< ::Dynamic > >()->__get(i).StaticCast< ::game::gameobject::brick::Brick >()->MoveTo((0.4 + _V),0.0,_g14,((int)672 - (j * (int)32)));
					}
				}
			}
		}
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","game/gameobject/board/Board.hx",181,0xda366d82)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(181)
		hx::TCast< ::tweenx909::advanced::StandardTweenX >::cast(::tweenx909::TweenX_obj::to(hx::ObjectPtr<OBJ_>(this),_Function_1_1::Block(),2.5,null(),null(),null(),null(),null(),null(),null(),hx::SourceInfo(HX_CSTRING("Board.hx"),181,HX_CSTRING("game.gameobject.board.Board"),HX_CSTRING("setBrickBeging")))->onFinish(this->onStartGame_dyn()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Board_obj,setBrickBeging,(void))

Void Board_obj::onStartGame( ){
{
		HX_STACK_FRAME("game.gameobject.board.Board","onStartGame",0x72382a64,"game.gameobject.board.Board.onStartGame","game/gameobject/board/Board.hx",184,0xda366d82)
		HX_STACK_THIS(this)
		HX_STACK_LINE(185)
		this->mState = ::game::gameobject::board::Board_obj::STATE_NORMAL;
		HX_STACK_LINE(186)
		this->NextBlock();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Board_obj,onStartGame,(void))

Void Board_obj::ChangeBlock( ::game::data::gameplay::InfoBlock _info){
{
		HX_STACK_FRAME("game.gameobject.board.Board","ChangeBlock",0x11978fac,"game.gameobject.board.Board.ChangeBlock","game/gameobject/board/Board.hx",192,0xda366d82)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_info,"_info")
		HX_STACK_LINE(193)
		this->mCaseBG->removeAllAndDelChild();
		HX_STACK_LINE(194)
		bool _g = this->mBoard->contains(this->mCurentBlock);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(194)
		if (((_g == true))){
			HX_STACK_LINE(196)
			this->mBoard->removeChild(this->mCurentBlock);
		}
		HX_STACK_LINE(200)
		::game::gameobject::board::CBlock _g1 = ::game::gameobject::board::CBlock_obj::__new(_info->mType,::game::gameobject::brick::BlockDirect_obj::TOP);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(200)
		this->mCurentBlock = _g1;
		HX_STACK_LINE(201)
		this->mBoard->addChild(this->mCurentBlock);
		HX_STACK_LINE(202)
		this->mCurentBlock->setGrid((int)3,(int)17);
		HX_STACK_LINE(204)
		this->SetListRowCurrent();
		HX_STACK_LINE(205)
		this->SetCase();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Board_obj,ChangeBlock,(void))

Void Board_obj::NextBlock( ){
{
		HX_STACK_FRAME("game.gameobject.board.Board","NextBlock",0x11715789,"game.gameobject.board.Board.NextBlock","game/gameobject/board/Board.hx",211,0xda366d82)
		HX_STACK_THIS(this)
		HX_STACK_LINE(212)
		bool _g = this->mBoard->contains(this->mCurentBlock);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(212)
		if (((_g == true))){
			HX_STACK_LINE(214)
			this->mBoard->removeChild(this->mCurentBlock);
		}
		HX_STACK_LINE(217)
		::game::tnk::Game_obj::data->playerData->mDTgameplay->NextBlock();
		HX_STACK_LINE(219)
		::game::gameobject::board::CBlock _g1 = ::game::gameobject::board::CBlock_obj::__new(::game::tnk::Game_obj::data->playerData->mDTgameplay->mcurrentBlock->mType,::game::gameobject::brick::BlockDirect_obj::TOP);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(219)
		this->mCurentBlock = _g1;
		HX_STACK_LINE(220)
		this->mBoard->addChild(this->mCurentBlock);
		HX_STACK_LINE(221)
		this->mCurentBlock->setGrid((int)3,(int)17);
		HX_STACK_LINE(223)
		this->SetListRowCurrent();
		HX_STACK_LINE(224)
		this->SetCase();
		HX_STACK_LINE(225)
		::game::tnk::Game_obj::data->playerData->mDTingame->isUpdateStack = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Board_obj,NextBlock,(void))

Void Board_obj::SetCase( ){
{
		HX_STACK_FRAME("game.gameobject.board.Board","SetCase",0x6a7a6de1,"game.gameobject.board.Board.SetCase","game/gameobject/board/Board.hx",231,0xda366d82)
		HX_STACK_THIS(this)
		HX_STACK_LINE(232)
		hx::ModEq(this->mMinRow,(int)3);
		HX_STACK_LINE(233)
		if (((this->mCurentBlock->mBlock->mType != ::game::gameobject::brick::BlockType_obj::I))){
			HX_STACK_LINE(235)
			{
				HX_STACK_LINE(235)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(235)
				while((true)){
					HX_STACK_LINE(235)
					if ((!(((_g < (int)3))))){
						HX_STACK_LINE(235)
						break;
					}
					HX_STACK_LINE(235)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(237)
					if ((((this->mMinRow + (i * (int)3)) < this->mListRow->length))){
						HX_STACK_LINE(239)
						int _index = ::Std_obj::random(this->mListRow->__get((this->mMinRow + (i * (int)3))).StaticCast< Array< ::Dynamic > >()->length);		HX_STACK_VAR(_index,"_index");
						HX_STACK_LINE(240)
						::game::gameobject::board::VirtualBlock _block1 = ::game::gameobject::board::VirtualBlock_obj::__new(this->mCurentBlock->mBlock->mType,this->mListRow->__get((this->mMinRow + (i * (int)3))).StaticCast< Array< ::Dynamic > >()->__get(_index).StaticCast< ::game::data::gameplay::InfoBlock >()->mDirect);		HX_STACK_VAR(_block1,"_block1");
						HX_STACK_LINE(241)
						_block1->setGrid(this->mListRow->__get((this->mMinRow + (i * (int)3))).StaticCast< Array< ::Dynamic > >()->__get(_index).StaticCast< ::game::data::gameplay::InfoBlock >()->mColumn,this->mListRow->__get((this->mMinRow + (i * (int)3))).StaticCast< Array< ::Dynamic > >()->__get(_index).StaticCast< ::game::data::gameplay::InfoBlock >()->mRow);
						HX_STACK_LINE(242)
						this->mCaseBG->addChildForDel(_block1);
					}
				}
			}
			HX_STACK_LINE(245)
			this->mMinRow = hx::Mod(((this->mMinRow + (int)1)),(int)3);
		}
		else{
			HX_STACK_LINE(249)
			{
				HX_STACK_LINE(249)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(249)
				while((true)){
					HX_STACK_LINE(249)
					if ((!(((_g < (int)5))))){
						HX_STACK_LINE(249)
						break;
					}
					HX_STACK_LINE(249)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(251)
					::game::gameobject::board::VirtualBlock _block1 = ::game::gameobject::board::VirtualBlock_obj::__new(this->mCurentBlock->mBlock->mType,::game::gameobject::brick::BlockDirect_obj::TOP);		HX_STACK_VAR(_block1,"_block1");
					HX_STACK_LINE(252)
					int _g1 = this->getHeightColumn((hx::Mod(this->mMinRow,(int)2) + (i * (int)2)));		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(252)
					int _g11 = (_g1 - (int)1);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(252)
					_block1->setGrid((hx::Mod(this->mMinRow,(int)2) + (i * (int)2)),_g11);
					HX_STACK_LINE(253)
					_block1->mBlock->setTypeBrick(::game::gameobject::brick::BrickType_obj::NON);
					HX_STACK_LINE(254)
					this->mCaseBG->addChildForDel(_block1);
				}
			}
			HX_STACK_LINE(257)
			this->mMinRow = hx::Mod(((this->mMinRow + (int)1)),(int)2);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Board_obj,SetCase,(void))

bool Board_obj::checkExist( Array< int > _arr,int _x){
	HX_STACK_FRAME("game.gameobject.board.Board","checkExist",0x64f8a1a0,"game.gameobject.board.Board.checkExist","game/gameobject/board/Board.hx",268,0xda366d82)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_arr,"_arr")
	HX_STACK_ARG(_x,"_x")
	HX_STACK_LINE(269)
	{
		HX_STACK_LINE(269)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(269)
		int _g = _arr->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(269)
		while((true)){
			HX_STACK_LINE(269)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(269)
				break;
			}
			HX_STACK_LINE(269)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(271)
			if (((_x == _arr->__get(i)))){
				HX_STACK_LINE(273)
				return true;
			}
		}
	}
	HX_STACK_LINE(276)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(Board_obj,checkExist,return )

Void Board_obj::SetListRowCurrent( ){
{
		HX_STACK_FRAME("game.gameobject.board.Board","SetListRowCurrent",0xcf73d1ae,"game.gameobject.board.Board.SetListRowCurrent","game/gameobject/board/Board.hx",279,0xda366d82)
		HX_STACK_THIS(this)
		HX_STACK_LINE(280)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(280)
		this->mListRow = _g;
		HX_STACK_LINE(281)
		this->mMinRow = (int)0;
		HX_STACK_LINE(282)
		{
			HX_STACK_LINE(282)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(282)
			while((true)){
				HX_STACK_LINE(282)
				if ((!(((_g1 < (int)10))))){
					HX_STACK_LINE(282)
					break;
				}
				HX_STACK_LINE(282)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(284)
				Array< ::Dynamic > _block = this->GetMinRowCurrent(i);		HX_STACK_VAR(_block,"_block");
				HX_STACK_LINE(285)
				if (((_block != null()))){
					HX_STACK_LINE(287)
					this->mListRow[i] = _block;
					HX_STACK_LINE(288)
					if (((_block->__get((int)0).StaticCast< ::game::data::gameplay::InfoBlock >()->mRow < this->mListRow->__get(this->mMinRow).StaticCast< Array< ::Dynamic > >()->__get((int)0).StaticCast< ::game::data::gameplay::InfoBlock >()->mRow))){
						HX_STACK_LINE(290)
						this->mMinRow = i;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Board_obj,SetListRowCurrent,(void))

Array< ::Dynamic > Board_obj::GetMinRowCurrent( int _column){
	HX_STACK_FRAME("game.gameobject.board.Board","GetMinRowCurrent",0x7a770eac,"game.gameobject.board.Board.GetMinRowCurrent","game/gameobject/board/Board.hx",301,0xda366d82)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_column,"_column")
	HX_STACK_LINE(302)
	Array< ::Dynamic > _listBlock = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_listBlock,"_listBlock");
	HX_STACK_LINE(303)
	_listBlock[(int)0] = ::game::data::gameplay::InfoBlock_obj::__new(this->mCurentBlock->mBlock->mType,this->mCurentBlock->mBlock->mDirect);
	HX_STACK_LINE(304)
	_listBlock->__get((int)0).StaticCast< ::game::data::gameplay::InfoBlock >()->mColumn = _column;
	HX_STACK_LINE(305)
	int _g = this->GetRowCurrent(_column);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(305)
	_listBlock->__get((int)0).StaticCast< ::game::data::gameplay::InfoBlock >()->mRow = _g;
	HX_STACK_LINE(306)
	{
		HX_STACK_LINE(306)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(306)
		int _g2 = this->mCurentBlock->mBlock->mListDirect->length;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(306)
		while((true)){
			HX_STACK_LINE(306)
			if ((!(((_g1 < _g2))))){
				HX_STACK_LINE(306)
				break;
			}
			HX_STACK_LINE(306)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(308)
			this->mCurentBlock->mBlock->setDirect(this->mCurentBlock->mBlock->mListDirect->__get(i));
			HX_STACK_LINE(309)
			int _row = this->GetRowCurrent(_column);		HX_STACK_VAR(_row,"_row");
			HX_STACK_LINE(310)
			if (((_row >= (int)0))){
				HX_STACK_LINE(312)
				if (((bool((_row < _listBlock->__get((int)0).StaticCast< ::game::data::gameplay::InfoBlock >()->mRow)) || bool((_listBlock->__get((int)0).StaticCast< ::game::data::gameplay::InfoBlock >()->mRow < (int)0))))){
					HX_STACK_LINE(314)
					Array< ::Dynamic > _g11 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(314)
					_listBlock = _g11;
					HX_STACK_LINE(315)
					_listBlock[(int)0] = ::game::data::gameplay::InfoBlock_obj::__new(this->mCurentBlock->mBlock->mType,this->mCurentBlock->mBlock->mDirect);
					HX_STACK_LINE(316)
					_listBlock->__get((int)0).StaticCast< ::game::data::gameplay::InfoBlock >()->mColumn = _column;
					HX_STACK_LINE(317)
					_listBlock->__get((int)0).StaticCast< ::game::data::gameplay::InfoBlock >()->mRow = _row;
				}
				else{
					HX_STACK_LINE(319)
					if (((bool((_row == _listBlock->__get((int)0).StaticCast< ::game::data::gameplay::InfoBlock >()->mRow)) && bool((this->mCurentBlock->mBlock->mDirect != _listBlock->__get((int)0).StaticCast< ::game::data::gameplay::InfoBlock >()->mDirect))))){
						HX_STACK_LINE(321)
						::game::data::gameplay::InfoBlock _block = ::game::data::gameplay::InfoBlock_obj::__new(this->mCurentBlock->mBlock->mType,this->mCurentBlock->mBlock->mDirect);		HX_STACK_VAR(_block,"_block");
						HX_STACK_LINE(322)
						_block->mColumn = _column;
						HX_STACK_LINE(323)
						_block->mRow = _row;
						HX_STACK_LINE(324)
						_listBlock->push(_block);
					}
				}
			}
		}
	}
	HX_STACK_LINE(328)
	if (((_listBlock->__get((int)0).StaticCast< ::game::data::gameplay::InfoBlock >()->mRow == (int)-1))){
		HX_STACK_LINE(330)
		return null();
	}
	else{
		HX_STACK_LINE(333)
		return _listBlock;
	}
	HX_STACK_LINE(328)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Board_obj,GetMinRowCurrent,return )

int Board_obj::GetRowCurrent( int _column){
	HX_STACK_FRAME("game.gameobject.board.Board","GetRowCurrent",0x50792124,"game.gameobject.board.Board.GetRowCurrent","game/gameobject/board/Board.hx",342,0xda366d82)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_column,"_column")
	HX_STACK_LINE(343)
	int _g = this->mCurentBlock->mBlock->MaxWidth();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(343)
	int _g1 = (_column + _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(343)
	if (((_g1 > (int)10))){
		HX_STACK_LINE(345)
		return (int)-1;
	}
	HX_STACK_LINE(347)
	int _g2 = this->getHeightColumn(_column);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(347)
	int _g3 = this->mCurentBlock->mBlock->getHoldColumn((int)0);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(347)
	int _row = (_g2 - _g3);		HX_STACK_VAR(_row,"_row");
	HX_STACK_LINE(348)
	{
		HX_STACK_LINE(348)
		int _g11 = (int)1;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(348)
		int _g4 = this->mCurentBlock->mBlock->MaxWidth();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(348)
		while((true)){
			HX_STACK_LINE(348)
			if ((!(((_g11 < _g4))))){
				HX_STACK_LINE(348)
				break;
			}
			HX_STACK_LINE(348)
			int i = (_g11)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(350)
			int _g41 = this->getHeightColumn((_column + i));		HX_STACK_VAR(_g41,"_g41");
			HX_STACK_LINE(350)
			int _g5 = this->mCurentBlock->mBlock->getHoldColumn(i);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(350)
			int _g6 = (_g41 - _g5);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(350)
			if (((_row < _g6))){
				HX_STACK_LINE(352)
				int _g7 = this->getHeightColumn((_column + i));		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(352)
				int _g8 = this->mCurentBlock->mBlock->getHoldColumn(i);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(352)
				int _g9 = (_g7 - _g8);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(352)
				_row = _g9;
			}
		}
	}
	HX_STACK_LINE(355)
	return _row;
}


HX_DEFINE_DYNAMIC_FUNC1(Board_obj,GetRowCurrent,return )

int Board_obj::getHeightColumn( int _column){
	HX_STACK_FRAME("game.gameobject.board.Board","getHeightColumn",0xc68e1562,"game.gameobject.board.Board.getHeightColumn","game/gameobject/board/Board.hx",363,0xda366d82)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_column,"_column")
	HX_STACK_LINE(364)
	int i = (int)21;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(365)
	while((true)){
		HX_STACK_LINE(365)
		if ((!(((i > (int)0))))){
			HX_STACK_LINE(365)
			break;
		}
		HX_STACK_LINE(366)
		if (((this->mListBrick->__get((i - (int)1)).StaticCast< Array< ::Dynamic > >()->__get(_column).StaticCast< ::game::gameobject::brick::Brick >()->mType > (int)0))){
			HX_STACK_LINE(368)
			return i;
		}
		HX_STACK_LINE(370)
		(i)--;
	}
	HX_STACK_LINE(372)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(Board_obj,getHeightColumn,return )

Void Board_obj::ApplyEffect( ){
{
		HX_STACK_FRAME("game.gameobject.board.Board","ApplyEffect",0xd3738c8e,"game.gameobject.board.Board.ApplyEffect","game/gameobject/board/Board.hx",397,0xda366d82)
		HX_STACK_THIS(this)
		HX_STACK_LINE(398)
		this->_rowTemp = this->mCurentBlock->mRow;
		HX_STACK_LINE(399)
		this->_columnTemp = this->mCurentBlock->mColumn;
		HX_STACK_LINE(400)
		this->mCurentBlock->mColumn = ::game::tnk::Game_obj::data->playerData->mDTingame->infoChose->mColumn;
		HX_STACK_LINE(401)
		this->mCurentBlock->mRow = ::game::tnk::Game_obj::data->playerData->mDTingame->infoChose->mRow;
		HX_STACK_LINE(402)
		Float _g = this->mCurentBlock->get_x();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(402)
		Float _g1 = (_g + (((::game::tnk::Game_obj::data->playerData->mDTingame->infoChose->mColumn - this->_columnTemp)) * (int)32));		HX_STACK_VAR(_g1,"_g1");
		struct _Function_1_1{
			inline static Dynamic Block( Float &_g1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","game/gameobject/board/Board.hx",402,0xda366d82)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("x") , _g1,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(402)
		Dynamic _g2 = _Function_1_1::Block(_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(402)
		hx::TCast< ::tweenx909::advanced::StandardTweenX >::cast(::tweenx909::TweenX_obj::to(this->mCurentBlock,_g2,0.03,null(),null(),null(),null(),null(),null(),null(),hx::SourceInfo(HX_CSTRING("Board.hx"),402,HX_CSTRING("game.gameobject.board.Board"),HX_CSTRING("ApplyEffect")))->onFinish(this->OnApplyToCompleteQuarter_dyn()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Board_obj,ApplyEffect,(void))

Void Board_obj::OnApplyToCompleteQuarter( ){
{
		HX_STACK_FRAME("game.gameobject.board.Board","OnApplyToCompleteQuarter",0xca3e651a,"game.gameobject.board.Board.OnApplyToCompleteQuarter","game/gameobject/board/Board.hx",406,0xda366d82)
		HX_STACK_THIS(this)
		HX_STACK_LINE(407)
		this->mCurentBlock->mBlock->setDirect(::game::tnk::Game_obj::data->playerData->mDTingame->infoChose->mDirect);
		HX_STACK_LINE(408)
		Float _g = this->mCurentBlock->get_y();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(408)
		Float _g1 = (_g + (((this->_rowTemp - ::game::tnk::Game_obj::data->playerData->mDTingame->infoChose->mRow)) * (int)32));		HX_STACK_VAR(_g1,"_g1");
		struct _Function_1_1{
			inline static Dynamic Block( Float &_g1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","game/gameobject/board/Board.hx",408,0xda366d82)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("y") , _g1,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(408)
		Dynamic _g2 = _Function_1_1::Block(_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(408)
		hx::TCast< ::tweenx909::advanced::StandardTweenX >::cast(::tweenx909::TweenX_obj::to(this->mCurentBlock,_g2,0.1,null(),null(),null(),null(),null(),null(),null(),hx::SourceInfo(HX_CSTRING("Board.hx"),408,HX_CSTRING("game.gameobject.board.Board"),HX_CSTRING("OnApplyToCompleteQuarter")))->onFinish(this->OnApplyToCompleteSemi_dyn()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Board_obj,OnApplyToCompleteQuarter,(void))

Void Board_obj::OnApplyToCompleteSemi( ){
{
		HX_STACK_FRAME("game.gameobject.board.Board","OnApplyToCompleteSemi",0xb2147ec0,"game.gameobject.board.Board.OnApplyToCompleteSemi","game/gameobject/board/Board.hx",412,0xda366d82)
		HX_STACK_THIS(this)
		HX_STACK_LINE(413)
		this->mCaseBG->removeAllAndDelChild();
		HX_STACK_LINE(414)
		::openfl::_v2::geom::ColorTransform _g = ::openfl::_v2::geom::ColorTransform_obj::__new((int)1,(int)1,(int)1,(int)1,(int)225,(int)225,(int)225,(int)0);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(414)
		this->mCurentBlock->get_transform()->set_colorTransform(_g);
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","game/gameobject/board/Board.hx",415,0xda366d82)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("alpha") , 1.0,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(415)
		hx::TCast< ::tweenx909::advanced::StandardTweenX >::cast(::tweenx909::TweenX_obj::to(this->mCurentBlock,_Function_1_1::Block(),0.05,null(),null(),null(),null(),null(),null(),null(),hx::SourceInfo(HX_CSTRING("Board.hx"),415,HX_CSTRING("game.gameobject.board.Board"),HX_CSTRING("OnApplyToCompleteSemi")))->onFinish(this->OnApplyToCompleteFinal_dyn()));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Board_obj,OnApplyToCompleteSemi,(void))

Void Board_obj::OnApplyToCompleteFinal( ){
{
		HX_STACK_FRAME("game.gameobject.board.Board","OnApplyToCompleteFinal",0xa64a74e4,"game.gameobject.board.Board.OnApplyToCompleteFinal","game/gameobject/board/Board.hx",419,0xda366d82)
		HX_STACK_THIS(this)
		HX_STACK_LINE(420)
		{
			HX_STACK_LINE(420)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(420)
			int _g = this->mCurentBlock->mBlock->mData->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(420)
			while((true)){
				HX_STACK_LINE(420)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(420)
					break;
				}
				HX_STACK_LINE(420)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(422)
				{
					HX_STACK_LINE(422)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(422)
					int _g2 = this->mCurentBlock->mBlock->mData->__get((int)0).StaticCast< Array< int > >()->length;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(422)
					while((true)){
						HX_STACK_LINE(422)
						if ((!(((_g3 < _g2))))){
							HX_STACK_LINE(422)
							break;
						}
						HX_STACK_LINE(422)
						int j = (_g3)++;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(424)
						if (((this->mCurentBlock->mBlock->mData->__get(i).StaticCast< Array< int > >()->__get(j) == (int)1))){
							HX_STACK_LINE(426)
							int _row = ((i + ::game::tnk::Game_obj::data->playerData->mDTingame->infoChose->mRow) + (int)1);		HX_STACK_VAR(_row,"_row");
							HX_STACK_LINE(427)
							int _column = (j + ::game::tnk::Game_obj::data->playerData->mDTingame->infoChose->mColumn);		HX_STACK_VAR(_column,"_column");
							HX_STACK_LINE(428)
							this->mListBrick->__get(_row).StaticCast< Array< ::Dynamic > >()->__get(_column).StaticCast< ::game::gameobject::brick::Brick >()->mType = this->mCurentBlock->mBlock->mType;
							HX_STACK_LINE(429)
							this->mListBrick->__get(_row).StaticCast< Array< ::Dynamic > >()->__get(_column).StaticCast< ::game::gameobject::brick::Brick >()->set_x((_column * (int)32));
							HX_STACK_LINE(430)
							this->mListBrick->__get(_row).StaticCast< Array< ::Dynamic > >()->__get(_column).StaticCast< ::game::gameobject::brick::Brick >()->set_y(((int)672 - (_row * (int)32)));
						}
					}
				}
			}
		}
		HX_STACK_LINE(434)
		this->mCurentBlock->set_visible(false);
		HX_STACK_LINE(435)
		this->CheckClear((this->mCurentBlock->mRow + (int)1));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Board_obj,OnApplyToCompleteFinal,(void))

Void Board_obj::CheckClear( int _row){
{
		HX_STACK_FRAME("game.gameobject.board.Board","CheckClear",0x2cead496,"game.gameobject.board.Board.CheckClear","game/gameobject/board/Board.hx",439,0xda366d82)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_row,"_row")
		HX_STACK_LINE(440)
		Array< int > _g = Array_obj< int >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(440)
		this->mListClear = _g;
		HX_STACK_LINE(441)
		{
			HX_STACK_LINE(441)
			int _g1 = _row;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(441)
			int _g2 = (_row + (int)4);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(441)
			while((true)){
				HX_STACK_LINE(441)
				if ((!(((_g1 < _g2))))){
					HX_STACK_LINE(441)
					break;
				}
				HX_STACK_LINE(441)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(443)
				bool _g11 = this->CheckClearRow(i);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(443)
				if (((_g11 == true))){
					HX_STACK_LINE(445)
					this->mListClear->push(i);
					HX_STACK_LINE(446)
					this->createEffectClear(i);
				}
			}
		}
		HX_STACK_LINE(449)
		if (((this->mListClear->length == (int)0))){
			HX_STACK_LINE(451)
			this->NextBlock();
		}
		else{
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","game/gameobject/board/Board.hx",454,0xda366d82)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(454)
			hx::TCast< ::tweenx909::advanced::StandardTweenX >::cast(::tweenx909::TweenX_obj::to(hx::ObjectPtr<OBJ_>(this),_Function_2_1::Block(),0.3,null(),null(),null(),null(),null(),null(),null(),hx::SourceInfo(HX_CSTRING("Board.hx"),454,HX_CSTRING("game.gameobject.board.Board"),HX_CSTRING("CheckClear")))->onFinish(this->onBrickDown_dyn()));
			struct _Function_2_2{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","game/gameobject/board/Board.hx",455,0xda366d82)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(455)
			hx::TCast< ::tweenx909::advanced::StandardTweenX >::cast(::tweenx909::TweenX_obj::to(hx::ObjectPtr<OBJ_>(this),_Function_2_2::Block(),0.3,null(),null(),null(),null(),null(),null(),null(),hx::SourceInfo(HX_CSTRING("Board.hx"),455,HX_CSTRING("game.gameobject.board.Board"),HX_CSTRING("CheckClear")))->onFinish(this->onRemoveEffect_dyn()));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Board_obj,CheckClear,(void))

bool Board_obj::CheckClearRow( int _row){
	HX_STACK_FRAME("game.gameobject.board.Board","CheckClearRow",0xc5f64724,"game.gameobject.board.Board.CheckClearRow","game/gameobject/board/Board.hx",459,0xda366d82)
	HX_STACK_THIS(this)
	HX_STACK_ARG(_row,"_row")
	HX_STACK_LINE(460)
	{
		HX_STACK_LINE(460)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(460)
		while((true)){
			HX_STACK_LINE(460)
			if ((!(((_g < (int)10))))){
				HX_STACK_LINE(460)
				break;
			}
			HX_STACK_LINE(460)
			int i = (_g)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(462)
			if (((this->mListBrick->__get(_row).StaticCast< Array< ::Dynamic > >()->__get(i).StaticCast< ::game::gameobject::brick::Brick >()->mType == (int)0))){
				HX_STACK_LINE(464)
				return false;
			}
		}
	}
	HX_STACK_LINE(467)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Board_obj,CheckClearRow,return )

Void Board_obj::createEffectClear( int _row){
{
		HX_STACK_FRAME("game.gameobject.board.Board","createEffectClear",0x65e3c2ef,"game.gameobject.board.Board.createEffectClear","game/gameobject/board/Board.hx",470,0xda366d82)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_row,"_row")
		HX_STACK_LINE(472)
		::core::sprites::Animx _clear = ::game::tnk::Game_obj::resource->getAnim((int)1);		HX_STACK_VAR(_clear,"_clear");
		HX_STACK_LINE(473)
		_clear->animate4(::game::gameobject::board::Board_obj::TIME_CLEAR,(int)0,(int)6,(int)0);
		HX_STACK_LINE(474)
		_clear->set_x((int)0);
		HX_STACK_LINE(475)
		_clear->set_y(((int)704 - (((_row + (int)1)) * (int)32)));
		HX_STACK_LINE(476)
		this->mClearBG->addChildForDel(_clear);
		HX_STACK_LINE(478)
		this->visibleRow(_row);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Board_obj,createEffectClear,(void))

Void Board_obj::onRemoveEffect( ){
{
		HX_STACK_FRAME("game.gameobject.board.Board","onRemoveEffect",0x9acbef05,"game.gameobject.board.Board.onRemoveEffect","game/gameobject/board/Board.hx",482,0xda366d82)
		HX_STACK_THIS(this)
		HX_STACK_LINE(482)
		this->mClearBG->removeAllAndDelChild();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Board_obj,onRemoveEffect,(void))

Void Board_obj::onBrickDown( ){
{
		HX_STACK_FRAME("game.gameobject.board.Board","onBrickDown",0x1a906573,"game.gameobject.board.Board.onBrickDown","game/gameobject/board/Board.hx",486,0xda366d82)
		HX_STACK_THIS(this)
		HX_STACK_LINE(486)
		if (((this->mListClear->length > (int)0))){
			HX_STACK_LINE(488)
			this->onBrickDownAt(this->mListClear->__get((int)0));
			HX_STACK_LINE(489)
			this->mListClear->remove(this->mListClear->__get((int)0));
			HX_STACK_LINE(490)
			{
				HX_STACK_LINE(490)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(490)
				int _g = this->mListClear->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(490)
				while((true)){
					HX_STACK_LINE(490)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(490)
						break;
					}
					HX_STACK_LINE(490)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(492)
					(this->mListClear[i])--;
				}
			}
			struct _Function_2_1{
				inline static Dynamic Block( ){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","game/gameobject/board/Board.hx",494,0xda366d82)
					{
						hx::Anon __result = hx::Anon_obj::Create();
						return __result;
					}
					return null();
				}
			};
			HX_STACK_LINE(494)
			hx::TCast< ::tweenx909::advanced::StandardTweenX >::cast(::tweenx909::TweenX_obj::to(hx::ObjectPtr<OBJ_>(this),_Function_2_1::Block(),::game::gameobject::board::Board_obj::TIME_FALL,null(),null(),null(),null(),null(),null(),null(),hx::SourceInfo(HX_CSTRING("Board.hx"),494,HX_CSTRING("game.gameobject.board.Board"),HX_CSTRING("onBrickDown")))->onFinish(this->onBrickDown_dyn()));
		}
		else{
			HX_STACK_LINE(498)
			this->NextBlock();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Board_obj,onBrickDown,(void))

Void Board_obj::onBrickDownAt( int _row){
{
		HX_STACK_FRAME("game.gameobject.board.Board","onBrickDownAt",0x2b8b2146,"game.gameobject.board.Board.onBrickDownAt","game/gameobject/board/Board.hx",503,0xda366d82)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_row,"_row")
		HX_STACK_LINE(503)
		int _g1 = _row;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(503)
		int _g = (int)21;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(503)
		while((true)){
			HX_STACK_LINE(503)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(503)
				break;
			}
			HX_STACK_LINE(503)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(505)
			{
				HX_STACK_LINE(505)
				int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(505)
				while((true)){
					HX_STACK_LINE(505)
					if ((!(((_g2 < (int)10))))){
						HX_STACK_LINE(505)
						break;
					}
					HX_STACK_LINE(505)
					int j = (_g2)++;		HX_STACK_VAR(j,"j");
					HX_STACK_LINE(507)
					this->mListBrick->__get(i).StaticCast< Array< ::Dynamic > >()[j] = this->mListBrick->__get((i + (int)1)).StaticCast< Array< ::Dynamic > >()->__get(j).StaticCast< ::game::gameobject::brick::Brick >();
					HX_STACK_LINE(508)
					Float _g3 = this->mListBrick->__get(i).StaticCast< Array< ::Dynamic > >()->__get(j).StaticCast< ::game::gameobject::brick::Brick >()->get_y();		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(508)
					Float _g11 = (_g3 + (int)32);		HX_STACK_VAR(_g11,"_g11");
					struct _Function_4_1{
						inline static Dynamic Block( Float &_g11){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","game/gameobject/board/Board.hx",508,0xda366d82)
							{
								hx::Anon __result = hx::Anon_obj::Create();
								__result->Add(HX_CSTRING("y") , _g11,false);
								return __result;
							}
							return null();
						}
					};
					HX_STACK_LINE(508)
					Dynamic _g21 = _Function_4_1::Block(_g11);		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(508)
					::tweenx909::TweenX_obj::to(this->mListBrick->__get(i).StaticCast< Array< ::Dynamic > >()->__get(j).StaticCast< ::game::gameobject::brick::Brick >(),_g21,::game::gameobject::board::Board_obj::TIME_FALL,null(),null(),null(),null(),null(),null(),null(),hx::SourceInfo(HX_CSTRING("Board.hx"),508,HX_CSTRING("game.gameobject.board.Board"),HX_CSTRING("onBrickDownAt")));
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Board_obj,onBrickDownAt,(void))

Void Board_obj::visibleRow( int _row){
{
		HX_STACK_FRAME("game.gameobject.board.Board","visibleRow",0x667dd199,"game.gameobject.board.Board.visibleRow","game/gameobject/board/Board.hx",514,0xda366d82)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_row,"_row")
		HX_STACK_LINE(514)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(514)
		while((true)){
			HX_STACK_LINE(514)
			if ((!(((_g < (int)10))))){
				HX_STACK_LINE(514)
				break;
			}
			HX_STACK_LINE(514)
			int j = (_g)++;		HX_STACK_VAR(j,"j");
			HX_STACK_LINE(516)
			this->mListBrick->__get(_row).StaticCast< Array< ::Dynamic > >()->__get(j).StaticCast< ::game::gameobject::brick::Brick >()->mType = (int)0;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Board_obj,visibleRow,(void))

int Board_obj::STATE_PREPARE;

int Board_obj::STATE_START;

int Board_obj::STATE_NORMAL;

int Board_obj::STATE_END;

Float Board_obj::TIME_FALL;

int Board_obj::TIME_CLEAR;


Board_obj::Board_obj()
{
}

void Board_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Board);
	HX_MARK_MEMBER_NAME(mMaxCount,"mMaxCount");
	HX_MARK_MEMBER_NAME(mCount,"mCount");
	HX_MARK_MEMBER_NAME(mState,"mState");
	HX_MARK_MEMBER_NAME(mBg,"mBg");
	HX_MARK_MEMBER_NAME(mBoard,"mBoard");
	HX_MARK_MEMBER_NAME(mListID,"mListID");
	HX_MARK_MEMBER_NAME(mListBrick,"mListBrick");
	HX_MARK_MEMBER_NAME(mListRow,"mListRow");
	HX_MARK_MEMBER_NAME(mMinRow,"mMinRow");
	HX_MARK_MEMBER_NAME(mListClear,"mListClear");
	HX_MARK_MEMBER_NAME(mCurentBlock,"mCurentBlock");
	HX_MARK_MEMBER_NAME(mListCase,"mListCase");
	HX_MARK_MEMBER_NAME(mCaseBG,"mCaseBG");
	HX_MARK_MEMBER_NAME(mClearBG,"mClearBG");
	HX_MARK_MEMBER_NAME(_rowTemp,"_rowTemp");
	HX_MARK_MEMBER_NAME(_columnTemp,"_columnTemp");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Board_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mMaxCount,"mMaxCount");
	HX_VISIT_MEMBER_NAME(mCount,"mCount");
	HX_VISIT_MEMBER_NAME(mState,"mState");
	HX_VISIT_MEMBER_NAME(mBg,"mBg");
	HX_VISIT_MEMBER_NAME(mBoard,"mBoard");
	HX_VISIT_MEMBER_NAME(mListID,"mListID");
	HX_VISIT_MEMBER_NAME(mListBrick,"mListBrick");
	HX_VISIT_MEMBER_NAME(mListRow,"mListRow");
	HX_VISIT_MEMBER_NAME(mMinRow,"mMinRow");
	HX_VISIT_MEMBER_NAME(mListClear,"mListClear");
	HX_VISIT_MEMBER_NAME(mCurentBlock,"mCurentBlock");
	HX_VISIT_MEMBER_NAME(mListCase,"mListCase");
	HX_VISIT_MEMBER_NAME(mCaseBG,"mCaseBG");
	HX_VISIT_MEMBER_NAME(mClearBG,"mClearBG");
	HX_VISIT_MEMBER_NAME(_rowTemp,"_rowTemp");
	HX_VISIT_MEMBER_NAME(_columnTemp,"_columnTemp");
	::openfl::_v2::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Board_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"mBg") ) { return mBg; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mCount") ) { return mCount; }
		if (HX_FIELD_EQ(inName,"mState") ) { return mState; }
		if (HX_FIELD_EQ(inName,"mBoard") ) { return mBoard; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mListID") ) { return mListID; }
		if (HX_FIELD_EQ(inName,"mMinRow") ) { return mMinRow; }
		if (HX_FIELD_EQ(inName,"mCaseBG") ) { return mCaseBG; }
		if (HX_FIELD_EQ(inName,"SetCase") ) { return SetCase_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mListRow") ) { return mListRow; }
		if (HX_FIELD_EQ(inName,"mClearBG") ) { return mClearBG; }
		if (HX_FIELD_EQ(inName,"gameLoop") ) { return gameLoop_dyn(); }
		if (HX_FIELD_EQ(inName,"initData") ) { return initData_dyn(); }
		if (HX_FIELD_EQ(inName,"_rowTemp") ) { return _rowTemp; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"STATE_END") ) { return STATE_END; }
		if (HX_FIELD_EQ(inName,"TIME_FALL") ) { return TIME_FALL; }
		if (HX_FIELD_EQ(inName,"mMaxCount") ) { return mMaxCount; }
		if (HX_FIELD_EQ(inName,"mListCase") ) { return mListCase; }
		if (HX_FIELD_EQ(inName,"NextBlock") ) { return NextBlock_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"TIME_CLEAR") ) { return TIME_CLEAR; }
		if (HX_FIELD_EQ(inName,"mListBrick") ) { return mListBrick; }
		if (HX_FIELD_EQ(inName,"mListClear") ) { return mListClear; }
		if (HX_FIELD_EQ(inName,"checkExist") ) { return checkExist_dyn(); }
		if (HX_FIELD_EQ(inName,"CheckClear") ) { return CheckClear_dyn(); }
		if (HX_FIELD_EQ(inName,"visibleRow") ) { return visibleRow_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"STATE_START") ) { return STATE_START; }
		if (HX_FIELD_EQ(inName,"onStartGame") ) { return onStartGame_dyn(); }
		if (HX_FIELD_EQ(inName,"ChangeBlock") ) { return ChangeBlock_dyn(); }
		if (HX_FIELD_EQ(inName,"_columnTemp") ) { return _columnTemp; }
		if (HX_FIELD_EQ(inName,"ApplyEffect") ) { return ApplyEffect_dyn(); }
		if (HX_FIELD_EQ(inName,"onBrickDown") ) { return onBrickDown_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"STATE_NORMAL") ) { return STATE_NORMAL; }
		if (HX_FIELD_EQ(inName,"mCurentBlock") ) { return mCurentBlock; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"STATE_PREPARE") ) { return STATE_PREPARE; }
		if (HX_FIELD_EQ(inName,"GetRowCurrent") ) { return GetRowCurrent_dyn(); }
		if (HX_FIELD_EQ(inName,"CheckClearRow") ) { return CheckClearRow_dyn(); }
		if (HX_FIELD_EQ(inName,"onBrickDownAt") ) { return onBrickDownAt_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"setBrickBeging") ) { return setBrickBeging_dyn(); }
		if (HX_FIELD_EQ(inName,"onRemoveEffect") ) { return onRemoveEffect_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getHeightColumn") ) { return getHeightColumn_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"GetMinRowCurrent") ) { return GetMinRowCurrent_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"SetListRowCurrent") ) { return SetListRowCurrent_dyn(); }
		if (HX_FIELD_EQ(inName,"createEffectClear") ) { return createEffectClear_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"OnApplyToCompleteSemi") ) { return OnApplyToCompleteSemi_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"OnApplyToCompleteFinal") ) { return OnApplyToCompleteFinal_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"OnApplyToCompleteQuarter") ) { return OnApplyToCompleteQuarter_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Board_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"mBg") ) { mBg=inValue.Cast< ::game::gameobject::board::BoardBG >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mCount") ) { mCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mState") ) { mState=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mBoard") ) { mBoard=inValue.Cast< ::openfl::_v2::display::Sprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"mListID") ) { mListID=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mMinRow") ) { mMinRow=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mCaseBG") ) { mCaseBG=inValue.Cast< ::core::display::ex::ExSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"mListRow") ) { mListRow=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mClearBG") ) { mClearBG=inValue.Cast< ::core::display::ex::ExSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rowTemp") ) { _rowTemp=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"STATE_END") ) { STATE_END=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TIME_FALL") ) { TIME_FALL=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mMaxCount") ) { mMaxCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mListCase") ) { mListCase=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"TIME_CLEAR") ) { TIME_CLEAR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mListBrick") ) { mListBrick=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mListClear") ) { mListClear=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"STATE_START") ) { STATE_START=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_columnTemp") ) { _columnTemp=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"STATE_NORMAL") ) { STATE_NORMAL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mCurentBlock") ) { mCurentBlock=inValue.Cast< ::game::gameobject::board::CBlock >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"STATE_PREPARE") ) { STATE_PREPARE=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Board_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("mMaxCount"));
	outFields->push(HX_CSTRING("mCount"));
	outFields->push(HX_CSTRING("mState"));
	outFields->push(HX_CSTRING("mBg"));
	outFields->push(HX_CSTRING("mBoard"));
	outFields->push(HX_CSTRING("mListID"));
	outFields->push(HX_CSTRING("mListBrick"));
	outFields->push(HX_CSTRING("mListRow"));
	outFields->push(HX_CSTRING("mMinRow"));
	outFields->push(HX_CSTRING("mListClear"));
	outFields->push(HX_CSTRING("mCurentBlock"));
	outFields->push(HX_CSTRING("mListCase"));
	outFields->push(HX_CSTRING("mCaseBG"));
	outFields->push(HX_CSTRING("mClearBG"));
	outFields->push(HX_CSTRING("_rowTemp"));
	outFields->push(HX_CSTRING("_columnTemp"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("STATE_PREPARE"),
	HX_CSTRING("STATE_START"),
	HX_CSTRING("STATE_NORMAL"),
	HX_CSTRING("STATE_END"),
	HX_CSTRING("TIME_FALL"),
	HX_CSTRING("TIME_CLEAR"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Board_obj,mMaxCount),HX_CSTRING("mMaxCount")},
	{hx::fsInt,(int)offsetof(Board_obj,mCount),HX_CSTRING("mCount")},
	{hx::fsInt,(int)offsetof(Board_obj,mState),HX_CSTRING("mState")},
	{hx::fsObject /*::game::gameobject::board::BoardBG*/ ,(int)offsetof(Board_obj,mBg),HX_CSTRING("mBg")},
	{hx::fsObject /*::openfl::_v2::display::Sprite*/ ,(int)offsetof(Board_obj,mBoard),HX_CSTRING("mBoard")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Board_obj,mListID),HX_CSTRING("mListID")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Board_obj,mListBrick),HX_CSTRING("mListBrick")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Board_obj,mListRow),HX_CSTRING("mListRow")},
	{hx::fsInt,(int)offsetof(Board_obj,mMinRow),HX_CSTRING("mMinRow")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Board_obj,mListClear),HX_CSTRING("mListClear")},
	{hx::fsObject /*::game::gameobject::board::CBlock*/ ,(int)offsetof(Board_obj,mCurentBlock),HX_CSTRING("mCurentBlock")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Board_obj,mListCase),HX_CSTRING("mListCase")},
	{hx::fsObject /*::core::display::ex::ExSprite*/ ,(int)offsetof(Board_obj,mCaseBG),HX_CSTRING("mCaseBG")},
	{hx::fsObject /*::core::display::ex::ExSprite*/ ,(int)offsetof(Board_obj,mClearBG),HX_CSTRING("mClearBG")},
	{hx::fsInt,(int)offsetof(Board_obj,_rowTemp),HX_CSTRING("_rowTemp")},
	{hx::fsInt,(int)offsetof(Board_obj,_columnTemp),HX_CSTRING("_columnTemp")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("mMaxCount"),
	HX_CSTRING("mCount"),
	HX_CSTRING("mState"),
	HX_CSTRING("mBg"),
	HX_CSTRING("mBoard"),
	HX_CSTRING("mListID"),
	HX_CSTRING("mListBrick"),
	HX_CSTRING("mListRow"),
	HX_CSTRING("mMinRow"),
	HX_CSTRING("mListClear"),
	HX_CSTRING("mCurentBlock"),
	HX_CSTRING("mListCase"),
	HX_CSTRING("mCaseBG"),
	HX_CSTRING("mClearBG"),
	HX_CSTRING("init"),
	HX_CSTRING("gameLoop"),
	HX_CSTRING("initData"),
	HX_CSTRING("setBrickBeging"),
	HX_CSTRING("onStartGame"),
	HX_CSTRING("ChangeBlock"),
	HX_CSTRING("NextBlock"),
	HX_CSTRING("SetCase"),
	HX_CSTRING("checkExist"),
	HX_CSTRING("SetListRowCurrent"),
	HX_CSTRING("GetMinRowCurrent"),
	HX_CSTRING("GetRowCurrent"),
	HX_CSTRING("getHeightColumn"),
	HX_CSTRING("_rowTemp"),
	HX_CSTRING("_columnTemp"),
	HX_CSTRING("ApplyEffect"),
	HX_CSTRING("OnApplyToCompleteQuarter"),
	HX_CSTRING("OnApplyToCompleteSemi"),
	HX_CSTRING("OnApplyToCompleteFinal"),
	HX_CSTRING("CheckClear"),
	HX_CSTRING("CheckClearRow"),
	HX_CSTRING("createEffectClear"),
	HX_CSTRING("onRemoveEffect"),
	HX_CSTRING("onBrickDown"),
	HX_CSTRING("onBrickDownAt"),
	HX_CSTRING("visibleRow"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Board_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Board_obj::STATE_PREPARE,"STATE_PREPARE");
	HX_MARK_MEMBER_NAME(Board_obj::STATE_START,"STATE_START");
	HX_MARK_MEMBER_NAME(Board_obj::STATE_NORMAL,"STATE_NORMAL");
	HX_MARK_MEMBER_NAME(Board_obj::STATE_END,"STATE_END");
	HX_MARK_MEMBER_NAME(Board_obj::TIME_FALL,"TIME_FALL");
	HX_MARK_MEMBER_NAME(Board_obj::TIME_CLEAR,"TIME_CLEAR");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Board_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Board_obj::STATE_PREPARE,"STATE_PREPARE");
	HX_VISIT_MEMBER_NAME(Board_obj::STATE_START,"STATE_START");
	HX_VISIT_MEMBER_NAME(Board_obj::STATE_NORMAL,"STATE_NORMAL");
	HX_VISIT_MEMBER_NAME(Board_obj::STATE_END,"STATE_END");
	HX_VISIT_MEMBER_NAME(Board_obj::TIME_FALL,"TIME_FALL");
	HX_VISIT_MEMBER_NAME(Board_obj::TIME_CLEAR,"TIME_CLEAR");
};

#endif

Class Board_obj::__mClass;

void Board_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("game.gameobject.board.Board"), hx::TCanCast< Board_obj> ,sStaticFields,sMemberFields,
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

void Board_obj::__boot()
{
	STATE_PREPARE= (int)0;
	STATE_START= (int)1;
	STATE_NORMAL= (int)2;
	STATE_END= (int)3;
	TIME_FALL= 0.05;
	TIME_CLEAR= (int)3;
}

} // end namespace game
} // end namespace gameobject
} // end namespace board
