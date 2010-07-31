// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__call_policies.pypp.hpp"
#include "__convenience.pypp.hpp"
#include "opencv_converters.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "cvaux_wrapper.hpp"
#include "opencv_headers.hpp"
#include "boost/python/object.hpp"
#include "cvaux_ext_classes_1.pypp.hpp"

namespace bp = boost::python;

static inline void vector_Octree_Node_resize(::std::vector< cv::Octree::Node > &inst, size_t num) { inst.resize(num); }

static inline void vector_FernClassifier_Feature_resize(::std::vector< cv::FernClassifier::Feature > &inst, size_t num) { inst.resize(num); }

static inline void vector_CvFuzzyRule_Ptr_resize(::std::vector< CvFuzzyRule* > &inst, size_t num) { inst.resize(num); }

static inline void vector_CvFuzzyCurve_resize(::std::vector< CvFuzzyCurve > &inst, size_t num) { inst.resize(num); }

struct CvVSModule_wrapper : CvVSModule, bp::wrapper< CvVSModule > {

    CvVSModule_wrapper( )
    : CvVSModule( )
      , bp::wrapper< CvVSModule >(){
        // null constructor
    
    }

    virtual void LoadState( ::CvFileStorage * arg0, ::CvFileNode * arg1 ) {
        namespace bpl = boost::python;
        if( bpl::override func_LoadState = this->get_override( "LoadState" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_LoadState.ptr(), arg0, arg1 );
        }
        else{
            CvVSModule::LoadState( boost::python::ptr(arg0), boost::python::ptr(arg1) );
        }
    }
    
    static void default_LoadState( ::CvVSModule & inst, ::cv::FileStorage & arg0, ::cv::FileNode & arg1 ){
        if( dynamic_cast< CvVSModule_wrapper * >( boost::addressof( inst ) ) ){
            inst.::CvVSModule::LoadState(arg0.fs, *(arg1));
        }
        else{
            inst.LoadState(arg0.fs, *(arg1));
        }
    }

    virtual void ParamUpdate(  ) {
        if( bp::override func_ParamUpdate = this->get_override( "ParamUpdate" ) )
            func_ParamUpdate(  );
        else{
            this->CvVSModule::ParamUpdate(  );
        }
    }
    
    void default_ParamUpdate(  ) {
        CvVSModule::ParamUpdate( );
    }

    virtual void Release(  ){
        bp::override func_Release = this->get_override( "Release" );
        func_Release(  );
    }

    virtual void SaveState( ::CvFileStorage * arg0 ) {
        namespace bpl = boost::python;
        if( bpl::override func_SaveState = this->get_override( "SaveState" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_SaveState.ptr(), arg0 );
        }
        else{
            CvVSModule::SaveState( boost::python::ptr(arg0) );
        }
    }
    
    static void default_SaveState( ::CvVSModule & inst, ::cv::FileStorage & arg0 ){
        if( dynamic_cast< CvVSModule_wrapper * >( boost::addressof( inst ) ) ){
            inst.::CvVSModule::SaveState(arg0.fs);
        }
        else{
            inst.SaveState(arg0.fs);
        }
    }

};

inline bp::str CvVSModule_GetModuleName(CvVSModule &inst) {  return bp::str(inst.GetModuleName()); }

struct CvBlobDetector_wrapper : CvBlobDetector, bp::wrapper< CvBlobDetector > {

    CvBlobDetector_wrapper( )
    : CvBlobDetector( )
      , bp::wrapper< CvBlobDetector >(){
        // null constructor
    
    }

    virtual int DetectNewBlob( ::IplImage * pImg, ::IplImage * pImgFG, ::CvBlobSeq * pNewBlobList, ::CvBlobSeq * pOldBlobList ) {
        namespace bpl = boost::python;
        if( bpl::override func_DetectNewBlob = this->get_override( "DetectNewBlob" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_DetectNewBlob.ptr(), pImg, pImgFG, pNewBlobList, pOldBlobList );
            return bpl::extract< int >( pyplus_conv::get_out_argument( py_result, 0 ) );
        }
        else{
              PyErr_SetString(PyExc_NotImplementedError, "Attempted calling Pure Virtual function that is not implemented :DetectNewBlob");
              boost::python::throw_error_already_set();
        }
    }
    
