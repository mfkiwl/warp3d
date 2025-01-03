// 
// File:          bHYPRE_CGNR.cxx
// Symbol:        bHYPRE.CGNR-v1.0.0
// Symbol Type:   class
// Babel Version: 1.0.4
// Description:   Client-side glue code for bHYPRE.CGNR
// 
// WARNING: Automatically generated; changes will be lost
// 
// 

#ifndef included_bHYPRE_CGNR_hxx
#include "bHYPRE_CGNR.hxx"
#endif
#ifndef included_sidl_BaseInterface_hxx
#include "sidl_BaseInterface.hxx"
#endif
#ifndef included_sidl_BaseClass_hxx
#include "sidl_BaseClass.hxx"
#endif
#ifndef included_sidl_BaseException_hxx
#include "sidl_BaseException.hxx"
#endif
#ifndef included_sidl_LangSpecificException_hxx
#include "sidl_LangSpecificException.hxx"
#endif
#ifndef included_sidl_RuntimeException_hxx
#include "sidl_RuntimeException.hxx"
#endif
#ifndef included_sidl_rmi_Call_hxx
#include "sidl_rmi_Call.hxx"
#endif
#ifndef included_sidl_rmi_Return_hxx
#include "sidl_rmi_Return.hxx"
#endif
#ifndef included_sidl_rmi_Ticket_hxx
#include "sidl_rmi_Ticket.hxx"
#endif
#ifndef included_sidl_rmi_InstanceHandle_hxx
#include "sidl_rmi_InstanceHandle.hxx"
#endif
#include "sidl_String.h"
#include "sidl_rmi_ConnectRegistry.h"
#include "babel_config.h"
#ifdef SIDL_DYNAMIC_LIBRARY
#include <stdio.h>
#include <stdlib.h>
#include "sidl_Loader.hxx"
#include "sidl_DLL.hxx"
#endif
// 
// Includes for all method dependencies.
// 
#ifndef included_bHYPRE_CGNR_hxx
#include "bHYPRE_CGNR.hxx"
#endif
#ifndef included_bHYPRE_MPICommunicator_hxx
#include "bHYPRE_MPICommunicator.hxx"
#endif
#ifndef included_bHYPRE_Operator_hxx
#include "bHYPRE_Operator.hxx"
#endif
#ifndef included_bHYPRE_PreconditionedSolver_hxx
#include "bHYPRE_PreconditionedSolver.hxx"
#endif
#ifndef included_bHYPRE_Solver_hxx
#include "bHYPRE_Solver.hxx"
#endif
#ifndef included_bHYPRE_Vector_hxx
#include "bHYPRE_Vector.hxx"
#endif
#ifndef included_sidl_BaseInterface_hxx
#include "sidl_BaseInterface.hxx"
#endif
#ifndef included_sidl_ClassInfo_hxx
#include "sidl_ClassInfo.hxx"
#endif

