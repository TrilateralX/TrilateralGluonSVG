// Generated by Haxe 4.2.0-rc.1+354c24d30
#include <hxcpp.h>

#ifndef INCLUDED_typedarray_ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType
#include <typedarray/ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType.h>
#endif

namespace typedarray{

void ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType_obj::__construct( ::Dynamic array){
	this->i = 0;
	this->a = array;
}

Dynamic ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType_obj::__CreateEmpty() { return new ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType_obj; }

void *ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType_obj::_hx_vtable = 0;

Dynamic ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType_obj > _hx_result = new ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x792b6543;
}

bool ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType_obj::hasNext(){
	return ::hx::IsLess( this->i,this->a->__Field(HX_("length",e6,94,07,9f),::hx::paccDynamic) );
}


HX_DEFINE_DYNAMIC_FUNC0(ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType_obj,hasNext,return )

float ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType_obj::next(){
	return ( (float)(this->a->__Field(HX_("_get",97,c5,19,3f),::hx::paccDynamic)(this->i++)) );
}


HX_DEFINE_DYNAMIC_FUNC0(ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType_obj,next,return )


ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType_obj::ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType_obj()
{
}

void ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType);
	HX_MARK_MEMBER_NAME(a,"a");
	HX_MARK_MEMBER_NAME(i,"i");
	HX_MARK_END_CLASS();
}

void ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(a,"a");
	HX_VISIT_MEMBER_NAME(i,"i");
}

::hx::Val ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { return ::hx::Val( a ); }
		if (HX_FIELD_EQ(inName,"i") ) { return ::hx::Val( i ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNext") ) { return ::hx::Val( hasNext_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"a") ) { a=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"i") ) { i=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("a",61,00,00,00));
	outFields->push(HX_("i",69,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType_obj,a),HX_("a",61,00,00,00)},
	{::hx::fsInt,(int)offsetof(ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType_obj,i),HX_("i",69,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType_obj_sStaticStorageInfo = 0;
#endif

static ::String ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType_obj_sMemberFields[] = {
	HX_("a",61,00,00,00),
	HX_("i",69,00,00,00),
	HX_("hasNext",6d,a5,46,18),
	HX_("next",f3,84,02,49),
	::String(null()) };

::hx::Class ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType_obj::__mClass;

void ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType_obj::__register()
{
	ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType_obj _hx_dummy;
	ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("typedarray.ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType",73,71,dc,12);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace typedarray
