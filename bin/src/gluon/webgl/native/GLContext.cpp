// Generated by Haxe 4.2.0-rc.1+354c24d30
#include <hxcpp.h>

#ifndef INCLUDED_c8a65390b4b62196
#define INCLUDED_c8a65390b4b62196
#include "/usr/local/lib/haxeLibrary/gluon/git/src/gluon/webgl/native/ES2Context.h"
#endif
#ifndef INCLUDED_2710e462964f946c
#define INCLUDED_2710e462964f946c
#include "stdlib.h"
#endif
#ifndef INCLUDED_gluon_webgl_native_GLContext
#include <gluon/webgl/native/GLContext.h>
#endif
#ifndef INCLUDED_gluon_webgl_native_GLFramebuffer
#include <gluon/webgl/native/GLFramebuffer.h>
#endif
#ifndef INCLUDED_gluon_webgl_native_GLObject
#include <gluon/webgl/native/GLObject.h>
#endif
#ifndef INCLUDED_gluon_webgl_native_GLProgram
#include <gluon/webgl/native/GLProgram.h>
#endif
#ifndef INCLUDED_gluon_webgl_native_GLShader
#include <gluon/webgl/native/GLShader.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_typedarray_ArrayBufferView
#include <typedarray/ArrayBufferView.h>
#endif
#ifndef INCLUDED_typedarray_ArrayBufferViewBase
#include <typedarray/ArrayBufferViewBase.h>
#endif
#ifndef INCLUDED_typedarray_Int32ArrayImpl
#include <typedarray/Int32ArrayImpl.h>
#endif
#ifndef INCLUDED_typedarray_Uint8ArrayImpl
#include <typedarray/Uint8ArrayImpl.h>
#endif
#ifndef INCLUDED_typedarray__Int32Array_Int32Array_Impl_
#include <typedarray/_Int32Array/Int32Array_Impl_.h>
#endif
#ifndef INCLUDED_typedarray__Uint8Array_Uint8Array_Impl_
#include <typedarray/_Uint8Array/Uint8Array_Impl_.h>
#endif

namespace gluon{
namespace webgl{
namespace native{

void GLContext_obj::__construct(){
            	HX_JUST_GC_STACKFRAME
	 ::typedarray::Int32ArrayImpl temp = ::typedarray::_Int32Array::Int32Array_Impl__obj::_new(1,null(),null(),null(),null());
	::cpp::Pointer< unsigned char > address = ( (::cpp::Pointer< unsigned char >)(::cpp::Pointer_obj::arrayElem(temp->buffer->b,temp->byteOffset)) );
	unsigned char* address1 = address->get_raw();
	glGetIntegerv(( (unsigned int)(36006) ),( (int *)(address1) ));
	int initialFramebufferRef = temp->_get(0);
	this->defaultFramebuffer =  ::gluon::webgl::native::GLFramebuffer_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),( (unsigned int)(initialFramebufferRef) ));
}

Dynamic GLContext_obj::__CreateEmpty() { return new GLContext_obj; }

void *GLContext_obj::_hx_vtable = 0;

Dynamic GLContext_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GLContext_obj > _hx_result = new GLContext_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GLContext_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x084d1541;
}

::String GLContext_obj::getProgramInfoLog( ::gluon::webgl::native::GLProgram program){
	int ref = 0;
	unsigned int program1 = program->handle;
	glGetProgramiv(program1,( (unsigned int)(35716) ),hx::StarOf(ref));
	int maxInfoLogLength = ref;
	int returnedStringLength = 0;
	 ::typedarray::Uint8ArrayImpl infoLogBuffer = ::typedarray::_Uint8Array::Uint8Array_Impl__obj::_new(maxInfoLogLength,null(),null(),null(),null());
	::cpp::Pointer< unsigned char > address = ( (::cpp::Pointer< unsigned char >)(::cpp::Pointer_obj::arrayElem(infoLogBuffer->buffer->b,infoLogBuffer->byteOffset)) );
	unsigned char* address1 = address->get_raw();
	unsigned char * infoLogBufferPtr = ( (unsigned char *)(address1) );
	char* infoLogPointer = reinterpret_cast<char*>(infoLogBufferPtr);
	unsigned int program2 = program->handle;
	glGetProgramInfoLog(program2,maxInfoLogLength,hx::StarOf(returnedStringLength),infoLogPointer);
	const char* cStr = ( (const char*)(infoLogPointer) );
	return ::String(cStr);
}


