#ifndef NXOpen_CAE_FLUIDDOMAINRECIPE_HXX_INCLUDED
#define NXOpen_CAE_FLUIDDOMAINRECIPE_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_FluidDomainRecipe.ja
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
        class FluidDomainRecipe;
    }
    namespace CAE
    {
        class CAEBody;
    }
    namespace CAE
    {
        class CfdAutoRefinementConstraint;
    }
    namespace CAE
    {
        class CfdContactPreventionConstraint;
    }
    namespace CAE
    {
        class CfdLocalResolutionConstraint;
    }
    class NXObject;
    namespace CAE
    {
        class _FluidDomainRecipeBuilder;
        class FluidDomainRecipeImpl;
        /**  @brief  Represents a FluidDomainRecipe  

           <br> To create or edit an instance of this class, use @link NXOpen::CAE::FluidDomainBuilder  NXOpen::CAE::FluidDomainBuilder @endlink  <br> 
         <br>  Created in NX8.0.0.  <br>  
        */
        class NXOPENCPP_CAEEXPORT  FluidDomainRecipe : public NXOpen::NXObject
        {
            private: FluidDomainRecipeImpl * m_fluiddomainrecipe_impl;
            private: friend class  _FluidDomainRecipeBuilder;
            protected: FluidDomainRecipe();
            public: ~FluidDomainRecipe();
            /** Sets the name of the fluid domain recipe
                    
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_adv_fluid_mod ("NX Advanced Fluid Modeling") */
            public: void SetName
            (
                const NXString & name /** name */ 
            );
            /** Sets the name of the fluid domain recipe
                    
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_adv_fluid_mod ("NX Advanced Fluid Modeling") */
            void SetName
            (
                const char * name /** name */ 
            );
            /** Gets the name of the fluid domain recipe  @return  
             <br>  Created in NX8.0.0.  <br>  
             <br> License requirements : nx_adv_fluid_mod ("NX Advanced Fluid Modeling") */
            public: NXString GetName
            (
            );
            /** Adds a @link NXOpen::CAE::CfdLocalResolutionConstraint NXOpen::CAE::CfdLocalResolutionConstraint@endlink  constraint
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : nx_adv_fluid_mod ("NX Advanced Fluid Modeling") */
            public: void AddLocalResolutionConstraint
            (
                NXOpen::CAE::CfdLocalResolutionConstraint * localResolutionConstraint /** localresolutionconstraint */ 
            );
            /** Removes a @link NXOpen::CAE::CfdLocalResolutionConstraint NXOpen::CAE::CfdLocalResolutionConstraint@endlink  constraint
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : nx_adv_fluid_mod ("NX Advanced Fluid Modeling") */
            public: void RemoveLocalResolutionConstraint
            (
                NXOpen::CAE::CfdLocalResolutionConstraint * localResolutionConstraint /** localresolutionconstraint */ 
            );
            /** Adds a @link NXOpen::CAE::CfdContactPreventionConstraint NXOpen::CAE::CfdContactPreventionConstraint@endlink  constraint
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : nx_adv_fluid_mod ("NX Advanced Fluid Modeling") */
            public: void AddContactPreventionConstraint
            (
                NXOpen::CAE::CfdContactPreventionConstraint * contactPreventionConstraint /** contactpreventionconstraint */ 
            );
            /** Removes a @link NXOpen::CAE::CfdContactPreventionConstraint NXOpen::CAE::CfdContactPreventionConstraint@endlink  constraint
             <br>  Created in NX9.0.0.  <br>  
             <br> License requirements : nx_adv_fluid_mod ("NX Advanced Fluid Modeling") */
            public: void RemoveContactPreventionConstraint
            (
                NXOpen::CAE::CfdContactPreventionConstraint * contactPreventionConstraint /** contactpreventionconstraint */ 
            );
            /** Adds a @link NXOpen::CAE::CfdAutoRefinementConstraint NXOpen::CAE::CfdAutoRefinementConstraint@endlink  constraint
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : nx_adv_fluid_mod ("NX Advanced Fluid Modeling") */
            public: void AddAutoRefinementConstraint
            (
                NXOpen::CAE::CfdAutoRefinementConstraint * autoRefinementConstraint /** The constraint to be added to the recipe */
            );
            /** Removes a @link NXOpen::CAE::CfdAutoRefinementConstraint NXOpen::CAE::CfdAutoRefinementConstraint@endlink  constraint
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : nx_adv_fluid_mod ("NX Advanced Fluid Modeling") */
            public: void RemoveAutoRefinementConstraint
            (
                NXOpen::CAE::CfdAutoRefinementConstraint * autoRefinementConstraint /** The constraint to be removed from the recipe */
            );
            /** Gets the fluid body associated with the fluid domain recipe  @return  
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : nx_adv_fluid_mod ("NX Advanced Fluid Modeling") */
            public: NXOpen::CAE::CAEBody * GetFluidBody
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
