#ifndef INCLUDED_core_resource_ResourceManager
#define INCLUDED_core_resource_ResourceManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(core,resource,ResourceManager)
namespace core{
namespace resource{


class HXCPP_CLASS_ATTRIBUTES  ResourceManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ResourceManager_obj OBJ_;
		ResourceManager_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ResourceManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ResourceManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("ResourceManager"); }

};

} // end namespace core
} // end namespace resource

#endif /* INCLUDED_core_resource_ResourceManager */ 
