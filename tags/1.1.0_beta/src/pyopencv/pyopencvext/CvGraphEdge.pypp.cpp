// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "boost/python/object.hpp"
#include "boost/python/list.hpp"
#include "boost/python/tuple.hpp"
#include "CvGraphEdge.pypp.hpp"

namespace bp = boost::python;

struct CvGraphEdge_wrapper : CvGraphEdge, bp::wrapper< CvGraphEdge > {

    CvGraphEdge_wrapper(CvGraphEdge const & arg )
    : CvGraphEdge( arg )
      , bp::wrapper< CvGraphEdge >(){
        // copy constructor
        
    }

    CvGraphEdge_wrapper()
    : CvGraphEdge()
      , bp::wrapper< CvGraphEdge >(){
        // null constructor
        
    }

    static bp::object get_next( ::CvGraphEdge const & inst ){
        bp::list l;
        for(int i = 0; i < 2; ++i)
            l.append(inst.next[i]);
        return bp::tuple(l);
    }

    static bp::object get_vtx( ::CvGraphEdge const & inst ){
        bp::list l;
        for(int i = 0; i < 2; ++i)
            l.append(inst.vtx[i]);
        return bp::tuple(l);
    }

};

void register_CvGraphEdge_class(){

    bp::class_< CvGraphEdge_wrapper >( "CvGraphEdge" )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvGraphEdge >() )    
        .def_readwrite( "flags", &CvGraphEdge::flags )    
        .def_readwrite( "weight", &CvGraphEdge::weight )    
        .add_property( "next", bp::make_function(&::CvGraphEdge_wrapper::get_next) )    
        .add_property( "vtx", bp::make_function(&::CvGraphEdge_wrapper::get_vtx) );

}