#define LANG_SPECIFIC_INIT()
// 
// connect_loaded is a boolean value showing if the IHConnect for this object has been loaded into the connectRegistry
// 
static int connect_loaded = 0;
extern "C" {
#include <stdlib.h>
#include <string.h>
#ifndef included_sidl_BaseClass_h
#include "sidl_BaseClass.h"
#endif
#ifndef included_sidl_ClassInfo_h
#include "sidl_ClassInfo.h"
#endif
#ifndef included_sidl_rmi_ProtocolFactory_h
#include "sidl_rmi_ProtocolFactory.h"
#endif
#ifndef included_sidl_rmi_InstanceRegistry_h
#include "sidl_rmi_InstanceRegistry.h"
#endif
#ifndef included_sidl_rmi_InstanceHandle_h
#include "sidl_rmi_InstanceHandle.h"
#endif
#ifndef included_sidl_rmi_Invocation_h
#include "sidl_rmi_Invocation.h"
#endif
#ifndef included_sidl_rmi_Response_h
#include "sidl_rmi_Response.h"
#endif
#ifndef included_sidl_rmi_ServerRegistry_h
#include "sidl_rmi_ServerRegistry.h"
#endif
#ifndef included_sidl_rmi_ConnectRegistry_h
#include "sidl_rmi_ConnectRegistry.h"
#endif
#ifndef included_sidl_io_Serializable_h
#include "sidl_io_Serializable.h"
#endif
#include "sidl_Exception.h"

#ifndef NULL
#define NULL 0
#endif

#include "sidl_thread.h"
#ifdef HAVE_PTHREAD
static struct sidl_recursive_mutex_t bHYPRE_CGNR__mutex= SIDL_RECURSIVE_MUTEX_INITIALIZER;
#define LOCK_STATIC_GLOBALS sidl_recursive_mutex_lock( &bHYPRE_CGNR__mutex )
#define UNLOCK_STATIC_GLOBALS sidl_recursive_mutex_unlock( &bHYPRE_CGNR__mutex )
/* #define HAVE_LOCKED_STATIC_GLOBALS (sidl_recursive_mutex_trylock( &bHYPRE_CGNR__mutex )==EDEADLOCK) */
#else
#define LOCK_STATIC_GLOBALS
#define UNLOCK_STATIC_GLOBALS
/* #define HAVE_LOCKED_STATIC_GLOBALS (1) */
#endif

  // Static variables to hold version of IOR
  static const int32_t s_IOR_MAJOR_VERSION = 1;
  static const int32_t s_IOR_MINOR_VERSION = 0;

  // Static variables for managing EPV initialization.
  static int s_remote_initialized = 0;

  static struct bHYPRE_CGNR__epv s_rem_epv__bhypre_cgnr;

  static struct bHYPRE_Operator__epv s_rem_epv__bhypre_operator;

  static struct bHYPRE_PreconditionedSolver__epv 
    s_rem_epv__bhypre_preconditionedsolver;

  static struct bHYPRE_Solver__epv s_rem_epv__bhypre_solver;

  static struct sidl_BaseClass__epv  s_rem_epv__sidl_baseclass;

  static struct sidl_BaseInterface__epv  s_rem_epv__sidl_baseinterface;


  // REMOTE CAST: dynamic type casting for remote objects.
  static void* remote_bHYPRE_CGNR__cast(
    struct bHYPRE_CGNR__object* self,
    const char* name, sidl_BaseInterface* _ex)
  {
    int
      cmp0,
      cmp1,
      cmp2;
    void* cast = NULL;
    *_ex = NULL; /* default to no exception */
    cmp0 = strcmp(name, "bHYPRE.Solver");
    if (!cmp0) {
      (*self->d_epv->f_addRef)(self, _ex); SIDL_CHECK(*_ex);
      cast = &((*self).d_bhypre_solver);
      return cast;
    }
    else if (cmp0 < 0) {
      cmp1 = strcmp(name, "bHYPRE.Operator");
      if (!cmp1) {
        (*self->d_epv->f_addRef)(self, _ex); SIDL_CHECK(*_ex);
        cast = &((*self).d_bhypre_operator);
        return cast;
      }
      else if (cmp1 < 0) {
        cmp2 = strcmp(name, "bHYPRE.CGNR");
        if (!cmp2) {
          (*self->d_epv->f_addRef)(self, _ex); SIDL_CHECK(*_ex);
          cast = ((struct bHYPRE_CGNR__object*)self);
          return cast;
        }
      }
      else if (cmp1 > 0) {
        cmp2 = strcmp(name, "bHYPRE.PreconditionedSolver");
        if (!cmp2) {
          (*self->d_epv->f_addRef)(self, _ex); SIDL_CHECK(*_ex);
          cast = &((*self).d_bhypre_preconditionedsolver);
          return cast;
        }
      }
    }
    else if (cmp0 > 0) {
      cmp1 = strcmp(name, "sidl.BaseInterface");
      if (!cmp1) {
        (*self->d_epv->f_addRef)(self, _ex); SIDL_CHECK(*_ex);
        cast = &((*self).d_sidl_baseclass.d_sidl_baseinterface);
        return cast;
      }
      else if (cmp1 < 0) {
        cmp2 = strcmp(name, "sidl.BaseClass");
        if (!cmp2) {
          (*self->d_epv->f_addRef)(self, _ex); SIDL_CHECK(*_ex);
          cast = ((struct sidl_BaseClass__object*)self);
          return cast;
        }
      }
    }
    if ((*self->d_epv->f_isType)(self,name, _ex)) {
      void* (*func)(struct sidl_rmi_InstanceHandle__object*, struct 
        sidl_BaseInterface__object**) = 
        (void* (*)(struct sidl_rmi_InstanceHandle__object*, struct 
          sidl_BaseInterface__object**)) 
        sidl_rmi_ConnectRegistry_getConnect(name, _ex);SIDL_CHECK(*_ex);
      cast =  (*func)(((struct bHYPRE_CGNR__remote*)self->d_data)->d_ih, _ex);
    }

    return cast;
    EXIT:
    return NULL;
  }

  // REMOTE DELETE: call the remote destructor for the object.
  static void remote_bHYPRE_CGNR__delete(
    struct bHYPRE_CGNR__object* self,
    sidl_BaseInterface* _ex)
  {
    *_ex = NULL;
    free((void*) self);
  }

  // REMOTE GETURL: call the getURL function for the object.
  static char* remote_bHYPRE_CGNR__getURL(
    struct bHYPRE_CGNR__object* self, sidl_BaseInterface* _ex)
  {
    struct sidl_rmi_InstanceHandle__object *conn = ((struct 
      bHYPRE_CGNR__remote*)self->d_data)->d_ih;
    *_ex = NULL;
    if(conn != NULL) {
      return sidl_rmi_InstanceHandle_getObjectURL(conn, _ex);
    }
    return NULL;
  }

  // REMOTE ADDREF: For internal babel use only! Remote addRef.
  static void remote_bHYPRE_CGNR__raddRef(
    struct bHYPRE_CGNR__object* self,sidl_BaseInterface* _ex)
  {
    sidl_BaseException netex = NULL;
    // initialize a new invocation
    sidl_BaseInterface _throwaway = NULL;
    struct sidl_rmi_InstanceHandle__object *_conn = ((struct 
      bHYPRE_CGNR__remote*)self->d_data)->d_ih;
    sidl_rmi_Response _rsvp = NULL;
    sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( _conn, 
      "addRef", _ex ); SIDL_CHECK(*_ex);
    // send actual RMI request
    _rsvp = sidl_rmi_Invocation_invokeMethod(_inv,_ex);SIDL_CHECK(*_ex);
    // Check for exceptions
    netex = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);
    if(netex != NULL) {
      sidl_BaseInterface throwaway_exception = NULL;
      *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(netex,
        &throwaway_exception);
      return;
    }

    // cleanup and return
    EXIT:
    if(_inv) { sidl_rmi_Invocation_deleteRef(_inv,&_throwaway); }
    if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp,&_throwaway); }
    return;
  }

  // REMOTE ISREMOTE: returns true if this object is Remote (it is).
  static sidl_bool
  remote_bHYPRE_CGNR__isRemote(
      struct bHYPRE_CGNR__object* self, 
      sidl_BaseInterface *_ex) {
    *_ex = NULL;
    return TRUE;
  }

  // REMOTE METHOD STUB:_set_hooks
  static void
  remote_bHYPRE_CGNR__set_hooks(
    /* in */ struct bHYPRE_CGNR__object* self ,
    /* in */ sidl_bool on,
    /* out */ struct sidl_BaseInterface__object* *_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      sidl_BaseInterface _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        bHYPRE_CGNR__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "_set_hooks", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments
      sidl_rmi_Invocation_packBool( _inv, "on", on, _ex);SIDL_CHECK(*_ex);

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if(_be != NULL) {
        sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE.CGNR._set_hooks.", &throwaway_exception);
        *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
          &throwaway_exception);
        goto EXIT;
      }

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return;
    }
  }

  // REMOTE EXEC: call the exec function for the object.
  static void remote_bHYPRE_CGNR__exec(
    struct bHYPRE_CGNR__object* self,const char* methodName,
    sidl_rmi_Call inArgs,
    sidl_rmi_Return outArgs,
    sidl_BaseInterface* _ex)
  {
    *_ex = NULL;
  }

  // REMOTE METHOD STUB:addRef
  static void
  remote_bHYPRE_CGNR_addRef(
    /* in */ struct bHYPRE_CGNR__object* self ,
    /* out */ struct sidl_BaseInterface__object* *_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      struct bHYPRE_CGNR__remote* r_obj = (struct 
        bHYPRE_CGNR__remote*)self->d_data;
      LOCK_STATIC_GLOBALS;
      r_obj->d_refcount++;
      UNLOCK_STATIC_GLOBALS;
    }
  }

  // REMOTE METHOD STUB:deleteRef
  static void
  remote_bHYPRE_CGNR_deleteRef(
    /* in */ struct bHYPRE_CGNR__object* self ,
    /* out */ struct sidl_BaseInterface__object* *_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      struct bHYPRE_CGNR__remote* r_obj = (struct 
        bHYPRE_CGNR__remote*)self->d_data;
      LOCK_STATIC_GLOBALS;
      r_obj->d_refcount--;
      if(r_obj->d_refcount == 0) {
        sidl_rmi_InstanceHandle_deleteRef(r_obj->d_ih, _ex);
        free(r_obj);
        free(self);
      }
      UNLOCK_STATIC_GLOBALS;
    }
  }

  // REMOTE METHOD STUB:isSame
  static sidl_bool
  remote_bHYPRE_CGNR_isSame(
    /* in */ struct bHYPRE_CGNR__object* self ,
    /* in */ struct sidl_BaseInterface__object* iobj,
    /* out */ struct sidl_BaseInterface__object* *_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      sidl_BaseInterface _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      sidl_bool _retval = FALSE;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        bHYPRE_CGNR__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "isSame", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments
      if(iobj){
        char* _url = sidl_BaseInterface__getURL((sidl_BaseInterface)iobj, 
          _ex);SIDL_CHECK(*_ex);
        sidl_rmi_Invocation_packString( _inv, "iobj", _url, _ex);SIDL_CHECK(
          *_ex);
        free((void*)_url);
      } else {
        sidl_rmi_Invocation_packString( _inv, "iobj", NULL, _ex);SIDL_CHECK(
          *_ex);
      }

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if(_be != NULL) {
        sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE.CGNR.isSame.", &throwaway_exception);
        *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
          &throwaway_exception);
        goto EXIT;
      }

      // extract return value
      sidl_rmi_Response_unpackBool( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
        *_ex);

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return _retval;
    }
  }

  // REMOTE METHOD STUB:isType
  static sidl_bool
  remote_bHYPRE_CGNR_isType(
    /* in */ struct bHYPRE_CGNR__object* self ,
    /* in */ const char* name,
    /* out */ struct sidl_BaseInterface__object* *_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      sidl_BaseInterface _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      sidl_bool _retval = FALSE;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        bHYPRE_CGNR__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "isType", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments
      sidl_rmi_Invocation_packString( _inv, "name", name, _ex);SIDL_CHECK(*_ex);

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if(_be != NULL) {
        sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE.CGNR.isType.", &throwaway_exception);
        *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
          &throwaway_exception);
        goto EXIT;
      }

      // extract return value
      sidl_rmi_Response_unpackBool( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
        *_ex);

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return _retval;
    }
  }

  // REMOTE METHOD STUB:getClassInfo
  static struct sidl_ClassInfo__object*
  remote_bHYPRE_CGNR_getClassInfo(
    /* in */ struct bHYPRE_CGNR__object* self ,
    /* out */ struct sidl_BaseInterface__object* *_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      sidl_BaseInterface _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      char*_retval_str = NULL;
      struct sidl_ClassInfo__object* _retval = 0;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        bHYPRE_CGNR__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "getClassInfo", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if(_be != NULL) {
        sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE.CGNR.getClassInfo.", &throwaway_exception);
        *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
          &throwaway_exception);
        goto EXIT;
      }

      // extract return value
      sidl_rmi_Response_unpackString( _rsvp, "_retval", &_retval_str, 
        _ex);SIDL_CHECK(*_ex);
      _retval = sidl_ClassInfo__connectI(_retval_str, FALSE, _ex);SIDL_CHECK(
        *_ex);

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return _retval;
    }
  }

  // REMOTE METHOD STUB:SetPreconditioner
  static int32_t
  remote_bHYPRE_CGNR_SetPreconditioner(
    /* in */ struct bHYPRE_CGNR__object* self ,
    /* in */ struct bHYPRE_Solver__object* s,
    /* out */ struct sidl_BaseInterface__object* *_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      sidl_BaseInterface _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      int32_t _retval = 0;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        bHYPRE_CGNR__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "SetPreconditioner", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments
      if(s){
        char* _url = sidl_BaseInterface__getURL((sidl_BaseInterface)s, 
          _ex);SIDL_CHECK(*_ex);
        sidl_rmi_Invocation_packString( _inv, "s", _url, _ex);SIDL_CHECK(*_ex);
        free((void*)_url);
      } else {
        sidl_rmi_Invocation_packString( _inv, "s", NULL, _ex);SIDL_CHECK(*_ex);
      }

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if(_be != NULL) {
        sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE.CGNR.SetPreconditioner.", &throwaway_exception);
        *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
          &throwaway_exception);
        goto EXIT;
      }

      // extract return value
      sidl_rmi_Response_unpackInt( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
        *_ex);

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return _retval;
    }
  }

  // REMOTE METHOD STUB:GetPreconditioner
  static int32_t
  remote_bHYPRE_CGNR_GetPreconditioner(
    /* in */ struct bHYPRE_CGNR__object* self ,
    /* out */ struct bHYPRE_Solver__object** s,
    /* out */ struct sidl_BaseInterface__object* *_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      sidl_BaseInterface _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      char* s_str= NULL;
      int32_t _retval = 0;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        bHYPRE_CGNR__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "GetPreconditioner", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if(_be != NULL) {
        sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE.CGNR.GetPreconditioner.", &throwaway_exception);
        *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
          &throwaway_exception);
        goto EXIT;
      }

      // extract return value
      sidl_rmi_Response_unpackInt( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
        *_ex);

      // unpack out and inout arguments
      sidl_rmi_Response_unpackString( _rsvp, "s", &s_str, _ex);SIDL_CHECK(*_ex);
      *s = bHYPRE_Solver__connectI(s_str, FALSE, _ex);SIDL_CHECK(*_ex);

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return _retval;
    }
  }

  // REMOTE METHOD STUB:Clone
  static int32_t
  remote_bHYPRE_CGNR_Clone(
    /* in */ struct bHYPRE_CGNR__object* self ,
    /* out */ struct bHYPRE_PreconditionedSolver__object** x,
    /* out */ struct sidl_BaseInterface__object* *_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      sidl_BaseInterface _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      char* x_str= NULL;
      int32_t _retval = 0;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        bHYPRE_CGNR__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "Clone", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if(_be != NULL) {
        sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE.CGNR.Clone.", &throwaway_exception);
        *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
          &throwaway_exception);
        goto EXIT;
      }

      // extract return value
      sidl_rmi_Response_unpackInt( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
        *_ex);

      // unpack out and inout arguments
      sidl_rmi_Response_unpackString( _rsvp, "x", &x_str, _ex);SIDL_CHECK(*_ex);
      *x = bHYPRE_PreconditionedSolver__connectI(x_str, FALSE, _ex);SIDL_CHECK(
        *_ex);

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return _retval;
    }
  }

  // REMOTE METHOD STUB:SetOperator
  static int32_t
  remote_bHYPRE_CGNR_SetOperator(
    /* in */ struct bHYPRE_CGNR__object* self ,
    /* in */ struct bHYPRE_Operator__object* A,
    /* out */ struct sidl_BaseInterface__object* *_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      sidl_BaseInterface _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      int32_t _retval = 0;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        bHYPRE_CGNR__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "SetOperator", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments
      if(A){
        char* _url = sidl_BaseInterface__getURL((sidl_BaseInterface)A, 
          _ex);SIDL_CHECK(*_ex);
        sidl_rmi_Invocation_packString( _inv, "A", _url, _ex);SIDL_CHECK(*_ex);
        free((void*)_url);
      } else {
        sidl_rmi_Invocation_packString( _inv, "A", NULL, _ex);SIDL_CHECK(*_ex);
      }

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if(_be != NULL) {
        sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE.CGNR.SetOperator.", &throwaway_exception);
        *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
          &throwaway_exception);
        goto EXIT;
      }

      // extract return value
      sidl_rmi_Response_unpackInt( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
        *_ex);

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return _retval;
    }
  }

  // REMOTE METHOD STUB:SetTolerance
  static int32_t
  remote_bHYPRE_CGNR_SetTolerance(
    /* in */ struct bHYPRE_CGNR__object* self ,
    /* in */ double tolerance,
    /* out */ struct sidl_BaseInterface__object* *_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      sidl_BaseInterface _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      int32_t _retval = 0;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        bHYPRE_CGNR__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "SetTolerance", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments
      sidl_rmi_Invocation_packDouble( _inv, "tolerance", tolerance, 
        _ex);SIDL_CHECK(*_ex);

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if(_be != NULL) {
        sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE.CGNR.SetTolerance.", &throwaway_exception);
        *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
          &throwaway_exception);
        goto EXIT;
      }

      // extract return value
      sidl_rmi_Response_unpackInt( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
        *_ex);

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return _retval;
    }
  }

  // REMOTE METHOD STUB:SetMaxIterations
  static int32_t
  remote_bHYPRE_CGNR_SetMaxIterations(
    /* in */ struct bHYPRE_CGNR__object* self ,
    /* in */ int32_t max_iterations,
    /* out */ struct sidl_BaseInterface__object* *_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      sidl_BaseInterface _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      int32_t _retval = 0;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        bHYPRE_CGNR__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "SetMaxIterations", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments
      sidl_rmi_Invocation_packInt( _inv, "max_iterations", max_iterations, 
        _ex);SIDL_CHECK(*_ex);

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if(_be != NULL) {
        sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE.CGNR.SetMaxIterations.", &throwaway_exception);
        *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
          &throwaway_exception);
        goto EXIT;
      }

      // extract return value
      sidl_rmi_Response_unpackInt( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
        *_ex);

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return _retval;
    }
  }

  // REMOTE METHOD STUB:SetLogging
  static int32_t
  remote_bHYPRE_CGNR_SetLogging(
    /* in */ struct bHYPRE_CGNR__object* self ,
    /* in */ int32_t level,
    /* out */ struct sidl_BaseInterface__object* *_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      sidl_BaseInterface _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      int32_t _retval = 0;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        bHYPRE_CGNR__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "SetLogging", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments
      sidl_rmi_Invocation_packInt( _inv, "level", level, _ex);SIDL_CHECK(*_ex);

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if(_be != NULL) {
        sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE.CGNR.SetLogging.", &throwaway_exception);
        *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
          &throwaway_exception);
        goto EXIT;
      }

      // extract return value
      sidl_rmi_Response_unpackInt( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
        *_ex);

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return _retval;
    }
  }

  // REMOTE METHOD STUB:SetPrintLevel
  static int32_t
  remote_bHYPRE_CGNR_SetPrintLevel(
    /* in */ struct bHYPRE_CGNR__object* self ,
    /* in */ int32_t level,
    /* out */ struct sidl_BaseInterface__object* *_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      sidl_BaseInterface _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      int32_t _retval = 0;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        bHYPRE_CGNR__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "SetPrintLevel", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments
      sidl_rmi_Invocation_packInt( _inv, "level", level, _ex);SIDL_CHECK(*_ex);

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if(_be != NULL) {
        sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE.CGNR.SetPrintLevel.", &throwaway_exception);
        *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
          &throwaway_exception);
        goto EXIT;
      }

      // extract return value
      sidl_rmi_Response_unpackInt( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
        *_ex);

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return _retval;
    }
  }

  // REMOTE METHOD STUB:GetNumIterations
  static int32_t
  remote_bHYPRE_CGNR_GetNumIterations(
    /* in */ struct bHYPRE_CGNR__object* self ,
    /* out */ int32_t* num_iterations,
    /* out */ struct sidl_BaseInterface__object* *_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      sidl_BaseInterface _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      int32_t _retval = 0;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        bHYPRE_CGNR__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "GetNumIterations", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if(_be != NULL) {
        sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE.CGNR.GetNumIterations.", &throwaway_exception);
        *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
          &throwaway_exception);
        goto EXIT;
      }

      // extract return value
      sidl_rmi_Response_unpackInt( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
        *_ex);

      // unpack out and inout arguments
      sidl_rmi_Response_unpackInt( _rsvp, "num_iterations", num_iterations, 
        _ex);SIDL_CHECK(*_ex);

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return _retval;
    }
  }

  // REMOTE METHOD STUB:GetRelResidualNorm
  static int32_t
  remote_bHYPRE_CGNR_GetRelResidualNorm(
    /* in */ struct bHYPRE_CGNR__object* self ,
    /* out */ double* norm,
    /* out */ struct sidl_BaseInterface__object* *_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      sidl_BaseInterface _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      int32_t _retval = 0;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        bHYPRE_CGNR__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "GetRelResidualNorm", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if(_be != NULL) {
        sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE.CGNR.GetRelResidualNorm.", &throwaway_exception);
        *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
          &throwaway_exception);
        goto EXIT;
      }

      // extract return value
      sidl_rmi_Response_unpackInt( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
        *_ex);

      // unpack out and inout arguments
      sidl_rmi_Response_unpackDouble( _rsvp, "norm", norm, _ex);SIDL_CHECK(
        *_ex);

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return _retval;
    }
  }

  // REMOTE METHOD STUB:SetCommunicator
  static int32_t
  remote_bHYPRE_CGNR_SetCommunicator(
    /* in */ struct bHYPRE_CGNR__object* self ,
    /* in */ struct bHYPRE_MPICommunicator__object* mpi_comm,
    /* out */ struct sidl_BaseInterface__object* *_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      sidl_BaseInterface _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      int32_t _retval = 0;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        bHYPRE_CGNR__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "SetCommunicator", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments
      if(mpi_comm){
        char* _url = sidl_BaseInterface__getURL((sidl_BaseInterface)mpi_comm, 
          _ex);SIDL_CHECK(*_ex);
        sidl_rmi_Invocation_packString( _inv, "mpi_comm", _url, _ex);SIDL_CHECK(
          *_ex);
        free((void*)_url);
      } else {
        sidl_rmi_Invocation_packString( _inv, "mpi_comm", NULL, _ex);SIDL_CHECK(
          *_ex);
      }

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if(_be != NULL) {
        sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE.CGNR.SetCommunicator.", &throwaway_exception);
        *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
          &throwaway_exception);
        goto EXIT;
      }

      // extract return value
      sidl_rmi_Response_unpackInt( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
        *_ex);

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return _retval;
    }
  }

  // REMOTE METHOD STUB:Destroy
  static void
  remote_bHYPRE_CGNR_Destroy(
    /* in */ struct bHYPRE_CGNR__object* self ,
    /* out */ struct sidl_BaseInterface__object* *_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      sidl_BaseInterface _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        bHYPRE_CGNR__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "Destroy", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if(_be != NULL) {
        sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE.CGNR.Destroy.", &throwaway_exception);
        *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
          &throwaway_exception);
        goto EXIT;
      }

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return;
    }
  }

  // REMOTE METHOD STUB:SetIntParameter
  static int32_t
  remote_bHYPRE_CGNR_SetIntParameter(
    /* in */ struct bHYPRE_CGNR__object* self ,
    /* in */ const char* name,
    /* in */ int32_t value,
    /* out */ struct sidl_BaseInterface__object* *_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      sidl_BaseInterface _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      int32_t _retval = 0;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        bHYPRE_CGNR__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "SetIntParameter", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments
      sidl_rmi_Invocation_packString( _inv, "name", name, _ex);SIDL_CHECK(*_ex);
      sidl_rmi_Invocation_packInt( _inv, "value", value, _ex);SIDL_CHECK(*_ex);

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if(_be != NULL) {
        sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE.CGNR.SetIntParameter.", &throwaway_exception);
        *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
          &throwaway_exception);
        goto EXIT;
      }

      // extract return value
      sidl_rmi_Response_unpackInt( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
        *_ex);

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return _retval;
    }
  }

  // REMOTE METHOD STUB:SetDoubleParameter
  static int32_t
  remote_bHYPRE_CGNR_SetDoubleParameter(
    /* in */ struct bHYPRE_CGNR__object* self ,
    /* in */ const char* name,
    /* in */ double value,
    /* out */ struct sidl_BaseInterface__object* *_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      sidl_BaseInterface _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      int32_t _retval = 0;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        bHYPRE_CGNR__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "SetDoubleParameter", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments
      sidl_rmi_Invocation_packString( _inv, "name", name, _ex);SIDL_CHECK(*_ex);
      sidl_rmi_Invocation_packDouble( _inv, "value", value, _ex);SIDL_CHECK(
        *_ex);

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if(_be != NULL) {
        sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE.CGNR.SetDoubleParameter.", &throwaway_exception);
        *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
          &throwaway_exception);
        goto EXIT;
      }

      // extract return value
      sidl_rmi_Response_unpackInt( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
        *_ex);

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return _retval;
    }
  }

  // REMOTE METHOD STUB:SetStringParameter
  static int32_t
  remote_bHYPRE_CGNR_SetStringParameter(
    /* in */ struct bHYPRE_CGNR__object* self ,
    /* in */ const char* name,
    /* in */ const char* value,
    /* out */ struct sidl_BaseInterface__object* *_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      sidl_BaseInterface _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      int32_t _retval = 0;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        bHYPRE_CGNR__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "SetStringParameter", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments
      sidl_rmi_Invocation_packString( _inv, "name", name, _ex);SIDL_CHECK(*_ex);
      sidl_rmi_Invocation_packString( _inv, "value", value, _ex);SIDL_CHECK(
        *_ex);

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if(_be != NULL) {
        sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE.CGNR.SetStringParameter.", &throwaway_exception);
        *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
          &throwaway_exception);
        goto EXIT;
      }

      // extract return value
      sidl_rmi_Response_unpackInt( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
        *_ex);

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return _retval;
    }
  }

  // REMOTE METHOD STUB:SetIntArray1Parameter
  static int32_t
  remote_bHYPRE_CGNR_SetIntArray1Parameter(
    /* in */ struct bHYPRE_CGNR__object* self ,
    /* in */ const char* name,
    /* in rarray[nvalues] */ struct sidl_int__array* value,
    /* out */ struct sidl_BaseInterface__object* *_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      sidl_BaseInterface _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      int32_t _retval = 0;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        bHYPRE_CGNR__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "SetIntArray1Parameter", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments
      sidl_rmi_Invocation_packString( _inv, "name", name, _ex);SIDL_CHECK(*_ex);
      sidl_rmi_Invocation_packIntArray( _inv, "value", value,
        sidl_column_major_order,1,0, _ex);SIDL_CHECK(*_ex);

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if(_be != NULL) {
        sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE.CGNR.SetIntArray1Parameter.", &throwaway_exception);
        *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
          &throwaway_exception);
        goto EXIT;
      }

      // extract return value
      sidl_rmi_Response_unpackInt( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
        *_ex);

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return _retval;
    }
  }

  // REMOTE METHOD STUB:SetIntArray2Parameter
  static int32_t
  remote_bHYPRE_CGNR_SetIntArray2Parameter(
    /* in */ struct bHYPRE_CGNR__object* self ,
    /* in */ const char* name,
    /* in array<int,2,column-major> */ struct sidl_int__array* value,
    /* out */ struct sidl_BaseInterface__object* *_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      sidl_BaseInterface _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      int32_t _retval = 0;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        bHYPRE_CGNR__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "SetIntArray2Parameter", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments
      sidl_rmi_Invocation_packString( _inv, "name", name, _ex);SIDL_CHECK(*_ex);
      sidl_rmi_Invocation_packIntArray( _inv, "value", value,
        sidl_column_major_order,2,0, _ex);SIDL_CHECK(*_ex);

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if(_be != NULL) {
        sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE.CGNR.SetIntArray2Parameter.", &throwaway_exception);
        *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
          &throwaway_exception);
        goto EXIT;
      }

      // extract return value
      sidl_rmi_Response_unpackInt( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
        *_ex);

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return _retval;
    }
  }

  // REMOTE METHOD STUB:SetDoubleArray1Parameter
  static int32_t
  remote_bHYPRE_CGNR_SetDoubleArray1Parameter(
    /* in */ struct bHYPRE_CGNR__object* self ,
    /* in */ const char* name,
    /* in rarray[nvalues] */ struct sidl_double__array* value,
    /* out */ struct sidl_BaseInterface__object* *_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      sidl_BaseInterface _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      int32_t _retval = 0;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        bHYPRE_CGNR__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "SetDoubleArray1Parameter", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments
      sidl_rmi_Invocation_packString( _inv, "name", name, _ex);SIDL_CHECK(*_ex);
      sidl_rmi_Invocation_packDoubleArray( _inv, "value", value,
        sidl_column_major_order,1,0, _ex);SIDL_CHECK(*_ex);

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if(_be != NULL) {
        sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE.CGNR.SetDoubleArray1Parameter.", &throwaway_exception);
        *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
          &throwaway_exception);
        goto EXIT;
      }

      // extract return value
      sidl_rmi_Response_unpackInt( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
        *_ex);

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return _retval;
    }
  }

  // REMOTE METHOD STUB:SetDoubleArray2Parameter
  static int32_t
  remote_bHYPRE_CGNR_SetDoubleArray2Parameter(
    /* in */ struct bHYPRE_CGNR__object* self ,
    /* in */ const char* name,
    /* in array<double,2,column-major> */ struct sidl_double__array* value,
    /* out */ struct sidl_BaseInterface__object* *_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      sidl_BaseInterface _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      int32_t _retval = 0;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        bHYPRE_CGNR__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "SetDoubleArray2Parameter", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments
      sidl_rmi_Invocation_packString( _inv, "name", name, _ex);SIDL_CHECK(*_ex);
      sidl_rmi_Invocation_packDoubleArray( _inv, "value", value,
        sidl_column_major_order,2,0, _ex);SIDL_CHECK(*_ex);

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if(_be != NULL) {
        sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE.CGNR.SetDoubleArray2Parameter.", &throwaway_exception);
        *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
          &throwaway_exception);
        goto EXIT;
      }

      // extract return value
      sidl_rmi_Response_unpackInt( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
        *_ex);

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return _retval;
    }
  }

  // REMOTE METHOD STUB:GetIntValue
  static int32_t
  remote_bHYPRE_CGNR_GetIntValue(
    /* in */ struct bHYPRE_CGNR__object* self ,
    /* in */ const char* name,
    /* out */ int32_t* value,
    /* out */ struct sidl_BaseInterface__object* *_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      sidl_BaseInterface _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      int32_t _retval = 0;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        bHYPRE_CGNR__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "GetIntValue", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments
      sidl_rmi_Invocation_packString( _inv, "name", name, _ex);SIDL_CHECK(*_ex);

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if(_be != NULL) {
        sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE.CGNR.GetIntValue.", &throwaway_exception);
        *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
          &throwaway_exception);
        goto EXIT;
      }

      // extract return value
      sidl_rmi_Response_unpackInt( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
        *_ex);

      // unpack out and inout arguments
      sidl_rmi_Response_unpackInt( _rsvp, "value", value, _ex);SIDL_CHECK(*_ex);

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return _retval;
    }
  }

  // REMOTE METHOD STUB:GetDoubleValue
  static int32_t
  remote_bHYPRE_CGNR_GetDoubleValue(
    /* in */ struct bHYPRE_CGNR__object* self ,
    /* in */ const char* name,
    /* out */ double* value,
    /* out */ struct sidl_BaseInterface__object* *_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      sidl_BaseInterface _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      int32_t _retval = 0;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        bHYPRE_CGNR__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "GetDoubleValue", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments
      sidl_rmi_Invocation_packString( _inv, "name", name, _ex);SIDL_CHECK(*_ex);

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if(_be != NULL) {
        sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE.CGNR.GetDoubleValue.", &throwaway_exception);
        *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
          &throwaway_exception);
        goto EXIT;
      }

      // extract return value
      sidl_rmi_Response_unpackInt( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
        *_ex);

      // unpack out and inout arguments
      sidl_rmi_Response_unpackDouble( _rsvp, "value", value, _ex);SIDL_CHECK(
        *_ex);

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return _retval;
    }
  }

  // REMOTE METHOD STUB:Setup
  static int32_t
  remote_bHYPRE_CGNR_Setup(
    /* in */ struct bHYPRE_CGNR__object* self ,
    /* in */ struct bHYPRE_Vector__object* b,
    /* in */ struct bHYPRE_Vector__object* x,
    /* out */ struct sidl_BaseInterface__object* *_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      sidl_BaseInterface _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      int32_t _retval = 0;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        bHYPRE_CGNR__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "Setup", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments
      if(b){
        char* _url = sidl_BaseInterface__getURL((sidl_BaseInterface)b, 
          _ex);SIDL_CHECK(*_ex);
        sidl_rmi_Invocation_packString( _inv, "b", _url, _ex);SIDL_CHECK(*_ex);
        free((void*)_url);
      } else {
        sidl_rmi_Invocation_packString( _inv, "b", NULL, _ex);SIDL_CHECK(*_ex);
      }
      if(x){
        char* _url = sidl_BaseInterface__getURL((sidl_BaseInterface)x, 
          _ex);SIDL_CHECK(*_ex);
        sidl_rmi_Invocation_packString( _inv, "x", _url, _ex);SIDL_CHECK(*_ex);
        free((void*)_url);
      } else {
        sidl_rmi_Invocation_packString( _inv, "x", NULL, _ex);SIDL_CHECK(*_ex);
      }

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if(_be != NULL) {
        sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE.CGNR.Setup.", &throwaway_exception);
        *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
          &throwaway_exception);
        goto EXIT;
      }

      // extract return value
      sidl_rmi_Response_unpackInt( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
        *_ex);

      // unpack out and inout arguments

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return _retval;
    }
  }

  // REMOTE METHOD STUB:Apply
  static int32_t
  remote_bHYPRE_CGNR_Apply(
    /* in */ struct bHYPRE_CGNR__object* self ,
    /* in */ struct bHYPRE_Vector__object* b,
    /* inout */ struct bHYPRE_Vector__object** x,
    /* out */ struct sidl_BaseInterface__object* *_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      sidl_BaseInterface _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      char* x_str= NULL;
      int32_t _retval = 0;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        bHYPRE_CGNR__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "Apply", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments
      if(b){
        char* _url = sidl_BaseInterface__getURL((sidl_BaseInterface)b, 
          _ex);SIDL_CHECK(*_ex);
        sidl_rmi_Invocation_packString( _inv, "b", _url, _ex);SIDL_CHECK(*_ex);
        free((void*)_url);
      } else {
        sidl_rmi_Invocation_packString( _inv, "b", NULL, _ex);SIDL_CHECK(*_ex);
      }
      if(*x){
        char* _url = sidl_BaseInterface__getURL((sidl_BaseInterface)*x, 
          _ex);SIDL_CHECK(*_ex);
        sidl_rmi_Invocation_packString( _inv, "x", _url, _ex);SIDL_CHECK(*_ex);
        free((void*)_url);
      } else {
        sidl_rmi_Invocation_packString( _inv, "x", NULL, _ex);SIDL_CHECK(*_ex);
      }
      // Transfer this reference
      if(*x && sidl_BaseInterface__isRemote((sidl_BaseInterface)*x, _ex)) {
        SIDL_CHECK(*_ex);
        (*((sidl_BaseInterface)*x)->d_epv->f__raddRef)(((
          sidl_BaseInterface)*x)->d_object, _ex);SIDL_CHECK(*_ex);
        sidl_BaseInterface_deleteRef((sidl_BaseInterface)*x, _ex);SIDL_CHECK(
          *_ex); 
      }

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if(_be != NULL) {
        sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE.CGNR.Apply.", &throwaway_exception);
        *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
          &throwaway_exception);
        goto EXIT;
      }

      // extract return value
      sidl_rmi_Response_unpackInt( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
        *_ex);

      // unpack out and inout arguments
      sidl_rmi_Response_unpackString( _rsvp, "x", &x_str, _ex);SIDL_CHECK(*_ex);
      *x = bHYPRE_Vector__connectI(x_str, FALSE, _ex);SIDL_CHECK(*_ex);

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return _retval;
    }
  }

  // REMOTE METHOD STUB:ApplyAdjoint
  static int32_t
  remote_bHYPRE_CGNR_ApplyAdjoint(
    /* in */ struct bHYPRE_CGNR__object* self ,
    /* in */ struct bHYPRE_Vector__object* b,
    /* inout */ struct bHYPRE_Vector__object** x,
    /* out */ struct sidl_BaseInterface__object* *_ex)
  {
    LANG_SPECIFIC_INIT();
    *_ex = NULL;
    {
      // initialize a new invocation
      sidl_BaseInterface _throwaway = NULL;
      sidl_BaseException _be = NULL;
      sidl_rmi_Response _rsvp = NULL;
      char* x_str= NULL;
      int32_t _retval = 0;
      struct sidl_rmi_InstanceHandle__object * _conn = ((struct 
        bHYPRE_CGNR__remote*)self->d_data)->d_ih;
      sidl_rmi_Invocation _inv = sidl_rmi_InstanceHandle_createInvocation( 
        _conn, "ApplyAdjoint", _ex ); SIDL_CHECK(*_ex);

      // pack in and inout arguments
      if(b){
        char* _url = sidl_BaseInterface__getURL((sidl_BaseInterface)b, 
          _ex);SIDL_CHECK(*_ex);
        sidl_rmi_Invocation_packString( _inv, "b", _url, _ex);SIDL_CHECK(*_ex);
        free((void*)_url);
      } else {
        sidl_rmi_Invocation_packString( _inv, "b", NULL, _ex);SIDL_CHECK(*_ex);
      }
      if(*x){
        char* _url = sidl_BaseInterface__getURL((sidl_BaseInterface)*x, 
          _ex);SIDL_CHECK(*_ex);
        sidl_rmi_Invocation_packString( _inv, "x", _url, _ex);SIDL_CHECK(*_ex);
        free((void*)_url);
      } else {
        sidl_rmi_Invocation_packString( _inv, "x", NULL, _ex);SIDL_CHECK(*_ex);
      }
      // Transfer this reference
      if(*x && sidl_BaseInterface__isRemote((sidl_BaseInterface)*x, _ex)) {
        SIDL_CHECK(*_ex);
        (*((sidl_BaseInterface)*x)->d_epv->f__raddRef)(((
          sidl_BaseInterface)*x)->d_object, _ex);SIDL_CHECK(*_ex);
        sidl_BaseInterface_deleteRef((sidl_BaseInterface)*x, _ex);SIDL_CHECK(
          *_ex); 
      }

      // send actual RMI request
      _rsvp = sidl_rmi_Invocation_invokeMethod(_inv, _ex);SIDL_CHECK(*_ex);

      _be = sidl_rmi_Response_getExceptionThrown(_rsvp, _ex);SIDL_CHECK(*_ex);
      if(_be != NULL) {
        sidl_BaseInterface throwaway_exception = NULL;
sidl_BaseException_addLine(_be, "Exception unserialized from bHYPRE.CGNR.ApplyAdjoint.", &throwaway_exception);
        *_ex = (sidl_BaseInterface) sidl_BaseInterface__rmicast(_be,
          &throwaway_exception);
        goto EXIT;
      }

      // extract return value
      sidl_rmi_Response_unpackInt( _rsvp, "_retval", &_retval, _ex);SIDL_CHECK(
        *_ex);

      // unpack out and inout arguments
      sidl_rmi_Response_unpackString( _rsvp, "x", &x_str, _ex);SIDL_CHECK(*_ex);
      *x = bHYPRE_Vector__connectI(x_str, FALSE, _ex);SIDL_CHECK(*_ex);

      // cleanup and return
      EXIT:
      if(_inv) { sidl_rmi_Invocation_deleteRef(_inv, &_throwaway); }
      if(_rsvp) { sidl_rmi_Response_deleteRef(_rsvp, &_throwaway); }
      return _retval;
    }
  }

  // REMOTE EPV: create remote entry point vectors (EPVs).
  static void bHYPRE_CGNR__init_remote_epv(void)
  {
    // assert( HAVE_LOCKED_STATIC_GLOBALS );
    struct bHYPRE_CGNR__epv*                 epv = &s_rem_epv__bhypre_cgnr;
    struct bHYPRE_Operator__epv*             e0  = &s_rem_epv__bhypre_operator;
    struct bHYPRE_PreconditionedSolver__epv* e1  = 
      &s_rem_epv__bhypre_preconditionedsolver;
    struct bHYPRE_Solver__epv*               e2  = &s_rem_epv__bhypre_solver;
    struct sidl_BaseClass__epv*              e3  = &s_rem_epv__sidl_baseclass;
    struct sidl_BaseInterface__epv*          e4  = 
      &s_rem_epv__sidl_baseinterface;

    epv->f__cast                         = remote_bHYPRE_CGNR__cast;
    epv->f__delete                       = remote_bHYPRE_CGNR__delete;
    epv->f__exec                         = remote_bHYPRE_CGNR__exec;
    epv->f__getURL                       = remote_bHYPRE_CGNR__getURL;
    epv->f__raddRef                      = remote_bHYPRE_CGNR__raddRef;
    epv->f__isRemote                     = remote_bHYPRE_CGNR__isRemote;
    epv->f__set_hooks                    = remote_bHYPRE_CGNR__set_hooks;
    epv->f__ctor                         = NULL;
    epv->f__ctor2                        = NULL;
    epv->f__dtor                         = NULL;
    epv->f_addRef                        = remote_bHYPRE_CGNR_addRef;
    epv->f_deleteRef                     = remote_bHYPRE_CGNR_deleteRef;
    epv->f_isSame                        = remote_bHYPRE_CGNR_isSame;
    epv->f_isType                        = remote_bHYPRE_CGNR_isType;
    epv->f_getClassInfo                  = remote_bHYPRE_CGNR_getClassInfo;
    epv->f_SetPreconditioner             = remote_bHYPRE_CGNR_SetPreconditioner;
    epv->f_GetPreconditioner             = remote_bHYPRE_CGNR_GetPreconditioner;
    epv->f_Clone                         = remote_bHYPRE_CGNR_Clone;
    epv->f_SetOperator                   = remote_bHYPRE_CGNR_SetOperator;
    epv->f_SetTolerance                  = remote_bHYPRE_CGNR_SetTolerance;
    epv->f_SetMaxIterations              = remote_bHYPRE_CGNR_SetMaxIterations;
    epv->f_SetLogging                    = remote_bHYPRE_CGNR_SetLogging;
    epv->f_SetPrintLevel                 = remote_bHYPRE_CGNR_SetPrintLevel;
    epv->f_GetNumIterations              = remote_bHYPRE_CGNR_GetNumIterations;
    epv->f_GetRelResidualNorm            = 
      remote_bHYPRE_CGNR_GetRelResidualNorm;
    epv->f_SetCommunicator               = remote_bHYPRE_CGNR_SetCommunicator;
    epv->f_Destroy                       = remote_bHYPRE_CGNR_Destroy;
    epv->f_SetIntParameter               = remote_bHYPRE_CGNR_SetIntParameter;
    epv->f_SetDoubleParameter            = 
      remote_bHYPRE_CGNR_SetDoubleParameter;
    epv->f_SetStringParameter            = 
      remote_bHYPRE_CGNR_SetStringParameter;
    epv->f_SetIntArray1Parameter         = 
      remote_bHYPRE_CGNR_SetIntArray1Parameter;
    epv->f_SetIntArray2Parameter         = 
      remote_bHYPRE_CGNR_SetIntArray2Parameter;
    epv->f_SetDoubleArray1Parameter      = 
      remote_bHYPRE_CGNR_SetDoubleArray1Parameter;
    epv->f_SetDoubleArray2Parameter      = 
      remote_bHYPRE_CGNR_SetDoubleArray2Parameter;
    epv->f_GetIntValue                   = remote_bHYPRE_CGNR_GetIntValue;
    epv->f_GetDoubleValue                = remote_bHYPRE_CGNR_GetDoubleValue;
    epv->f_Setup                         = remote_bHYPRE_CGNR_Setup;
    epv->f_Apply                         = remote_bHYPRE_CGNR_Apply;
    epv->f_ApplyAdjoint                  = remote_bHYPRE_CGNR_ApplyAdjoint;

    e0->f__cast                    = (void* (*)(void*,const char*,
      sidl_BaseInterface*)) epv->f__cast;
    e0->f__delete                  = (void (*)(void*,sidl_BaseInterface*)) 
      epv->f__delete;
    e0->f__getURL                  = (char* (*)(void*,sidl_BaseInterface*)) 
      epv->f__getURL;
    e0->f__raddRef                 = (void (*)(void*,sidl_BaseInterface*)) 
      epv->f__raddRef;
    e0->f__isRemote                = (sidl_bool (*)(void*,sidl_BaseInterface*)) 
      epv->f__isRemote;
    e0->f__set_hooks               = (void (*)(void*,int32_t, 
      sidl_BaseInterface*)) epv->f__set_hooks;
    e0->f__exec                    = (void (*)(void*,const char*,struct 
      sidl_rmi_Call__object*,struct sidl_rmi_Return__object*,struct 
      sidl_BaseInterface__object **)) epv->f__exec;
    e0->f_SetCommunicator          = (int32_t (*)(void*,struct 
      bHYPRE_MPICommunicator__object*,struct sidl_BaseInterface__object **)) 
      epv->f_SetCommunicator;
    e0->f_Destroy                  = (void (*)(void*,struct 
      sidl_BaseInterface__object **)) epv->f_Destroy;
    e0->f_SetIntParameter          = (int32_t (*)(void*,const char*,int32_t,
      struct sidl_BaseInterface__object **)) epv->f_SetIntParameter;
    e0->f_SetDoubleParameter       = (int32_t (*)(void*,const char*,double,
      struct sidl_BaseInterface__object **)) epv->f_SetDoubleParameter;
    e0->f_SetStringParameter       = (int32_t (*)(void*,const char*,const char*,
      struct sidl_BaseInterface__object **)) epv->f_SetStringParameter;
    e0->f_SetIntArray1Parameter    = (int32_t (*)(void*,const char*,struct 
      sidl_int__array*,struct sidl_BaseInterface__object **)) 
      epv->f_SetIntArray1Parameter;
    e0->f_SetIntArray2Parameter    = (int32_t (*)(void*,const char*,struct 
      sidl_int__array*,struct sidl_BaseInterface__object **)) 
      epv->f_SetIntArray2Parameter;
    e0->f_SetDoubleArray1Parameter = (int32_t (*)(void*,const char*,struct 
      sidl_double__array*,struct sidl_BaseInterface__object **)) 
      epv->f_SetDoubleArray1Parameter;
    e0->f_SetDoubleArray2Parameter = (int32_t (*)(void*,const char*,struct 
      sidl_double__array*,struct sidl_BaseInterface__object **)) 
      epv->f_SetDoubleArray2Parameter;
    e0->f_GetIntValue              = (int32_t (*)(void*,const char*,int32_t*,
      struct sidl_BaseInterface__object **)) epv->f_GetIntValue;
    e0->f_GetDoubleValue           = (int32_t (*)(void*,const char*,double*,
      struct sidl_BaseInterface__object **)) epv->f_GetDoubleValue;
    e0->f_Setup                    = (int32_t (*)(void*,struct 
      bHYPRE_Vector__object*,struct bHYPRE_Vector__object*,struct 
      sidl_BaseInterface__object **)) epv->f_Setup;
    e0->f_Apply                    = (int32_t (*)(void*,struct 
      bHYPRE_Vector__object*,struct bHYPRE_Vector__object**,struct 
      sidl_BaseInterface__object **)) epv->f_Apply;
    e0->f_ApplyAdjoint             = (int32_t (*)(void*,struct 
      bHYPRE_Vector__object*,struct bHYPRE_Vector__object**,struct 
      sidl_BaseInterface__object **)) epv->f_ApplyAdjoint;
    e0->f_addRef                   = (void (*)(void*,struct 
      sidl_BaseInterface__object **)) epv->f_addRef;
    e0->f_deleteRef                = (void (*)(void*,struct 
      sidl_BaseInterface__object **)) epv->f_deleteRef;
    e0->f_isSame                   = (sidl_bool (*)(void*,struct 
      sidl_BaseInterface__object*,struct sidl_BaseInterface__object **)) 
      epv->f_isSame;
    e0->f_isType                   = (sidl_bool (*)(void*,const char*,struct 
      sidl_BaseInterface__object **)) epv->f_isType;
    e0->f_getClassInfo             = (struct sidl_ClassInfo__object* (*)(void*,
      struct sidl_BaseInterface__object **)) epv->f_getClassInfo;

    e1->f__cast                    = (void* (*)(void*,const char*,
      sidl_BaseInterface*)) epv->f__cast;
    e1->f__delete                  = (void (*)(void*,sidl_BaseInterface*)) 
      epv->f__delete;
    e1->f__getURL                  = (char* (*)(void*,sidl_BaseInterface*)) 
      epv->f__getURL;
    e1->f__raddRef                 = (void (*)(void*,sidl_BaseInterface*)) 
      epv->f__raddRef;
    e1->f__isRemote                = (sidl_bool (*)(void*,sidl_BaseInterface*)) 
      epv->f__isRemote;
    e1->f__set_hooks               = (void (*)(void*,int32_t, 
      sidl_BaseInterface*)) epv->f__set_hooks;
    e1->f__exec                    = (void (*)(void*,const char*,struct 
      sidl_rmi_Call__object*,struct sidl_rmi_Return__object*,struct 
      sidl_BaseInterface__object **)) epv->f__exec;
    e1->f_SetPreconditioner        = (int32_t (*)(void*,struct 
      bHYPRE_Solver__object*,struct sidl_BaseInterface__object **)) 
      epv->f_SetPreconditioner;
    e1->f_GetPreconditioner        = (int32_t (*)(void*,struct 
      bHYPRE_Solver__object**,struct sidl_BaseInterface__object **)) 
      epv->f_GetPreconditioner;
    e1->f_Clone                    = (int32_t (*)(void*,struct 
      bHYPRE_PreconditionedSolver__object**,struct sidl_BaseInterface__object 
      **)) epv->f_Clone;
    e1->f_SetOperator              = (int32_t (*)(void*,struct 
      bHYPRE_Operator__object*,struct sidl_BaseInterface__object **)) 
      epv->f_SetOperator;
    e1->f_SetTolerance             = (int32_t (*)(void*,double,struct 
      sidl_BaseInterface__object **)) epv->f_SetTolerance;
    e1->f_SetMaxIterations         = (int32_t (*)(void*,int32_t,struct 
      sidl_BaseInterface__object **)) epv->f_SetMaxIterations;
    e1->f_SetLogging               = (int32_t (*)(void*,int32_t,struct 
      sidl_BaseInterface__object **)) epv->f_SetLogging;
    e1->f_SetPrintLevel            = (int32_t (*)(void*,int32_t,struct 
      sidl_BaseInterface__object **)) epv->f_SetPrintLevel;
    e1->f_GetNumIterations         = (int32_t (*)(void*,int32_t*,struct 
      sidl_BaseInterface__object **)) epv->f_GetNumIterations;
    e1->f_GetRelResidualNorm       = (int32_t (*)(void*,double*,struct 
      sidl_BaseInterface__object **)) epv->f_GetRelResidualNorm;
    e1->f_SetCommunicator          = (int32_t (*)(void*,struct 
      bHYPRE_MPICommunicator__object*,struct sidl_BaseInterface__object **)) 
      epv->f_SetCommunicator;
    e1->f_Destroy                  = (void (*)(void*,struct 
      sidl_BaseInterface__object **)) epv->f_Destroy;
    e1->f_SetIntParameter          = (int32_t (*)(void*,const char*,int32_t,
      struct sidl_BaseInterface__object **)) epv->f_SetIntParameter;
    e1->f_SetDoubleParameter       = (int32_t (*)(void*,const char*,double,
      struct sidl_BaseInterface__object **)) epv->f_SetDoubleParameter;
    e1->f_SetStringParameter       = (int32_t (*)(void*,const char*,const char*,
      struct sidl_BaseInterface__object **)) epv->f_SetStringParameter;
    e1->f_SetIntArray1Parameter    = (int32_t (*)(void*,const char*,struct 
      sidl_int__array*,struct sidl_BaseInterface__object **)) 
      epv->f_SetIntArray1Parameter;
    e1->f_SetIntArray2Parameter    = (int32_t (*)(void*,const char*,struct 
      sidl_int__array*,struct sidl_BaseInterface__object **)) 
      epv->f_SetIntArray2Parameter;
    e1->f_SetDoubleArray1Parameter = (int32_t (*)(void*,const char*,struct 
      sidl_double__array*,struct sidl_BaseInterface__object **)) 
      epv->f_SetDoubleArray1Parameter;
    e1->f_SetDoubleArray2Parameter = (int32_t (*)(void*,const char*,struct 
      sidl_double__array*,struct sidl_BaseInterface__object **)) 
      epv->f_SetDoubleArray2Parameter;
    e1->f_GetIntValue              = (int32_t (*)(void*,const char*,int32_t*,
      struct sidl_BaseInterface__object **)) epv->f_GetIntValue;
    e1->f_GetDoubleValue           = (int32_t (*)(void*,const char*,double*,
      struct sidl_BaseInterface__object **)) epv->f_GetDoubleValue;
    e1->f_Setup                    = (int32_t (*)(void*,struct 
      bHYPRE_Vector__object*,struct bHYPRE_Vector__object*,struct 
      sidl_BaseInterface__object **)) epv->f_Setup;
    e1->f_Apply                    = (int32_t (*)(void*,struct 
      bHYPRE_Vector__object*,struct bHYPRE_Vector__object**,struct 
      sidl_BaseInterface__object **)) epv->f_Apply;
    e1->f_ApplyAdjoint             = (int32_t (*)(void*,struct 
      bHYPRE_Vector__object*,struct bHYPRE_Vector__object**,struct 
      sidl_BaseInterface__object **)) epv->f_ApplyAdjoint;
    e1->f_addRef                   = (void (*)(void*,struct 
      sidl_BaseInterface__object **)) epv->f_addRef;
    e1->f_deleteRef                = (void (*)(void*,struct 
      sidl_BaseInterface__object **)) epv->f_deleteRef;
    e1->f_isSame                   = (sidl_bool (*)(void*,struct 
      sidl_BaseInterface__object*,struct sidl_BaseInterface__object **)) 
      epv->f_isSame;
    e1->f_isType                   = (sidl_bool (*)(void*,const char*,struct 
      sidl_BaseInterface__object **)) epv->f_isType;
    e1->f_getClassInfo             = (struct sidl_ClassInfo__object* (*)(void*,
      struct sidl_BaseInterface__object **)) epv->f_getClassInfo;

    e2->f__cast                    = (void* (*)(void*,const char*,
      sidl_BaseInterface*)) epv->f__cast;
    e2->f__delete                  = (void (*)(void*,sidl_BaseInterface*)) 
      epv->f__delete;
    e2->f__getURL                  = (char* (*)(void*,sidl_BaseInterface*)) 
      epv->f__getURL;
    e2->f__raddRef                 = (void (*)(void*,sidl_BaseInterface*)) 
      epv->f__raddRef;
    e2->f__isRemote                = (sidl_bool (*)(void*,sidl_BaseInterface*)) 
      epv->f__isRemote;
    e2->f__set_hooks               = (void (*)(void*,int32_t, 
      sidl_BaseInterface*)) epv->f__set_hooks;
    e2->f__exec                    = (void (*)(void*,const char*,struct 
      sidl_rmi_Call__object*,struct sidl_rmi_Return__object*,struct 
      sidl_BaseInterface__object **)) epv->f__exec;
    e2->f_SetOperator              = (int32_t (*)(void*,struct 
      bHYPRE_Operator__object*,struct sidl_BaseInterface__object **)) 
      epv->f_SetOperator;
    e2->f_SetTolerance             = (int32_t (*)(void*,double,struct 
      sidl_BaseInterface__object **)) epv->f_SetTolerance;
    e2->f_SetMaxIterations         = (int32_t (*)(void*,int32_t,struct 
      sidl_BaseInterface__object **)) epv->f_SetMaxIterations;
    e2->f_SetLogging               = (int32_t (*)(void*,int32_t,struct 
      sidl_BaseInterface__object **)) epv->f_SetLogging;
    e2->f_SetPrintLevel            = (int32_t (*)(void*,int32_t,struct 
      sidl_BaseInterface__object **)) epv->f_SetPrintLevel;
    e2->f_GetNumIterations         = (int32_t (*)(void*,int32_t*,struct 
      sidl_BaseInterface__object **)) epv->f_GetNumIterations;
    e2->f_GetRelResidualNorm       = (int32_t (*)(void*,double*,struct 
      sidl_BaseInterface__object **)) epv->f_GetRelResidualNorm;
    e2->f_SetCommunicator          = (int32_t (*)(void*,struct 
      bHYPRE_MPICommunicator__object*,struct sidl_BaseInterface__object **)) 
      epv->f_SetCommunicator;
    e2->f_Destroy                  = (void (*)(void*,struct 
      sidl_BaseInterface__object **)) epv->f_Destroy;
    e2->f_SetIntParameter          = (int32_t (*)(void*,const char*,int32_t,
      struct sidl_BaseInterface__object **)) epv->f_SetIntParameter;
    e2->f_SetDoubleParameter       = (int32_t (*)(void*,const char*,double,
      struct sidl_BaseInterface__object **)) epv->f_SetDoubleParameter;
    e2->f_SetStringParameter       = (int32_t (*)(void*,const char*,const char*,
      struct sidl_BaseInterface__object **)) epv->f_SetStringParameter;
    e2->f_SetIntArray1Parameter    = (int32_t (*)(void*,const char*,struct 
      sidl_int__array*,struct sidl_BaseInterface__object **)) 
      epv->f_SetIntArray1Parameter;
    e2->f_SetIntArray2Parameter    = (int32_t (*)(void*,const char*,struct 
      sidl_int__array*,struct sidl_BaseInterface__object **)) 
      epv->f_SetIntArray2Parameter;
    e2->f_SetDoubleArray1Parameter = (int32_t (*)(void*,const char*,struct 
      sidl_double__array*,struct sidl_BaseInterface__object **)) 
      epv->f_SetDoubleArray1Parameter;
    e2->f_SetDoubleArray2Parameter = (int32_t (*)(void*,const char*,struct 
      sidl_double__array*,struct sidl_BaseInterface__object **)) 
      epv->f_SetDoubleArray2Parameter;
    e2->f_GetIntValue              = (int32_t (*)(void*,const char*,int32_t*,
      struct sidl_BaseInterface__object **)) epv->f_GetIntValue;
    e2->f_GetDoubleValue           = (int32_t (*)(void*,const char*,double*,
      struct sidl_BaseInterface__object **)) epv->f_GetDoubleValue;
    e2->f_Setup                    = (int32_t (*)(void*,struct 
      bHYPRE_Vector__object*,struct bHYPRE_Vector__object*,struct 
      sidl_BaseInterface__object **)) epv->f_Setup;
    e2->f_Apply                    = (int32_t (*)(void*,struct 
      bHYPRE_Vector__object*,struct bHYPRE_Vector__object**,struct 
      sidl_BaseInterface__object **)) epv->f_Apply;
    e2->f_ApplyAdjoint             = (int32_t (*)(void*,struct 
      bHYPRE_Vector__object*,struct bHYPRE_Vector__object**,struct 
      sidl_BaseInterface__object **)) epv->f_ApplyAdjoint;
    e2->f_addRef                   = (void (*)(void*,struct 
      sidl_BaseInterface__object **)) epv->f_addRef;
    e2->f_deleteRef                = (void (*)(void*,struct 
      sidl_BaseInterface__object **)) epv->f_deleteRef;
    e2->f_isSame                   = (sidl_bool (*)(void*,struct 
      sidl_BaseInterface__object*,struct sidl_BaseInterface__object **)) 
      epv->f_isSame;
    e2->f_isType                   = (sidl_bool (*)(void*,const char*,struct 
      sidl_BaseInterface__object **)) epv->f_isType;
    e2->f_getClassInfo             = (struct sidl_ClassInfo__object* (*)(void*,
      struct sidl_BaseInterface__object **)) epv->f_getClassInfo;

    e3->f__cast        = (void* (*)(struct sidl_BaseClass__object*,const char*,
      sidl_BaseInterface*)) epv->f__cast;
    e3->f__delete      = (void (*)(struct sidl_BaseClass__object*,
      sidl_BaseInterface*)) epv->f__delete;
    e3->f__getURL      = (char* (*)(struct sidl_BaseClass__object*,
      sidl_BaseInterface*)) epv->f__getURL;
    e3->f__raddRef     = (void (*)(struct sidl_BaseClass__object*,
      sidl_BaseInterface*)) epv->f__raddRef;
    e3->f__isRemote    = (sidl_bool (*)(struct sidl_BaseClass__object*,
      sidl_BaseInterface*)) epv->f__isRemote;
    e3->f__set_hooks   = (void (*)(struct sidl_BaseClass__object*,int32_t, 
      sidl_BaseInterface*)) epv->f__set_hooks;
    e3->f__exec        = (void (*)(struct sidl_BaseClass__object*,const char*,
      struct sidl_rmi_Call__object*,struct sidl_rmi_Return__object*,struct 
      sidl_BaseInterface__object **)) epv->f__exec;
    e3->f_addRef       = (void (*)(struct sidl_BaseClass__object*,struct 
      sidl_BaseInterface__object **)) epv->f_addRef;
    e3->f_deleteRef    = (void (*)(struct sidl_BaseClass__object*,struct 
      sidl_BaseInterface__object **)) epv->f_deleteRef;
    e3->f_isSame       = (sidl_bool (*)(struct sidl_BaseClass__object*,struct 
      sidl_BaseInterface__object*,struct sidl_BaseInterface__object **)) 
      epv->f_isSame;
    e3->f_isType       = (sidl_bool (*)(struct sidl_BaseClass__object*,const 
      char*,struct sidl_BaseInterface__object **)) epv->f_isType;
    e3->f_getClassInfo = (struct sidl_ClassInfo__object* (*)(struct 
      sidl_BaseClass__object*,struct sidl_BaseInterface__object **)) 
      epv->f_getClassInfo;

    e4->f__cast        = (void* (*)(void*,const char*,sidl_BaseInterface*)) 
      epv->f__cast;
    e4->f__delete      = (void (*)(void*,sidl_BaseInterface*)) epv->f__delete;
    e4->f__getURL      = (char* (*)(void*,sidl_BaseInterface*)) epv->f__getURL;
    e4->f__raddRef     = (void (*)(void*,sidl_BaseInterface*)) epv->f__raddRef;
    e4->f__isRemote    = (sidl_bool (*)(void*,sidl_BaseInterface*)) 
      epv->f__isRemote;
    e4->f__set_hooks   = (void (*)(void*,int32_t, sidl_BaseInterface*)) 
      epv->f__set_hooks;
    e4->f__exec        = (void (*)(void*,const char*,struct 
      sidl_rmi_Call__object*,struct sidl_rmi_Return__object*,struct 
      sidl_BaseInterface__object **)) epv->f__exec;
    e4->f_addRef       = (void (*)(void*,struct sidl_BaseInterface__object **)) 
      epv->f_addRef;
    e4->f_deleteRef    = (void (*)(void*,struct sidl_BaseInterface__object **)) 
      epv->f_deleteRef;
    e4->f_isSame       = (sidl_bool (*)(void*,struct 
      sidl_BaseInterface__object*,struct sidl_BaseInterface__object **)) 
      epv->f_isSame;
    e4->f_isType       = (sidl_bool (*)(void*,const char*,struct 
      sidl_BaseInterface__object **)) epv->f_isType;
    e4->f_getClassInfo = (struct sidl_ClassInfo__object* (*)(void*,struct 
      sidl_BaseInterface__object **)) epv->f_getClassInfo;

    s_remote_initialized = 1;
  }

  // Create an instance that connects to an existing remote object.
  static struct bHYPRE_CGNR__object*
  bHYPRE_CGNR__remoteConnect(const char *url, sidl_bool ar, sidl_BaseInterface 
    *_ex)
  {
    struct bHYPRE_CGNR__object* self;

    struct bHYPRE_CGNR__object* s0;
    struct sidl_BaseClass__object* s1;

    struct bHYPRE_CGNR__remote* r_obj;
    sidl_rmi_InstanceHandle instance = NULL;
    char* objectID = NULL;
    objectID = NULL;
    *_ex = NULL;
    if(url == NULL) {return NULL;}
    objectID = sidl_rmi_ServerRegistry_isLocalObject(url, _ex);
    if(objectID) {
      sidl_BaseInterface bi = (
        sidl_BaseInterface)sidl_rmi_InstanceRegistry_getInstanceByString(
        objectID, _ex); SIDL_CHECK(*_ex);
      return bHYPRE_CGNR__rmicast(bi,_ex);SIDL_CHECK(*_ex);
    }
    instance = sidl_rmi_ProtocolFactory_connectInstance(url, ar, _ex ); 
      SIDL_CHECK(*_ex);
    if ( instance == NULL) { return NULL; }
    self =
      (struct bHYPRE_CGNR__object*) malloc(
        sizeof(struct bHYPRE_CGNR__object));

    r_obj =
      (struct bHYPRE_CGNR__remote*) malloc(
        sizeof(struct bHYPRE_CGNR__remote));

    r_obj->d_refcount = 1;
    r_obj->d_ih = instance;
    s0 =                          self;
    s1 =                          &s0->d_sidl_baseclass;

    LOCK_STATIC_GLOBALS;
    if (!s_remote_initialized) {
      bHYPRE_CGNR__init_remote_epv();
    }
    UNLOCK_STATIC_GLOBALS;

    s1->d_sidl_baseinterface.d_epv    = &s_rem_epv__sidl_baseinterface;
    s1->d_sidl_baseinterface.d_object = (void*) self;

    s1->d_data = (void*) r_obj;
    s1->d_epv  = &s_rem_epv__sidl_baseclass;

    s0->d_bhypre_operator.d_epv    = &s_rem_epv__bhypre_operator;
    s0->d_bhypre_operator.d_object = (void*) self;

    s0->d_bhypre_preconditionedsolver.d_epv    = 
      &s_rem_epv__bhypre_preconditionedsolver;
    s0->d_bhypre_preconditionedsolver.d_object = (void*) self;

    s0->d_bhypre_solver.d_epv    = &s_rem_epv__bhypre_solver;
    s0->d_bhypre_solver.d_object = (void*) self;

    s0->d_data = (void*) r_obj;
    s0->d_epv  = &s_rem_epv__bhypre_cgnr;

    self->d_data = (void*) r_obj;

    return self;
    EXIT:
    return NULL;
  }
  // Create an instance that uses an already existing 
  // InstanceHandle to connect to an existing remote object.
  static struct bHYPRE_CGNR__object*
  bHYPRE_CGNR__IHConnect(sidl_rmi_InstanceHandle instance, sidl_BaseInterface 
    *_ex)
  {
    struct bHYPRE_CGNR__object* self;

    struct bHYPRE_CGNR__object* s0;
    struct sidl_BaseClass__object* s1;

    struct bHYPRE_CGNR__remote* r_obj;
    self =
      (struct bHYPRE_CGNR__object*) malloc(
        sizeof(struct bHYPRE_CGNR__object));

    r_obj =
      (struct bHYPRE_CGNR__remote*) malloc(
        sizeof(struct bHYPRE_CGNR__remote));

    r_obj->d_refcount = 1;
    r_obj->d_ih = instance;
    s0 =                          self;
    s1 =                          &s0->d_sidl_baseclass;

    LOCK_STATIC_GLOBALS;
    if (!s_remote_initialized) {
      bHYPRE_CGNR__init_remote_epv();
    }
    UNLOCK_STATIC_GLOBALS;

    s1->d_sidl_baseinterface.d_epv    = &s_rem_epv__sidl_baseinterface;
    s1->d_sidl_baseinterface.d_object = (void*) self;

    s1->d_data = (void*) r_obj;
    s1->d_epv  = &s_rem_epv__sidl_baseclass;

    s0->d_bhypre_operator.d_epv    = &s_rem_epv__bhypre_operator;
    s0->d_bhypre_operator.d_object = (void*) self;

    s0->d_bhypre_preconditionedsolver.d_epv    = 
      &s_rem_epv__bhypre_preconditionedsolver;
    s0->d_bhypre_preconditionedsolver.d_object = (void*) self;

    s0->d_bhypre_solver.d_epv    = &s_rem_epv__bhypre_solver;
    s0->d_bhypre_solver.d_object = (void*) self;

    s0->d_data = (void*) r_obj;
    s0->d_epv  = &s_rem_epv__bhypre_cgnr;

    self->d_data = (void*) r_obj;

    sidl_rmi_InstanceHandle_addRef(instance,_ex);SIDL_CHECK(*_ex);
    return self;
    EXIT:
    return NULL;
  }
  // REMOTE: generate remote instance given URL string.
  static struct bHYPRE_CGNR__object*
  bHYPRE_CGNR__remoteCreate(const char *url, sidl_BaseInterface *_ex)
  {
    sidl_BaseInterface _throwaway_exception = NULL;
    struct bHYPRE_CGNR__object* self;

    struct bHYPRE_CGNR__object* s0;
    struct sidl_BaseClass__object* s1;

    struct bHYPRE_CGNR__remote* r_obj;
    sidl_rmi_InstanceHandle instance = sidl_rmi_ProtocolFactory_createInstance(
      url, "bHYPRE.CGNR", _ex ); SIDL_CHECK(*_ex);
    if ( instance == NULL) { return NULL; }
    self =
      (struct bHYPRE_CGNR__object*) malloc(
        sizeof(struct bHYPRE_CGNR__object));

    r_obj =
      (struct bHYPRE_CGNR__remote*) malloc(
        sizeof(struct bHYPRE_CGNR__remote));

    r_obj->d_refcount = 1;
    r_obj->d_ih = instance;
    s0 =                          self;
    s1 =                          &s0->d_sidl_baseclass;

    LOCK_STATIC_GLOBALS;
    if (!s_remote_initialized) {
      bHYPRE_CGNR__init_remote_epv();
    }
    UNLOCK_STATIC_GLOBALS;

    s1->d_sidl_baseinterface.d_epv    = &s_rem_epv__sidl_baseinterface;
    s1->d_sidl_baseinterface.d_object = (void*) self;

    s1->d_data = (void*) r_obj;
    s1->d_epv  = &s_rem_epv__sidl_baseclass;

    s0->d_bhypre_operator.d_epv    = &s_rem_epv__bhypre_operator;
    s0->d_bhypre_operator.d_object = (void*) self;

    s0->d_bhypre_preconditionedsolver.d_epv    = 
      &s_rem_epv__bhypre_preconditionedsolver;
    s0->d_bhypre_preconditionedsolver.d_object = (void*) self;

    s0->d_bhypre_solver.d_epv    = &s_rem_epv__bhypre_solver;
    s0->d_bhypre_solver.d_object = (void*) self;

    s0->d_data = (void*) r_obj;
    s0->d_epv  = &s_rem_epv__bhypre_cgnr;

    self->d_data = (void*) r_obj;

    return self;
    EXIT:
    if(instance) { sidl_rmi_InstanceHandle_deleteRef(instance, 
      &_throwaway_exception); }
    return NULL;
  }
  // 
  // Cast method for interface and class type conversions.
  // 
  struct bHYPRE_CGNR__object*
  bHYPRE_CGNR__rmicast(
    void* obj,
    sidl_BaseInterface* _ex)
  {
    struct bHYPRE_CGNR__object* cast = NULL;

    *_ex = NULL;
    if(!connect_loaded) {
      sidl_rmi_ConnectRegistry_registerConnect("bHYPRE.CGNR", (
        void*)bHYPRE_CGNR__IHConnect, _ex);
      connect_loaded = 1;
    }
    if (obj != NULL) {
      struct sidl_BaseInterface__object* base = (struct 
        sidl_BaseInterface__object*) obj;
      cast = (struct bHYPRE_CGNR__object*) (*base->d_epv->f__cast)(
        base->d_object,
        "bHYPRE.CGNR", _ex); SIDL_CHECK(*_ex);
    }

    return cast;
    EXIT:
    return NULL;
  }

  // 
  // RMI connector function for the class.
  // 
  struct bHYPRE_CGNR__object*
  bHYPRE_CGNR__connectI(const char* url, sidl_bool ar, struct 
    sidl_BaseInterface__object **_ex)
  {
    return bHYPRE_CGNR__remoteConnect(url, ar, _ex);
  }

}

