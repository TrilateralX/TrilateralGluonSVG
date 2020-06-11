// Generated by Haxe 4.2.0-rc.1+354c24d30
#ifndef INCLUDED_gluon_webgl_native_GLContext
#define INCLUDED_gluon_webgl_native_GLContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(gluon,webgl,native,GLContext)
HX_DECLARE_CLASS3(gluon,webgl,native,GLFramebuffer)
HX_DECLARE_CLASS3(gluon,webgl,native,GLObject)
HX_DECLARE_CLASS3(gluon,webgl,native,GLShader)

namespace gluon{
namespace webgl{
namespace native{


class HXCPP_CLASS_ATTRIBUTES GLContext_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef GLContext_obj OBJ_;
		GLContext_obj();

	public:
		enum { _hx_ClassId = 0x084d1541 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="gluon.webgl.native.GLContext")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"gluon.webgl.native.GLContext"); }
		static ::hx::ObjectPtr< GLContext_obj > __new();
		static ::hx::ObjectPtr< GLContext_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GLContext_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GLContext",4a,be,b6,62); }

		 ::gluon::webgl::native::GLFramebuffer defaultFramebuffer;
		 ::Dynamic getShaderParameter( ::gluon::webgl::native::GLShader shader,unsigned int pname);
		::Dynamic getShaderParameter_dyn();

		::String getShaderInfoLog( ::gluon::webgl::native::GLShader shader);
		::Dynamic getShaderInfoLog_dyn();

		void shaderSource( ::gluon::webgl::native::GLShader shader,::String source);
		::Dynamic shaderSource_dyn();

};

} // end namespace gluon
} // end namespace webgl
} // end namespace native

#endif /* INCLUDED_gluon_webgl_native_GLContext */ 
