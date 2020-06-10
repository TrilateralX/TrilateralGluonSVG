// Generated by Haxe 4.2.0-rc.1+354c24d30
#include <hxcpp.h>

#ifndef INCLUDED_trilateral3_structure_StartEnd
#include <trilateral3/structure/StartEnd.h>
#endif

namespace trilateral3{
namespace structure{

void StartEnd_obj::__construct(int start,int end){
	this->start = start;
	this->end = end;
}

Dynamic StartEnd_obj::__CreateEmpty() { return new StartEnd_obj; }

void *StartEnd_obj::_hx_vtable = 0;

Dynamic StartEnd_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StartEnd_obj > _hx_result = new StartEnd_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool StartEnd_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x776f2405;
}


StartEnd_obj::StartEnd_obj()
{
}

::hx::Val StartEnd_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return ::hx::Val( end ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return ::hx::Val( start ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val StartEnd_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { end=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { start=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StartEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("start",62,74,0b,84));
	outFields->push(HX_("end",db,03,4d,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo StartEnd_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(StartEnd_obj,start),HX_("start",62,74,0b,84)},
	{::hx::fsInt,(int)offsetof(StartEnd_obj,end),HX_("end",db,03,4d,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *StartEnd_obj_sStaticStorageInfo = 0;
#endif

static ::String StartEnd_obj_sMemberFields[] = {
	HX_("start",62,74,0b,84),
	HX_("end",db,03,4d,00),
	::String(null()) };

::hx::Class StartEnd_obj::__mClass;

void StartEnd_obj::__register()
{
	StartEnd_obj _hx_dummy;
	StartEnd_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("trilateral3.structure.StartEnd",5b,4e,a3,e1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StartEnd_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< StartEnd_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StartEnd_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StartEnd_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace trilateral3
} // end namespace structure
