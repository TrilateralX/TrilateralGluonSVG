// Generated by Haxe 4.2.0-rc.1+354c24d30
#include <hxcpp.h>

#ifndef INCLUDED_c8a65390b4b62196
#define INCLUDED_c8a65390b4b62196
#include "/usr/local/lib/haxeLibrary/gluon/git/src/gluon/webgl/native/ES2Context.h"
#endif
#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_66c800784bc86d2f
#define INCLUDED_66c800784bc86d2f
#include "linc_glfw.h"
#endif
#ifndef INCLUDED_2710e462964f946c
#define INCLUDED_2710e462964f946c
#include "stdlib.h"
#endif
#ifndef INCLUDED_TrilateralGluonSVG
#include <TrilateralGluonSVG.h>
#endif
#ifndef INCLUDED_gluon_webgl__GLContext_GLContext_Impl_
#include <gluon/webgl/_GLContext/GLContext_Impl_.h>
#endif
#ifndef INCLUDED_gluon_webgl_native_GLBuffer
#include <gluon/webgl/native/GLBuffer.h>
#endif
#ifndef INCLUDED_gluon_webgl_native_GLContext
#include <gluon/webgl/native/GLContext.h>
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
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_io_ArrayBufferViewImpl
#include <haxe/io/ArrayBufferViewImpl.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io__Float32Array_Float32Array_Impl_
#include <haxe/io/_Float32Array/Float32Array_Impl_.h>
#endif
#ifndef INCLUDED_justPath_IPathContext
#include <justPath/IPathContext.h>
#endif
#ifndef INCLUDED_justPath_SvgPath
#include <justPath/SvgPath.h>
#endif
#ifndef INCLUDED_justPath_transform_TranslationContext
#include <justPath/transform/TranslationContext.h>
#endif
#ifndef INCLUDED_trilateral3_drawing_Pen
#include <trilateral3/drawing/Pen.h>
#endif
#ifndef INCLUDED_trilateral3_drawing_Sketch
#include <trilateral3/drawing/Sketch.h>
#endif
#ifndef INCLUDED_trilateral3_nodule_PenNodule
#include <trilateral3/nodule/PenNodule.h>
#endif
#ifndef INCLUDED_trilateralGluonChange_AppGL
#include <trilateralGluonChange/AppGL.h>
#endif
#ifndef INCLUDED_typedarray_ArrayBufferView
#include <typedarray/ArrayBufferView.h>
#endif
#ifndef INCLUDED_typedarray_ArrayBufferViewBase
#include <typedarray/ArrayBufferViewBase.h>
#endif
#ifndef INCLUDED_typedarray_Float32ArrayImpl
#include <typedarray/Float32ArrayImpl.h>
#endif


void TrilateralGluonSVG_obj::__construct(int width,int height){
	this->cubictest_d = HX_("M100,200 C100,100 250,100 250,200S400,300 400,200",b0,60,65,bc);
	this->quadtest_d = HX_("M200,300 Q400,50 600,300 T1000,300",c7,a8,bf,30);
	super::__construct(width,height);
	::haxe::Log_obj::trace(HX_("new",60,d0,53,00),::hx::SourceInfo(HX_("TrilateralGluonSVG.hx",9d,3e,9f,10),29,HX_("TrilateralGluonSVG",c1,72,09,d5),HX_("new",60,d0,53,00)));
}

Dynamic TrilateralGluonSVG_obj::__CreateEmpty() { return new TrilateralGluonSVG_obj; }

void *TrilateralGluonSVG_obj::_hx_vtable = 0;

Dynamic TrilateralGluonSVG_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TrilateralGluonSVG_obj > _hx_result = new TrilateralGluonSVG_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool TrilateralGluonSVG_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2ccd5581) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2ccd5581;
	} else {
		return inClassId==(int)0x49de47f3;
	}
}

