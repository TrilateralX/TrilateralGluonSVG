// Generated by Haxe 4.2.0-rc.1+354c24d30
#ifndef INCLUDED_trilateral3_structure_Triangle3D
#define INCLUDED_trilateral3_structure_Triangle3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(trilateral3,matrix,Vertex)
HX_DECLARE_CLASS2(trilateral3,structure,Triangle3D)

namespace trilateral3{
namespace structure{


class HXCPP_CLASS_ATTRIBUTES Triangle3D_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Triangle3D_obj OBJ_;
		Triangle3D_obj();

	public:
		enum { _hx_ClassId = 0x16226649 };

		void __construct( ::trilateral3::matrix::Vertex a, ::trilateral3::matrix::Vertex b, ::trilateral3::matrix::Vertex c);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="trilateral3.structure.Triangle3D")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"trilateral3.structure.Triangle3D"); }
		static ::hx::ObjectPtr< Triangle3D_obj > __new( ::trilateral3::matrix::Vertex a, ::trilateral3::matrix::Vertex b, ::trilateral3::matrix::Vertex c);
		static ::hx::ObjectPtr< Triangle3D_obj > __alloc(::hx::Ctx *_hx_ctx, ::trilateral3::matrix::Vertex a, ::trilateral3::matrix::Vertex b, ::trilateral3::matrix::Vertex c);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Triangle3D_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Triangle3D",99,31,7a,d0); }

		 ::trilateral3::matrix::Vertex a;
		 ::trilateral3::matrix::Vertex b;
		 ::trilateral3::matrix::Vertex c;
};

} // end namespace trilateral3
} // end namespace structure

#endif /* INCLUDED_trilateral3_structure_Triangle3D */ 