//////////////////////////////////////////////////
// 
// Special methods for throwing exceptions
// 

void
bHYPRE::CGNR::throwException0(
  struct sidl_BaseInterface__object *_exception
)
  // throws:
{
  void * _p = 0;
  struct sidl_BaseInterface__object *throwaway_exception;

  if ( (_p=(*(_exception->d_epv->f__cast))(_exception->d_object, 
    "sidl.RuntimeException", &throwaway_exception)) != 0 ) {
    struct sidl_RuntimeException__object * _realtype = reinterpret_cast< struct 
      sidl_RuntimeException__object*>(_p);
    (*_exception->d_epv->f_deleteRef)(_exception->d_object, 
      &throwaway_exception);
    // Note: alternate constructor does not increment refcount.
    ::sidl::RuntimeException _resolved_exception = ::sidl::RuntimeException( 
      _realtype, false );
    _resolved_exception.add(__FILE__,__LINE__, "C++ stub.");
    throw _resolved_exception;
  }
  // Any unresolved exception is treated as LangSpecificException
  ::sidl::LangSpecificException _unexpected = 
    ::sidl::LangSpecificException::_create();
  _unexpected.add(__FILE__,__LINE__, "Unknown method");
  _unexpected.setNote("Unexpected exception received by C++ stub.");
  throw _unexpected;
}