void TrilateralGluonSVG_obj::draw( ::trilateral3::drawing::Pen pen){
	pen->currentColor = -16776961;
	this->cubicSVG(pen);
	pen->currentColor = -16776961;
	this->quadSVG(pen);
	::haxe::Log_obj::trace(HX_("draw",04,2c,70,42),::hx::SourceInfo(HX_("TrilateralGluonSVG.hx",9d,3e,9f,10),37,HX_("TrilateralGluonSVG",c1,72,09,d5),HX_("draw",04,2c,70,42)));
}


HX_DEFINE_DYNAMIC_FUNC1(TrilateralGluonSVG_obj,draw,(void))

void TrilateralGluonSVG_obj::cubicSVG( ::trilateral3::drawing::Pen pen){
	HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(5)
	int _hx_run(int colour,Float x,Float y,Float x_,Float y_){
		HX_JUST_GC_STACKFRAME
		return ::Math_obj::round((( (Float)(colour) ) - (x * y)));
	}
	HX_END_LOCAL_FUNC5(return)

            	HX_JUST_GC_STACKFRAME
	 ::trilateral3::drawing::Sketch sketch =  ::trilateral3::drawing::Sketch_obj::__alloc( HX_CTX ,pen,4,3);
	sketch->width = ( (Float)(20) );
	sketch->colourFunction =  ::Dynamic(new _hx_Closure_0());
	 ::justPath::transform::TranslationContext translateContext =  ::justPath::transform::TranslationContext_obj::__alloc( HX_CTX ,sketch,( (Float)(50) ),( (Float)(200) ));
	 ::justPath::SvgPath p =  ::justPath::SvgPath_obj::__alloc( HX_CTX ,translateContext);
	p->parse(this->cubictest_d);
}


HX_DEFINE_DYNAMIC_FUNC1(TrilateralGluonSVG_obj,cubicSVG,(void))

void TrilateralGluonSVG_obj::quadSVG( ::trilateral3::drawing::Pen pen){
	HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(5)
	Float _hx_run(Float width,Float x,Float y,Float x_,Float y_){
		HX_JUST_GC_STACKFRAME
		return (width + ((Float)0.016));
	}
	HX_END_LOCAL_FUNC5(return)

            	HX_JUST_GC_STACKFRAME
	 ::trilateral3::drawing::Sketch sketch =  ::trilateral3::drawing::Sketch_obj::__alloc( HX_CTX ,pen,4,3);
	sketch->width = ( (Float)(5) );
	sketch->widthFunction =  ::Dynamic(new _hx_Closure_0());
	 ::justPath::transform::TranslationContext translateContext =  ::justPath::transform::TranslationContext_obj::__alloc( HX_CTX ,sketch,( (Float)(-100) ),( (Float)(300) ));
	 ::justPath::SvgPath p =  ::justPath::SvgPath_obj::__alloc( HX_CTX ,translateContext);
	p->parse(this->quadtest_d);
}


HX_DEFINE_DYNAMIC_FUNC1(TrilateralGluonSVG_obj,quadSVG,(void))

