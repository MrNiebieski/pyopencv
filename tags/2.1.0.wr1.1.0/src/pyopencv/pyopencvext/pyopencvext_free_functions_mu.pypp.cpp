// This file has been generated by Py++.

#include "boost/python.hpp"
#include "opencv_headers.hpp"
#include "pyopencvext_free_functions_mu.pypp.hpp"

namespace bp = boost::python;

void register_free_functions_mu(){

    { //::cv::mulSpectrums
    
        typedef void ( *mulSpectrums_function_type )( ::cv::Mat const &,::cv::Mat const &,::cv::Mat &,int,bool );
        
        bp::def( 
            "mulSpectrums"
            , mulSpectrums_function_type( &::cv::mulSpectrums )
            , ( bp::arg("a"), bp::arg("b"), bp::arg("c"), bp::arg("flags"), bp::arg("conjB")=(bool)(false) )
            , "\nPerforms per-element multiplication of two Fourier spectrums."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-mulspectrums" );
    
    }

    { //::cv::mulTransposed
    
        typedef void ( *mulTransposed_function_type )( ::cv::Mat const &,::cv::Mat &,bool,::cv::Mat const &,double,int );
        
        bp::def( 
            "mulTransposed"
            , mulTransposed_function_type( &::cv::mulTransposed )
            , ( bp::arg("a"), bp::arg("c"), bp::arg("aTa"), bp::arg("delta")=cv::Mat(), bp::arg("scale")=1, bp::arg("rtype")=(int)(-0x000000001) )
            , "\nCalculates the product of a matrix and its transposition."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-multransposed" );
    
    }

    { //::cv::multiply
    
        typedef void ( *multiply_function_type )( ::cv::MatND const &,::cv::MatND const &,::cv::MatND &,double );
        
        bp::def( 
            "multiply"
            , multiply_function_type( &::cv::multiply )
            , ( bp::arg("a"), bp::arg("b"), bp::arg("c"), bp::arg("scale")=1 )
            , "\nCalculates the per-element scaled product of two arrays."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-multiply" );
    
    }

    { //::cv::multiply
    
        typedef void ( *multiply_function_type )( ::cv::Mat const &,::cv::Mat const &,::cv::Mat &,double );
        
        bp::def( 
            "multiply"
            , multiply_function_type( &::cv::multiply )
            , ( bp::arg("a"), bp::arg("b"), bp::arg("c"), bp::arg("scale")=1 )
            , "\nCalculates the per-element scaled product of two arrays."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-multiply" );
    
    }

}