HX_DEFINE_DYNAMIC_FUNC1(GLContext_obj,getProgramInfoLog,return )

 ::Dynamic GLContext_obj::getShaderParameter( ::gluon::webgl::native::GLShader shader,unsigned int pname){
	int result = 0;
	unsigned int _hx_switch_0 = pname;
	if (  (_hx_switch_0==( (unsigned int)(35663) )) ){
		unsigned int shader1 = shader->handle;
		glGetShaderiv(shader1,pname,hx::StarOf(result));
		return result;
		goto _hx_goto_0;
	}
	if (  (_hx_switch_0==( (unsigned int)(35712) )) ||  (_hx_switch_0==( (unsigned int)(35713) )) ){
		unsigned int shader1 = shader->handle;
		glGetShaderiv(shader1,pname,hx::StarOf(result));
		return (result != 0);
		goto _hx_goto_0;
	}
	_hx_goto_0:;
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLContext_obj,getShaderParameter,return )

::String GLContext_obj::getShaderInfoLog( ::gluon::webgl::native::GLShader shader){
	int maxInfoLogLength = ( (int)(this->getShaderParameter(shader,( (unsigned int)(35716) ))) );
	int returnedStringLength = 0;
	 ::typedarray::Uint8ArrayImpl infoLogBuffer = ::typedarray::_Uint8Array::Uint8Array_Impl__obj::_new(maxInfoLogLength,null(),null(),null(),null());
	::cpp::Pointer< unsigned char > address = ( (::cpp::Pointer< unsigned char >)(::cpp::Pointer_obj::arrayElem(infoLogBuffer->buffer->b,infoLogBuffer->byteOffset)) );
	unsigned char* address1 = address->get_raw();
	unsigned char * infoLogBufferPtr = ( (unsigned char *)(address1) );
	char* infoLogPointer = reinterpret_cast<char*>(infoLogBufferPtr);
	unsigned int shader1 = shader->handle;
	glGetShaderInfoLog(shader1,maxInfoLogLength,hx::StarOf(returnedStringLength),infoLogPointer);
	const char* cStr = ( (const char*)(infoLogPointer) );
	return ::String(cStr);
}


HX_DEFINE_DYNAMIC_FUNC1(GLContext_obj,getShaderInfoLog,return )

void GLContext_obj::shaderSource( ::gluon::webgl::native::GLShader shader,::String source){
	const char* this1 = source.utf8_str();
	const char* sourceCharStar = this1;
	unsigned int shader1 = shader->handle;
	glShaderSource(shader1,1,hx::StarOf(sourceCharStar),0);
}


HX_DEFINE_DYNAMIC_FUNC2(GLContext_obj,shaderSource,(void))


::hx::ObjectPtr< GLContext_obj > GLContext_obj::__new() {
	::hx::ObjectPtr< GLContext_obj > __this = new GLContext_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< GLContext_obj > GLContext_obj::__alloc(::hx::Ctx *_hx_ctx) {
	GLContext_obj *__this = (GLContext_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GLContext_obj), true, "gluon.webgl.native.GLContext"));
	*(void **)__this = GLContext_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

GLContext_obj::GLContext_obj()
{
}

void GLContext_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GLContext);
	HX_MARK_MEMBER_NAME(defaultFramebuffer,"defaultFramebuffer");
	HX_MARK_END_CLASS();
}

void GLContext_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(defaultFramebuffer,"defaultFramebuffer");
}

::hx::Val GLContext_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"shaderSource") ) { return ::hx::Val( shaderSource_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getShaderInfoLog") ) { return ::hx::Val( getShaderInfoLog_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getProgramInfoLog") ) { return ::hx::Val( getProgramInfoLog_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"defaultFramebuffer") ) { return ::hx::Val( defaultFramebuffer ); }
		if (HX_FIELD_EQ(inName,"getShaderParameter") ) { return ::hx::Val( getShaderParameter_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GLContext_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 18:
		if (HX_FIELD_EQ(inName,"defaultFramebuffer") ) { defaultFramebuffer=inValue.Cast<  ::gluon::webgl::native::GLFramebuffer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GLContext_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("defaultFramebuffer",ac,79,67,39));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GLContext_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::gluon::webgl::native::GLFramebuffer */ ,(int)offsetof(GLContext_obj,defaultFramebuffer),HX_("defaultFramebuffer",ac,79,67,39)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GLContext_obj_sStaticStorageInfo = 0;
#endif

static ::String GLContext_obj_sMemberFields[] = {
	HX_("defaultFramebuffer",ac,79,67,39),
	HX_("getProgramInfoLog",c8,f1,f2,cd),
	HX_("getShaderParameter",ce,69,5b,36),
	HX_("getShaderInfoLog",9b,bd,c8,f3),
	HX_("shaderSource",e0,4d,1a,a2),
	::String(null()) };

::hx::Class GLContext_obj::__mClass;

void GLContext_obj::__register()
{
	GLContext_obj _hx_dummy;
	GLContext_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("gluon.webgl.native.GLContext",c7,fd,97,f1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GLContext_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GLContext_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLContext_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLContext_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace gluon
} // end namespace webgl
} // end namespace native