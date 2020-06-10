// Generated by Haxe 4.2.0-rc.1+354c24d30
#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_typedarray_ArrayBufferView
#include <typedarray/ArrayBufferView.h>
#endif
#ifndef INCLUDED_typedarray_ArrayBufferViewBase
#include <typedarray/ArrayBufferViewBase.h>
#endif
#ifndef INCLUDED_typedarray_ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType
#include <typedarray/ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType.h>
#endif
#ifndef INCLUDED_typedarray_Float32ArrayImpl
#include <typedarray/Float32ArrayImpl.h>
#endif

namespace typedarray{

void Float32ArrayImpl_obj::__construct( ::Dynamic length, ::haxe::io::Bytes buffer, ::Dynamic byteOffset, ::Dynamic byteLength){
	super::__construct(4,length,buffer,byteOffset,byteLength);
}

Dynamic Float32ArrayImpl_obj::__CreateEmpty() { return new Float32ArrayImpl_obj; }

void *Float32ArrayImpl_obj::_hx_vtable = 0;

Dynamic Float32ArrayImpl_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Float32ArrayImpl_obj > _hx_result = new Float32ArrayImpl_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool Float32ArrayImpl_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1d7caead) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1d7caead;
	} else {
		return inClassId==(int)0x2ca3a6c0;
	}
}

float Float32ArrayImpl_obj::_get(int i){
	bool _hx_tmp;
	if ((i >= 0)) {
		_hx_tmp = (i >= this->length);
	}
	else {
		_hx_tmp = true;
	}
	if (_hx_tmp) {
		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::OutsideBounds_dyn()));
	}
	int p = ((i * 4) + this->byteOffset);
	return  ::__hxcpp_memory_get_float(this->buffer->b,p);
}


HX_DEFINE_DYNAMIC_FUNC1(Float32ArrayImpl_obj,_get,return )

float Float32ArrayImpl_obj::_set(int i,float v){
	bool _hx_tmp;
	if ((i >= 0)) {
		_hx_tmp = (i >= this->length);
	}
	else {
		_hx_tmp = true;
	}
	if (_hx_tmp) {
		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::OutsideBounds_dyn()));
	}
	int p = ((i * 4) + this->byteOffset);
	 ::__hxcpp_memory_set_float(this->buffer->b,p,v);
	return v;
}


HX_DEFINE_DYNAMIC_FUNC2(Float32ArrayImpl_obj,_set,return )

 ::typedarray::ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType Float32ArrayImpl_obj::iterator(){
            	HX_JUST_GC_STACKFRAME
	return  ::typedarray::ArrayBufferViewImplIterator_typedarray__Float32Array_ArrayType_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this));
}


HX_DEFINE_DYNAMIC_FUNC0(Float32ArrayImpl_obj,iterator,return )


::hx::ObjectPtr< Float32ArrayImpl_obj > Float32ArrayImpl_obj::__new( ::Dynamic length, ::haxe::io::Bytes buffer, ::Dynamic byteOffset, ::Dynamic byteLength) {
	::hx::ObjectPtr< Float32ArrayImpl_obj > __this = new Float32ArrayImpl_obj();
	__this->__construct(length,buffer,byteOffset,byteLength);
	return __this;
}

::hx::ObjectPtr< Float32ArrayImpl_obj > Float32ArrayImpl_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic length, ::haxe::io::Bytes buffer, ::Dynamic byteOffset, ::Dynamic byteLength) {
	Float32ArrayImpl_obj *__this = (Float32ArrayImpl_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Float32ArrayImpl_obj), true, "typedarray.Float32ArrayImpl"));
	*(void **)__this = Float32ArrayImpl_obj::_hx_vtable;
	__this->__construct(length,buffer,byteOffset,byteLength);
	return __this;
}

Float32ArrayImpl_obj::Float32ArrayImpl_obj()
{
}

::hx::Val Float32ArrayImpl_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_get") ) { return ::hx::Val( _get_dyn() ); }
		if (HX_FIELD_EQ(inName,"_set") ) { return ::hx::Val( _set_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { return ::hx::Val( iterator_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Float32ArrayImpl_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Float32ArrayImpl_obj_sStaticStorageInfo = 0;
#endif

static ::String Float32ArrayImpl_obj_sMemberFields[] = {
	HX_("_get",97,c5,19,3f),
	HX_("_set",a3,e0,22,3f),
	HX_("iterator",ee,49,9a,93),
	::String(null()) };

::hx::Class Float32ArrayImpl_obj::__mClass;

void Float32ArrayImpl_obj::__register()
{
	Float32ArrayImpl_obj _hx_dummy;
	Float32ArrayImpl_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("typedarray.Float32ArrayImpl",dd,06,b7,32);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Float32ArrayImpl_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Float32ArrayImpl_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Float32ArrayImpl_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Float32ArrayImpl_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace typedarray
