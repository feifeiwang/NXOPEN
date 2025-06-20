#ifndef NXOpen_FEATURES_CUSTOMINTEGERATTRIBUTE_HXX_INCLUDED
#define NXOpen_FEATURES_CUSTOMINTEGERATTRIBUTE_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Features_CustomIntegerAttribute.ja
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
#include <NXOpen/Features_CustomAttribute.hxx>
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
        class CustomIntegerAttribute;
    }
    namespace Features
    {
        class CustomAttribute;
    }
    namespace Features
    {
    }
    namespace Features
    {
        class CustomIntegerAttributeImpl;
        /**
               Represents a @link Features::CustomIntegerAttribute Features::CustomIntegerAttribute@endlink  class
             <br> An instance of this class can be obtained from @link NXOpen::Features::CustomAttributeCollection::CreateCustomIntegerAttribute NXOpen::Features::CustomAttributeCollection::CreateCustomIntegerAttribute@endlink   <br> 
         <br>  Created in NX11.0.0.  <br>  
        */
        class NXOPENCPP_FEATURESEXPORT  CustomIntegerAttribute : public NXOpen::Features::CustomAttribute
        {
            private: CustomIntegerAttributeImpl * m_customintegerattribute_impl;
            /// \cond NX_NO_DOC 
            public: explicit CustomIntegerAttribute(void *ptr);
            /// \endcond 
            /**Sets  the integer value in the attribute
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void SetValue
            (
                int intValue /** intvalue */ 
            );
            /**Returns  the integer value in the attribute
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: int Value
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
