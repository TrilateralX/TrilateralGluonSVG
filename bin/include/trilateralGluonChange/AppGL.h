// Generated by Haxe 4.2.0-rc.1+354c24d30
#ifndef INCLUDED_trilateralGluonChange_AppGL
#define INCLUDED_trilateralGluonChange_AppGL

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(gluon,webgl,native,GLBuffer)
HX_DECLARE_CLASS3(gluon,webgl,native,GLContext)
HX_DECLARE_CLASS3(gluon,webgl,native,GLObject)
HX_DECLARE_CLASS3(gluon,webgl,native,GLProgram)
HX_DECLARE_CLASS2(trilateral3,drawing,Pen)
HX_DECLARE_CLASS2(trilateral3,nodule,PenNodule)
HX_DECLARE_CLASS1(trilateralGluonChange,AppGL)

namespace trilateralGluonChange{


class HXCPP_CLASS_ATTRIBUTES AppGL_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef AppGL_obj OBJ_;
		AppGL_obj();

	public:
		enum { _hx_ClassId = 0x49de47f3 };

		void __construct(int width_,int height_);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="trilateralGluonChange.AppGL")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"trilateralGluonChange.AppGL"); }
		static ::hx::ObjectPtr< AppGL_obj > __new(int width_,int height_);
		static ::hx::ObjectPtr< AppGL_obj > __alloc(::hx::Ctx *_hx_ctx,int width_,int height_);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AppGL_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AppGL",e6,d4,68,b7); }

		 ::gluon::webgl::native::GLContext gl;
		 ::gluon::webgl::native::GLProgram program;
		 ::trilateral3::nodule::PenNodule penNodule;
		int width;
		int height;
		 ::gluon::webgl::native::GLBuffer buf;
		void render();
		::Dynamic render_dyn();

		void renderDraw( ::trilateral3::drawing::Pen pen);
		::Dynamic renderDraw_dyn();

};

} // end namespace trilateralGluonChange

#endif /* INCLUDED_trilateralGluonChange_AppGL */ 