    static boost::python::object default_DetectNewBlob( ::CvBlobDetector & inst, ::cv::Mat & pImg, ::cv::Mat & pImgFG, ::CvBlobSeq * pNewBlobList, ::CvBlobSeq * pOldBlobList ){
        int result;
        if( dynamic_cast< CvBlobDetector_wrapper * >( boost::addressof( inst ) ) ){
              PyErr_SetString(PyExc_NotImplementedError, "Attempted calling Pure Virtual function that is not implemented :DetectNewBlob");
              boost::python::throw_error_already_set();
        }
        else{
            result = inst.DetectNewBlob(get_IplImage_ptr(pImg), get_IplImage_ptr(pImgFG), pNewBlobList, pOldBlobList);
        }
        return bp::object( result );
    }

    virtual void Release(  ){
        bp::override func_Release = this->get_override( "Release" );
        func_Release(  );
    }

    virtual void LoadState( ::CvFileStorage * arg0, ::CvFileNode * arg1 ) {
        namespace bpl = boost::python;
        if( bpl::override func_LoadState = this->get_override( "LoadState" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_LoadState.ptr(), arg0, arg1 );
        }
        else{
            CvVSModule::LoadState( boost::python::ptr(arg0), boost::python::ptr(arg1) );
        }
    }
    
    static void default_LoadState( ::CvVSModule & inst, ::cv::FileStorage & arg0, ::cv::FileNode & arg1 ){
        if( dynamic_cast< CvBlobDetector_wrapper * >( boost::addressof( inst ) ) ){
            inst.::CvVSModule::LoadState(arg0.fs, *(arg1));
        }
        else{
            inst.LoadState(arg0.fs, *(arg1));
        }
    }

    virtual void ParamUpdate(  ) {
        if( bp::override func_ParamUpdate = this->get_override( "ParamUpdate" ) )
            func_ParamUpdate(  );
        else{
            this->CvVSModule::ParamUpdate(  );
        }
    }
    
    void default_ParamUpdate(  ) {
        CvVSModule::ParamUpdate( );
    }

    virtual void SaveState( ::CvFileStorage * arg0 ) {
        namespace bpl = boost::python;
        if( bpl::override func_SaveState = this->get_override( "SaveState" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_SaveState.ptr(), arg0 );
        }
        else{
            CvVSModule::SaveState( boost::python::ptr(arg0) );
        }
    }
    
    static void default_SaveState( ::CvVSModule & inst, ::cv::FileStorage & arg0 ){
        if( dynamic_cast< CvBlobDetector_wrapper * >( boost::addressof( inst ) ) ){
            inst.::CvVSModule::SaveState(arg0.fs);
        }
        else{
            inst.SaveState(arg0.fs);
        }
    }

};

struct CvBlobSeq_wrapper : CvBlobSeq, bp::wrapper< CvBlobSeq > {

    CvBlobSeq_wrapper(CvBlobSeq const & arg )
    : CvBlobSeq( arg )
      , bp::wrapper< CvBlobSeq >(){
        // copy constructor
        
    }

    CvBlobSeq_wrapper(int BlobSize=20u )
    : CvBlobSeq( BlobSize )
      , bp::wrapper< CvBlobSeq >(){
        // constructor
    
    }

    virtual void AddBlob( ::CvBlob * pB ) {
        if( bp::override func_AddBlob = this->get_override( "AddBlob" ) )
            func_AddBlob( boost::python::ptr(pB) );
        else{
            this->CvBlobSeq::AddBlob( boost::python::ptr(pB) );
        }
    }
    
    void default_AddBlob( ::CvBlob * pB ) {
        CvBlobSeq::AddBlob( boost::python::ptr(pB) );
    }

    virtual void Clear(  ) {
        if( bp::override func_Clear = this->get_override( "Clear" ) )
            func_Clear(  );
        else{
            this->CvBlobSeq::Clear(  );
        }
    }
    
    void default_Clear(  ) {
        CvBlobSeq::Clear( );
    }

