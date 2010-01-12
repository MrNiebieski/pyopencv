// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "vec4s.pypp.hpp"

namespace bp = boost::python;

void register_Vec4s_class(){

    { //::cv::Vec< short, 4 >
        typedef bp::class_< cv::Vec< short, 4 > > Vec4s_exposer_t;
        Vec4s_exposer_t Vec4s_exposer = Vec4s_exposer_t( "Vec4s", bp::init< >() );
        bp::scope Vec4s_scope( Vec4s_exposer );
        Vec4s_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::Vec< short, 4 > >() );
        bp::scope().attr("depth") = (int)cv::Vec<short, 4>::depth;
        bp::scope().attr("channels") = (int)cv::Vec<short, 4>::channels;
        bp::scope().attr("type") = (int)cv::Vec<short, 4>::type;
        Vec4s_exposer.def( bp::init< short int >(( bp::arg("v0") )) );
        bp::implicitly_convertible< short int, cv::Vec< short, 4 > >();
        Vec4s_exposer.def( bp::init< short int, short int >(( bp::arg("v0"), bp::arg("v1") )) );
        Vec4s_exposer.def( bp::init< short int, short int, short int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2") )) );
        Vec4s_exposer.def( bp::init< short int, short int, short int, short int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3") )) );
        Vec4s_exposer.def( bp::init< short int, short int, short int, short int, short int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4") )) );
        Vec4s_exposer.def( bp::init< short int, short int, short int, short int, short int, short int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5") )) );
        Vec4s_exposer.def( bp::init< short int, short int, short int, short int, short int, short int, short int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6") )) );
        Vec4s_exposer.def( bp::init< short int, short int, short int, short int, short int, short int, short int, short int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6"), bp::arg("v7") )) );
        Vec4s_exposer.def( bp::init< short int, short int, short int, short int, short int, short int, short int, short int, short int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6"), bp::arg("v7"), bp::arg("v8") )) );
        Vec4s_exposer.def( bp::init< short int, short int, short int, short int, short int, short int, short int, short int, short int, short int >(( bp::arg("v0"), bp::arg("v1"), bp::arg("v2"), bp::arg("v3"), bp::arg("v4"), bp::arg("v5"), bp::arg("v6"), bp::arg("v7"), bp::arg("v8"), bp::arg("v9") )) );
        Vec4s_exposer.def( bp::init< cv::Vec< short, 4 > const & >(( bp::arg("v") )) );
        { //::cv::Vec< short, 4 >::all
        
            typedef cv::Vec< short, 4 > exported_class_t;
            typedef ::cv::Vec< short, 4 > ( *all_function_type )( short int );
            
            Vec4s_exposer.def( 
                "all"
                , all_function_type( &::cv::Vec< short, 4 >::all )
                , ( bp::arg("alpha") ) );
        
        }
        { //::cv::Vec< short, 4 >::cross
        
            typedef cv::Vec< short, 4 > exported_class_t;
            typedef ::cv::Vec< short, 4 > ( exported_class_t::*cross_function_type )( ::cv::Vec< short, 4 > const & ) const;
            
            Vec4s_exposer.def( 
                "cross"
                , cross_function_type( &::cv::Vec< short, 4 >::cross )
                , ( bp::arg("v") ) );
        
        }
        { //::cv::Vec< short, 4 >::ddot
        
            typedef cv::Vec< short, 4 > exported_class_t;
            typedef double ( exported_class_t::*ddot_function_type )( ::cv::Vec< short, 4 > const & ) const;
            
            Vec4s_exposer.def( 
                "ddot"
                , ddot_function_type( &::cv::Vec< short, 4 >::ddot )
                , ( bp::arg("v") ) );
        
        }
        { //::cv::Vec< short, 4 >::dot
        
            typedef cv::Vec< short, 4 > exported_class_t;
            typedef short int ( exported_class_t::*dot_function_type )( ::cv::Vec< short, 4 > const & ) const;
            
            Vec4s_exposer.def( 
                "dot"
                , dot_function_type( &::cv::Vec< short, 4 >::dot )
                , ( bp::arg("v") ) );
        
        }
        { //::cv::Vec< short, 4 >::operator[]
        
            typedef cv::Vec< short, 4 > exported_class_t;
            typedef short int ( exported_class_t::*__getitem___function_type )( int ) const;
            
            Vec4s_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::cv::Vec< short, 4 >::operator[] )
                , ( bp::arg("i") ) );
        
        }
        { //::cv::Vec< short, 4 >::operator[]
        
            typedef cv::Vec< short, 4 > exported_class_t;
            typedef short int & ( exported_class_t::*__getitem___function_type )( int ) ;
            
            Vec4s_exposer.def( 
                "__getitem__"
                , __getitem___function_type( &::cv::Vec< short, 4 >::operator[] )
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_non_const_reference >() );
        
        }
        Vec4s_exposer.staticmethod( "all" );
    }

}
