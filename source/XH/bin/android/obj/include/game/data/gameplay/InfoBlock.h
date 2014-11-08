#ifndef INCLUDED_game_data_gameplay_InfoBlock
#define INCLUDED_game_data_gameplay_InfoBlock

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(game,data,gameplay,InfoBlock)
namespace game{
namespace data{
namespace gameplay{


class HXCPP_CLASS_ATTRIBUTES  InfoBlock_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef InfoBlock_obj OBJ_;
		InfoBlock_obj();
		Void __construct(int _type,int _direct);

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< InfoBlock_obj > __new(int _type,int _direct);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~InfoBlock_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("InfoBlock"); }

		int mType;
		int mDirect;
		int mColumn;
		int mRow;
};

} // end namespace game
} // end namespace data
} // end namespace gameplay

#endif /* INCLUDED_game_data_gameplay_InfoBlock */ 
