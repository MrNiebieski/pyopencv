// This file has been generated by Py++.

#include "boost/python.hpp"
#include "opencv_headers.hpp"
#include "pyopencvext_free_functions_ce.pypp.hpp"

namespace bp = boost::python;

void register_free_functions_ce(){

    { //::cvCeil
    
        typedef int ( *ceil_function_type )( double );
        
        bp::def( 
            "ceil"
            , ceil_function_type( &::cvCeil )
            , ( bp::arg("value") )
            , "\nWrapped function:"
    "\n    cvCeil" );
    
    }

}