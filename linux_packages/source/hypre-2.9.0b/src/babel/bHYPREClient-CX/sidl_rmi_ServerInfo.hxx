// 
// File:          sidl_rmi_ServerInfo.hxx
// Symbol:        sidl.rmi.ServerInfo-v0.9.15
// Symbol Type:   interface
// Babel Version: 1.0.4
// Release:       $Name: V2-9-0b $
// Revision:      @(#) $Id: sidl_rmi_ServerInfo.hxx,v 1.4 2007/09/27 19:55:47 painter Exp $
// Description:   Client-side glue code for sidl.rmi.ServerInfo
// 
// Copyright (c) 2000-2002, The Regents of the University of California.
// Produced at the Lawrence Livermore National Laboratory.
// Written by the Components Team <components@llnl.gov>
// All rights reserved.
// 
// This file is part of Babel. For more information, see
// http://www.llnl.gov/CASC/components/. Please read the COPYRIGHT file
// for Our Notice and the LICENSE file for the GNU Lesser General Public
// License.
// 
// This program is free software; you can redistribute it and/or modify it
// under the terms of the GNU Lesser General Public License (as published by
// the Free Software Foundation) version 2.1 dated February 1999.
// 
// This program is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the IMPLIED WARRANTY OF
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the terms and
// conditions of the GNU Lesser General Public License for more details.
// 
// You should have recieved a copy of the GNU Lesser General Public License
// along with this program; if not, write to the Free Software Foundation,
// Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
// 
// WARNING: Automatically generated; changes will be lost
// 
// 

#ifndef included_sidl_rmi_ServerInfo_hxx
#define included_sidl_rmi_ServerInfo_hxx

#ifndef included_sidl_cxx_hxx
#include "sidl_cxx.hxx"
#endif
// declare class before main #includes
// (this alleviates circular #include guard problems)[BUG#393]
namespace sidl { 
  namespace rmi { 

    class ServerInfo;
  } // end namespace rmi
} // end namespace sidl

// Some compilers need to define array template before the specializations
namespace sidl {
  template<>
  class array< ::sidl::rmi::ServerInfo >;
}
// 
// Forward declarations for method dependencies.
// 
namespace sidl { 

  class RuntimeException;
} // end namespace sidl

namespace sidl { 
  namespace io { 

    class Serializable;
  } // end namespace io
} // end namespace sidl

#ifndef included_sidl_cxx_hxx
#include "sidl_cxx.hxx"
#endif
#ifndef included_sidl_rmi_ServerInfo_IOR_h
#include "sidl_rmi_ServerInfo_IOR.h"
#endif
#ifndef included_sidl_BaseInterface_hxx
#include "sidl_BaseInterface.hxx"
#endif
namespace sidl {
  namespace rmi {
    class Call;
    class Return;
    class Ticket;
  }
  namespace rmi {
    class InstanceHandle;
  }
}
namespace sidl { 
  namespace rmi { 

    /**
     * Symbol "sidl.rmi.ServerInfo" (version 0.9.15)
     * 
     *  
     * ServerInfo is an interface (possibly implemented by the ORB
     * itself) that provides functions to deal with the problems
     * associated with passing local object remotely.  It should be
     * registered with the ServerRegistry for general use.
     */
    class ServerInfo: public virtual ::sidl::BaseInterface {

      //////////////////////////////////////////////////
      // 
      // Special methods for throwing exceptions
      // 

    private:
      static 
      void
      throwException0(
        struct sidl_BaseInterface__object *_exception
      )
        // throws:
      ;

      //////////////////////////////////////////////////
      // 
      // User Defined Methods
      // 

    public:
      /**
       * user defined non-static method
       */
      ::std::string
      getServerURL (
        /* in */const ::std::string& objID
      )
      ;



      /**
       *  
       * For internal Babel use ONLY. Needed by Babel to determine if
       * a url points to a local or remote object.  Returns the
       * objectID if is local, Null otherwise.
       */
      ::std::string
      isLocalObject (
        /* in */const ::std::string& url
      )
      ;



      /**
       *  
       * This gets an array of logged exceptions.  If an exception
       * can not be thrown back to the caller, we log it with the
       * Server.  This gets the array of all those exceptions.  THIS
       * IS SOMETHING OF A TEST! THIS MAY CHANGE!
       */
      ::sidl::array< ::sidl::io::Serializable>
      getExceptions() ;


      //////////////////////////////////////////////////
      // 
      // End User Defined Methods
      // (everything else in this file is specific to
      //  Babel's C++ bindings)
      // 

    public:
      typedef struct sidl_rmi_ServerInfo__object ior_t;
      typedef struct sidl_rmi_ServerInfo__external ext_t;
      typedef struct sidl_rmi_ServerInfo__sepv sepv_t;

      // default constructor
      ServerInfo() { 
        sidl_rmi_ServerInfo_IORCache = NULL;
      }

      // RMI connect
      static inline ::sidl::rmi::ServerInfo _connect( /*in*/ const std::string& 
        url ) { 
        return _connect(url, true);
      }

      // RMI connect 2
      static ::sidl::rmi::ServerInfo _connect( /*in*/ const std::string& url, 
        /*in*/ const bool ar  );

      // default destructor
      virtual ~ServerInfo () { }

      // copy constructor
      ServerInfo ( const ServerInfo& original );

      // assignment operator
      ServerInfo& operator= ( const ServerInfo& rhs );

      // conversion from ior to C++ class
      ServerInfo ( ServerInfo::ior_t* ior );

      // Alternate constructor: does not call addRef()
      // (sets d_weak_reference=isWeak)
      // For internal use by Impls (fixes bug#275)
      ServerInfo ( ServerInfo::ior_t* ior, bool isWeak );

