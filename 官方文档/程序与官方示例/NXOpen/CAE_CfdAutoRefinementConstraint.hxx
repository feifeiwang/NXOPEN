#ifndef NXOpen_CAE_CFDAUTOREFINEMENTCONSTRAINT_HXX_INCLUDED
#define NXOpen_CAE_CFDAUTOREFINEMENTCONSTRAINT_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_CfdAutoRefinementConstraint.ja
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
        class CfdAutoRefinementConstraint;
    }
    class NXObject;
    namespace CAE
    {
        class _CfdAutoRefinementConstraintBuilder;
        class CfdAutoRefinementConstraintImpl;
        /** The automatic refinement constraint is used by surface wrap recipes  <br> To create or edit an instance of this class, use @link NXOpen::CAE::CfdAutoRefinementConstraintBuilder  NXOpen::CAE::CfdAutoRefinementConstraintBuilder @endlink  <br> 
         <br>  Created in NX11.0.0.  <br>  
        */
        class NXOPENCPP_CAEEXPORT  CfdAutoRefinementConstraint : public NXOpen::NXObject
        {
            private: CfdAutoRefinementConstraintImpl * m_cfdautorefinementconstraint_impl;
            private: friend class  _CfdAutoRefinementConstraintBuilder;
            protected: CfdAutoRefinementConstraint();
            public: ~CfdAutoRefinementConstraint();
            /** Sets the name of the automatic refinement constraint 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : nx_adv_fluid_mod ("NX Advanced Fluid Modeling") */
            public: void SetName
            (
                const NXString & name /** The name of the constraint */
            );
            /** Sets the name of the automatic refinement constraint 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : nx_adv_fluid_mod ("NX Advanced Fluid Modeling") */
            void SetName
            (
                const char * name /** The name of the constraint */
            );
            /** Gets the name of the automatic refinement constraint  @return  The name of the constraint 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : nx_adv_fluid_mod ("NX Advanced Fluid Modeling") */
            public: NXString GetName
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
