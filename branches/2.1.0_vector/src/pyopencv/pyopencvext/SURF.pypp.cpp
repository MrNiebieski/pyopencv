// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "SURF.pypp.hpp"

namespace bp = boost::python;

static boost::python::object __call___8fbaf2f3b7cf23fdd67db0f4874c6b20( ::cv::SURF const & inst, ::cv::Mat const & img, ::cv::Mat const & mask ){
    std::vector<cv::KeyPoint> keypoints2;
    inst.operator()(img, mask, keypoints2);
    return bp::object( keypoints2 );
}

static boost::python::object __call___8904ace00c2f24b8eb00d3aa8ac85014( ::cv::SURF const & inst, ::cv::Mat const & img, ::cv::Mat const & mask, ::std::vector< cv::KeyPoint > & keypoints, bool useProvidedKeypoints=false ){
    std::vector<float> descriptors2;
    inst.operator()(img, mask, keypoints, descriptors2, useProvidedKeypoints);
    return bp::object( descriptors2 );
}

void register_SURF_class(){

    { //::cv::SURF
        typedef bp::class_< cv::SURF, bp::bases< CvSURFParams > > SURF_exposer_t;
        SURF_exposer_t SURF_exposer = SURF_exposer_t( "SURF", bp::init< >() );
        bp::scope SURF_scope( SURF_exposer );
        SURF_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::SURF >() );
        SURF_exposer.def( bp::init< double, bp::optional< int, int, bool > >(( bp::arg("_hessianThreshold"), bp::arg("_nOctaves")=(int)(4), bp::arg("_nOctaveLayers")=(int)(2), bp::arg("_extended")=(bool)(false) )) );
        bp::implicitly_convertible< double, cv::SURF >();
        { //::cv::SURF::descriptorSize
        
            typedef int ( ::cv::SURF::*descriptorSize_function_type )(  ) const;
            
            SURF_exposer.def( 
                "descriptorSize"
                , descriptorSize_function_type( &::cv::SURF::descriptorSize ) );
        
        }
        { //::cv::SURF::operator()
        
            typedef boost::python::object ( *__call___function_type )( cv::SURF const &,cv::Mat const &,cv::Mat const & );
            
            SURF_exposer.def( 
                "__call__"
                , __call___function_type( &__call___8fbaf2f3b7cf23fdd67db0f4874c6b20 )
                , ( bp::arg("inst"), bp::arg("img"), bp::arg("mask") )
                , "\nWrapped function:"
    "\n    operator()"
    "\nArgument 'keypoints':"\
    "\n    C++ type: ::std::vector< cv::KeyPoint > &."\
    "\n    Python type: vector_KeyPoint."\
    "\n    Output argument: omitted from input and returned as output."\
    "\nReturns:"\
    "\n    keypoints" );
        
        }
        { //::cv::SURF::operator()
        
            typedef boost::python::object ( *__call___function_type )( cv::SURF const &,cv::Mat const &,cv::Mat const &,std::vector<cv::KeyPoint> &,bool );
            
            SURF_exposer.def( 
                "__call__"
                , __call___function_type( &__call___8904ace00c2f24b8eb00d3aa8ac85014 )
                , ( bp::arg("inst"), bp::arg("img"), bp::arg("mask"), bp::arg("keypoints"), bp::arg("useProvidedKeypoints")=(bool)(false) )
                , "\nWrapped function:"
    "\n    operator()"
    "\nArgument 'descriptors':"\
    "\n    C++ type: ::std::vector< float > &."\
    "\n    Python type: vector_float32."\
    "\n    Output argument: omitted from input and returned as output."\
    "\nReturns:"\
    "\n    descriptors" );
        
        }
    }

}
