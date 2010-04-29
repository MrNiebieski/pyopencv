// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "boost/python/object/life_support.hpp"
#include "Ptr_CvHaarClassifierCascade.pypp.hpp"

namespace bp = boost::python;

static bp::object from_CvHaarClassifierCascade(bp::object const &inst_CvHaarClassifierCascade)
{
    bp::extract<CvHaarClassifierCascade *> elem(inst_CvHaarClassifierCascade);
    if(!elem.check())
    {
        char s[300];
        sprintf( s, "Argument 'inst_CvHaarClassifierCascade' must contain an object of type CvHaarClassifierCascade." );
        PyErr_SetString(PyExc_TypeError, s);        
        throw bp::error_already_set();
    }
    
    bp::object result = bp::object(::cv::Ptr< CvHaarClassifierCascade >(elem()));
    bp::objects::make_nurse_and_patient(result.ptr(), inst_CvHaarClassifierCascade.ptr());
    return result;
}

static CvHaarClassifierCascade const &pointee(::cv::Ptr< CvHaarClassifierCascade > const &inst) { return *((CvHaarClassifierCascade const *)inst); }

void register_Ptr_CvHaarClassifierCascade_class(){

    { //::cv::Ptr< CvHaarClassifierCascade >
        typedef bp::class_< cv::Ptr< CvHaarClassifierCascade > > Ptr_CvHaarClassifierCascade_exposer_t;
        Ptr_CvHaarClassifierCascade_exposer_t Ptr_CvHaarClassifierCascade_exposer = Ptr_CvHaarClassifierCascade_exposer_t( "Ptr_CvHaarClassifierCascade", bp::init< >() );
        bp::scope Ptr_CvHaarClassifierCascade_scope( Ptr_CvHaarClassifierCascade_exposer );
        Ptr_CvHaarClassifierCascade_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::Ptr< CvHaarClassifierCascade > >() );
        Ptr_CvHaarClassifierCascade_exposer.def( bp::init< cv::Ptr< CvHaarClassifierCascade > const & >(( bp::arg("ptr") )) );
        { //::cv::Ptr< CvHaarClassifierCascade >::addref
        
            typedef cv::Ptr< CvHaarClassifierCascade > exported_class_t;
            typedef void ( exported_class_t::*addref_function_type )(  ) ;
            
            Ptr_CvHaarClassifierCascade_exposer.def( 
                "addref"
                , addref_function_type( &::cv::Ptr< CvHaarClassifierCascade >::addref ) );
        
        }
        { //::cv::Ptr< CvHaarClassifierCascade >::delete_obj
        
            typedef cv::Ptr< CvHaarClassifierCascade > exported_class_t;
            typedef void ( exported_class_t::*delete_obj_function_type )(  ) ;
            
            Ptr_CvHaarClassifierCascade_exposer.def( 
                "delete_obj"
                , delete_obj_function_type( &::cv::Ptr< CvHaarClassifierCascade >::delete_obj ) );
        
        }
        { //::cv::Ptr< CvHaarClassifierCascade >::empty
        
            typedef cv::Ptr< CvHaarClassifierCascade > exported_class_t;
            typedef bool ( exported_class_t::*empty_function_type )(  ) const;
            
            Ptr_CvHaarClassifierCascade_exposer.def( 
                "empty"
                , empty_function_type( &::cv::Ptr< CvHaarClassifierCascade >::empty ) );
        
        }
        { //::cv::Ptr< CvHaarClassifierCascade >::release
        
            typedef cv::Ptr< CvHaarClassifierCascade > exported_class_t;
            typedef void ( exported_class_t::*release_function_type )(  ) ;
            
            Ptr_CvHaarClassifierCascade_exposer.def( 
                "release"
                , release_function_type( &::cv::Ptr< CvHaarClassifierCascade >::release ) );
        
        }
        Ptr_CvHaarClassifierCascade_exposer.def("fromCvHaarClassifierCascade", &::from_CvHaarClassifierCascade, (bp::arg("inst_CvHaarClassifierCascade")));
        Ptr_CvHaarClassifierCascade_exposer.staticmethod("fromCvHaarClassifierCascade");
        Ptr_CvHaarClassifierCascade_exposer.add_property("pointee", bp::make_function(&::pointee, bp::return_internal_reference<>()));
    }

}
