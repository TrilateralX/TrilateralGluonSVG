// Generated by Haxe 4.2.0-rc.1+354c24d30
#ifndef INCLUDED_glfw_GLFWMouseButtonHandler
#define INCLUDED_glfw_GLFWMouseButtonHandler

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_66c800784bc86d2f
#define INCLUDED_66c800784bc86d2f
#include "linc_glfw.h"
#endif
HX_DECLARE_CLASS1(glfw,GLFWMouseButtonHandler)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)

namespace glfw{


class HXCPP_CLASS_ATTRIBUTES GLFWMouseButtonHandler_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef GLFWMouseButtonHandler_obj OBJ_;
		GLFWMouseButtonHandler_obj();

	public:
		enum { _hx_ClassId = 0x6ae5651f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="glfw.GLFWMouseButtonHandler")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"glfw.GLFWMouseButtonHandler"); }

		inline static ::hx::ObjectPtr< GLFWMouseButtonHandler_obj > __new() {
			::hx::ObjectPtr< GLFWMouseButtonHandler_obj > __this = new GLFWMouseButtonHandler_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< GLFWMouseButtonHandler_obj > __alloc(::hx::Ctx *_hx_ctx) {
			GLFWMouseButtonHandler_obj *__this = (GLFWMouseButtonHandler_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GLFWMouseButtonHandler_obj), false, "glfw.GLFWMouseButtonHandler"));
			*(void **)__this = GLFWMouseButtonHandler_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~GLFWMouseButtonHandler_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("GLFWMouseButtonHandler",e9,16,e9,27); }

		static void __boot();
		static  ::haxe::ds::StringMap listeners;
		static void nativeCallack( GLFWwindow * win,int button,int action,int mods);
		static ::Dynamic nativeCallack_dyn();

		static void setCallback( GLFWwindow * win, ::Dynamic func);
		static ::Dynamic setCallback_dyn();

};

} // end namespace glfw

#endif /* INCLUDED_glfw_GLFWMouseButtonHandler */ 