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

namespace typedarray{

void ArrayBufferViewBase_obj::__construct(int BYTES_PER_ELEMENT, ::Dynamic length, ::haxe::io::Bytes buffer, ::Dynamic byteOffset, ::Dynamic byteLength){
	this->BYTES_PER_ELEMENT_ = BYTES_PER_ELEMENT;
	if (::hx::IsNotNull( length )) {
		 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc((( (int)(length) ) * BYTES_PER_ELEMENT));
		this->buffer = this1;
		this->byteOffset = 0;
		this->byteLength = this->buffer->length;
	}
	else {
		if (::hx::IsNotNull( buffer )) {
			this->buffer = buffer;
			int _hx_tmp;
			if (::hx::IsNotNull( byteOffset )) {
				_hx_tmp = ( (int)(byteOffset) );
			}
			else {
				_hx_tmp = 0;
			}
			this->byteOffset = _hx_tmp;
			int _hx_tmp1;
			if (::hx::IsNotNull( byteLength )) {
				_hx_tmp1 = ( (int)(byteLength) );
			}
			else {
				_hx_tmp1 = buffer->length;
			}
			this->byteLength = _hx_tmp1;
		}
		else {
			 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(0);
			this->buffer = this1;
			this->byteOffset = 0;
			this->byteLength = 0;
		}
	}
	int lengthShift = (((((8 & BYTES_PER_ELEMENT) >> 3) * 3) + (((4 & BYTES_PER_ELEMENT) >> 2) * 2)) + ((2 & BYTES_PER_ELEMENT) >> 1));
	this->length = (this->byteLength >> lengthShift);
	if ((::hx::Mod(this->byteLength,BYTES_PER_ELEMENT) != 0)) {
		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::Custom((HX_("byte length of should be a multiple of ",cf,14,37,9c) + BYTES_PER_ELEMENT))));
	}
}

Dynamic ArrayBufferViewBase_obj::__CreateEmpty() { return new ArrayBufferViewBase_obj; }

void *ArrayBufferViewBase_obj::_hx_vtable = 0;

Dynamic ArrayBufferViewBase_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ArrayBufferViewBase_obj > _hx_result = new ArrayBufferViewBase_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool ArrayBufferViewBase_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2ca3a6c0;
}

static ::typedarray::ArrayBufferView_obj _hx_typedarray_ArrayBufferViewBase__hx_typedarray_ArrayBufferView= {
};

void *ArrayBufferViewBase_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x159199cf: return &_hx_typedarray_ArrayBufferViewBase__hx_typedarray_ArrayBufferView;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}


::hx::ObjectPtr< ArrayBufferViewBase_obj > ArrayBufferViewBase_obj::__new(int BYTES_PER_ELEMENT, ::Dynamic length, ::haxe::io::Bytes buffer, ::Dynamic byteOffset, ::Dynamic byteLength) {
	::hx::ObjectPtr< ArrayBufferViewBase_obj > __this = new ArrayBufferViewBase_obj();
	__this->__construct(BYTES_PER_ELEMENT,length,buffer,byteOffset,byteLength);
	return __this;
}

::hx::ObjectPtr< ArrayBufferViewBase_obj > ArrayBufferViewBase_obj::__alloc(::hx::Ctx *_hx_ctx,int BYTES_PER_ELEMENT, ::Dynamic length, ::haxe::io::Bytes buffer, ::Dynamic byteOffset, ::Dynamic byteLength) {
	ArrayBufferViewBase_obj *__this = (ArrayBufferViewBase_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ArrayBufferViewBase_obj), true, "typedarray.ArrayBufferViewBase"));
	*(void **)__this = ArrayBufferViewBase_obj::_hx_vtable;
	__this->__construct(BYTES_PER_ELEMENT,length,buffer,byteOffset,byteLength);
	return __this;
}

ArrayBufferViewBase_obj::ArrayBufferViewBase_obj()
{
}

void ArrayBufferViewBase_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ArrayBufferViewBase);
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(byteOffset,"byteOffset");
	HX_MARK_MEMBER_NAME(byteLength,"byteLength");
	HX_MARK_MEMBER_NAME(BYTES_PER_ELEMENT_,"BYTES_PER_ELEMENT_");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_END_CLASS();
}

void ArrayBufferViewBase_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(byteOffset,"byteOffset");
	HX_VISIT_MEMBER_NAME(byteLength,"byteLength");
	HX_VISIT_MEMBER_NAME(BYTES_PER_ELEMENT_,"BYTES_PER_ELEMENT_");
	HX_VISIT_MEMBER_NAME(length,"length");
}

::hx::Val ArrayBufferViewBase_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return ::hx::Val( buffer ); }
		if (HX_FIELD_EQ(inName,"length") ) { return ::hx::Val( length ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteOffset") ) { return ::hx::Val( byteOffset ); }
		if (HX_FIELD_EQ(inName,"byteLength") ) { return ::hx::Val( byteLength ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"BYTES_PER_ELEMENT_") ) { return ::hx::Val( BYTES_PER_ELEMENT_ ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ArrayBufferViewBase_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast<  ::haxe::io::Bytes >(); return inValue; }
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteOffset") ) { byteOffset=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"byteLength") ) { byteLength=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"BYTES_PER_ELEMENT_") ) { BYTES_PER_ELEMENT_=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ArrayBufferViewBase_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("buffer",00,bd,94,d0));
	outFields->push(HX_("byteOffset",bb,20,44,38));
	outFields->push(HX_("byteLength",0e,1e,0c,77));
	outFields->push(HX_("BYTES_PER_ELEMENT_",f9,0c,47,cd));
	outFields->push(HX_("length",e6,94,07,9f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ArrayBufferViewBase_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::io::Bytes */ ,(int)offsetof(ArrayBufferViewBase_obj,buffer),HX_("buffer",00,bd,94,d0)},
	{::hx::fsInt,(int)offsetof(ArrayBufferViewBase_obj,byteOffset),HX_("byteOffset",bb,20,44,38)},
	{::hx::fsInt,(int)offsetof(ArrayBufferViewBase_obj,byteLength),HX_("byteLength",0e,1e,0c,77)},
	{::hx::fsInt,(int)offsetof(ArrayBufferViewBase_obj,BYTES_PER_ELEMENT_),HX_("BYTES_PER_ELEMENT_",f9,0c,47,cd)},
	{::hx::fsInt,(int)offsetof(ArrayBufferViewBase_obj,length),HX_("length",e6,94,07,9f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ArrayBufferViewBase_obj_sStaticStorageInfo = 0;
#endif

static ::String ArrayBufferViewBase_obj_sMemberFields[] = {
	HX_("buffer",00,bd,94,d0),
	HX_("byteOffset",bb,20,44,38),
	HX_("byteLength",0e,1e,0c,77),
	HX_("BYTES_PER_ELEMENT_",f9,0c,47,cd),
	HX_("length",e6,94,07,9f),
	::String(null()) };

::hx::Class ArrayBufferViewBase_obj::__mClass;

void ArrayBufferViewBase_obj::__register()
{
	ArrayBufferViewBase_obj _hx_dummy;
	ArrayBufferViewBase_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("typedarray.ArrayBufferViewBase",90,8c,2a,e2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ArrayBufferViewBase_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ArrayBufferViewBase_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ArrayBufferViewBase_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ArrayBufferViewBase_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace typedarray