//////////////////////////////////////////////////
// 
// User Defined Methods
// 


/**
 *  This function is the preferred way to create a CGNR solver. 
 */
::bHYPRE::CGNR
bHYPRE::CGNR::Create( /* in */::bHYPRE::MPICommunicator mpi_comm, /* in 
  */::bHYPRE::Operator A )

{
  ::bHYPRE::CGNR _result;
  struct bHYPRE_MPICommunicator__object* _local_mpi_comm = (struct 
    bHYPRE_MPICommunicator__object*) 
    mpi_comm.::bHYPRE::MPICommunicator::_get_ior();
  struct bHYPRE_Operator__object* _local_A = (struct bHYPRE_Operator__object*) 
    A.::bHYPRE::Operator::_get_ior();
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  _result = ::bHYPRE::CGNR( ( _get_sepv()->f_Create)( /* in */ _local_mpi_comm, 
    /* in */ _local_A, &_exception ), false);
  /*dispatch to ior*/
  if (_exception != 0 ) {

    throwException0(_exception);
  }
  /*unpack results and cleanup*/
  return _result;
}



/**
 * Set the preconditioner.
 */
int32_t
bHYPRE::CGNR::SetPreconditioner( /* in */::bHYPRE::Solver s )

{
  int32_t _result;
  ior_t* const loc_self = (struct bHYPRE_CGNR__object*) 
    ::bHYPRE::CGNR::_get_ior();
  struct bHYPRE_Solver__object* _local_s = (struct bHYPRE_Solver__object*) 
    s.::bHYPRE::Solver::_get_ior();
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  _result = (*(loc_self->d_epv->f_SetPreconditioner))(loc_self, /* in */ 
    _local_s, &_exception );
  /*dispatch to ior*/
  if (_exception != 0 ) {

    throwException0(_exception);
  }
  /*unpack results and cleanup*/
  return _result;
}


