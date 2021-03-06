// Generated by Haxe 4.2.0-rc.1+354c24d30
#include <hxcpp.h>

#ifndef INCLUDED_glfw_GLFWJoystickHandler
#include <glfw/GLFWJoystickHandler.h>
#endif

namespace glfw{

void GLFWJoystickHandler_obj::__construct() { }

Dynamic GLFWJoystickHandler_obj::__CreateEmpty() { return new GLFWJoystickHandler_obj; }

void *GLFWJoystickHandler_obj::_hx_vtable = 0;

Dynamic GLFWJoystickHandler_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GLFWJoystickHandler_obj > _hx_result = new GLFWJoystickHandler_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GLFWJoystickHandler_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x11dfda7e;
}

 ::Dynamic GLFWJoystickHandler_obj::listener;

void GLFWJoystickHandler_obj::nativeCallack(int joy,int event){
	if (::hx::IsNotNull( ::glfw::GLFWJoystickHandler_obj::listener )) {
		::glfw::GLFWJoystickHandler_obj::listener(joy,event);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLFWJoystickHandler_obj,nativeCallack,(void))

void GLFWJoystickHandler_obj::setCallback( ::Dynamic func){
	::glfw::GLFWJoystickHandler_obj::listener = func;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLFWJoystickHandler_obj,setCallback,(void))


GLFWJoystickHandler_obj::GLFWJoystickHandler_obj()
{
}

bool GLFWJoystickHandler_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"listener") ) { outValue = ( listener ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setCallback") ) { outValue = setCallback_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"nativeCallack") ) { outValue = nativeCallack_dyn(); return true; }
	}
	return false;
}

bool GLFWJoystickHandler_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"listener") ) { listener=ioValue.Cast<  ::Dynamic >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GLFWJoystickHandler_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo GLFWJoystickHandler_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &GLFWJoystickHandler_obj::listener,HX_("listener",74,00,32,38)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void GLFWJoystickHandler_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLFWJoystickHandler_obj::listener,"listener");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GLFWJoystickHandler_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLFWJoystickHandler_obj::listener,"listener");
};

#endif

::hx::Class GLFWJoystickHandler_obj::__mClass;

static ::String GLFWJoystickHandler_obj_sStaticFields[] = {
	HX_("listener",74,00,32,38),
	HX_("nativeCallack",94,5e,6f,13),
	HX_("setCallback",87,63,67,af),
	::String(null())
};

void GLFWJoystickHandler_obj::__register()
{
	GLFWJoystickHandler_obj _hx_dummy;
	GLFWJoystickHandler_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("glfw.GLFWJoystickHandler",a0,76,fc,3e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLFWJoystickHandler_obj::__GetStatic;
	__mClass->mSetStaticField = &GLFWJoystickHandler_obj::__SetStatic;
	__mClass->mMarkFunc = GLFWJoystickHandler_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GLFWJoystickHandler_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< GLFWJoystickHandler_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GLFWJoystickHandler_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLFWJoystickHandler_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLFWJoystickHandler_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace glfw