void TrilateralGluonSVG_obj::main(){
            	HX_JUST_GC_STACKFRAME
	::haxe::Log_obj::trace(HX_("testing",d0,c3,d6,bd),::hx::SourceInfo(HX_("TrilateralGluonSVG.hx",9d,3e,9f,10),23,HX_("TrilateralGluonSVG",c1,72,09,d5),HX_("main",39,38,56,48)));
	 ::TrilateralGluonSVG tg =  ::TrilateralGluonSVG_obj::__alloc( HX_CTX ,1000,1000);
	void();
	if (::hx::IsNotEq( glfwInit(),0 )) {
		::cpp::Pointer<  GLFWmonitor > tmp = null();
		::cpp::Pointer<  GLFWwindow > tmp1 = null();
		::cpp::Pointer<  GLFWwindow > window = glfwCreateWindow(1000,1000,HX_("trilateralGluonChange",53,d5,ec,4e),tmp,tmp1);
		::cpp::Pointer<  GLFWwindow > tmp2 = window;
		glfwMakeContextCurrent(tmp2);
		tg->gl =  ::gluon::webgl::native::GLContext_obj::__alloc( HX_CTX );
		while(true){
			::cpp::Pointer<  GLFWwindow > tmp = window;
			if (!((glfwWindowShouldClose(tmp) != 1))) {
				goto _hx_goto_0;
			}
			{
				 ::gluon::webgl::native::GLContext gl = tg->gl;
				 ::gluon::webgl::native::GLContext this1 = gl;
				unsigned int ref = glCreateProgram();
				 ::gluon::webgl::native::GLProgram v;
				if ((ref != 0)) {
					v =  ::gluon::webgl::native::GLProgram_obj::__alloc( HX_CTX ,this1,ref);
				}
				else {
					v = null();
				}
				::gluon::webgl::_GLContext::GLContext_Impl__obj::reportErrors(this1,HX_("createProgram",e8,22,3c,dc));
				 ::gluon::webgl::native::GLProgram program = v;
				{
					 ::gluon::webgl::native::GLContext this2 = gl;
					unsigned int ref1 = glCreateShader(( (unsigned int)(35633) ));
					 ::gluon::webgl::native::GLShader v1;
					if ((ref1 != 0)) {
						v1 =  ::gluon::webgl::native::GLShader_obj::__alloc( HX_CTX ,this2,ref1);
					}
					else {
						v1 = null();
					}
					::gluon::webgl::_GLContext::GLContext_Impl__obj::reportErrors(this2,HX_("createShader",41,ff,75,3f));
					 ::gluon::webgl::native::GLShader shader = v1;
					{
						gl->shaderSource(shader,((((((HX_("attribute vec3 vertexPosition;",31,27,01,79) + HX_("attribute vec4 vertexColor;",b8,a7,4a,43)) + HX_("varying vec4 vcol;",61,c8,5b,03)) + HX_("void main(void) {",4d,18,fb,21)) + HX_(" gl_Position = vec4(vertexPosition, 1.0);",1c,0c,87,98)) + HX_(" vcol = vertexColor;",75,ef,b6,2e)) + HX_("}",7d,00,00,00)));
						::gluon::webgl::_GLContext::GLContext_Impl__obj::reportErrors(gl,HX_("shaderSource",e0,4d,1a,a2));
					}
					{
						glCompileShader(shader->handle);
						::gluon::webgl::_GLContext::GLContext_Impl__obj::reportErrors(gl,HX_("compileShader",f8,70,b2,da));
					}
					 ::gluon::webgl::native::GLShader shader1;
					 ::gluon::webgl::native::GLContext this3 = gl;
					bool v2 = ( (bool)(this3->getShaderParameter(shader,( (unsigned int)(35713) ))) );
					::gluon::webgl::_GLContext::GLContext_Impl__obj::reportErrors(this3,HX_("getShaderParameter",ce,69,5b,36));
					if (!(v2)) {
						 ::gluon::webgl::native::GLContext this1 = gl;
						::String v = this1->getShaderInfoLog(shader);
						::gluon::webgl::_GLContext::GLContext_Impl__obj::reportErrors(this1,HX_("getShaderInfoLog",9b,bd,c8,f3));
						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Error compiling shader. ",bf,50,4d,23) + v)));
					}
					else {
						shader1 = shader;
					}
					glAttachShader(program->handle,shader1->handle);
					::gluon::webgl::_GLContext::GLContext_Impl__obj::reportErrors(gl,HX_("attachShader",ca,d0,77,b2));
				}
				{
					 ::gluon::webgl::native::GLContext this4 = gl;
					unsigned int ref2 = glCreateShader(( (unsigned int)(35632) ));
					 ::gluon::webgl::native::GLShader v3;
					if ((ref2 != 0)) {
						v3 =  ::gluon::webgl::native::GLShader_obj::__alloc( HX_CTX ,this4,ref2);
					}
					else {
						v3 = null();
					}
					::gluon::webgl::_GLContext::GLContext_Impl__obj::reportErrors(this4,HX_("createShader",41,ff,75,3f));
					 ::gluon::webgl::native::GLShader shader2 = v3;
					{
						gl->shaderSource(shader2,(((HX_("varying vec4 vcol;",61,c8,5b,03) + HX_("void main(void) {",4d,18,fb,21)) + HX_(" gl_FragColor = vcol;",25,af,1c,24)) + HX_("}",7d,00,00,00)));
						::gluon::webgl::_GLContext::GLContext_Impl__obj::reportErrors(gl,HX_("shaderSource",e0,4d,1a,a2));
					}
					{
						glCompileShader(shader2->handle);
						::gluon::webgl::_GLContext::GLContext_Impl__obj::reportErrors(gl,HX_("compileShader",f8,70,b2,da));
					}
					 ::gluon::webgl::native::GLShader shader3;
					 ::gluon::webgl::native::GLContext this5 = gl;
					bool v4 = ( (bool)(this5->getShaderParameter(shader2,( (unsigned int)(35713) ))) );
					::gluon::webgl::_GLContext::GLContext_Impl__obj::reportErrors(this5,HX_("getShaderParameter",ce,69,5b,36));
					if (!(v4)) {
						 ::gluon::webgl::native::GLContext this1 = gl;
						::String v = this1->getShaderInfoLog(shader2);
						::gluon::webgl::_GLContext::GLContext_Impl__obj::reportErrors(this1,HX_("getShaderInfoLog",9b,bd,c8,f3));
						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Error compiling shader. ",bf,50,4d,23) + v)));
					}
					else {
						shader3 = shader2;
					}
					glAttachShader(program->handle,shader3->handle);
					::gluon::webgl::_GLContext::GLContext_Impl__obj::reportErrors(gl,HX_("attachShader",ca,d0,77,b2));
				}
				{
					glLinkProgram(program->handle);
					::gluon::webgl::_GLContext::GLContext_Impl__obj::reportErrors(gl,HX_("linkProgram",aa,ad,7b,89));
				}
				{
					{
						unsigned int ref3;
						if (::hx::IsNotNull( program )) {
							ref3 = program->handle;
						}
						else {
							ref3 = ( (unsigned int)(0) );
						}
						glUseProgram(ref3);
					}
					::gluon::webgl::_GLContext::GLContext_Impl__obj::reportErrors(gl,HX_("useProgram",fd,6c,ac,f6));
				}
				tg->program = program;
				tg->draw(tg->penNodule->pen);
				 ::gluon::webgl::native::GLContext gl1 = tg->gl;
				 ::gluon::webgl::native::GLProgram program1 = tg->program;
				 ::haxe::io::ArrayBufferViewImpl this6 = tg->penNodule->colorTriangles;
				 ::Dynamic end = ((this6->byteLength >> 2) - 2);
				 ::Dynamic data;
				if (::hx::IsNull( end )) {
					data = null();
				}
				else {
					data = (( (int)(end) ) << 2);
				}
				 ::typedarray::Float32ArrayImpl data1 = ( ( ::typedarray::Float32ArrayImpl)(::haxe::io::_Float32Array::Float32Array_Impl__obj::fromData(this6->subarray(8,data))) );
				 ::Dynamic isDynamic = true;
				if (::hx::IsNull( isDynamic )) {
					isDynamic = false;
				}
				 ::Dynamic isDynamic1 = isDynamic;
				if (::hx::IsNull( isDynamic1 )) {
					isDynamic1 = false;
				}
				 ::gluon::webgl::native::GLContext this7 = gl1;
				unsigned int ref4 = ( (unsigned int)(0) );
				glGenBuffers(1,hx::StarOf(ref4));
				 ::gluon::webgl::native::GLBuffer v5;
				if ((ref4 != 0)) {
					v5 =  ::gluon::webgl::native::GLBuffer_obj::__alloc( HX_CTX ,this7,ref4);
				}
				else {
					v5 = null();
				}
				::gluon::webgl::_GLContext::GLContext_Impl__obj::reportErrors(this7,HX_("createBuffer",1c,fd,e9,f2));
				 ::gluon::webgl::native::GLBuffer buf = v5;
				{
					{
						unsigned int ref5;
						if (::hx::IsNotNull( buf )) {
							ref5 = buf->handle;
						}
						else {
							ref5 = ( (unsigned int)(0) );
						}
						glBindBuffer(( (unsigned int)(34962) ),ref5);
					}
					::gluon::webgl::_GLContext::GLContext_Impl__obj::reportErrors(gl1,HX_("bindBuffer",9d,92,be,f8));
				}
				if (( (bool)(isDynamic1) )) {
					int data = ( ( ::haxe::io::Bytes)(data1) )->length;
					::cpp::Pointer< unsigned char > _hx_tmp = ( (::cpp::Pointer< unsigned char >)(::cpp::Pointer_obj::arrayElem(( ( ::haxe::io::Bytes)(data1) )->b,0)) );
					glBufferData(( (unsigned int)(34962) ),( (::cpp::Int64)(data) ),( (const void *)(( (unsigned char *)(_hx_tmp->get_raw()) )) ),( (unsigned int)(35048) ));
					::gluon::webgl::_GLContext::GLContext_Impl__obj::reportErrors(gl1,HX_("bufferData",4a,bf,73,93));
				}
				else {
					int data = ( ( ::haxe::io::Bytes)(data1) )->length;
					::cpp::Pointer< unsigned char > _hx_tmp = ( (::cpp::Pointer< unsigned char >)(::cpp::Pointer_obj::arrayElem(( ( ::haxe::io::Bytes)(data1) )->b,0)) );
					glBufferData(( (unsigned int)(34962) ),( (::cpp::Int64)(data) ),( (const void *)(( (unsigned char *)(_hx_tmp->get_raw()) )) ),( (unsigned int)(35044) ));
					::gluon::webgl::_GLContext::GLContext_Impl__obj::reportErrors(gl1,HX_("bufferData",4a,bf,73,93));
				}
				 ::gluon::webgl::native::GLBuffer vbo = buf;
				const char* this8 = HX_("vertexPosition",2d,3c,14,50).utf8_str();
				const char* nameCharStar = this8;
				int v6 = glGetAttribLocation(program1->handle,nameCharStar);
				::gluon::webgl::_GLContext::GLContext_Impl__obj::reportErrors(gl1,HX_("getAttribLocation",d5,1a,10,5d));
				int posLoc = v6;
				const char* this9 = HX_("vertexColor",5f,3b,98,5e).utf8_str();
				const char* nameCharStar1 = this9;
				int v7 = glGetAttribLocation(program1->handle,nameCharStar1);
				::gluon::webgl::_GLContext::GLContext_Impl__obj::reportErrors(gl1,HX_("getAttribLocation",d5,1a,10,5d));
				int colorLoc = v7;
				{
					{
						const void * offsetAsPointer = reinterpret_cast<void*>(0);
						glVertexAttribPointer(( (unsigned int)(posLoc) ),3,( (unsigned int)(5126) ),false,28,offsetAsPointer);
					}
					::gluon::webgl::_GLContext::GLContext_Impl__obj::reportErrors(gl1,HX_("vertexAttribPointer",8f,04,b6,3f));
				}
				{
					{
						const void * offsetAsPointer1 = reinterpret_cast<void*>(12);
						glVertexAttribPointer(( (unsigned int)(colorLoc) ),4,( (unsigned int)(5126) ),false,28,offsetAsPointer1);
					}
					::gluon::webgl::_GLContext::GLContext_Impl__obj::reportErrors(gl1,HX_("vertexAttribPointer",8f,04,b6,3f));
				}
				{
					glEnableVertexAttribArray(( (unsigned int)(posLoc) ));
					::gluon::webgl::_GLContext::GLContext_Impl__obj::reportErrors(gl1,HX_("enableVertexAttribArray",e8,46,5a,ac));
				}
				{
					glEnableVertexAttribArray(( (unsigned int)(colorLoc) ));
					::gluon::webgl::_GLContext::GLContext_Impl__obj::reportErrors(gl1,HX_("enableVertexAttribArray",e8,46,5a,ac));
				}
				tg->buf = vbo;
				::haxe::Log_obj::trace(HX_("setup",7d,ae,2f,7a),::hx::SourceInfo(HX_("trilateralGluonChange/AppGL.hx",14,b1,c5,0e),55,HX_("trilateralGluonChange.AppGL",8b,83,03,3b),HX_("setup",7d,ae,2f,7a)));
			}
			goto _hx_goto_0;
		}
		_hx_goto_0:;
		while(true){
			::cpp::Pointer<  GLFWwindow > tmp = window;
			if (!((glfwWindowShouldClose(tmp) != 1))) {
				goto _hx_goto_1;
			}
			tg->render();
			glfwPollEvents();
		}
		_hx_goto_1:;
	}
	else {
		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("GLFW init fail",04,bf,61,bb)));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(TrilateralGluonSVG_obj,main,(void))


