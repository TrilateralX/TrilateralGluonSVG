// Generated by Haxe 4.2.0-rc.1+354c24d30
#ifndef INCLUDED_typedarray_Int32ArrayImpl
#define INCLUDED_typedarray_Int32ArrayImpl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_typedarray_ArrayBufferViewBase
#include <typedarray/ArrayBufferViewBase.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS1(typedarray,ArrayBufferView)
HX_DECLARE_CLASS1(typedarray,ArrayBufferViewBase)
HX_DECLARE_CLASS1(typedarray,ArrayBufferViewImplIterator_typedarray__Int32Array_Int32)
HX_DECLARE_CLASS1(typedarray,Int32ArrayImpl)

namespace typedarray{


class HXCPP_CLASS_ATTRIBUTES Int32ArrayImpl_obj : public  ::typedarray::ArrayBufferViewBase_obj
{
	public:
		typedef  ::typedarray::ArrayBufferViewBase_obj super;
		typedef Int32ArrayImpl_obj OBJ_;
		Int32ArrayImpl_obj();

	public:
		enum { _hx_ClassId = 0x3a80dede };

		void __construct( ::Dynamic length, ::haxe::io::Bytes buffer, ::Dynamic byteOffset, ::Dynamic byteLength);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="typedarray.Int32ArrayImpl")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"typedarray.Int32ArrayImpl"); }
		static ::hx::ObjectPtr< Int32ArrayImpl_obj > __new( ::Dynamic length, ::haxe::io::Bytes buffer, ::Dynamic byteOffset, ::Dynamic byteLength);
		static ::hx::ObjectPtr< Int32ArrayImpl_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic length, ::haxe::io::Bytes buffer, ::Dynamic byteOffset, ::Dynamic byteLength);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Int32ArrayImpl_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Int32ArrayImpl",0b,60,ba,b2); }

		int _get(int i);
		::Dynamic _get_dyn();

		int _set(int i,int v);
		::Dynamic _set_dyn();

		 ::typedarray::ArrayBufferViewImplIterator_typedarray__Int32Array_Int32 iterator();
		::Dynamic iterator_dyn();

};

} // end namespace typedarray

#endif /* INCLUDED_typedarray_Int32ArrayImpl */ 