    virtual void DelBlob( int BlobIndex ) {
        if( bp::override func_DelBlob = this->get_override( "DelBlob" ) )
            func_DelBlob( BlobIndex );
        else{
            this->CvBlobSeq::DelBlob( BlobIndex );
        }
    }
    
    void default_DelBlob( int BlobIndex ) {
        CvBlobSeq::DelBlob( BlobIndex );
    }

    virtual void DelBlobByID( int BlobID ) {
        if( bp::override func_DelBlobByID = this->get_override( "DelBlobByID" ) )
            func_DelBlobByID( BlobID );
        else{
            this->CvBlobSeq::DelBlobByID( BlobID );
        }
    }
    
    void default_DelBlobByID( int BlobID ) {
        CvBlobSeq::DelBlobByID( BlobID );
    }

    virtual ::CvBlob * GetBlob( int BlobIndex ) {
        if( bp::override func_GetBlob = this->get_override( "GetBlob" ) )
            return func_GetBlob( BlobIndex );
        else{
            return this->CvBlobSeq::GetBlob( BlobIndex );
        }
    }
    
    ::CvBlob * default_GetBlob( int BlobIndex ) {
        return CvBlobSeq::GetBlob( BlobIndex );
    }

    virtual ::CvBlob * GetBlobByID( int BlobID ) {
        if( bp::override func_GetBlobByID = this->get_override( "GetBlobByID" ) )
            return func_GetBlobByID( BlobID );
        else{
            return this->CvBlobSeq::GetBlobByID( BlobID );
        }
    }
    
    ::CvBlob * default_GetBlobByID( int BlobID ) {
        return CvBlobSeq::GetBlobByID( BlobID );
    }

    virtual int GetBlobNum(  ) {
        if( bp::override func_GetBlobNum = this->get_override( "GetBlobNum" ) )
            return func_GetBlobNum(  );
        else{
            return this->CvBlobSeq::GetBlobNum(  );
        }
    }
    
    int default_GetBlobNum(  ) {
        return CvBlobSeq::GetBlobNum( );
    }

    virtual void Load( ::CvFileStorage * fs, ::CvFileNode * node ) {
        namespace bpl = boost::python;
        if( bpl::override func_Load = this->get_override( "Load" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_Load.ptr(), fs, node );
        }
        else{
            CvBlobSeq::Load( boost::python::ptr(fs), boost::python::ptr(node) );
        }
    }
    
    static void default_Load( ::CvBlobSeq & inst, ::cv::FileStorage & fs, ::cv::FileNode & node ){
        if( dynamic_cast< CvBlobSeq_wrapper * >( boost::addressof( inst ) ) ){
            inst.::CvBlobSeq::Load(fs.fs, *(node));
        }
        else{
            inst.Load(fs.fs, *(node));
        }
    }

    virtual void Write( ::CvFileStorage * fs, char const * name ) {
        namespace bpl = boost::python;
        if( bpl::override func_Write = this->get_override( "Write" ) ){
            bpl::object py_result = bpl::call<bpl::object>( func_Write.ptr(), fs, name );
        }
        else{
            CvBlobSeq::Write( boost::python::ptr(fs), name );
        }
    }
    
    static void default_Write( ::CvBlobSeq & inst, ::cv::FileStorage & fs, char const * name ){
        if( dynamic_cast< CvBlobSeq_wrapper * >( boost::addressof( inst ) ) ){
            inst.::CvBlobSeq::Write(fs.fs, name);
        }
        else{
            inst.Write(fs.fs, name);
        }
    }

};

static CvBlobSeq * get_CvBlobTrack_pBlobSeq( CvBlobTrack const & inst ) { return inst.pBlobSeq; }