      inline ior_t* _get_ior() const throw() {
        if(!sidl_rmi_ServerInfo_IORCache) { 
          sidl_rmi_ServerInfo_IORCache = ::sidl::rmi::ServerInfo::_cast((
            void*)d_self);
          if (sidl_rmi_ServerInfo_IORCache) {
            struct sidl_BaseInterface__object *throwaway_exception;
            (sidl_rmi_ServerInfo_IORCache->d_epv->f_deleteRef)(
              sidl_rmi_ServerInfo_IORCache->d_object, &throwaway_exception);  
          }  
        }
        return sidl_rmi_ServerInfo_IORCache;
      }

      void _set_ior( ior_t* ptr ) throw () { 
        d_self = reinterpret_cast< void*>(ptr);
      }

      bool _is_nil() const throw () { return (d_self==0); }

      bool _not_nil() const throw () { return (d_self!=0); }

      bool operator !() const throw () { return (d_self==0); }

      static inline const char * type_name() throw () { return 
        "sidl.rmi.ServerInfo";}

      static struct sidl_rmi_ServerInfo__object* _cast(const void* src);

      // execute member function by name
      void _exec(const std::string& methodName,
                 ::sidl::rmi::Call& inArgs,
                 ::sidl::rmi::Return& outArgs);

      /**
       * Get the URL of the Implementation of this object (for RMI)
       */
      ::std::string
      _getURL() // throws:
      //     ::sidl::RuntimeException
      ;


      /**
       * Method to set whether or not method hooks should be invoked.
       */
      void
      _set_hooks (
        /* in */bool on
      )
      // throws:
      //     ::sidl::RuntimeException
      ;

      // return true iff object is remote
      bool _isRemote() const { 
        ior_t* self = const_cast<ior_t*>(_get_ior() );
        struct sidl_BaseInterface__object *throwaway_exception;
        return (*self->d_epv->f__isRemote)(self, &throwaway_exception) == TRUE;
      }

      // return true iff object is local
      bool _isLocal() const {
        return !_isRemote();
      }

    protected:
      // Pointer to external (DLL loadable) symbols (shared among instances)
      static const ext_t * s_ext;

    public:
      static const ext_t * _get_ext() throw ( ::sidl::NullIORException );


      //////////////////////////////////////////////////
      // 
      // Locally Cached IOR pointer
      // 

    protected:
      mutable ior_t* sidl_rmi_ServerInfo_IORCache;
    }; // end class ServerInfo
  } // end namespace rmi
} // end namespace sidl

extern "C" {


#pragma weak sidl_rmi_ServerInfo__connectI

#pragma weak sidl_rmi_ServerInfo__rmicast

  /**
   * Cast method for interface and class type conversions.
   */
  struct sidl_rmi_ServerInfo__object*
  sidl_rmi_ServerInfo__rmicast(
    void* obj, struct sidl_BaseInterface__object **_ex);

  /**
   * RMI connector function for the class. (no addref)
   */
  struct sidl_rmi_ServerInfo__object*
  sidl_rmi_ServerInfo__connectI(const char * url, sidl_bool ar, struct 
    sidl_BaseInterface__object **_ex);


} // end extern "C"
namespace sidl {
  // traits specialization
  template<>
  struct array_traits< ::sidl::rmi::ServerInfo > {
    typedef array< ::sidl::rmi::ServerInfo > cxx_array_t;
    typedef ::sidl::rmi::ServerInfo cxx_item_t;
    typedef struct sidl_rmi_ServerInfo__array ior_array_t;
    typedef sidl_interface__array ior_array_internal_t;
    typedef struct sidl_rmi_ServerInfo__object ior_item_t;
    typedef cxx_item_t value_type;
    typedef value_type reference;
    typedef value_type* pointer;
    typedef const value_type const_reference;
    typedef const value_type* const_pointer;
    typedef array_iter< array_traits< ::sidl::rmi::ServerInfo > > iterator;
    typedef const_array_iter< array_traits< ::sidl::rmi::ServerInfo > > 
      const_iterator;
  };

  // array specialization
  template<>
  class array< ::sidl::rmi::ServerInfo >: public interface_array< array_traits< 
    ::sidl::rmi::ServerInfo > > {
  public:
    typedef interface_array< array_traits< ::sidl::rmi::ServerInfo > > Base;
    typedef array_traits< ::sidl::rmi::ServerInfo >::cxx_array_t          
      cxx_array_t;
    typedef array_traits< ::sidl::rmi::ServerInfo >::cxx_item_t           
      cxx_item_t;
    typedef array_traits< ::sidl::rmi::ServerInfo >::ior_array_t          
      ior_array_t;
    typedef array_traits< ::sidl::rmi::ServerInfo >::ior_array_internal_t 
      ior_array_internal_t;
    typedef array_traits< ::sidl::rmi::ServerInfo >::ior_item_t           
      ior_item_t;

    /**
     * conversion from ior to C++ class
     * (constructor/casting operator)
     */
    array( struct sidl_rmi_ServerInfo__array* src = 0) : Base(src) {}

    /**
     * copy constructor
     */
    array( const array< ::sidl::rmi::ServerInfo >&src) : Base(src) {}

    /**
     * assignment
     */
    array< ::sidl::rmi::ServerInfo >&
    operator =( const array< ::sidl::rmi::ServerInfo >&rhs ) { 
      if (d_array != rhs._get_baseior()) {
        if (d_array) deleteRef();
        d_array = const_cast<sidl__array *>(rhs._get_baseior());
        if (d_array) addRef();
      }
      return *this;
    }

  };
}

#ifndef included_sidl_io_Serializable_hxx
#include "sidl_io_Serializable.hxx"
#endif
#endif
