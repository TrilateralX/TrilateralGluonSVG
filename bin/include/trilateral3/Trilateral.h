// Generated by Haxe 4.2.0-rc.1+354c24d30
#ifndef INCLUDED_trilateral3_Trilateral
#define INCLUDED_trilateral3_Trilateral

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(trilateral3,Trilateral)
HX_DECLARE_CLASS2(trilateral3,matrix,MatrixDozen)

namespace trilateral3{


class HXCPP_CLASS_ATTRIBUTES Trilateral_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Trilateral_obj OBJ_;
		Trilateral_obj();

	public:
		enum { _hx_ClassId = 0x32665153 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="trilateral3.Trilateral")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"trilateral3.Trilateral"); }

		inline static ::hx::ObjectPtr< Trilateral_obj > __new() {
			::hx::ObjectPtr< Trilateral_obj > __this = new Trilateral_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Trilateral_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Trilateral_obj *__this = (Trilateral_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Trilateral_obj), false, "trilateral3.Trilateral"));
			*(void **)__this = Trilateral_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Trilateral_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Trilateral",cc,ac,e1,de); }

		static  ::trilateral3::matrix::MatrixDozen transformMatrix;
};

} // end namespace trilateral3

#endif /* INCLUDED_trilateral3_Trilateral */ 
