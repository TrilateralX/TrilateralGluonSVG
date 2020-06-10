// Generated by Haxe 4.2.0-rc.1+354c24d30
#include <hxcpp.h>

#ifndef INCLUDED_haxe_MainEvent
#include <haxe/MainEvent.h>
#endif
#ifndef INCLUDED_haxe_MainLoop
#include <haxe/MainLoop.h>
#endif

namespace haxe{

void MainLoop_obj::__construct() { }

Dynamic MainLoop_obj::__CreateEmpty() { return new MainLoop_obj; }

void *MainLoop_obj::_hx_vtable = 0;

Dynamic MainLoop_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MainLoop_obj > _hx_result = new MainLoop_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MainLoop_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0c7b74e7;
}

 ::haxe::MainEvent MainLoop_obj::pending;

bool MainLoop_obj::hasEvents(){
	 ::haxe::MainEvent p = ::haxe::MainLoop_obj::pending;
	while(::hx::IsNotNull( p )){
		if (p->isBlocking) {
			return true;
		}
		p = p->next;
	}
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MainLoop_obj,hasEvents,return )

void MainLoop_obj::sortEvents(){
	 ::haxe::MainEvent list = ::haxe::MainLoop_obj::pending;
	if (::hx::IsNull( list )) {
		return;
	}
	int insize = 1;
	int nmerges;
	int psize = 0;
	int qsize = 0;
	 ::haxe::MainEvent p;
	 ::haxe::MainEvent q;
	 ::haxe::MainEvent e;
	 ::haxe::MainEvent tail;
	while(true){
		p = list;
		list = null();
		tail = null();
		nmerges = 0;
		while(::hx::IsNotNull( p )){
			nmerges = (nmerges + 1);
			q = p;
			psize = 0;
			{
				int _g = 0;
				int _g1 = insize;
				while((_g < _g1)){
					_g = (_g + 1);
					int i = (_g - 1);
					psize = (psize + 1);
					q = q->next;
					if (::hx::IsNull( q )) {
						goto _hx_goto_3;
					}
				}
				_hx_goto_3:;
			}
			qsize = insize;
			while(true){
				bool _hx_tmp;
				if ((psize <= 0)) {
					if ((qsize > 0)) {
						_hx_tmp = ::hx::IsNotNull( q );
					}
					else {
						_hx_tmp = false;
					}
				}
				else {
					_hx_tmp = true;
				}
				if (!(_hx_tmp)) {
					goto _hx_goto_4;
				}
				if ((psize == 0)) {
					e = q;
					q = q->next;
					qsize = (qsize - 1);
				}
				else {
					bool _hx_tmp;
					bool _hx_tmp1;
					if ((qsize != 0)) {
						_hx_tmp1 = ::hx::IsNull( q );
					}
					else {
						_hx_tmp1 = true;
					}
					if (!(_hx_tmp1)) {
						if ((p->priority <= q->priority)) {
							if ((p->priority == q->priority)) {
								_hx_tmp = (p->nextRun <= q->nextRun);
							}
							else {
								_hx_tmp = false;
							}
						}
						else {
							_hx_tmp = true;
						}
					}
					else {
						_hx_tmp = true;
					}
					if (_hx_tmp) {
						e = p;
						p = p->next;
						psize = (psize - 1);
					}
					else {
						e = q;
						q = q->next;
						qsize = (qsize - 1);
					}
				}
				if (::hx::IsNotNull( tail )) {
					tail->next = e;
				}
				else {
					list = e;
				}
				e->prev = tail;
				tail = e;
			}
			_hx_goto_4:;
			p = q;
		}
		tail->next = null();
		if ((nmerges <= 1)) {
			goto _hx_goto_1;
		}
		insize = (insize * 2);
	}
	_hx_goto_1:;
	list->prev = null();
	::haxe::MainLoop_obj::pending = list;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MainLoop_obj,sortEvents,(void))

Float MainLoop_obj::tick(){
	::haxe::MainLoop_obj::sortEvents();
	 ::haxe::MainEvent e = ::haxe::MainLoop_obj::pending;
	Float now =  ::__time_stamp();
	Float wait = ((Float)1e9);
	while(::hx::IsNotNull( e )){
		 ::haxe::MainEvent next = e->next;
		Float wt = (e->nextRun - now);
		if ((wt <= 0)) {
			wait = ( (Float)(0) );
			if (::hx::IsNotNull( e->f )) {
				e->f();
			}
		}
		else {
			if ((wait > wt)) {
				wait = wt;
			}
		}
		e = next;
	}
	return wait;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MainLoop_obj,tick,return )


MainLoop_obj::MainLoop_obj()
{
}

bool MainLoop_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"tick") ) { outValue = tick_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"pending") ) { outValue = ( pending ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hasEvents") ) { outValue = hasEvents_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sortEvents") ) { outValue = sortEvents_dyn(); return true; }
	}
	return false;
}

bool MainLoop_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"pending") ) { pending=ioValue.Cast<  ::haxe::MainEvent >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *MainLoop_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo MainLoop_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::MainEvent */ ,(void *) &MainLoop_obj::pending,HX_("pending",57,98,ec,2b)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void MainLoop_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MainLoop_obj::pending,"pending");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MainLoop_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MainLoop_obj::pending,"pending");
};

#endif

::hx::Class MainLoop_obj::__mClass;

static ::String MainLoop_obj_sStaticFields[] = {
	HX_("pending",57,98,ec,2b),
	HX_("hasEvents",13,02,53,d7),
	HX_("sortEvents",17,c5,4f,f3),
	HX_("tick",5d,c3,fc,4c),
	::String(null())
};

void MainLoop_obj::__register()
{
	MainLoop_obj _hx_dummy;
	MainLoop_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.MainLoop",a5,cc,ab,e6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MainLoop_obj::__GetStatic;
	__mClass->mSetStaticField = &MainLoop_obj::__SetStatic;
	__mClass->mMarkFunc = MainLoop_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MainLoop_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< MainLoop_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MainLoop_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MainLoop_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MainLoop_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