/**
 * user defined non-static method.
 */
int32_t
bHYPRE::CGNR::GetPreconditioner( /* out */::bHYPRE::Solver& s )

{
  int32_t _result;
  ior_t* const loc_self = (struct bHYPRE_CGNR__object*) 
    ::bHYPRE::CGNR::_get_ior();
  struct bHYPRE_Solver__object* _local_s;
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  _result = (*(loc_self->d_epv->f_GetPreconditioner))(loc_self, /* out */ 
    &_local_s, &_exception );
  /*dispatch to ior*/
  if (_exception != 0 ) {

    throwException0(_exception);
  }
  if ( s._not_nil() ) {
    s.deleteRef();
  }
  s._set_ior( _local_s);
  /*unpack results and cleanup*/
  return _result;
}


/**
 * user defined non-static method.
 */
int32_t
bHYPRE::CGNR::Clone( /* out */::bHYPRE::PreconditionedSolver& x )

{
  int32_t _result;
  ior_t* const loc_self = (struct bHYPRE_CGNR__object*) 
    ::bHYPRE::CGNR::_get_ior();
  struct bHYPRE_PreconditionedSolver__object* _local_x;
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  _result = (*(loc_self->d_epv->f_Clone))(loc_self, /* out */ &_local_x, 
    &_exception );
  /*dispatch to ior*/
  if (_exception != 0 ) {

    throwException0(_exception);
  }
  if ( x._not_nil() ) {
    x.deleteRef();
  }
  x._set_ior( _local_x);
  /*unpack results and cleanup*/
  return _result;
}



