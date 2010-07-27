// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "CvSURFPoint.pypp.hpp"

namespace bp = boost::python;

static cv::Point_<float> *get_pt(CvSURFPoint const &inst) { return (cv::Point_<float> *)(&inst.pt); }

void register_CvSURFPoint_class(){

    bp::class_< CvSURFPoint >( "CvSURFPoint" )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvSURFPoint >() )    
        .def_readwrite( "dir", &CvSURFPoint::dir )    
        .def_readwrite( "hessian", &CvSURFPoint::hessian )    
        .def_readwrite( "laplacian", &CvSURFPoint::laplacian )    
        .def_readwrite( "size", &CvSURFPoint::size )    
        .add_property( "pt", bp::make_function(&::get_pt, bp::return_internal_reference<>()) );

}