#ifndef NXOpen_ATTRIBUTEPROPERTIESBUILDER_HXX_INCLUDED
#define NXOpen_ATTRIBUTEPROPERTIESBUILDER_HXX_INCLUDED
//--------------------------------------------------------------------------
//  Header for C++ interface to JA API
//--------------------------------------------------------------------------
//
//  Source File:
//     AttributePropertiesBuilder.ja
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
#include <NXOpen/AttributePropertiesBaseBuilder.hxx>
#include <NXOpen/libnxopencpp_exports.hxx>

#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable:4996)
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

namespace NXOpen
{
    class AttributePropertiesBuilder;
    class AttributePropertiesBaseBuilder;
    class _AttributePropertiesBuilderBuilder;
    class AttributePropertiesBuilderImpl;
    /**
           Represents an @link NXOpen::AttributePropertiesBuilder NXOpen::AttributePropertiesBuilder@endlink . Input to this class can be PSM facet objects.
         <br> To create a new instance of this class, use @link NXOpen::AttributeManager::CreateAttributePropertiesBuilder  NXOpen::AttributeManager::CreateAttributePropertiesBuilder @endlink  <br> 
    Default values.
    <table border="1"> 
     
    <tr><th> 
    Property</th>  <th> 
    Value</th> </tr>
    <tr><td> 
     
    BooleanValue </td> <td> 
     
    False </td> </tr> 

    <tr><td> 
     
    DataType </td> <td> 
     
    String </td> </tr> 

    <tr><td> 
     
    IntegerValue </td> <td> 
     
    0 </td> </tr> 

    <tr><td> 
     
    NumberValue </td> <td> 
     
    0 </td> </tr> 

    <tr><td> 
     
    ObjectPicker (deprecated) </td> <td> 
     
    Object </td> </tr> 

    </table>  

     <br>  Created in NX8.0.0.  <br>  
    */
    class NXOPENCPPEXPORT  AttributePropertiesBuilder : public NXOpen::AttributePropertiesBaseBuilder
    {
        /** Indicates the operation currently being performed. */
        public: enum OperationType
        {
            OperationTypeNone = -1/** none */ ,
            OperationTypeCreate/** create */ ,
            OperationTypeRevise/** revise */ ,
            OperationTypeSaveAs/** save as */ ,
            OperationTypeSave/** save */ ,
            OperationTypeDelete/** delete */ 
        };

        private: AttributePropertiesBuilderImpl * m_attributepropertiesbuilder_impl;
        private: friend class  _AttributePropertiesBuilderBuilder;
        protected: AttributePropertiesBuilder();
        public: ~AttributePropertiesBuilder();
    };
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
