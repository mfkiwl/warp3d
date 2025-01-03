// 
// File:          bHYPRE_PreconditionedSolver.hxx
// Symbol:        bHYPRE.PreconditionedSolver-v1.0.0
// Symbol Type:   interface
// Babel Version: 1.0.4
// Description:   Client-side glue code for bHYPRE.PreconditionedSolver
// 
// WARNING: Automatically generated; changes will be lost
// 
// 

#ifndef included_bHYPRE_PreconditionedSolver_hxx
#define included_bHYPRE_PreconditionedSolver_hxx

#ifndef included_sidl_cxx_hxx
#include "sidl_cxx.hxx"
#endif
// declare class before main #includes
// (this alleviates circular #include guard problems)[BUG#393]
namespace bHYPRE { 

  class PreconditionedSolver;
} // end namespace bHYPRE

// Some compilers need to define array template before the specializations
namespace sidl {
  template<>
  class array< ::bHYPRE::PreconditionedSolver >;
}
// 
// Forward declarations for method dependencies.
// 
namespace bHYPRE { 

  class PreconditionedSolver;
} // end namespace bHYPRE

namespace bHYPRE { 

  class Solver;
} // end namespace bHYPRE

namespace sidl { 

  class RuntimeException;
} // end namespace sidl

#ifndef included_sidl_cxx_hxx
#include "sidl_cxx.hxx"
#endif
#ifndef included_bHYPRE_PreconditionedSolver_IOR_h
#include "bHYPRE_PreconditionedSolver_IOR.h"
#endif
#ifndef included_bHYPRE_Solver_hxx
#include "bHYPRE_Solver.hxx"
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
namespace bHYPRE { 

  /**
   * Symbol "bHYPRE.PreconditionedSolver" (version 1.0.0)
   */
  class PreconditionedSolver: public virtual ::bHYPRE::Solver {

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
     * Set the preconditioner.
     */
    int32_t
    SetPreconditioner (
      /* in */::bHYPRE::Solver s
    )
    ;


    /**
     * user defined non-static method
     */
    int32_t
    GetPreconditioner (
      /* out */::bHYPRE::Solver& s
    )
    ;


    /**
     * user defined non-static method
     */
    int32_t
    Clone (
      /* out */::bHYPRE::PreconditionedSolver& x
    )
    ;



    //////////////////////////////////////////////////
    // 
    // End User Defined Methods
    // (everything else in this file is specific to
    //  Babel's C++ bindings)
    // 

  public:
    typedef struct bHYPRE_PreconditionedSolver__object ior_t;
    typedef struct bHYPRE_PreconditionedSolver__external ext_t;
    typedef struct bHYPRE_PreconditionedSolver__sepv sepv_t;

    // default constructor
    PreconditionedSolver() { 
      bHYPRE_PreconditionedSolver_IORCache = NULL;
    }

    // RMI connect
    static inline ::bHYPRE::PreconditionedSolver _connect( /*in*/ const 
      std::string& url ) { 
      return _connect(url, true);
    }

    // RMI connect 2
    static ::bHYPRE::PreconditionedSolver _connect( /*in*/ const std::string& 
      url, /*in*/ const bool ar  );

    // default destructor
    virtual ~PreconditionedSolver () { }

    // copy constructor
    PreconditionedSolver ( const PreconditionedSolver& original );

    // assignment operator
    PreconditionedSolver& operator= ( const PreconditionedSolver& rhs );

    // conversion from ior to C++ class
    PreconditionedSolver ( PreconditionedSolver::ior_t* ior );

    // Alternate constructor: does not call addRef()
    // (sets d_weak_reference=isWeak)
    // For internal use by Impls (fixes bug#275)
    PreconditionedSolver ( PreconditionedSolver::ior_t* ior, bool isWeak );

    inline ior_t* _get_ior() const throw() {
      if(!bHYPRE_PreconditionedSolver_IORCache) { 
        bHYPRE_PreconditionedSolver_IORCache = 
          ::bHYPRE::PreconditionedSolver::_cast((void*)d_self);
        if (bHYPRE_PreconditionedSolver_IORCache) {
          struct sidl_BaseInterface__object *throwaway_exception;
          (bHYPRE_PreconditionedSolver_IORCache->d_epv->f_deleteRef)(
            bHYPRE_PreconditionedSolver_IORCache->d_object, 
            &throwaway_exception);  
        }  
      }
      return bHYPRE_PreconditionedSolver_IORCache;
    }