void register_classes_1(){

    { //::std::vector< cv::Octree::Node >
        typedef bp::class_< std::vector< cv::Octree::Node > > vector_Octree_Node_exposer_t;
        vector_Octree_Node_exposer_t vector_Octree_Node_exposer = vector_Octree_Node_exposer_t( "vector_Octree_Node" );
        bp::scope vector_Octree_Node_scope( vector_Octree_Node_exposer );
        //WARNING: the next line of code will not compile, because "cv::Octree::Node" does not have operator== !
        vector_Octree_Node_exposer.def( bp::vector_indexing_suite< ::std::vector< cv::Octree::Node > >() );
        vector_Octree_Node_exposer.def("resize", &::vector_Octree_Node_resize, ( bp::arg("num") ));
    }

    { //::std::vector< cv::FernClassifier::Feature >
        typedef bp::class_< std::vector< cv::FernClassifier::Feature > > vector_FernClassifier_Feature_exposer_t;
        vector_FernClassifier_Feature_exposer_t vector_FernClassifier_Feature_exposer = vector_FernClassifier_Feature_exposer_t( "vector_FernClassifier_Feature" );
        bp::scope vector_FernClassifier_Feature_scope( vector_FernClassifier_Feature_exposer );
        //WARNING: the next line of code will not compile, because "cv::FernClassifier::Feature" does not have operator== !
        vector_FernClassifier_Feature_exposer.def( bp::vector_indexing_suite< ::std::vector< cv::FernClassifier::Feature > >() );
        vector_FernClassifier_Feature_exposer.def("resize", &::vector_FernClassifier_Feature_resize, ( bp::arg("num") ));
    }

    { //::std::vector< CvFuzzyRule* >
        typedef bp::class_< std::vector< CvFuzzyRule* > > vector_CvFuzzyRule_Ptr_exposer_t;
        vector_CvFuzzyRule_Ptr_exposer_t vector_CvFuzzyRule_Ptr_exposer = vector_CvFuzzyRule_Ptr_exposer_t( "vector_CvFuzzyRule_Ptr" );
        bp::scope vector_CvFuzzyRule_Ptr_scope( vector_CvFuzzyRule_Ptr_exposer );
        vector_CvFuzzyRule_Ptr_exposer.def( bp::vector_indexing_suite< ::std::vector< CvFuzzyRule* > >() );
        vector_CvFuzzyRule_Ptr_exposer.def("resize", &::vector_CvFuzzyRule_Ptr_resize, ( bp::arg("num") ));
    }

    { //::std::vector< CvFuzzyCurve >
        typedef bp::class_< std::vector< CvFuzzyCurve > > vector_CvFuzzyCurve_exposer_t;
        vector_CvFuzzyCurve_exposer_t vector_CvFuzzyCurve_exposer = vector_CvFuzzyCurve_exposer_t( "vector_CvFuzzyCurve" );
        bp::scope vector_CvFuzzyCurve_scope( vector_CvFuzzyCurve_exposer );
        //WARNING: the next line of code will not compile, because "CvFuzzyCurve" does not have operator== !
        vector_CvFuzzyCurve_exposer.def( bp::vector_indexing_suite< ::std::vector< CvFuzzyCurve > >() );
        vector_CvFuzzyCurve_exposer.def("resize", &::vector_CvFuzzyCurve_resize, ( bp::arg("num") ));
    }

    bp::class_< CvAdaptiveSkinDetector >( "CvAdaptiveSkinDetector", bp::no_init )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvAdaptiveSkinDetector >() );

    bp::class_< CvBlob >( "CvBlob" )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvBlob >() )    
        .def_readwrite( "ID", &CvBlob::ID )    
        .def_readwrite( "h", &CvBlob::h )    
        .def_readwrite( "w", &CvBlob::w )    
        .def_readwrite( "x", &CvBlob::x )    
        .def_readwrite( "y", &CvBlob::y );

    bp::class_< CvVSModule_wrapper, boost::noncopyable >( "CvVSModule", bp::init< >() )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvVSModule >() )    
        .def( 
            "GetNickName"
            , (char const * ( CvVSModule::* )(  ) )( &::CvVSModule::GetNickName ) )    
        .def( 
            "GetParam"
            , (double ( CvVSModule::* )( char const * ) )( &::CvVSModule::GetParam )
            , ( bp::arg("name") ) )    
        .def( 
            "GetParamComment"
            , (char const * ( CvVSModule::* )( char const * ) )( &::CvVSModule::GetParamComment )
            , ( bp::arg("name") ) )    
        .def( 
            "GetParamName"
            , (char const * ( CvVSModule::* )( int ) )( &::CvVSModule::GetParamName )
            , ( bp::arg("index") ) )    
        .def( 
            "GetParamStr"
            , (char const * ( CvVSModule::* )( char const * ) )( &::CvVSModule::GetParamStr )
            , ( bp::arg("name") ) )    
        .def( 
            "GetTypeName"
            , (char const * ( CvVSModule::* )(  ) )( &::CvVSModule::GetTypeName ) )    
        .def( 
            "IsModuleName"
            , (int ( CvVSModule::* )( char const * ) )( &::CvVSModule::IsModuleName )
            , ( bp::arg("name") ) )    
        .def( 
            "IsModuleTypeName"
            , (int ( CvVSModule::* )( char const * ) )( &::CvVSModule::IsModuleTypeName )
            , ( bp::arg("name") ) )    
        .def( 
            "LoadState"
            , (void (*)( CvVSModule &,::cv::FileStorage &,::cv::FileNode & ))( &CvVSModule_wrapper::default_LoadState )
            , ( bp::arg("inst"), bp::arg("arg0"), bp::arg("arg1") )
            , "\nArgument 'arg0':"\
    "\n    C++ type: ::CvFileStorage *"\
    "\n    Python type: FileStorage"\
    "\nArgument 'arg1':"\
    "\n    C++ type: ::CvFileNode *"\
    "\n    Python type: FileNode" )    
        .def( 
            "ParamUpdate"
            , (void ( CvVSModule::* )(  ) )(&::CvVSModule::ParamUpdate)
            , (void ( CvVSModule_wrapper::* )(  ) )(&CvVSModule_wrapper::default_ParamUpdate) )    
        .def( 
            "Release"
            , bp::pure_virtual( (void ( CvVSModule::* )(  ) )(&::CvVSModule::Release) ) )    
        .def( 
            "SaveState"
            , (void (*)( CvVSModule &,::cv::FileStorage & ))( &CvVSModule_wrapper::default_SaveState )
            , ( bp::arg("inst"), bp::arg("arg0") )
            , "\nArgument 'arg0':"\
    "\n    C++ type: ::CvFileStorage *"\
    "\n    Python type: FileStorage" )    
        .def( 
            "SetNickName"
            , (void ( CvVSModule::* )( char const * ) )( &::CvVSModule::SetNickName )
            , ( bp::arg("pStr") ) )    
        .def( 
            "SetParam"
            , (void ( CvVSModule::* )( char const *,double ) )( &::CvVSModule::SetParam )
            , ( bp::arg("name"), bp::arg("val") ) )    
        .def( 
            "SetParamStr"
            , (void ( CvVSModule::* )( char const *,char const * ) )( &::CvVSModule::SetParamStr )
            , ( bp::arg("name"), bp::arg("str") ) )    
        .def( 
            "TransferParamsFromChild"
            , (void ( CvVSModule::* )( ::CvVSModule *,char const * ) )( &::CvVSModule::TransferParamsFromChild )
            , ( bp::arg("pM"), bp::arg("prefix")=bp::object() ) )    
        .def( 
            "TransferParamsToChild"
            , (void ( CvVSModule::* )( ::CvVSModule *,char * ) )( &::CvVSModule::TransferParamsToChild )
            , ( bp::arg("pM"), bp::arg("prefix")=bp::object() ) )    
        .def("GetModuleName", &::CvVSModule_GetModuleName);

    bp::class_< CvBlobDetector_wrapper, bp::bases< CvVSModule >, boost::noncopyable >( "CvBlobDetector", bp::init< >() )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvBlobDetector >() )    
        .def( 
            "DetectNewBlob"
            , (boost::python::object (*)( CvBlobDetector &,::cv::Mat &,::cv::Mat &,CvBlobSeq *,CvBlobSeq * ))( &CvBlobDetector_wrapper::default_DetectNewBlob )
            , ( bp::arg("inst"), bp::arg("pImg"), bp::arg("pImgFG"), bp::arg("pNewBlobList"), bp::arg("pOldBlobList") )
            , "\nArgument 'pImg':"\
    "\n    C++ type: ::IplImage *"\
    "\n    Python type: Mat"\
    "\nArgument 'pImgFG':"\
    "\n    C++ type: ::IplImage *"\
    "\n    Python type: Mat" )    
        .def( 
            "Release"
            , bp::pure_virtual( (void ( CvBlobDetector::* )(  ) )(&::CvBlobDetector::Release) ) )    
        .def( 
            "LoadState"
            , (void (*)( CvVSModule &,::cv::FileStorage &,::cv::FileNode & ))( &CvBlobDetector_wrapper::default_LoadState )
            , ( bp::arg("inst"), bp::arg("arg0"), bp::arg("arg1") )
            , "\nArgument 'arg0':"\
    "\n    C++ type: ::CvFileStorage *"\
    "\n    Python type: FileStorage"\
    "\nArgument 'arg1':"\
    "\n    C++ type: ::CvFileNode *"\
    "\n    Python type: FileNode" )    
        .def( 
            "ParamUpdate"
            , (void ( CvVSModule::* )(  ) )(&::CvVSModule::ParamUpdate)
            , (void ( CvBlobDetector_wrapper::* )(  ) )(&CvBlobDetector_wrapper::default_ParamUpdate) )    
        .def( 
            "SaveState"
            , (void (*)( CvVSModule &,::cv::FileStorage & ))( &CvBlobDetector_wrapper::default_SaveState )
            , ( bp::arg("inst"), bp::arg("arg0") )
            , "\nArgument 'arg0':"\
    "\n    C++ type: ::CvFileStorage *"\
    "\n    Python type: FileStorage" );

    { //::CvBlobSeq
        typedef bp::class_< CvBlobSeq_wrapper > CvBlobSeq_exposer_t;
        CvBlobSeq_exposer_t CvBlobSeq_exposer = CvBlobSeq_exposer_t( "CvBlobSeq", bp::init< bp::optional< int > >(( bp::arg("BlobSize")=(int)(20u) )) );
        bp::scope CvBlobSeq_scope( CvBlobSeq_exposer );
        CvBlobSeq_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< CvBlobSeq >() );
        bp::implicitly_convertible< int, CvBlobSeq >();
        { //::CvBlobSeq::AddBlob
        
            typedef void ( ::CvBlobSeq::*AddBlob_function_type )( ::CvBlob * ) ;
            typedef void ( CvBlobSeq_wrapper::*default_AddBlob_function_type )( ::CvBlob * ) ;
            
            CvBlobSeq_exposer.def( 
                "AddBlob"
                , AddBlob_function_type(&::CvBlobSeq::AddBlob)
                , default_AddBlob_function_type(&CvBlobSeq_wrapper::default_AddBlob)
                , ( bp::arg("pB") ) );
        
        }
        { //::CvBlobSeq::AddFormat
        
            typedef void ( ::CvBlobSeq::*AddFormat_function_type )( char const * ) ;
            
            CvBlobSeq_exposer.def( 
                "AddFormat"
                , AddFormat_function_type( &::CvBlobSeq::AddFormat )
                , ( bp::arg("str") ) );
        
        }
        { //::CvBlobSeq::Clear
        
            typedef void ( ::CvBlobSeq::*Clear_function_type )(  ) ;
            typedef void ( CvBlobSeq_wrapper::*default_Clear_function_type )(  ) ;
            
            CvBlobSeq_exposer.def( 
                "Clear"
                , Clear_function_type(&::CvBlobSeq::Clear)
                , default_Clear_function_type(&CvBlobSeq_wrapper::default_Clear) );
        
        }
        { //::CvBlobSeq::DelBlob
        
            typedef void ( ::CvBlobSeq::*DelBlob_function_type )( int ) ;
            typedef void ( CvBlobSeq_wrapper::*default_DelBlob_function_type )( int ) ;
            
            CvBlobSeq_exposer.def( 
                "DelBlob"
                , DelBlob_function_type(&::CvBlobSeq::DelBlob)
                , default_DelBlob_function_type(&CvBlobSeq_wrapper::default_DelBlob)
                , ( bp::arg("BlobIndex") ) );
        
        }
        { //::CvBlobSeq::DelBlobByID
        
            typedef void ( ::CvBlobSeq::*DelBlobByID_function_type )( int ) ;
            typedef void ( CvBlobSeq_wrapper::*default_DelBlobByID_function_type )( int ) ;
            
            CvBlobSeq_exposer.def( 
                "DelBlobByID"
                , DelBlobByID_function_type(&::CvBlobSeq::DelBlobByID)
                , default_DelBlobByID_function_type(&CvBlobSeq_wrapper::default_DelBlobByID)
                , ( bp::arg("BlobID") ) );
        
        }
        { //::CvBlobSeq::GetBlob
        
            typedef ::CvBlob * ( ::CvBlobSeq::*GetBlob_function_type )( int ) ;
            typedef ::CvBlob * ( CvBlobSeq_wrapper::*default_GetBlob_function_type )( int ) ;
            
            CvBlobSeq_exposer.def( 
                "GetBlob"
                , GetBlob_function_type(&::CvBlobSeq::GetBlob)
                , default_GetBlob_function_type(&CvBlobSeq_wrapper::default_GetBlob)
                , ( bp::arg("BlobIndex") )
                , bp::return_internal_reference< >() );
        
        }
        { //::CvBlobSeq::GetBlobByID
        
            typedef ::CvBlob * ( ::CvBlobSeq::*GetBlobByID_function_type )( int ) ;
            typedef ::CvBlob * ( CvBlobSeq_wrapper::*default_GetBlobByID_function_type )( int ) ;
            
            CvBlobSeq_exposer.def( 
                "GetBlobByID"
                , GetBlobByID_function_type(&::CvBlobSeq::GetBlobByID)
                , default_GetBlobByID_function_type(&CvBlobSeq_wrapper::default_GetBlobByID)
                , ( bp::arg("BlobID") )
                , bp::return_internal_reference< >() );
        
        }
        { //::CvBlobSeq::GetBlobNum
        
            typedef int ( ::CvBlobSeq::*GetBlobNum_function_type )(  ) ;
            typedef int ( CvBlobSeq_wrapper::*default_GetBlobNum_function_type )(  ) ;
            
            CvBlobSeq_exposer.def( 
                "GetBlobNum"
                , GetBlobNum_function_type(&::CvBlobSeq::GetBlobNum)
                , default_GetBlobNum_function_type(&CvBlobSeq_wrapper::default_GetBlobNum) );
        
        }
        { //::CvBlobSeq::Load
        
            typedef void ( *default_Load_function_type )( CvBlobSeq &,::cv::FileStorage &,::cv::FileNode & );
            
            CvBlobSeq_exposer.def( 
                "Load"
                , default_Load_function_type( &CvBlobSeq_wrapper::default_Load )
                , ( bp::arg("inst"), bp::arg("fs"), bp::arg("node") )
                , "\nArgument 'fs':"\
    "\n    C++ type: ::CvFileStorage *"\
    "\n    Python type: FileStorage"\
    "\nArgument 'node':"\
    "\n    C++ type: ::CvFileNode *"\
    "\n    Python type: FileNode" );
        
        }
        { //::CvBlobSeq::Write
        
            typedef void ( *default_Write_function_type )( CvBlobSeq &,::cv::FileStorage &,char const * );
            
            CvBlobSeq_exposer.def( 
                "Write"
                , default_Write_function_type( &CvBlobSeq_wrapper::default_Write )
                , ( bp::arg("inst"), bp::arg("fs"), bp::arg("name") )
                , "\nArgument 'fs':"\
    "\n    C++ type: ::CvFileStorage *"\
    "\n    Python type: FileStorage" );
        
        }
    }

    bp::class_< CvBlobTrack >( "CvBlobTrack" )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< CvBlobTrack >() )    
        .def_readwrite( "StartFrame", &CvBlobTrack::StartFrame )    
        .def_readwrite( "TrackID", &CvBlobTrack::TrackID )    
        .add_property( "pBlobSeq", bp::make_function(&::get_CvBlobTrack_pBlobSeq, bp::return_internal_reference<>()) );

}