/**
 * Set the operator for the linear system being solved.
 * DEPRECATED.  use Create
 */
int32_t
bHYPRE::CGNR::SetOperator( /* in */::bHYPRE::Operator A )

{
  int32_t _result;
  ior_t* const loc_self = (struct bHYPRE_CGNR__object*) 
    ::bHYPRE::CGNR::_get_ior();
  struct bHYPRE_Operator__object* _local_A = (struct bHYPRE_Operator__object*) 
    A.::bHYPRE::Operator::_get_ior();
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  _result = (*(loc_self->d_epv->f_SetOperator))(loc_self, /* in */ _local_A, 
    &_exception );
  /*dispatch to ior*/
  if (_exception != 0 ) {

    throwException0(_exception);
  }
  /*unpack results and cleanup*/
  return _result;
}



/**
 * (Optional) Set the convergence tolerance.
 * DEPRECATED.  use SetDoubleParameter
 */
int32_t
bHYPRE::CGNR::SetTolerance( /* in */double tolerance )

{
  int32_t _result;
  ior_t* const loc_self = (struct bHYPRE_CGNR__object*) 
    ::bHYPRE::CGNR::_get_ior();
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  _result = (*(loc_self->d_epv->f_SetTolerance))(loc_self, /* in */ tolerance, 
    &_exception );
  /*dispatch to ior*/
  if (_exception != 0 ) {

    throwException0(_exception);
  }
  /*unpack results and cleanup*/
  return _result;
}