::hx::ObjectPtr< TrilateralGluonSVG_obj > TrilateralGluonSVG_obj::__new(int width,int height) {
	::hx::ObjectPtr< TrilateralGluonSVG_obj > __this = new TrilateralGluonSVG_obj();
	__this->__construct(width,height);
	return __this;
}

::hx::ObjectPtr< TrilateralGluonSVG_obj > TrilateralGluonSVG_obj::__alloc(::hx::Ctx *_hx_ctx,int width,int height) {
	TrilateralGluonSVG_obj *__this = (TrilateralGluonSVG_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TrilateralGluonSVG_obj), true, "TrilateralGluonSVG"));
	*(void **)__this = TrilateralGluonSVG_obj::_hx_vtable;
	__this->__construct(width,height);
	return __this;
}

TrilateralGluonSVG_obj::TrilateralGluonSVG_obj()
{
}

void TrilateralGluonSVG_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TrilateralGluonSVG);
	HX_MARK_MEMBER_NAME(quadtest_d,"quadtest_d");
	HX_MARK_MEMBER_NAME(cubictest_d,"cubictest_d");
	 ::trilateralGluonChange::AppGL_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TrilateralGluonSVG_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(quadtest_d,"quadtest_d");
	HX_VISIT_MEMBER_NAME(cubictest_d,"cubictest_d");
	 ::trilateralGluonChange::AppGL_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val TrilateralGluonSVG_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quadSVG") ) { return ::hx::Val( quadSVG_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"cubicSVG") ) { return ::hx::Val( cubicSVG_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"quadtest_d") ) { return ::hx::Val( quadtest_d ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cubictest_d") ) { return ::hx::Val( cubictest_d ); }
	}
	return super::__Field(inName,inCallProp);
}

