// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "rectf.pypp.hpp"

namespace bp = boost::python;

void register_Rectf_class(){

    { //::cv::Rect_< float >
        typedef bp::class_< cv::Rect_< float > > Rectf_exposer_t;
        Rectf_exposer_t Rectf_exposer = Rectf_exposer_t( "Rectf", bp::init< >() );
        bp::scope Rectf_scope( Rectf_exposer );
        Rectf_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::Rect_< float > >() );
        Rectf_exposer.def( bp::init< float, float, float, float >(( bp::arg("_x"), bp::arg("_y"), bp::arg("_width"), bp::arg("_height") )) );
        Rectf_exposer.def( bp::init< cv::Rect_< float > const & >(( bp::arg("r") )) );
        Rectf_exposer.def( bp::init< cv::Point_< float > const &, cv::Size_< float > const & >(( bp::arg("org"), bp::arg("sz") )) );
        Rectf_exposer.def( bp::init< cv::Point_< float > const &, cv::Point_< float > const & >(( bp::arg("pt1"), bp::arg("pt2") )) );
        { //::cv::Rect_< float >::area
        
            typedef cv::Rect_< float > exported_class_t;
            typedef float ( exported_class_t::*area_function_type )(  ) const;
            
            Rectf_exposer.def( 
                "area"
                , area_function_type( &::cv::Rect_< float >::area ) );
        
        }
        { //::cv::Rect_< float >::br
        
            typedef cv::Rect_< float > exported_class_t;
            typedef ::cv::Point_< float > ( exported_class_t::*br_function_type )(  ) const;
            
            Rectf_exposer.def( 
                "br"
                , br_function_type( &::cv::Rect_< float >::br ) );
        
        }
        { //::cv::Rect_< float >::contains
        
            typedef cv::Rect_< float > exported_class_t;
            typedef bool ( exported_class_t::*contains_function_type )( ::cv::Point_< float > const & ) const;
            
            Rectf_exposer.def( 
                "contains"
                , contains_function_type( &::cv::Rect_< float >::contains )
                , ( bp::arg("pt") ) );
        
        }
        { //::cv::Rect_< float >::operator=
        
            typedef cv::Rect_< float > exported_class_t;
            typedef ::cv::Rect_< float > & ( exported_class_t::*assign_function_type )( ::cv::Rect_< float > const & ) ;
            
            Rectf_exposer.def( 
                "assign"
                , assign_function_type( &::cv::Rect_< float >::operator= )
                , ( bp::arg("r") )
                , bp::return_self< >() );
        
        }
        { //::cv::Rect_< float >::size
        
            typedef cv::Rect_< float > exported_class_t;
            typedef ::cv::Size_< float > ( exported_class_t::*size_function_type )(  ) const;
            
            Rectf_exposer.def( 
                "size"
                , size_function_type( &::cv::Rect_< float >::size ) );
        
        }
        { //::cv::Rect_< float >::tl
        
            typedef cv::Rect_< float > exported_class_t;
            typedef ::cv::Point_< float > ( exported_class_t::*tl_function_type )(  ) const;
            
            Rectf_exposer.def( 
                "tl"
                , tl_function_type( &::cv::Rect_< float >::tl ) );
        
        }
        Rectf_exposer.def_readwrite( "height", &cv::Rect_< float >::height );
        Rectf_exposer.def_readwrite( "width", &cv::Rect_< float >::width );
        Rectf_exposer.def_readwrite( "x", &cv::Rect_< float >::x );
        Rectf_exposer.def_readwrite( "y", &cv::Rect_< float >::y );
    }

}