/**
 * (Optional) Set maximum number of iterations.
 * DEPRECATED   use SetIntParameter
 */
int32_t
bHYPRE::CGNR::SetMaxIterations( /* in */int32_t max_iterations )

{
  int32_t _result;
  ior_t* const loc_self = (struct bHYPRE_CGNR__object*) 
    ::bHYPRE::CGNR::_get_ior();
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  _result = (*(loc_self->d_epv->f_SetMaxIterations))(loc_self, /* in */ 
    max_iterations, &_exception );
  /*dispatch to ior*/
  if (_exception != 0 ) {

    throwException0(_exception);
  }
  /*unpack results and cleanup*/
  return _result;
}



/**
 * (Optional) Set the {\it logging level}, specifying the degree
 * of additional informational data to be accumulated.  Does
 * nothing by default (level = 0).  Other levels (if any) are
 * implementation-specific.  Must be called before {\tt Setup}
 * and {\tt Apply}.
 * DEPRECATED   use SetIntParameter
 */
int32_t
bHYPRE::CGNR::SetLogging( /* in */int32_t level )

{
  int32_t _result;
  ior_t* const loc_self = (struct bHYPRE_CGNR__object*) 
    ::bHYPRE::CGNR::_get_ior();
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  _result = (*(loc_self->d_epv->f_SetLogging))(loc_self, /* in */ level, 
    &_exception );
  /*dispatch to ior*/
  if (_exception != 0 ) {

    throwException0(_exception);
  }
  /*unpack results and cleanup*/
  return _result;
}



/**
 * (Optional) Set the {\it print level}, specifying the degree
 * of informational data to be printed either to the screen or
 * to a file.  Does nothing by default (level=0).  Other levels
 * (if any) are implementation-specific.  Must be called before
 * {\tt Setup} and {\tt Apply}.
 * DEPRECATED   use SetIntParameter
 */
int32_t
bHYPRE::CGNR::SetPrintLevel( /* in */int32_t level )

{
  int32_t _result;
  ior_t* const loc_self = (struct bHYPRE_CGNR__object*) 
    ::bHYPRE::CGNR::_get_ior();
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  _result = (*(loc_self->d_epv->f_SetPrintLevel))(loc_self, /* in */ level, 
    &_exception );
  /*dispatch to ior*/
  if (_exception != 0 ) {

    throwException0(_exception);
  }
  /*unpack results and cleanup*/
  return _result;
}



/**
 * (Optional) Return the number of iterations taken.
 */
int32_t
bHYPRE::CGNR::GetNumIterations( /* out */int32_t& num_iterations )

{
  int32_t _result;
  ior_t* const loc_self = (struct bHYPRE_CGNR__object*) 
    ::bHYPRE::CGNR::_get_ior();
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  _result = (*(loc_self->d_epv->f_GetNumIterations))(loc_self, /* out */ 
    &num_iterations, &_exception );
  /*dispatch to ior*/
  if (_exception != 0 ) {

    throwException0(_exception);
  }
  /*unpack results and cleanup*/
  return _result;
}



/**
 * (Optional) Return the norm of the relative residual.
 */
int32_t
bHYPRE::CGNR::GetRelResidualNorm( /* out */double& norm )

{
  int32_t _result;
  ior_t* const loc_self = (struct bHYPRE_CGNR__object*) 
    ::bHYPRE::CGNR::_get_ior();
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  _result = (*(loc_self->d_epv->f_GetRelResidualNorm))(loc_self, /* out */ 
    &norm, &_exception );
  /*dispatch to ior*/
  if (_exception != 0 ) {

    throwException0(_exception);
  }
  /*unpack results and cleanup*/
  return _result;
}



/**
 * Set the MPI Communicator.
 * DEPRECATED, use Create:
 */
int32_t
bHYPRE::CGNR::SetCommunicator( /* in */::bHYPRE::MPICommunicator mpi_comm )

{
  int32_t _result;
  ior_t* const loc_self = (struct bHYPRE_CGNR__object*) 
    ::bHYPRE::CGNR::_get_ior();
  struct bHYPRE_MPICommunicator__object* _local_mpi_comm = (struct 
    bHYPRE_MPICommunicator__object*) 
    mpi_comm.::bHYPRE::MPICommunicator::_get_ior();
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  _result = (*(loc_self->d_epv->f_SetCommunicator))(loc_self, /* in */ 
    _local_mpi_comm, &_exception );
  /*dispatch to ior*/
  if (_exception != 0 ) {

    throwException0(_exception);
  }
  /*unpack results and cleanup*/
  return _result;
}



/**
 * The Destroy function doesn't necessarily destroy anything.
 * It is just another name for deleteRef.  Thus it decrements the
 * object's reference count.  The Babel memory management system will
 * destroy the object if the reference count goes to zero.
 */
void
bHYPRE::CGNR::Destroy(  )

{

  ior_t* const loc_self = (struct bHYPRE_CGNR__object*) 
    ::bHYPRE::CGNR::_get_ior();
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  (*(loc_self->d_epv->f_Destroy))(loc_self, &_exception );
  /*dispatch to ior*/
  if (_exception != 0 ) {

    throwException0(_exception);
  }
  /*unpack results and cleanup*/
}



/**
 * Set the int parameter associated with {\tt name}.
 */
int32_t
bHYPRE::CGNR::SetIntParameter( /* in */const ::std::string& name, /* in 
  */int32_t value )

{
  int32_t _result;
  ior_t* const loc_self = (struct bHYPRE_CGNR__object*) 
    ::bHYPRE::CGNR::_get_ior();
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  _result = (*(loc_self->d_epv->f_SetIntParameter))(loc_self, /* in */ 
    name.c_str(), /* in */ value, &_exception );
  /*dispatch to ior*/
  if (_exception != 0 ) {

    throwException0(_exception);
  }
  /*unpack results and cleanup*/
  return _result;
}



/**
 * Set the double parameter associated with {\tt name}.
 */
int32_t
bHYPRE::CGNR::SetDoubleParameter( /* in */const ::std::string& name, /* in 
  */double value )

{
  int32_t _result;
  ior_t* const loc_self = (struct bHYPRE_CGNR__object*) 
    ::bHYPRE::CGNR::_get_ior();
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  _result = (*(loc_self->d_epv->f_SetDoubleParameter))(loc_self, /* in */ 
    name.c_str(), /* in */ value, &_exception );
  /*dispatch to ior*/
  if (_exception != 0 ) {

    throwException0(_exception);
  }
  /*unpack results and cleanup*/
  return _result;
}



/**
 * Set the string parameter associated with {\tt name}.
 */
int32_t
bHYPRE::CGNR::SetStringParameter( /* in */const ::std::string& name, /* in 
  */const ::std::string& value )

{
  int32_t _result;
  ior_t* const loc_self = (struct bHYPRE_CGNR__object*) 
    ::bHYPRE::CGNR::_get_ior();
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  _result = (*(loc_self->d_epv->f_SetStringParameter))(loc_self, /* in */ 
    name.c_str(), /* in */ value.c_str(), &_exception );
  /*dispatch to ior*/
  if (_exception != 0 ) {

    throwException0(_exception);
  }
  /*unpack results and cleanup*/
  return _result;
}



/**
 * Set the int 1-D array parameter associated with {\tt name}.
 */
int32_t
bHYPRE::CGNR::SetIntArray1Parameter( /* in */const ::std::string& name, /* in 
  rarray[nvalues] */int32_t* value, /* in */int32_t nvalues )

{
  int32_t _result;
  ior_t* const loc_self = (struct bHYPRE_CGNR__object*) 
    ::bHYPRE::CGNR::_get_ior();
  int32_t value_lower[1], value_upper[1], value_stride[1];
  struct sidl_int__array value_real;
  struct sidl_int__array *value_tmp = &value_real;
  value_upper[0] = nvalues-1;
  sidl_int__array_init(value, value_tmp, 1, value_lower, value_upper, 
    value_stride);
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  _result = (*(loc_self->d_epv->f_SetIntArray1Parameter))(loc_self, /* in */ 
    name.c_str(), /* in rarray[nvalues] */ value_tmp, &_exception );
  /*dispatch to ior*/
  if (_exception != 0 ) {
    sidl__array_deleteRef((struct sidl__array *)value_tmp);

    throwException0(_exception);
  }
  sidl__array_deleteRef((struct sidl__array *)value_tmp);
  /*unpack results and cleanup*/
  return _result;
}



/**
 * Set the int 1-D array parameter associated with {\tt name}.
 */
int32_t
bHYPRE::CGNR::SetIntArray1Parameter( /* in */const ::std::string& name, /* in 
  rarray[nvalues] */::sidl::array<int32_t> value )

{
  int32_t _result;
  ior_t* const loc_self = (struct bHYPRE_CGNR__object*) 
    ::bHYPRE::CGNR::_get_ior();
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  _result = (*(loc_self->d_epv->f_SetIntArray1Parameter))(loc_self, /* in */ 
    name.c_str(), /* in rarray[nvalues] */ value._get_ior(), &_exception );
  /*dispatch to ior*/
  if (_exception != 0 ) {

    throwException0(_exception);
  }
  /*unpack results and cleanup*/
  return _result;
}



/**
 * Set the int 2-D array parameter associated with {\tt name}.
 */
int32_t
bHYPRE::CGNR::SetIntArray2Parameter( /* in */const ::std::string& name, /* in 
  array<int,2,column-major> */::sidl::array<int32_t> value )

{
  int32_t _result;
  ior_t* const loc_self = (struct bHYPRE_CGNR__object*) 
    ::bHYPRE::CGNR::_get_ior();
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  _result = (*(loc_self->d_epv->f_SetIntArray2Parameter))(loc_self, /* in */ 
    name.c_str(), /* in array<int,2,column-major> */ value._get_ior(), 
    &_exception );
  /*dispatch to ior*/
  if (_exception != 0 ) {

    throwException0(_exception);
  }
  /*unpack results and cleanup*/
  return _result;
}



/**
 * Set the double 1-D array parameter associated with {\tt name}.
 */
int32_t
bHYPRE::CGNR::SetDoubleArray1Parameter( /* in */const ::std::string& name, /* 
  in rarray[nvalues] */double* value, /* in */int32_t nvalues )

{
  int32_t _result;
  ior_t* const loc_self = (struct bHYPRE_CGNR__object*) 
    ::bHYPRE::CGNR::_get_ior();
  int32_t value_lower[1], value_upper[1], value_stride[1];
  struct sidl_double__array value_real;
  struct sidl_double__array *value_tmp = &value_real;
  value_upper[0] = nvalues-1;
  sidl_double__array_init(value, value_tmp, 1, value_lower, value_upper, 
    value_stride);
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  _result = (*(loc_self->d_epv->f_SetDoubleArray1Parameter))(loc_self, /* in */ 
    name.c_str(), /* in rarray[nvalues] */ value_tmp, &_exception );
  /*dispatch to ior*/
  if (_exception != 0 ) {
    sidl__array_deleteRef((struct sidl__array *)value_tmp);

    throwException0(_exception);
  }
  sidl__array_deleteRef((struct sidl__array *)value_tmp);
  /*unpack results and cleanup*/
  return _result;
}



/**
 * Set the double 1-D array parameter associated with {\tt name}.
 */
int32_t
bHYPRE::CGNR::SetDoubleArray1Parameter( /* in */const ::std::string& name, /* 
  in rarray[nvalues] */::sidl::array<double> value )

{
  int32_t _result;
  ior_t* const loc_self = (struct bHYPRE_CGNR__object*) 
    ::bHYPRE::CGNR::_get_ior();
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  _result = (*(loc_self->d_epv->f_SetDoubleArray1Parameter))(loc_self, /* in */ 
    name.c_str(), /* in rarray[nvalues] */ value._get_ior(), &_exception );
  /*dispatch to ior*/
  if (_exception != 0 ) {

    throwException0(_exception);
  }
  /*unpack results and cleanup*/
  return _result;
}



/**
 * Set the double 2-D array parameter associated with {\tt name}.
 */
int32_t
bHYPRE::CGNR::SetDoubleArray2Parameter( /* in */const ::std::string& name, /* 
  in array<double,2,column-major> */::sidl::array<double> value )

{
  int32_t _result;
  ior_t* const loc_self = (struct bHYPRE_CGNR__object*) 
    ::bHYPRE::CGNR::_get_ior();
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  _result = (*(loc_self->d_epv->f_SetDoubleArray2Parameter))(loc_self, /* in */ 
    name.c_str(), /* in array<double,2,column-major> */ value._get_ior(), 
    &_exception );
  /*dispatch to ior*/
  if (_exception != 0 ) {

    throwException0(_exception);
  }
  /*unpack results and cleanup*/
  return _result;
}