bool TrilateralGluonSVG_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { outValue = main_dyn(); return true; }
	}
	return false;
}

::hx::Val TrilateralGluonSVG_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"quadtest_d") ) { quadtest_d=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"cubictest_d") ) { cubictest_d=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TrilateralGluonSVG_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("quadtest_d",fe,db,ed,08));
	outFields->push(HX_("cubictest_d",c1,84,2e,d8));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TrilateralGluonSVG_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(TrilateralGluonSVG_obj,quadtest_d),HX_("quadtest_d",fe,db,ed,08)},
	{::hx::fsString,(int)offsetof(TrilateralGluonSVG_obj,cubictest_d),HX_("cubictest_d",c1,84,2e,d8)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TrilateralGluonSVG_obj_sStaticStorageInfo = 0;
#endif

static ::String TrilateralGluonSVG_obj_sMemberFields[] = {
	HX_("quadtest_d",fe,db,ed,08),
	HX_("cubictest_d",c1,84,2e,d8),
	HX_("draw",04,2c,70,42),
	HX_("cubicSVG",3a,13,8d,05),
	HX_("quadSVG",dd,83,f1,3e),
	::String(null()) };

::hx::Class TrilateralGluonSVG_obj::__mClass;

static ::String TrilateralGluonSVG_obj_sStaticFields[] = {
	HX_("main",39,38,56,48),
	::String(null())
};

void TrilateralGluonSVG_obj::__register()
{
	TrilateralGluonSVG_obj _hx_dummy;
	TrilateralGluonSVG_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("TrilateralGluonSVG",c1,72,09,d5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &TrilateralGluonSVG_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(TrilateralGluonSVG_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TrilateralGluonSVG_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TrilateralGluonSVG_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TrilateralGluonSVG_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TrilateralGluonSVG_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

