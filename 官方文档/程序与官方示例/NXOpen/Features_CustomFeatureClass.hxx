#ifndef NXOpen_FEATURES_CUSTOMFEATURECLASS_HXX_INCLUDED
#define NXOpen_FEATURES_CUSTOMFEATURECLASS_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Features_CustomFeatureClass.ja
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
        class CustomFeatureClass;
    }
    namespace Features
    {
        class CustomFeatureCreateFeatureGeometryEvent;
    }
    namespace Features
    {
        class CustomFeatureInformationEvent;
    }
    namespace Features
    {
        class CustomFeatureInternalFeaturePreUpdateEvent;
    }
    namespace Features
    {
        class CustomFeatureModifyFeatureGeometryEvent;
    }
    namespace Features
    {
        class CustomFeaturePostUpdateEvent;
    }
    namespace Features
    {
        class CustomFeaturePreUpdateEvent;
    }
    namespace Features
    {
    }
    namespace Features
    {
        class CustomFeatureClassImpl;
        /** JA interface for CustomFeatureClass  <br> This calls cannot be created  <br> 
         <br>  Created in NX11.0.0.  <br>  
        */
        class NXOPENCPP_FEATURESEXPORT  CustomFeatureClass : public NXOpen::TransientObject
        {
            public: /** Prototype for internal feature pre update callbacks 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            typedef NXOpen::Callback1<int, NXOpen::Features::CustomFeatureInternalFeaturePreUpdateEvent *> InternalFeaturePreUpdateCallback;
            public: /** Prototype for pre update callbacks 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            typedef NXOpen::Callback1<int, NXOpen::Features::CustomFeaturePreUpdateEvent *> PreUpdateCallback;
            public: /** Prototype for create feature geometry callbacks 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            typedef NXOpen::Callback1<int, NXOpen::Features::CustomFeatureCreateFeatureGeometryEvent *> CreateFeatureGeometryCallback;
            public: /** Prototype for modify feature geometry callbacks 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            typedef NXOpen::Callback1<int, NXOpen::Features::CustomFeatureModifyFeatureGeometryEvent *> ModifyFeatureGeometryCallback;
            public: /** Prototype for post update callbacks 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            typedef NXOpen::Callback1<int, NXOpen::Features::CustomFeaturePostUpdateEvent *> PostUpdateCallback;
            public: /** Prototype for information callbacks 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            typedef NXOpen::Callback1<int, NXOpen::Features::CustomFeatureInformationEvent *> InformationCallback;
            private: CustomFeatureClassImpl * m_customfeatureclass_impl;
            /// \cond NX_NO_DOC 
            public: explicit CustomFeatureClass(void *ptr);
            /// \endcond 
            /** Frees the memory associated with this object. After invocation of this method, the object is no longer valid.  
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : None */
            public: virtual ~CustomFeatureClass();
            /** Registers the internal feature pre update callback. 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void AddInternalFeaturePreUpdateHandler
            (
                const NXOpen::Features::CustomFeatureClass::InternalFeaturePreUpdateCallback&  internalFeaturePreUpdateCallback /** internalfeaturepreupdatecallback */ 
            );
            /** Registers the custom feature pre update callback. 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void AddPreUpdateHandler
            (
                const NXOpen::Features::CustomFeatureClass::PreUpdateCallback&  preUpdateCallback /** preupdatecallback */ 
            );
            /** Registers the custom feature create feature geometry callback. 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void AddCreateFeatureGeometryHandler
            (
                const NXOpen::Features::CustomFeatureClass::CreateFeatureGeometryCallback&  createFeatureGeometryCallback /** createfeaturegeometrycallback */ 
            );
            /** Registers the custom feature modify feature geometry callback. 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void AddModifyFeatureGeometryHandler
            (
                const NXOpen::Features::CustomFeatureClass::ModifyFeatureGeometryCallback&  modifyFeatureGeometryCallback /** modifyfeaturegeometrycallback */ 
            );
            /** Registers the custom feature post update callback. 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void AddPostUpdateHandler
            (
                const NXOpen::Features::CustomFeatureClass::PostUpdateCallback&  postUpdateCallback /** postupdatecallback */ 
            );
            /** Registers the custom feature information callback. 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void AddInformationHandler
            (
                const NXOpen::Features::CustomFeatureClass::InformationCallback&  informationCallback /** informationcallback */ 
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