    void _set_ior( ior_t* ptr ) throw () { 
      d_self = reinterpret_cast< void*>(ptr);
    }

    bool _is_nil() const throw () { return (d_self==0); }

    bool _not_nil() const throw () { return (d_self!=0); }

    bool operator !() const throw () { return (d_self==0); }

    static inline const char * type_name() throw () { return 
      "bHYPRE.PreconditionedSolver";}

    static struct bHYPRE_PreconditionedSolver__object* _cast(const void* src);

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
    mutable ior_t* bHYPRE_PreconditionedSolver_IORCache;
  }; // end class PreconditionedSolver
} // end namespace bHYPRE

extern "C" {


#pragma weak bHYPRE_PreconditionedSolver__connectI

#pragma weak bHYPRE_PreconditionedSolver__rmicast

  /**
   * Cast method for interface and class type conversions.
   */
  struct bHYPRE_PreconditionedSolver__object*
  bHYPRE_PreconditionedSolver__rmicast(
    void* obj, struct sidl_BaseInterface__object **_ex);

  /**
   * RMI connector function for the class. (no addref)
   */
  struct bHYPRE_PreconditionedSolver__object*
  bHYPRE_PreconditionedSolver__connectI(const char * url, sidl_bool ar, struct 
    sidl_BaseInterface__object **_ex);


} // end extern "C"
namespace sidl {
  // traits specialization
  template<>
  struct array_traits< ::bHYPRE::PreconditionedSolver > {
    typedef array< ::bHYPRE::PreconditionedSolver > cxx_array_t;
    typedef ::bHYPRE::PreconditionedSolver cxx_item_t;
    typedef struct bHYPRE_PreconditionedSolver__array ior_array_t;
    typedef sidl_interface__array ior_array_internal_t;
    typedef struct bHYPRE_PreconditionedSolver__object ior_item_t;
    typedef cxx_item_t value_type;
    typedef value_type reference;
    typedef value_type* pointer;
    typedef const value_type const_reference;
    typedef const value_type* const_pointer;
    typedef array_iter< array_traits< ::bHYPRE::PreconditionedSolver > > 
      iterator;
    typedef const_array_iter< array_traits< ::bHYPRE::PreconditionedSolver > > 
      const_iterator;
  };

  // array specialization
  template<>
  class array< ::bHYPRE::PreconditionedSolver >: public interface_array< 
    array_traits< ::bHYPRE::PreconditionedSolver > > {
  public:
    typedef interface_array< array_traits< ::bHYPRE::PreconditionedSolver > > 
      Base;
    typedef array_traits< ::bHYPRE::PreconditionedSolver >::cxx_array_t         
      cxx_array_t;
    typedef array_traits< ::bHYPRE::PreconditionedSolver >::cxx_item_t          
      cxx_item_t;
    typedef array_traits< ::bHYPRE::PreconditionedSolver >::ior_array_t         
      ior_array_t;
    typedef array_traits< ::bHYPRE::PreconditionedSolver 
      >::ior_array_internal_t ior_array_internal_t;
    typedef array_traits< ::bHYPRE::PreconditionedSolver >::ior_item_t          
      ior_item_t;

    /**
     * conversion from ior to C++ class
     * (constructor/casting operator)
     */
    array( struct bHYPRE_PreconditionedSolver__array* src = 0) : Base(src) {}

    /**
     * copy constructor
     */
    array( const array< ::bHYPRE::PreconditionedSolver >&src) : Base(src) {}

    /**
     * assignment
     */
    array< ::bHYPRE::PreconditionedSolver >&
    operator =( const array< ::bHYPRE::PreconditionedSolver >&rhs ) { 
      if (d_array != rhs._get_baseior()) {
        if (d_array) deleteRef();
        d_array = const_cast<sidl__array *>(rhs._get_baseior());
        if (d_array) addRef();
      }
      return *this;
    }

  };
}

#endif
