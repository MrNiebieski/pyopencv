// This file has been generated by Py++.

#include "boost/python.hpp"
#include "opencv_headers.hpp"
#include "pyopencvext_free_functions_getg.pypp.hpp"

namespace bp = boost::python;

void register_free_functions_getg(){

    { //::cv::getGaussianKernel
    
        typedef ::cv::Mat ( *getGaussianKernel_function_type )( int,double,int );
        
        bp::def( 
            "getGaussianKernel"
            , getGaussianKernel_function_type( &::cv::getGaussianKernel )
            , ( bp::arg("ksize"), bp::arg("sigma"), bp::arg("ktype")=(int)(6) ) );
    
    }

}
