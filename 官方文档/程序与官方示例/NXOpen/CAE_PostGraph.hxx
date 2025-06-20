#ifndef NXOpen_CAE_POSTGRAPH_HXX_INCLUDED
#define NXOpen_CAE_POSTGRAPH_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_PostGraph.ja
//
//  Generated by:
//     apiwrap
//
//  WARNING:
//    This file is automatically generated - do not edit by hand
//
#ifdef _MSC_VER
#pragma once
#endif

#include <NXOpen/NXDeprecation.hxx>
#include <vector>
#include <NXOpen/NXString.hxx>
#include <NXOpen/Callback.hxx>
#include <NXOpen/CAE_PostGraph.hxx>
#include <NXOpen/CAE_Xyplot_Plot.hxx>
#include <NXOpen/NXObject.hxx>
#include <NXOpen/libnxopencpp_cae_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace CAE
    {
        class PostGraph;
    }
    namespace CAE
    {
        namespace Xyplot
        {
            class Plot;
        }
    }
    class NXObject;
    namespace CAE
    {
        class _PostGraphBuilder;
        class PostGraphImpl;
        /** This class provides interfaces to query graph attributes  <br> An instance of this class can not be obtained  <br> 
         <br>  Created in NX9.0.0.  <br>  
        */
        class NXOPENCPP_CAEEXPORT  PostGraph : public NXOpen::NXObject
        {
            private: PostGraphImpl * m_postgraph_impl;
            private: friend class  _PostGraphBuilder;
            protected: PostGraph();
            public: ~PostGraph();
            /** Plot the graph in as XY plot in given view port  @return  @link NXOpen::CAE::Xyplot::Plot NXOpen::CAE::Xyplot::Plot@endlink  object 
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: NXOpen::CAE::Xyplot::Plot * Plot
            (
                int windowIndex /** window index */,
                int viewIndex /** view index */,
                bool overlay /** overlay option */
            );
            /** List the graph's x and y values on information window 
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: void Listgraphxydata
            (
            );
            /** Copy the graph's records to AFU file 
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: void Copyrecords
            (
                const NXString & filename /** Afu file name with full Path */
            );
            /** Copy the graph's records to AFU file 
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            void Copyrecords
            (
                const char * filename /** Afu file name with full Path */
            );
            /** Edit the @link NXOpen::CAE::PostGraph NXOpen::CAE::PostGraph@endlink  objet parameters 
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: void Editgraph
            (
            );
            /** Information about the each of the graph x-y value pairs 
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : nx_masterfem ("Finite Element Modeling") OR nx_design_sim ("NX Design Simulation") */
            public: void Infoofgraph
            (
            );
        };
    }
}

#ifdef _MSC_VER
#pragma warning(pop)
#endif
#ifdef __GNUC__
#ifndef NX_NO_GCC_DEPRECATION_WARNINGS
#pragma GCC diagnostic warning "-Wdeprecated-declarations"
#endif
#endif

#undef EXPORTLIBRARY
#endif
