#ifndef INCLUDED_core_resource_ResourceID
#define INCLUDED_core_resource_ResourceID

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(core,resource,ResourceID)
namespace core{
namespace resource{


class ResourceID_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef ResourceID_obj OBJ_;

	public:
		ResourceID_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("core.resource.ResourceID"); }
		::String __ToString() const { return HX_CSTRING("ResourceID.") + tag; }

		static ::core::resource::ResourceID BG_LOGIN;
		static inline ::core::resource::ResourceID BG_LOGIN_dyn() { return BG_LOGIN; }
		static ::core::resource::ResourceID BTN_LOGIN;
		static inline ::core::resource::ResourceID BTN_LOGIN_dyn() { return BTN_LOGIN; }
		static ::core::resource::ResourceID LOADING_BG;
		static inline ::core::resource::ResourceID LOADING_BG_dyn() { return LOADING_BG; }
};

} // end namespace core
} // end namespace resource

#endif /* INCLUDED_core_resource_ResourceID */ 
