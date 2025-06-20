#ifndef NXOpen_FEATURES_CONSTRUCTIONFEATUREDATA_HXX_INCLUDED
#define NXOpen_FEATURES_CONSTRUCTIONFEATUREDATA_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Features_ConstructionFeatureData.ja
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
#include <NXOpen/TransientObject.hxx>
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
        class ConstructionFeatureData;
    }
    namespace Features
    {
        class Feature;
    }
    namespace Features
    {
    }
    namespace Features
    {
        class ConstructionFeatureDataImpl;
        /** JA interface for the ConstructionFeatureData object  <br> An instance of this class can be obtained from @link NXOpen::Features::CustomFeaturePreUpdateEvent::CreateConstructionFeatureData NXOpen::Features::CustomFeaturePreUpdateEvent::CreateConstructionFeatureData@endlink   <br> 
         <br>  Created in NX11.0.0.  <br>  
        */
        class NXOPENCPP_FEATURESEXPORT  ConstructionFeatureData : public NXOpen::TransientObject
        {
            private: ConstructionFeatureDataImpl * m_constructionfeaturedata_impl;
            /// \cond NX_NO_DOC 
            public: explicit ConstructionFeatureData(void *ptr);
            /// \endcond 
            /** Frees the memory associated with this object. After invocation of this method, the object is no longer valid.  
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : None */
            public: virtual ~ConstructionFeatureData();
            /** Get the feature @return  The Construction Feature 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: NXOpen::Features::Feature * GetFeature
            (
            );
            /**Sets  the construction feature visibility in Graphic View
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void SetShowInGraphicView
            (
                bool showInGraphicView /** True if the feature to be visible in Graphic View else false*/
            );
            /**Returns  the construction feature visibility in Graphic View
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: bool ShowInGraphicView
            (
            );
        }; //lint !e1712 default constructor not defined for class  

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
