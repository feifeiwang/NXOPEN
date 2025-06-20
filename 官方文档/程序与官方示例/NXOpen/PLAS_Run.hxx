#ifndef NXOpen_PLAS_RUN_HXX_INCLUDED
#define NXOpen_PLAS_RUN_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     PLAS_Run.ja
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
#include <NXOpen/PDM_ElementGroup.hxx>
#include <NXOpen/PDM_ElementGroup.hxx>
#include <NXOpen/PDM_OrderedElementGroup.hxx>
#include <NXOpen/libnxopencpp_plas_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace PLAS
    {
        class Run;
    }
    namespace PDM
    {
        class ElementGroup;
    }
    namespace PDM
    {
        class OrderedElementGroup;
    }
    namespace PLAS
    {
        class _RunBuilder;
        class RunImpl;

        /// \cond NX_NO_DOC 
        /** Represents the Run class.  <br> To create or edit an instance of this class, use @link NXOpen::PLAS::RunBuilder  NXOpen::PLAS::RunBuilder @endlink  <br> 
         <br>  Created in NX11.0.1.  <br>  
        */
        class NXOPENCPP_PLASEXPORT  Run : public NXOpen::PDM::ElementGroup
        {
            private: RunImpl * m_run_impl;
            private: friend class  _RunBuilder;
            protected: Run();
            public: ~Run();
            /** Moves branch from one run to another. the original branch will be destroyed  @return  
             <br>  Created in NX11.0.1.  <br>  
             <br> License requirements : None */
            public: NXOpen::PDM::OrderedElementGroup * ReparentBranch
            (
                NXOpen::PLAS::Run * destinationRun /** destinationrun */ ,
                NXOpen::PDM::OrderedElementGroup * oldbranch /** oldbranch */ 
            );
        };

        /// \endcond 
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
