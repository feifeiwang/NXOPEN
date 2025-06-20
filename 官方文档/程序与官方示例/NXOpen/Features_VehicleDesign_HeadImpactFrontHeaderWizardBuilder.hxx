#ifndef NXOpen_FEATURES_VEHICLEDESIGN_HEADIMPACTFRONTHEADERWIZARDBUILDER_HXX_INCLUDED
#define NXOpen_FEATURES_VEHICLEDESIGN_HEADIMPACTFRONTHEADERWIZARDBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Features_VehicleDesign_HeadImpactFrontHeaderWizardBuilder.ja
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
#include <NXOpen/Features_VehicleDesign_HeadImpactFrontHeaderWizardBuilder.hxx>
#include <NXOpen/GeometricUtilities_IComponentBuilder.hxx>
#include <NXOpen/TaggedObject.hxx>
#include <NXOpen/ScCollector.hxx>
#include <NXOpen/libnxopencpp_features_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    namespace Features
    {
        namespace VehicleDesign
        {
            class HeadImpactFrontHeaderWizardBuilder;
        }
    }
    namespace GeometricUtilities
    {
        class IComponentBuilder;
    }
    class ScCollector;
    namespace Features
    {
        namespace VehicleDesign
        {
            class _HeadImpactFrontHeaderWizardBuilderBuilder;
            class HeadImpactFrontHeaderWizardBuilderImpl;
            /** Represents a @link NXOpen::Features::VehicleDesign::HeadImpactFrontHeaderWizardBuilder NXOpen::Features::VehicleDesign::HeadImpactFrontHeaderWizardBuilder@endlink .  <br> This is an abstract class and cannot be instantiated.  <br> 
             <br>  Created in NX9.0.0.  <br>  
            */
            class NXOPENCPP_FEATURESEXPORT  HeadImpactFrontHeaderWizardBuilder : public NXOpen::TaggedObject, public virtual NXOpen::GeometricUtilities::IComponentBuilder
            {
                private: HeadImpactFrontHeaderWizardBuilderImpl * m_headimpactfrontheaderwizardbuilder_impl;
                private: friend class  _HeadImpactFrontHeaderWizardBuilderBuilder;
                protected: HeadImpactFrontHeaderWizardBuilder();
                public: ~HeadImpactFrontHeaderWizardBuilder();
                /**Returns  the upper roof interior geometry. 
                 <br>  Created in NX9.0.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::ScCollector * UpperRoofInterior
                (
                );
                /**Returns  the windshield upper edge geometry. 
                 <br>  @deprecated Deprecated in NX11.0.0.  Use @link NXOpen::Features::VehicleDesign::HeadImpactFrontHeaderWizardBuilder::SetInteriorTrim NXOpen::Features::VehicleDesign::HeadImpactFrontHeaderWizardBuilder::SetInteriorTrim@endlink  instead. <br>  

                 <br>  Created in NX9.0.0.  <br>  
                 <br> License requirements : None */
                public:  NX_DEPRECATED("Deprecated in NX11.0.0.  Use NXOpen::Features::VehicleDesign::HeadImpactFrontHeaderWizardBuilder::SetInteriorTrim instead.") NXOpen::ScCollector * WindshieldEdge
                (
                );
                /**Returns  the interior trim geometry. 
                 <br>  Created in NX11.0.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::ScCollector * InteriorTrim
                (
                );
                /**Returns  the sun roof opening geometry. 
                 <br>  Created in NX9.0.0.  <br>  
                 <br> License requirements : None */
                public: NXOpen::ScCollector * SunRoof
                (
                );
                /** Validate whether the inputs to the component are sufficient for 
                            commit to be called.  If the component is not in a state to commit
                            then an exception is thrown.  For example, if the component requires
                            you to set some property, this method will throw an exception if
                            you haven't set it.  This method throws a not-yet-implemented
                            NXException for some components.
                         @return  Was self validation successful 
                 <br>  Created in NX3.0.1.  <br>  
                 <br> License requirements : None */
                public: virtual bool Validate
                (
                );
            };
        }
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
