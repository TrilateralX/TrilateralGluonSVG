// Generated by Haxe 4.2.0-rc.1+354c24d30
#include <hxcpp.h>

#ifndef INCLUDED_justPath_IPathContext
#include <justPath/IPathContext.h>
#endif
#ifndef INCLUDED_justPath_transform_TranslationContext
#include <justPath/transform/TranslationContext.h>
#endif

namespace justPath{
namespace transform{

void TranslationContext_obj::__construct(::Dynamic pathContext_,Float dx_,Float dy_){
	this->pathContext = pathContext_;
	this->dx = dx_;
	this->dy = dy_;
}

Dynamic TranslationContext_obj::__CreateEmpty() { return new TranslationContext_obj; }

void *TranslationContext_obj::_hx_vtable = 0;

Dynamic TranslationContext_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TranslationContext_obj > _hx_result = new TranslationContext_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool TranslationContext_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1757f015;
}

static ::justPath::IPathContext_obj _hx_justPath_transform_TranslationContext__hx_justPath_IPathContext= {
	( void (::hx::Object::*)(Float,Float))&::justPath::transform::TranslationContext_obj::moveTo,
	( void (::hx::Object::*)(Float,Float))&::justPath::transform::TranslationContext_obj::lineTo,
	( void (::hx::Object::*)(Float,Float,Float,Float))&::justPath::transform::TranslationContext_obj::quadTo,
	( void (::hx::Object::*)(Float,Float,Float,Float,Float,Float))&::justPath::transform::TranslationContext_obj::curveTo,
};

void *TranslationContext_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xed67b972: return &_hx_justPath_transform_TranslationContext__hx_justPath_IPathContext;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void TranslationContext_obj::moveTo(Float x,Float y){
	::justPath::IPathContext_obj::moveTo(this->pathContext,(x + this->dx),(y + this->dy));
}


HX_DEFINE_DYNAMIC_FUNC2(TranslationContext_obj,moveTo,(void))

void TranslationContext_obj::lineTo(Float x,Float y){
	::justPath::IPathContext_obj::lineTo(this->pathContext,(x + this->dx),(y + this->dy));
}


HX_DEFINE_DYNAMIC_FUNC2(TranslationContext_obj,lineTo,(void))

void TranslationContext_obj::quadTo(Float x1,Float y1,Float x2,Float y2){
	::justPath::IPathContext_obj::quadTo(this->pathContext,(x1 + this->dx),(y1 + this->dy),(x2 + this->dx),(y2 + this->dy));
}


HX_DEFINE_DYNAMIC_FUNC4(TranslationContext_obj,quadTo,(void))

void TranslationContext_obj::curveTo(Float x1,Float y1,Float x2,Float y2,Float x3,Float y3){
	::justPath::IPathContext_obj::curveTo(this->pathContext,(x1 + this->dx),(y1 + this->dy),(x2 + this->dx),(y2 + this->dy),(x3 + this->dx),(y3 + this->dy));
}


HX_DEFINE_DYNAMIC_FUNC6(TranslationContext_obj,curveTo,(void))


::hx::ObjectPtr< TranslationContext_obj > TranslationContext_obj::__new(::Dynamic pathContext_,Float dx_,Float dy_) {
	::hx::ObjectPtr< TranslationContext_obj > __this = new TranslationContext_obj();
	__this->__construct(pathContext_,dx_,dy_);
	return __this;
}

::hx::ObjectPtr< TranslationContext_obj > TranslationContext_obj::__alloc(::hx::Ctx *_hx_ctx,::Dynamic pathContext_,Float dx_,Float dy_) {
	TranslationContext_obj *__this = (TranslationContext_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TranslationContext_obj), true, "justPath.transform.TranslationContext"));
	*(void **)__this = TranslationContext_obj::_hx_vtable;
	__this->__construct(pathContext_,dx_,dy_);
	return __this;
}

TranslationContext_obj::TranslationContext_obj()
{
}

void TranslationContext_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TranslationContext);
	HX_MARK_MEMBER_NAME(pathContext,"pathContext");
	HX_MARK_MEMBER_NAME(dx,"dx");
	HX_MARK_MEMBER_NAME(dy,"dy");
	HX_MARK_END_CLASS();
}

void TranslationContext_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(pathContext,"pathContext");
	HX_VISIT_MEMBER_NAME(dx,"dx");
	HX_VISIT_MEMBER_NAME(dy,"dy");
}

::hx::Val TranslationContext_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"dx") ) { return ::hx::Val( dx ); }
		if (HX_FIELD_EQ(inName,"dy") ) { return ::hx::Val( dy ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"moveTo") ) { return ::hx::Val( moveTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"lineTo") ) { return ::hx::Val( lineTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"quadTo") ) { return ::hx::Val( quadTo_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"curveTo") ) { return ::hx::Val( curveTo_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pathContext") ) { return ::hx::Val( pathContext ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TranslationContext_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"dx") ) { dx=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dy") ) { dy=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pathContext") ) { pathContext=inValue.Cast< ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TranslationContext_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("pathContext",ca,06,31,f6));
	outFields->push(HX_("dx",94,57,00,00));
	outFields->push(HX_("dy",95,57,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TranslationContext_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(TranslationContext_obj,pathContext),HX_("pathContext",ca,06,31,f6)},
	{::hx::fsFloat,(int)offsetof(TranslationContext_obj,dx),HX_("dx",94,57,00,00)},
	{::hx::fsFloat,(int)offsetof(TranslationContext_obj,dy),HX_("dy",95,57,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TranslationContext_obj_sStaticStorageInfo = 0;
#endif

static ::String TranslationContext_obj_sMemberFields[] = {
	HX_("pathContext",ca,06,31,f6),
	HX_("dx",94,57,00,00),
	HX_("dy",95,57,00,00),
	HX_("moveTo",ec,d2,ac,cc),
	HX_("lineTo",8f,46,a0,ec),
	HX_("quadTo",22,82,9f,cc),
	HX_("curveTo",0a,60,88,ce),
	::String(null()) };

::hx::Class TranslationContext_obj::__mClass;

void TranslationContext_obj::__register()
{
	TranslationContext_obj _hx_dummy;
	TranslationContext_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("justPath.transform.TranslationContext",7d,fd,85,7b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TranslationContext_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TranslationContext_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TranslationContext_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TranslationContext_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace justPath
} // end namespace transform
