#ifndef NXOpen_FEATURES_CUSTOMATTRIBUTE_HXX_INCLUDED
#define NXOpen_FEATURES_CUSTOMATTRIBUTE_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     Features_CustomAttribute.ja
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
        class CustomAttribute;
    }
    namespace Features
    {
    }
    namespace Features
    {
        class CustomAttributeImpl;
        /**
               Represents a @link Features::CustomAttribute Features::CustomAttribute@endlink  class
             <br> This is an abstract base class of all the types of attributes.  <br> 
         <br>  Created in NX11.0.0.  <br>  
        */
        class NXOPENCPP_FEATURESEXPORT  CustomAttribute : public NXOpen::TransientObject
        {
            /** Specifies custom attribute type. */
            public: enum Type
            {
                TypeUnknown/** Invalid or unknown. */,
                TypeExpression/** Expression. */,
                TypeExpressionVla/** Expression variable length array. */,
                TypeTag/** Reference. */,
                TypeTagVla/** Reference variable length array. */,
                TypeBool/** Bool. */,
                TypeBoolVla/** Bool variable length array. */,
                TypeInteger/** Integer. */,
                TypeIntegerVla/** Integer variable length array. */,
                TypeDouble/** Double. */,
                TypeDoubleVla/** Double variable length array. */,
                TypeString/** String. */,
                TypeStringVla/** String variable length array. */
            };

            /** Specifies custom attribute type. */
            public: enum Property
            {
                PropertyIsOutputAttribute = 1/** Output Attribute */,
                PropertyIsOwnedAttribute/** Owned Attribute */,
                PropertyIsReferencingTargetBody = 4/** Attribute Referencing to target body */,
                PropertyMandatoryInput = 8/** mandatory input */ 
            };

            private: CustomAttributeImpl * m_customattribute_impl;
            /// \cond NX_NO_DOC 
            public: explicit CustomAttribute(void *ptr);
            /// \endcond 
            /** Frees the memory associated with this object. After invocation of this method, the object is no longer valid.  
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : None */
            public: virtual ~CustomAttribute();
            /**Returns  the custom attribute name 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: NXString Name
            (
            );
            /**Sets  the custom attribute name 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void SetName
            (
                const NXString & attributeName /** attributename */ 
            );
            /**Sets  the custom attribute name 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            void SetName
            (
                const char * attributeName /** attributename */ 
            );
            /** The custom attribute add property 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void AddProperty
            (
                NXOpen::Features::CustomAttribute::Property attributeProperty /** attributeproperty */ 
            );
            /** The custom attribute remove property 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: void RemoveProperty
            (
                NXOpen::Features::CustomAttribute::Property attributeProperty /** attributeproperty */ 
            );
            /** The custom attribute does property exist on attribute  @return  
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: bool HasProperty
            (
                NXOpen::Features::CustomAttribute::Property attributeProperty /** attributeproperty */ 
            );
            /** The custom attribute get all properties  @return  
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: std::vector<NXOpen::Features::CustomAttribute::Property> GetProperties
            (
            );
            /**Returns  the custom attribute type value 
             <br>  Created in NX11.0.0.  <br>  
             <br> License requirements : solid_modeling ("SOLIDS MODELING") */
            public: NXOpen::Features::CustomAttribute::Type TypeValue
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
