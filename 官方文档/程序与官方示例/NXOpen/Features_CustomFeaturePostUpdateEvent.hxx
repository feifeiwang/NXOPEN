#ifndef NXOpen_FEATURES_CUSTOMFEATUREPOSTUPDATEEVENT_HXX_INCLUDED
#define NXOpen_FEATURES_CUSTOMFEATUREPOSTUPDATEEVENT_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Features_CustomFeaturePostUpdateEvent.ja
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
#include <NXOpen/Features_OutputFeatureData.hxx>
#include <NXOpen/Features_CustomFeatureEvent.hxx>
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
        class CustomFeaturePostUpdateEvent;
    }
    namespace Features
    {
        class CustomFeatureEvent;
    }
    namespace Features
    {
        class Feature;
    }
    namespace Features
    {
        class OutputFeatureData;
    }
    namespace Features
    {
        class _CustomFeaturePostUpdateEventBuilder;
        class CustomFeaturePostUpdateEventImpl;
        /** JA interface for the CustomFeaturePostUpdateEvent object  <br> This calls cannot be created  <br> 
         <br>  Created in NX11.0.0.  <br>  
        */
        class NXOPENCPP_FEATURESEXPORT  CustomFeaturePostUpdateEvent : public NXOpen::Features::CustomFeatureEvent
        {
            private: CustomFeaturePostUpdateEventImpl * m_customfeaturepostupdateevent_impl;
            private: friend class  _CustomFeaturePostUpdateEventBuilder;
            protected: CustomFeaturePostUpdateEvent();
            public: ~CustomFeaturePostUpdateEvent();
            /** The output features created in post update event
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void SetOutputFeatures
            (
                const std::vector<NXOpen::Features::OutputFeatureData *> & outputFeatureData /** Input array of NXOpen Features*/
            );
            /** Create output feature data @return  The object of OutputFeatureData
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: NXOpen::Features::OutputFeatureData * CreateOutputFeatureData
            (
                NXOpen::Features::Feature * feature /** The feature for which the data object is to be created*/
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
