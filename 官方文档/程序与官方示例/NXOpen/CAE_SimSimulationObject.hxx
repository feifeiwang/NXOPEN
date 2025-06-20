#ifndef NXOpen_CAE_SIMSIMULATIONOBJECT_HXX_INCLUDED
#define NXOpen_CAE_SIMSIMULATIONOBJECT_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     CAE_SimSimulationObject.ja
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
#include <NXOpen/CAE_IAncillaryDisplayableEntity.hxx>
#include <NXOpen/CAE_SimBC.hxx>
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
        class SimSimulationObject;
    }
    namespace CAE
    {
        class IAncillaryDisplayableEntity;
    }
    namespace CAE
    {
        class SimBC;
    }
    namespace CAE
    {
        class _SimSimulationObjectBuilder;
        class SimSimulationObjectImpl;
        /** Represents a simulation object

                For more information, refer to the Solver language documentation 
                in the <a href="../opencae/Solvers.html"> Solver language documentation </a>.

             <br> To create a new instance of this class, use @link NXOpen::CAE::SimSimulationObjectCollection::CreateSimulationObject  NXOpen::CAE::SimSimulationObjectCollection::CreateSimulationObject @endlink  <br> 
         <br>  Created in NX4.0.0.  <br>  
        */
        class NXOPENCPP_CAEEXPORT  SimSimulationObject : public NXOpen::CAE::SimBC, public virtual NXOpen::CAE::IAncillaryDisplayableEntity
        {
            private: SimSimulationObjectImpl * m_simsimulationobject_impl;
            private: friend class  _SimSimulationObjectBuilder;
            protected: SimSimulationObject();
            public: ~SimSimulationObject();
            /** Calls the ancillary Display for this entity. 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : None */
            public: virtual void AncillaryDisplay
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
