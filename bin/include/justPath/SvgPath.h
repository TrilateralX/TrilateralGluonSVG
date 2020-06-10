// Generated by Haxe 4.2.0-rc.1+354c24d30
#ifndef INCLUDED_justPath_SvgPath
#define INCLUDED_justPath_SvgPath

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(justPath,IPathContext)
HX_DECLARE_CLASS1(justPath,StoreF6)
HX_DECLARE_CLASS1(justPath,SvgPath)

namespace justPath{


class HXCPP_CLASS_ATTRIBUTES SvgPath_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef SvgPath_obj OBJ_;
		SvgPath_obj();

	public:
		enum { _hx_ClassId = 0x7fb92d04 };

		void __construct(::Dynamic pathContext_);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="justPath.SvgPath")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"justPath.SvgPath"); }
		static ::hx::ObjectPtr< SvgPath_obj > __new(::Dynamic pathContext_);
		static ::hx::ObjectPtr< SvgPath_obj > __alloc(::hx::Ctx *_hx_ctx,::Dynamic pathContext_);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~SvgPath_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("SvgPath",09,e6,02,2d); }

		::String str;
		int pos;
		Float lastX;
		Float lastY;
		Float controlX;
		Float controlY;
		int c;
		int l;
		::Dynamic pathContext;
		 ::justPath::StoreF6 store;
		::String parse(::String str_);
		::Dynamic parse_dyn();

};

} // end namespace justPath

#endif /* INCLUDED_justPath_SvgPath */ 