/**
 * Set the int parameter associated with {\tt name}.
 */
int32_t
bHYPRE::CGNR::GetIntValue( /* in */const ::std::string& name, /* out */int32_t& 
  value )

{
  int32_t _result;
  ior_t* const loc_self = (struct bHYPRE_CGNR__object*) 
    ::bHYPRE::CGNR::_get_ior();
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  _result = (*(loc_self->d_epv->f_GetIntValue))(loc_self, /* in */ name.c_str(),
    /* out */ &value, &_exception );
  /*dispatch to ior*/
  if (_exception != 0 ) {

    throwException0(_exception);
  }
  /*unpack results and cleanup*/
  return _result;
}



/**
 * Get the double parameter associated with {\tt name}.
 */
int32_t
bHYPRE::CGNR::GetDoubleValue( /* in */const ::std::string& name, /* out 
  */double& value )

{
  int32_t _result;
  ior_t* const loc_self = (struct bHYPRE_CGNR__object*) 
    ::bHYPRE::CGNR::_get_ior();
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  _result = (*(loc_self->d_epv->f_GetDoubleValue))(loc_self, /* in */ 
    name.c_str(), /* out */ &value, &_exception );
  /*dispatch to ior*/
  if (_exception != 0 ) {

    throwException0(_exception);
  }
  /*unpack results and cleanup*/
  return _result;
}



/**
 * (Optional) Do any preprocessing that may be necessary in
 * order to execute {\tt Apply}.
 */
int32_t
bHYPRE::CGNR::Setup( /* in */::bHYPRE::Vector b, /* in */::bHYPRE::Vector x )

{
  int32_t _result;
  ior_t* const loc_self = (struct bHYPRE_CGNR__object*) 
    ::bHYPRE::CGNR::_get_ior();
  struct bHYPRE_Vector__object* _local_b = (struct bHYPRE_Vector__object*) 
    b.::bHYPRE::Vector::_get_ior();
  struct bHYPRE_Vector__object* _local_x = (struct bHYPRE_Vector__object*) 
    x.::bHYPRE::Vector::_get_ior();
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  _result = (*(loc_self->d_epv->f_Setup))(loc_self, /* in */ _local_b, /* in */ 
    _local_x, &_exception );
  /*dispatch to ior*/
  if (_exception != 0 ) {

    throwException0(_exception);
  }
  /*unpack results and cleanup*/
  return _result;
}



/**
 * Apply the operator to {\tt b}, returning {\tt x}.
 */
int32_t
bHYPRE::CGNR::Apply( /* in */::bHYPRE::Vector b, /* inout */::bHYPRE::Vector& x 
  )

{
  int32_t _result;
  ior_t* const loc_self = (struct bHYPRE_CGNR__object*) 
    ::bHYPRE::CGNR::_get_ior();
  struct bHYPRE_Vector__object* _local_b = (struct bHYPRE_Vector__object*) 
    b.::bHYPRE::Vector::_get_ior();
  struct bHYPRE_Vector__object* _local_x = (struct bHYPRE_Vector__object*) 
    x.::bHYPRE::Vector::_get_ior();
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  _result = (*(loc_self->d_epv->f_Apply))(loc_self, /* in */ _local_b, /* inout 
    */ &_local_x, &_exception );
  /*dispatch to ior*/
  if (_exception != 0 ) {

    throwException0(_exception);
  }
  x._set_ior( _local_x);
  /*unpack results and cleanup*/
  return _result;
}



/**
 * Apply the adjoint of the operator to {\tt b}, returning {\tt x}.
 */
int32_t
bHYPRE::CGNR::ApplyAdjoint( /* in */::bHYPRE::Vector b, /* inout 
  */::bHYPRE::Vector& x )

{
  int32_t _result;
  ior_t* const loc_self = (struct bHYPRE_CGNR__object*) 
    ::bHYPRE::CGNR::_get_ior();
  struct bHYPRE_Vector__object* _local_b = (struct bHYPRE_Vector__object*) 
    b.::bHYPRE::Vector::_get_ior();
  struct bHYPRE_Vector__object* _local_x = (struct bHYPRE_Vector__object*) 
    x.::bHYPRE::Vector::_get_ior();
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  _result = (*(loc_self->d_epv->f_ApplyAdjoint))(loc_self, /* in */ _local_b, 
    /* inout */ &_local_x, &_exception );
  /*dispatch to ior*/
  if (_exception != 0 ) {

    throwException0(_exception);
  }
  x._set_ior( _local_x);
  /*unpack results and cleanup*/
  return _result;
}



//////////////////////////////////////////////////
// 
// End User Defined Methods
// (everything else in this file is specific to
//  Babel's C++ bindings)
// 

// static constructor
::bHYPRE::CGNR
bHYPRE::CGNR::_create() {
  struct sidl_BaseInterface__object * _exception;
  ::bHYPRE::CGNR self( (*_get_ext()->createObject)(NULL,&_exception), false );
  if (_exception) {
    throwException0(_exception);
  }
  return self;
}

// Internal data wrapping method
::bHYPRE::CGNR::ior_t*
bHYPRE::CGNR::_wrapObj(void* private_data) {
  struct sidl_BaseInterface__object *_exception;
  ::bHYPRE::CGNR::ior_t* returnValue = (*_get_ext()->createObject)(private_data,
    &_exception);
  if (_exception) {
    throwException0(_exception);
  }
  return returnValue;
}

// remote constructor
::bHYPRE::CGNR
bHYPRE::CGNR::_create(const std::string& url) {
  ior_t* ior_self;
  struct sidl_BaseInterface__object *_exception;
  ior_self = bHYPRE_CGNR__remoteCreate( url.c_str(), &_exception );
  if (_exception != 0 ) {
    throwException0(_exception);
  }
  return ::bHYPRE::CGNR( ior_self, false );
}

// remote connector
::bHYPRE::CGNR
bHYPRE::CGNR::_connect(const std::string& url, const bool ar ) {
  ior_t* ior_self;
  struct sidl_BaseInterface__object *_exception;
  ior_self = bHYPRE_CGNR__remoteConnect( url.c_str(), ar?TRUE:FALSE, 
    &_exception );
  if (_exception != 0 ) {
    throwException0(_exception);
  }
  return ::bHYPRE::CGNR( ior_self, false );
}

// copy constructor
bHYPRE::CGNR::CGNR ( const ::bHYPRE::CGNR& original ) {
  d_self = (struct bHYPRE_CGNR__object*) original.::bHYPRE::CGNR::_get_ior();
  if(d_self) {

    bHYPRE_Solver_IORCache = &((*reinterpret_cast< ior_t*>(
      d_self)).d_bhypre_solver);
    bHYPRE_Operator_IORCache = &((*reinterpret_cast< ior_t*>(
      d_self)).d_bhypre_operator);
    bHYPRE_PreconditionedSolver_IORCache = &((*reinterpret_cast< ior_t*>(
      d_self)).d_bhypre_preconditionedsolver);

    addRef();
  }
  d_weak_reference = false;
}

// assignment operator
::bHYPRE::CGNR&
bHYPRE::CGNR::operator=( const ::bHYPRE::CGNR& rhs ) {
  if ( d_self != rhs.d_self ) {
    if ( d_self != 0 ) {
      deleteRef();
    }
    d_self = (struct bHYPRE_CGNR__object*) rhs.::bHYPRE::CGNR::_get_ior();
    if(d_self) {

      bHYPRE_Solver_IORCache = &((*reinterpret_cast< ior_t*>(
        d_self)).d_bhypre_solver);
      bHYPRE_Operator_IORCache = &((*reinterpret_cast< ior_t*>(
        d_self)).d_bhypre_operator);
      bHYPRE_PreconditionedSolver_IORCache = &((*reinterpret_cast< ior_t*>(
        d_self)).d_bhypre_preconditionedsolver);

      addRef();
    }
    d_weak_reference = false;
  }
  return *this;
}

// conversion from ior to C++ class
bHYPRE::CGNR::CGNR ( ::bHYPRE::CGNR::ior_t* ior ) 
   : StubBase(reinterpret_cast< void*>(ior)) { 
  if(d_self) {

    bHYPRE_Solver_IORCache = &((*reinterpret_cast< ior_t*>(
      d_self)).d_bhypre_solver);
    bHYPRE_Operator_IORCache = &((*reinterpret_cast< ior_t*>(
      d_self)).d_bhypre_operator);
    bHYPRE_PreconditionedSolver_IORCache = &((*reinterpret_cast< ior_t*>(
      d_self)).d_bhypre_preconditionedsolver);

  }
}

// Alternate constructor: does not call addRef()
// (sets d_weak_reference=isWeak)
// For internal use by Impls (fixes bug#275)
bHYPRE::CGNR::CGNR ( ::bHYPRE::CGNR::ior_t* ior, bool isWeak ) : 
StubBase(reinterpret_cast< void*>(ior), isWeak){ 
  if(d_self) {

    bHYPRE_Solver_IORCache = &((*reinterpret_cast< ior_t*>(
      d_self)).d_bhypre_solver);
    bHYPRE_Operator_IORCache = &((*reinterpret_cast< ior_t*>(
      d_self)).d_bhypre_operator);
    bHYPRE_PreconditionedSolver_IORCache = &((*reinterpret_cast< ior_t*>(
      d_self)).d_bhypre_preconditionedsolver);

  }
}

// exec has special argument passing to avoid #include circularities
void ::bHYPRE::CGNR::_exec( const std::string& methodName, 
                        sidl::rmi::Call& inArgs,
                        sidl::rmi::Return& outArgs) { 
  ::bHYPRE::CGNR::ior_t* const loc_self = _get_ior();
  struct sidl_BaseInterface__object *throwaway_exception;
  (*loc_self->d_epv->f__exec)(loc_self,
                                methodName.c_str(),
                                inArgs._get_ior(),
                                outArgs._get_ior(),
                                &throwaway_exception);
}


/**
 * Get the URL of the Implementation of this object (for RMI)
 */
::std::string
bHYPRE::CGNR::_getURL(  )
// throws:
//       ::sidl::RuntimeException

{
  ::std::string _result;
  ior_t* const loc_self = (struct bHYPRE_CGNR__object*) 
    ::bHYPRE::CGNR::_get_ior();
  char * _local_result;
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  _local_result = (*(loc_self->d_epv->f__getURL))(loc_self, &_exception );
  /*dispatch to ior*/
  if (_exception != 0 ) {

    throwException0(_exception);
  }
  if (_local_result) {
    _result = _local_result;
    ::sidl_String_free( _local_result );
  }
  /*unpack results and cleanup*/
  return _result;
}


/**
 * Method to set whether or not method hooks should be invoked.
 */
void
bHYPRE::CGNR::_set_hooks( /* in */bool on )
// throws:
//       ::sidl::RuntimeException

{

  ior_t* const loc_self = (struct bHYPRE_CGNR__object*) 
    ::bHYPRE::CGNR::_get_ior();
  sidl_bool _local_on = on;
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  (*(loc_self->d_epv->f__set_hooks))(loc_self, /* in */ _local_on, &_exception 
    );
  /*dispatch to ior*/
  if (_exception != 0 ) {

    throwException0(_exception);
  }
  /*unpack results and cleanup*/
}


/**
 * Static Method to set whether or not method hooks should be invoked.
 */
void
bHYPRE::CGNR::_set_hooks_static( /* in */bool on )
// throws:
//       ::sidl::RuntimeException

{

  sidl_bool _local_on = on;
  sidl_BaseInterface__object * _exception;
  /*pack args to dispatch to ior*/
  ( _get_sepv()->f__set_hooks_static)( /* in */ _local_on, &_exception );
  /*dispatch to ior*/
  if (_exception != 0 ) {

    throwException0(_exception);
  }
  /*unpack results and cleanup*/
}

// protected method that implements casting
struct bHYPRE_CGNR__object* bHYPRE::CGNR::_cast(const void* src)
{
  ior_t* cast = NULL;

  if(!connect_loaded) {
    struct sidl_BaseInterface__object *throwaway_exception;
    sidl_rmi_ConnectRegistry_registerConnect("bHYPRE.CGNR", (
      void*)bHYPRE_CGNR__IHConnect, &throwaway_exception);
    connect_loaded = 1;
  }
  if ( src != 0 ) {
    // Actually, this thing is still const
    void* tmp = const_cast<void*>(src);
    struct sidl_BaseInterface__object *throwaway_exception;
    struct sidl_BaseInterface__object * base = reinterpret_cast< struct 
      sidl_BaseInterface__object *>(tmp);
    cast = reinterpret_cast< ior_t*>((*base->d_epv->f__cast)(base->d_object, 
      "bHYPRE.CGNR", &throwaway_exception));
  }
  return cast;
}

// Static data type
const ::bHYPRE::CGNR::ext_t * bHYPRE::CGNR::s_ext = 0;

// private static method to get static data type
const ::bHYPRE::CGNR::ext_t *
bHYPRE::CGNR::_get_ext()
  throw ( ::sidl::NullIORException)
{
  if (! s_ext ) {
#ifdef SIDL_STATIC_LIBRARY
    s_ext = bHYPRE_CGNR__externals();
#else
    s_ext = (struct bHYPRE_CGNR__external*)sidl_dynamicLoadIOR("bHYPRE.CGNR",
      "bHYPRE_CGNR__externals") ;
#endif
    sidl_checkIORVersion("bHYPRE.CGNR", s_ext->d_ior_major_version, 
      s_ext->d_ior_minor_version, 1, 0);
  }
  return s_ext;
}

