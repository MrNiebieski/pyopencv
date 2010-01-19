// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "opencv_extra.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "cascadeclassifier.pypp.hpp"

namespace bp = boost::python;

static boost::python::object detectMultiScale_4883d9b6ffcbae071fd606555194ef27( ::cv::CascadeClassifier & inst, ::cv::Mat const & image, double scaleFactor=1.10000000000000008881784197001252323389053344727e+0, int minNeighbors=3, int flags=0, ::cv::Size minSize=cv::Size_<int>() ){
    bp::tuple objects2;
    std::vector<cv::Rect_<int>, std::allocator<cv::Rect_<int> > > objects3;
    inst.detectMultiScale(image, objects3, scaleFactor, minNeighbors, flags, minSize);
    objects2 = convert_vector_to_seq(objects3);
    return bp::object( objects2 );
}

void register_CascadeClassifier_class(){

    { //::cv::CascadeClassifier
        typedef bp::class_< cv::CascadeClassifier > CascadeClassifier_exposer_t;
        CascadeClassifier_exposer_t CascadeClassifier_exposer = CascadeClassifier_exposer_t( "CascadeClassifier", bp::init< >() );
        bp::scope CascadeClassifier_scope( CascadeClassifier_exposer );
        CascadeClassifier_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::CascadeClassifier >() );
        bp::scope().attr("BOOST") = (int)cv::CascadeClassifier::BOOST;
        bp::scope().attr("DO_CANNY_PRUNING") = (int)cv::CascadeClassifier::DO_CANNY_PRUNING;
        bp::scope().attr("SCALE_IMAGE") = (int)cv::CascadeClassifier::SCALE_IMAGE;
        bp::scope().attr("FIND_BIGGEST_OBJECT") = (int)cv::CascadeClassifier::FIND_BIGGEST_OBJECT;
        bp::scope().attr("DO_ROUGH_SEARCH") = (int)cv::CascadeClassifier::DO_ROUGH_SEARCH;
        bp::class_< cv::CascadeClassifier::DTree >( "DTree" )    
            .add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::CascadeClassifier::DTree >() )    
            .def_readwrite( "nodeCount", &cv::CascadeClassifier::DTree::nodeCount );
        bp::class_< cv::CascadeClassifier::DTreeNode >( "DTreeNode" )    
            .add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::CascadeClassifier::DTreeNode >() )    
            .def_readwrite( "featureIdx", &cv::CascadeClassifier::DTreeNode::featureIdx )    
            .def_readwrite( "left", &cv::CascadeClassifier::DTreeNode::left )    
            .def_readwrite( "right", &cv::CascadeClassifier::DTreeNode::right )    
            .def_readwrite( "threshold", &cv::CascadeClassifier::DTreeNode::threshold );
        bp::class_< cv::CascadeClassifier::Stage >( "Stage" )    
            .add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::CascadeClassifier::Stage >() )    
            .def_readwrite( "first", &cv::CascadeClassifier::Stage::first )    
            .def_readwrite( "ntrees", &cv::CascadeClassifier::Stage::ntrees )    
            .def_readwrite( "threshold", &cv::CascadeClassifier::Stage::threshold );
        CascadeClassifier_exposer.def( bp::init< std::string const & >(( bp::arg("filename") )) );
        bp::implicitly_convertible< std::string const &, cv::CascadeClassifier >();
        { //::cv::CascadeClassifier::detectMultiScale
        
            typedef boost::python::object ( *detectMultiScale_function_type )( ::cv::CascadeClassifier &,::cv::Mat const &,double,int,int,::cv::Size );
            
            CascadeClassifier_exposer.def( 
                "detectMultiScale"
                , detectMultiScale_function_type( &detectMultiScale_4883d9b6ffcbae071fd606555194ef27 )
                , ( bp::arg("inst"), bp::arg("image"), bp::arg("scaleFactor")=1.10000000000000008881784197001252323389053344727e+0, bp::arg("minNeighbors")=(int)(3), bp::arg("flags")=(int)(0), bp::arg("minSize")=cv::Size_<int>() ) );
        
        }
        { //::cv::CascadeClassifier::empty
        
            typedef bool ( ::cv::CascadeClassifier::*empty_function_type )(  ) const;
            
            CascadeClassifier_exposer.def( 
                "empty"
                , empty_function_type( &::cv::CascadeClassifier::empty ) );
        
        }
        { //::cv::CascadeClassifier::load
        
            typedef bool ( ::cv::CascadeClassifier::*load_function_type )( ::std::string const & ) ;
            
            CascadeClassifier_exposer.def( 
                "load"
                , load_function_type( &::cv::CascadeClassifier::load )
                , ( bp::arg("filename") ) );
        
        }
        { //::cv::CascadeClassifier::read
        
            typedef bool ( ::cv::CascadeClassifier::*read_function_type )( ::cv::FileNode const & ) ;
            
            CascadeClassifier_exposer.def( 
                "read"
                , read_function_type( &::cv::CascadeClassifier::read )
                , ( bp::arg("node") ) );
        
        }
        { //::cv::CascadeClassifier::runAt
        
            typedef int ( ::cv::CascadeClassifier::*runAt_function_type )( ::cv::Ptr< cv::FeatureEvaluator > &,::cv::Point ) ;
            
            CascadeClassifier_exposer.def( 
                "runAt"
                , runAt_function_type( &::cv::CascadeClassifier::runAt )
                , ( bp::arg("arg0"), bp::arg("arg1") ) );
        
        }
        { //::cv::CascadeClassifier::setImage
        
            typedef bool ( ::cv::CascadeClassifier::*setImage_function_type )( ::cv::Ptr< cv::FeatureEvaluator > &,::cv::Mat const & ) ;
            
            CascadeClassifier_exposer.def( 
                "setImage"
                , setImage_function_type( &::cv::CascadeClassifier::setImage )
                , ( bp::arg("arg0"), bp::arg("arg1") ) );
        
        }
        CascadeClassifier_exposer.def_readwrite( "classifiers", &cv::CascadeClassifier::classifiers );
        CascadeClassifier_exposer.def_readwrite( "featureType", &cv::CascadeClassifier::featureType );
        CascadeClassifier_exposer.def_readwrite( "feval", &cv::CascadeClassifier::feval );
        CascadeClassifier_exposer.def_readwrite( "is_stump_based", &cv::CascadeClassifier::is_stump_based );
        CascadeClassifier_exposer.def_readwrite( "leaves", &cv::CascadeClassifier::leaves );
        CascadeClassifier_exposer.def_readwrite( "ncategories", &cv::CascadeClassifier::ncategories );
        CascadeClassifier_exposer.def_readwrite( "nodes", &cv::CascadeClassifier::nodes );
        CascadeClassifier_exposer.def_readwrite( "oldCascade", &cv::CascadeClassifier::oldCascade );
        CascadeClassifier_exposer.def_readwrite( "origWinSize", &cv::CascadeClassifier::origWinSize );
        CascadeClassifier_exposer.def_readwrite( "stageType", &cv::CascadeClassifier::stageType );
        CascadeClassifier_exposer.def_readwrite( "stages", &cv::CascadeClassifier::stages );
        CascadeClassifier_exposer.def_readwrite( "subsets", &cv::CascadeClassifier::subsets );
    }

}