// Generated by Haxe 4.2.0-rc.1+354c24d30
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_TrilateralGluonSVG
#include <TrilateralGluonSVG.h>
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
#ifndef INCLUDED_trilateralGluonChange_AppGL
#include <trilateralGluonChange/AppGL.h>
#endif


void TrilateralGluonSVG_obj::__construct(int width,int height){
	this->cubictest_d = HX_("M100,200 C100,100 250,100 250,200S400,300 400,200",b0,60,65,bc);
	this->quadtest_d = HX_("M200,300 Q400,50 600,300 T1000,300",c7,a8,bf,30);
	super::__construct(width,height);
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
}


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
	 ::TrilateralGluonSVG_obj::__alloc( HX_CTX ,1000,1000);
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

