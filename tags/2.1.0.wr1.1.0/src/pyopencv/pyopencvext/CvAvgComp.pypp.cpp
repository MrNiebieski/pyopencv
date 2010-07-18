// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "CvAvgComp.pypp.hpp"

namespace bp = boost::python;

static cv::Rect_<int> *get_rect(CvAvgComp const &inst) { return (cv::Rect_<int> *)(&inst.rect); }

void register_CvAvgComp_class(){

    bp::class_< CvAvgComp >( "CvAvgComp" )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvAvgComp >() )    
        .def_readwrite( "neighbors", &CvAvgComp::neighbors )    
        .add_property( "rect", bp::make_function(&::get_rect, bp::return_internal_reference<>()) );

}
