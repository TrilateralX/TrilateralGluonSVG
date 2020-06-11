// Generated by Haxe 4.2.0-rc.1+354c24d30
#ifndef INCLUDED_glfw_GLFWWindowSizeHandler
#define INCLUDED_glfw_GLFWWindowSizeHandler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_66c800784bc86d2f
#define INCLUDED_66c800784bc86d2f
#include "linc_glfw.h"
#endif
HX_DECLARE_CLASS1(glfw,GLFWWindowSizeHandler)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)

namespace glfw{


class HXCPP_CLASS_ATTRIBUTES GLFWWindowSizeHandler_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef GLFWWindowSizeHandler_obj OBJ_;
		GLFWWindowSizeHandler_obj();

	public:
		enum { _hx_ClassId = 0x060cac25 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="glfw.GLFWWindowSizeHandler")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"glfw.GLFWWindowSizeHandler"); }

		inline static ::hx::ObjectPtr< GLFWWindowSizeHandler_obj > __new() {
			::hx::ObjectPtr< GLFWWindowSizeHandler_obj > __this = new GLFWWindowSizeHandler_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< GLFWWindowSizeHandler_obj > __alloc(::hx::Ctx *_hx_ctx) {
			GLFWWindowSizeHandler_obj *__this = (GLFWWindowSizeHandler_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GLFWWindowSizeHandler_obj), false, "glfw.GLFWWindowSizeHandler"));
			*(void **)__this = GLFWWindowSizeHandler_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GLFWWindowSizeHandler_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GLFWWindowSizeHandler",63,af,98,b1); }

		static void __boot();
		static  ::haxe::ds::StringMap listeners;
		static void nativeCallack( GLFWwindow * win,int width,int height);
		static ::Dynamic nativeCallack_dyn();

		static void setCallback( GLFWwindow * win, ::Dynamic cb);
		static ::Dynamic setCallback_dyn();

};

} // end namespace glfw

#endif /* INCLUDED_glfw_GLFWWindowSizeHandler */ 
